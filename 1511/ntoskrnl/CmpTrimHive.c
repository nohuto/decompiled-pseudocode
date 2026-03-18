/*
 * XREFs of CmpTrimHive @ 0x1403BAC40
 * Callers:
 *     CmpLoadKeyCommon @ 0x140002D44 (CmpLoadKeyCommon.c)
 *     CmpUpdatePhaseAccessBit @ 0x1405480E8 (CmpUpdatePhaseAccessBit.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     HvpMapEntryIsDiscardable @ 0x14003B420 (HvpMapEntryIsDiscardable.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     HvpMapEntryIsNewAlloc @ 0x1400A04B8 (HvpMapEntryIsNewAlloc.c)
 *     HvpMapEntryMarkTrimmed @ 0x140166DC8 (HvpMapEntryMarkTrimmed.c)
 *     MiDeprioritizeVARange @ 0x1401D257C (MiDeprioritizeVARange.c)
 *     HvpGetCellMap @ 0x1403F7A80 (HvpGetCellMap.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 */

void __fastcall CmpTrimHive(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // esi
  unsigned int v6; // r14d
  struct _EX_RUNDOWN_REF *CellMap; // rbp
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rcx

  if ( CmpAccessBitForPhase == 2 )
  {
    v5 = *(_DWORD *)(a1 + 6016);
    if ( v5 || (v5 = *(_DWORD *)(a1 + 6020)) != 0 )
    {
      CmpLockRegistry(a1, a2, a3, a4);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 2848), 1u);
      ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2840));
      v6 = *(_DWORD *)(a1 + 1400);
      *(_DWORD *)(a1 + 6020) = v5;
      *(_DWORD *)(a1 + 6024) = v6;
      while ( v5 < v6 )
      {
        CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(a1, v5);
        if ( !HvpMapEntryIsDiscardable((__int64)CellMap) )
        {
          if ( (unsigned __int8)HvpMapEntryIsNewAlloc(v8) )
          {
            v10 = *(unsigned int *)(v9 + 32);
            if ( (*(_BYTE *)(a1 + 124) & 4) == 0 )
            {
              v11 = *(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0uLL;
              if ( v11 )
                MiDeprioritizeVARange(v11, (unsigned __int64)(unsigned int)v10 >> 12, (ULONG_PTR)&dword_1402FF980, 40);
            }
            if ( (CellMap[3].Count & 1) == 0 )
            {
              if ( ExAcquireRundownProtection(CellMap + 3) )
              {
                MiDeprioritizeVARange(
                  CellMap[2].Count & 0xFFFFFFFFFFFFFFF0uLL,
                  v10 >> 12,
                  (ULONG_PTR)&dword_1402FF980,
                  40);
                ExReleaseRundownProtection_0(CellMap + 3);
              }
            }
          }
          HvpMapEntryMarkTrimmed((__int64)CellMap);
        }
        v5 += 4096;
      }
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2840));
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
      CmpUnlockRegistry();
    }
  }
}
