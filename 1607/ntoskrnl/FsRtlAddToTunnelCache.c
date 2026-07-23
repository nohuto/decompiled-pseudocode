/*
 * XREFs of FsRtlAddToTunnelCache @ 0x1404E6068
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14006FA30 (ExAllocateFromNPagedLookasideList.c)
 *     FsRtlCompareNodeAndKey @ 0x1400C1DE4 (FsRtlCompareNodeAndKey.c)
 *     FsRtlEmptyFreePoolList @ 0x1400C24D0 (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeTunnelNode @ 0x1400C2534 (FsRtlFreeTunnelNode.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     FsRtlPruneTunnelCache @ 0x1404E75FC (FsRtlPruneTunnelCache.c)
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
  ULONG v11; // edi
  int v12; // r8d
  unsigned int v13; // edi
  char *PoolWithTag; // rbx
  UNICODE_STRING *v15; // r15
  PRTL_SPLAY_LINKS *p_Cache; // r13
  __int64 *v17; // rdi
  LONG v18; // eax
  struct _LIST_ENTRY *v19; // rax
  struct _LIST_ENTRY *Blink; // rdx
  unsigned __int16 Length; // ax
  unsigned __int16 v22; // ax
  char *v23; // rcx
  _QWORD *v24; // rcx
  _QWORD *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  char v30; // [rsp+20h] [rbp-58h]
  __int64 v31[10]; // [rsp+28h] [rbp-50h] BYREF

  v7 = LongName;
  v30 = 0;
  v10 = 0LL;
  if ( TunnelMaxEntries )
  {
    v11 = DataLength + ShortName->Length;
    v12 = LongName->Length + 112;
    v31[1] = (__int64)v31;
    v13 = v12 + v11;
    v31[0] = (__int64)v31;
    if ( v13 > 0xB0 || (PoolWithTag = (char *)ExAllocateFromNPagedLookasideList(&TunnelLookasideList)) == 0LL )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v13, 0x506E7554u);
      if ( !PoolWithTag )
        return;
      v30 = 1;
    }
    v15 = v7;
    if ( KeyByShortName )
      v15 = ShortName;
    ExAcquireFastMutex(&Cache->Mutex);
    p_Cache = &Cache->Cache;
    v17 = (__int64 *)&Cache->Cache;
    if ( Cache->Cache )
    {
      do
      {
        v10 = *v17;
        v18 = FsRtlCompareNodeAndKey(*v17, DirectoryKey, v15);
        if ( v18 > 0 )
        {
          v17 = (__int64 *)(v10 + 8);
        }
        else
        {
          if ( v18 >= 0 )
            break;
          v17 = (__int64 *)(v10 + 16);
        }
      }
      while ( *v17 );
      v7 = LongName;
      p_Cache = &Cache->Cache;
    }
    *(_QWORD *)PoolWithTag = PoolWithTag;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    if ( v10 )
    {
      if ( *v17 )
      {
        *((_QWORD *)PoolWithTag + 2) = *(_QWORD *)(*v17 + 16);
        *((_QWORD *)PoolWithTag + 1) = *(_QWORD *)(*v17 + 8);
        v24 = *(_QWORD **)(*v17 + 16);
        if ( v24 )
          *v24 = PoolWithTag;
        v25 = *(_QWORD **)(*v17 + 8);
        if ( v25 )
          *v25 = PoolWithTag;
        v26 = *(_QWORD *)*v17;
        if ( v26 == *v17 )
        {
          *p_Cache = (PRTL_SPLAY_LINKS)PoolWithTag;
        }
        else
        {
          *(_QWORD *)PoolWithTag = v26;
          v27 = *(_QWORD *)*v17;
          if ( *(_QWORD *)(v27 + 8) == *v17 )
            *(_QWORD *)(v27 + 8) = PoolWithTag;
          else
            *(_QWORD *)(v27 + 16) = PoolWithTag;
        }
        v28 = *(_QWORD *)(v10 + 24);
        v29 = *(_QWORD **)(v10 + 32);
        if ( *(_QWORD *)(v28 + 8) != v10 + 24 || *v29 != v10 + 24 )
          __fastfail(3u);
        *v29 = v28;
        *(_QWORD *)(v28 + 8) = v29;
        FsRtlFreeTunnelNode((char *)v10, v31);
        --Cache->NumEntries;
      }
      else
      {
        *(_QWORD *)PoolWithTag = v10;
        *v17 = (__int64)PoolWithTag;
      }
    }
    else
    {
      *p_Cache = (PRTL_SPLAY_LINKS)PoolWithTag;
    }
    *((_QWORD *)PoolWithTag + 5) = MEMORY[0xFFFFF78000000014];
    v19 = (struct _LIST_ENTRY *)(PoolWithTag + 24);
    Blink = Cache->TimerQueue.Blink;
    if ( Blink->Flink != &Cache->TimerQueue )
      __fastfail(3u);
    v19->Flink = &Cache->TimerQueue;
    *((_QWORD *)PoolWithTag + 4) = Blink;
    Blink->Flink = v19;
    Cache->TimerQueue.Blink = v19;
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
    v22 = v7->Length;
    *((_WORD *)PoolWithTag + 33) = v7->Length;
    *((_WORD *)PoolWithTag + 32) = v22;
    if ( ShortName->Length )
      memmove(PoolWithTag + 112, ShortName->Buffer, ShortName->Length);
    if ( v7->Length )
      memmove(*((void **)PoolWithTag + 9), v7->Buffer, v7->Length);
    v23 = &PoolWithTag[ShortName->Length + 112 + v7->Length];
    *((_QWORD *)PoolWithTag + 12) = v23;
    *((_DWORD *)PoolWithTag + 26) = DataLength;
    memmove(v23, Data, DataLength);
    if ( v30 )
      *((_DWORD *)PoolWithTag + 14) |= 1u;
    FsRtlPruneTunnelCache(Cache, v31);
    KeReleaseGuardedMutex(&Cache->Mutex);
    FsRtlEmptyFreePoolList((_QWORD **)v31);
  }
}
