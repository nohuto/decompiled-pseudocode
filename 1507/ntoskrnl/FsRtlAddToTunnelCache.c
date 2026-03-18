/*
 * XREFs of FsRtlAddToTunnelCache @ 0x140439F9C
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlCompareNodeAndKey @ 0x140017FCC (FsRtlCompareNodeAndKey.c)
 *     ExAllocateFromNPagedLookasideList @ 0x140030738 (ExAllocateFromNPagedLookasideList.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     FsRtlEmptyFreePoolList @ 0x140105744 (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeTunnelNode @ 0x140105794 (FsRtlFreeTunnelNode.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     FsRtlPruneTunnelCache @ 0x140520C44 (FsRtlPruneTunnelCache.c)
 */

void __stdcall FsRtlAddToTunnelCache(
        TUNNEL *Cache,
        ULONGLONG DirectoryKey,
        UNICODE_STRING *ShortName,
        UNICODE_STRING *LongName,
        BOOLEAN KeyByShortName,
        ULONG DataLength,
        void *Data)
{
  UNICODE_STRING *v7; // r12
  __int64 v10; // rbp
  ULONG v11; // esi
  int v12; // r8d
  unsigned int v13; // esi
  char *PoolWithTag; // rbx
  __int64 v15; // r9
  UNICODE_STRING *v16; // r13
  __int64 v17; // rax
  __int64 v18; // rsi
  unsigned __int8 CurrentIrql; // r14
  unsigned int v20; // eax
  PRTL_SPLAY_LINKS *p_Cache; // r14
  __int64 *v22; // rsi
  LONG v23; // eax
  struct _LIST_ENTRY *v24; // rax
  struct _LIST_ENTRY *Blink; // rdx
  unsigned __int16 Length; // ax
  unsigned __int16 v27; // ax
  char *v28; // rcx
  unsigned __int8 OldIrql; // bl
  signed __int32 v30; // eax
  _QWORD *v31; // rcx
  _QWORD *v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdx
  _QWORD *v35; // rcx
  __int64 v36; // rcx
  char v37; // [rsp+20h] [rbp-58h]
  __int64 v38[10]; // [rsp+28h] [rbp-50h] BYREF

  v7 = LongName;
  v37 = 0;
  v10 = 0LL;
  if ( TunnelMaxEntries )
  {
    v11 = DataLength + ShortName->Length;
    v12 = LongName->Length + 112;
    v38[1] = (__int64)v38;
    v13 = v12 + v11;
    v38[0] = (__int64)v38;
    if ( v13 > 0xB0 || (PoolWithTag = (char *)ExAllocateFromNPagedLookasideList(&TunnelLookasideList)) == 0LL )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)257, v13, 0x506E7554u);
      if ( !PoolWithTag )
        return;
      v37 = 1;
    }
    v16 = v7;
    if ( KeyByShortName )
      v16 = ShortName;
    v17 = KeAbPreAcquire((ULONG_PTR)Cache, 0LL, 0LL, v15);
    v18 = v17;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset(&Cache->Mutex.Count, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)Cache, v17);
    if ( v18 )
      *(_BYTE *)(v18 + 26) |= 1u;
    Cache->Mutex.Owner = KeGetCurrentThread();
    v20 = CurrentIrql;
    p_Cache = &Cache->Cache;
    Cache->Mutex.OldIrql = v20;
    v22 = (__int64 *)&Cache->Cache;
    if ( Cache->Cache )
    {
      do
      {
        v10 = *v22;
        v23 = FsRtlCompareNodeAndKey(*v22, DirectoryKey, v16);
        if ( v23 > 0 )
        {
          v22 = (__int64 *)(v10 + 8);
        }
        else
        {
          if ( v23 >= 0 )
            break;
          v22 = (__int64 *)(v10 + 16);
        }
      }
      while ( *v22 );
      v7 = LongName;
      p_Cache = &Cache->Cache;
    }
    *(_QWORD *)PoolWithTag = PoolWithTag;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    if ( v10 )
    {
      if ( *v22 )
      {
        *((_QWORD *)PoolWithTag + 2) = *(_QWORD *)(*v22 + 16);
        *((_QWORD *)PoolWithTag + 1) = *(_QWORD *)(*v22 + 8);
        v31 = *(_QWORD **)(*v22 + 16);
        if ( v31 )
          *v31 = PoolWithTag;
        v32 = *(_QWORD **)(*v22 + 8);
        if ( v32 )
          *v32 = PoolWithTag;
        v33 = *(_QWORD *)*v22;
        if ( v33 == *v22 )
        {
          *p_Cache = (PRTL_SPLAY_LINKS)PoolWithTag;
        }
        else
        {
          *(_QWORD *)PoolWithTag = v33;
          v36 = *(_QWORD *)*v22;
          if ( *(_QWORD *)(v36 + 8) == *v22 )
            *(_QWORD *)(v36 + 8) = PoolWithTag;
          else
            *(_QWORD *)(v36 + 16) = PoolWithTag;
        }
        v34 = *(_QWORD *)(v10 + 24);
        v35 = *(_QWORD **)(v10 + 32);
        if ( *(_QWORD *)(v34 + 8) != v10 + 24 || *v35 != v10 + 24 )
          __fastfail(3u);
        *v35 = v34;
        *(_QWORD *)(v34 + 8) = v35;
        FsRtlFreeTunnelNode((char *)v10, v38);
        --Cache->NumEntries;
      }
      else
      {
        *(_QWORD *)PoolWithTag = v10;
        *v22 = (__int64)PoolWithTag;
      }
    }
    else
    {
      *p_Cache = (PRTL_SPLAY_LINKS)PoolWithTag;
    }
    *((_QWORD *)PoolWithTag + 5) = MEMORY[0xFFFFF78000000014];
    v24 = (struct _LIST_ENTRY *)(PoolWithTag + 24);
    Blink = Cache->TimerQueue.Blink;
    *((_QWORD *)PoolWithTag + 3) = &Cache->TimerQueue;
    *((_QWORD *)PoolWithTag + 4) = Blink;
    if ( Blink->Flink != &Cache->TimerQueue )
      __fastfail(3u);
    Blink->Flink = v24;
    Cache->TimerQueue.Blink = v24;
    ++Cache->NumEntries;
    *((_QWORD *)PoolWithTag + 6) = DirectoryKey;
    if ( KeyByShortName )
      *((_DWORD *)PoolWithTag + 14) = 2;
    else
      *((_DWORD *)PoolWithTag + 14) = 0;
    *((_QWORD *)PoolWithTag + 11) = PoolWithTag + 112;
    *((_QWORD *)PoolWithTag + 9) = &PoolWithTag[ShortName->Length + 112];
    Length = ShortName->Length;
    *((_WORD *)PoolWithTag + 41) = ShortName->Length;
    *((_WORD *)PoolWithTag + 40) = Length;
    v27 = v7->Length;
    *((_WORD *)PoolWithTag + 33) = v7->Length;
    *((_WORD *)PoolWithTag + 32) = v27;
    if ( ShortName->Length )
      memmove(PoolWithTag + 112, ShortName->Buffer, ShortName->Length);
    if ( v7->Length )
      memmove(*((void **)PoolWithTag + 9), v7->Buffer, v7->Length);
    v28 = &PoolWithTag[ShortName->Length + 112 + v7->Length];
    *((_QWORD *)PoolWithTag + 12) = v28;
    *((_DWORD *)PoolWithTag + 26) = DataLength;
    memmove(v28, Data, DataLength);
    if ( v37 )
      *((_DWORD *)PoolWithTag + 14) |= 1u;
    FsRtlPruneTunnelCache(Cache, v38);
    OldIrql = Cache->Mutex.OldIrql;
    Cache->Mutex.Owner = 0LL;
    v30 = _InterlockedCompareExchange(&Cache->Mutex.Count, 1, 0);
    if ( v30 )
      ExpReleaseFastMutexContended(&Cache->Mutex.Count, v30);
    __writecr8(OldIrql);
    KeAbPostRelease((ULONG_PTR)Cache);
    FsRtlEmptyFreePoolList((_QWORD **)v38);
  }
}
