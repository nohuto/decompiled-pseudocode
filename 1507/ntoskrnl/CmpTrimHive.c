/*
 * XREFs of CmpTrimHive @ 0x1404EA73C
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400D2048 (CmpLoadKeyCommon.c)
 *     CmpUpdatePhaseAccessBit @ 0x1405BF940 (CmpUpdatePhaseAccessBit.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     HvpMapEntryIsNewAlloc @ 0x1400627EC (HvpMapEntryIsNewAlloc.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     HvpMapEntryIsDiscardable @ 0x1400CAB70 (HvpMapEntryIsDiscardable.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     MiDeprioritizeVARange @ 0x140126B74 (MiDeprioritizeVARange.c)
 *     HvpMapEntryMarkTrimmed @ 0x140131CC8 (HvpMapEntryMarkTrimmed.c)
 *     HvpGetCellMap @ 0x14049FB30 (HvpGetCellMap.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 */

void __fastcall CmpTrimHive(__int64 a1)
{
  unsigned int v2; // esi
  ULONG_PTR v3; // rbp
  struct _KTHREAD *CurrentThread; // r14
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // r15d
  struct _EX_RUNDOWN_REF *CellMap; // rbp
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rcx
  struct _EX_RUNDOWN_REF *v14; // r14
  ULONG_PTR v15; // rbx
  signed __int32 v16; // eax
  unsigned __int64 v17; // rtt
  unsigned __int64 v18; // rtt

  if ( CmpAccessBitForPhase == 2 )
  {
    v2 = *(_DWORD *)(a1 + 6016);
    if ( v2 || (v2 = *(_DWORD *)(a1 + 6020)) != 0 )
    {
      CmpLockRegistry();
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 2848), 1u);
      v3 = *(_QWORD *)(a1 + 2840);
      CurrentThread = KeGetCurrentThread();
      v6 = KeAbPreAcquire(v3, 0LL, 0LL, v5);
      v7 = v6;
      if ( !_interlockedbittestandreset((volatile signed __int32 *)v3, 0) )
        ExpAcquireFastMutexContended(v3, v6);
      if ( v7 )
        *(_BYTE *)(v7 + 26) |= 1u;
      *(_QWORD *)(v3 + 8) = CurrentThread;
      v8 = *(_DWORD *)(a1 + 1400);
      *(_DWORD *)(a1 + 6020) = v2;
      for ( *(_DWORD *)(a1 + 6024) = v8; v2 < v8; v2 += 4096 )
      {
        CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(a1, v2);
        if ( !HvpMapEntryIsDiscardable((__int64)CellMap) )
        {
          if ( (unsigned __int8)HvpMapEntryIsNewAlloc(v10) )
          {
            v12 = *(unsigned int *)(v11 + 32);
            if ( (*(_BYTE *)(a1 + 124) & 4) == 0 )
            {
              v13 = *(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0uLL;
              if ( v13 )
                MiDeprioritizeVARange(v13, (unsigned __int64)(unsigned int)v12 >> 12, (__int64)dword_14034FE40, 40);
            }
            v14 = CellMap + 3;
            if ( (CellMap[3].Count & 1) == 0 )
            {
              _m_prefetchw(v14);
              v17 = v14->Count & 0xFFFFFFFFFFFFFFFEuLL;
              if ( v17 == _InterlockedCompareExchange64((volatile signed __int64 *)v14, v17 + 2, v17)
                || ExfAcquireRundownProtection(CellMap + 3) )
              {
                MiDeprioritizeVARange(CellMap[2].Count & 0xFFFFFFFFFFFFFFF0uLL, v12 >> 12, (__int64)dword_14034FE40, 40);
                _m_prefetchw(v14);
                v18 = v14->Count & 0xFFFFFFFFFFFFFFFEuLL;
                if ( v18 != _InterlockedCompareExchange64((volatile signed __int64 *)v14, v18 - 2, v18) )
                  ExfReleaseRundownProtection(CellMap + 3);
              }
            }
          }
          HvpMapEntryMarkTrimmed((__int64)CellMap);
        }
      }
      v15 = *(_QWORD *)(a1 + 2840);
      *(_QWORD *)(v15 + 8) = 0LL;
      v16 = _InterlockedCompareExchange((volatile signed __int32 *)v15, 1, 0);
      if ( v16 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)v15, v16);
      KeAbPostRelease(v15);
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
      CmpUnlockRegistry();
    }
  }
}
