/*
 * XREFs of FsRtlFindInTunnelCache @ 0x14043A2FC
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlCompareNodeAndKey @ 0x140017FCC (FsRtlCompareNodeAndKey.c)
 *     RtlCopyUnicodeString @ 0x140047E40 (RtlCopyUnicodeString.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     FsRtlEmptyFreePoolList @ 0x140105744 (FsRtlEmptyFreePoolList.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     FsRtlPruneTunnelCache @ 0x140520C44 (FsRtlPruneTunnelCache.c)
 */

BOOLEAN __stdcall FsRtlFindInTunnelCache(
        TUNNEL *Cache,
        ULONGLONG DirectoryKey,
        UNICODE_STRING *Name,
        UNICODE_STRING *ShortName,
        UNICODE_STRING *LongName,
        ULONG *DataLength,
        void *Data)
{
  PRTL_SPLAY_LINKS v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned __int8 CurrentIrql; // r14
  PRTL_SPLAY_LINKS v15; // rdi
  LONG v16; // eax
  unsigned __int16 *p_RightChild; // r14
  unsigned __int16 RightChild; // ax
  wchar_t *PoolWithTag; // rax
  unsigned __int16 v20; // cx
  unsigned __int8 OldIrql; // di
  signed __int32 v22; // eax
  BOOLEAN v24; // [rsp+20h] [rbp-48h]
  _QWORD *v25[3]; // [rsp+28h] [rbp-40h] BYREF

  v11 = 0LL;
  v24 = 0;
  if ( !TunnelMaxEntries )
    return 0;
  v25[1] = v25;
  v25[0] = v25;
  v12 = KeAbPreAcquire((ULONG_PTR)Cache, 0LL, 0LL, (__int64)ShortName);
  v13 = v12;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&Cache->Mutex.Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)Cache, v12);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  Cache->Mutex.Owner = KeGetCurrentThread();
  Cache->Mutex.OldIrql = CurrentIrql;
  FsRtlPruneTunnelCache(Cache, v25);
  v15 = Cache->Cache;
  while ( v15 )
  {
    v11 = v15;
    v16 = FsRtlCompareNodeAndKey((__int64)v15, DirectoryKey, Name);
    if ( v16 <= 0 )
    {
      if ( v16 >= 0 )
        break;
      v15 = v15->RightChild;
    }
    else
    {
      v15 = v15->LeftChild;
    }
  }
  if ( v15 )
  {
    RtlCopyUnicodeString(ShortName, (PCUNICODE_STRING)&v11[3].LeftChild);
    p_RightChild = (unsigned __int16 *)&v11[2].RightChild;
    RightChild = (unsigned __int16)v11[2].RightChild;
    if ( LongName->MaximumLength < RightChild )
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag((POOL_TYPE)17, RightChild, 0x346E7554u);
      LongName->Buffer = PoolWithTag;
      v20 = *p_RightChild;
      LongName->MaximumLength = *p_RightChild;
      LongName->Length = v20;
      memmove(PoolWithTag, v11[3].Parent, *p_RightChild);
    }
    else
    {
      RtlCopyUnicodeString(LongName, (PCUNICODE_STRING)&v11[2].RightChild);
    }
    memmove(Data, v11[4].Parent, LODWORD(v11[4].LeftChild));
    *DataLength = (ULONG)v11[4].LeftChild;
    v24 = 1;
  }
  Cache->Mutex.Owner = 0LL;
  OldIrql = Cache->Mutex.OldIrql;
  v22 = _InterlockedCompareExchange(&Cache->Mutex.Count, 1, 0);
  if ( v22 )
    ExpReleaseFastMutexContended(&Cache->Mutex.Count, v22);
  __writecr8(OldIrql);
  KeAbPostRelease((ULONG_PTR)Cache);
  FsRtlEmptyFreePoolList(v25);
  return v24;
}
