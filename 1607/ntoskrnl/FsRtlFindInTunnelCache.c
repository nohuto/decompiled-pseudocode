/*
 * XREFs of FsRtlFindInTunnelCache @ 0x1404E4A10
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     RtlCopyUnicodeString @ 0x14002D8E0 (RtlCopyUnicodeString.c)
 *     FsRtlCompareNodeAndKey @ 0x1400C1DE4 (FsRtlCompareNodeAndKey.c)
 *     FsRtlEmptyFreePoolList @ 0x1400C24D0 (FsRtlEmptyFreePoolList.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     FsRtlPruneTunnelCache @ 0x1404E75FC (FsRtlPruneTunnelCache.c)
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
  BOOLEAN v11; // bl
  PRTL_SPLAY_LINKS v12; // rsi
  PRTL_SPLAY_LINKS v13; // rdi
  LONG v14; // eax
  unsigned __int16 *p_RightChild; // rdi
  unsigned __int16 RightChild; // ax
  wchar_t *PoolWithTag; // rcx
  unsigned __int16 v18; // ax
  _QWORD *v20[7]; // [rsp+20h] [rbp-38h] BYREF

  v11 = 0;
  v12 = 0LL;
  if ( !TunnelMaxEntries )
    return 0;
  v20[1] = v20;
  v20[0] = v20;
  ExAcquireFastMutex(&Cache->Mutex);
  FsRtlPruneTunnelCache(Cache, v20);
  v13 = Cache->Cache;
  while ( v13 )
  {
    v12 = v13;
    v14 = FsRtlCompareNodeAndKey((__int64)v13, DirectoryKey, Name);
    if ( v14 > 0 )
    {
      v13 = v13->LeftChild;
    }
    else
    {
      if ( v14 >= 0 )
        break;
      v13 = v13->RightChild;
    }
  }
  if ( v13 )
  {
    RtlCopyUnicodeString(ShortName, (PCUNICODE_STRING)&v12[3].LeftChild);
    p_RightChild = (unsigned __int16 *)&v12[2].RightChild;
    RightChild = (unsigned __int16)v12[2].RightChild;
    if ( LongName->MaximumLength < RightChild )
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag((POOL_TYPE)17, RightChild, 0x346E7554u);
      LongName->Buffer = PoolWithTag;
      v18 = *p_RightChild;
      LongName->MaximumLength = *p_RightChild;
      LongName->Length = v18;
      memmove(PoolWithTag, v12[3].Parent, *p_RightChild);
    }
    else
    {
      RtlCopyUnicodeString(LongName, (PCUNICODE_STRING)&v12[2].RightChild);
    }
    memmove(Data, v12[4].Parent, LODWORD(v12[4].LeftChild));
    *DataLength = (ULONG)v12[4].LeftChild;
    v11 = 1;
  }
  KeReleaseGuardedMutex(&Cache->Mutex);
  FsRtlEmptyFreePoolList(v20);
  return v11;
}
