/*
 * XREFs of RaidUnitHierarchicalReset @ 0x1C0037640
 * Callers:
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C0029370 (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidHierarchicalResetWorkRoutine @ 0x1C0036960 (RaidHierarchicalResetWorkRoutine.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1C0027CB0 (RaidAdapterResetBus.c)
 *     RaUnitSetHierarchicalResetSrbTimeoutCountdown @ 0x1C00358C4 (RaUnitSetHierarchicalResetSrbTimeoutCountdown.c)
 *     RaidUnitResetTarget @ 0x1C0038074 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C0038320 (RaidUnitResetUnit.c)
 *     StorIsEventQueueEmpty @ 0x1C0038F50 (StorIsEventQueueEmpty.c)
 *     Template_qcj @ 0x1C0039150 (Template_qcj.c)
 */

__int64 __fastcall RaidUnitHierarchicalReset(__int64 a1)
{
  unsigned int v2; // eax
  int v3; // esi
  int v4; // edi
  int v5; // edx
  int v6; // r8d

  if ( *(_BYTE *)(a1 + 2552) )
  {
    v3 = 2 * *(_DWORD *)(a1 + 2572);
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 1000);
    if ( v2 < 0x1E )
      v2 = 30;
    v3 = 2 * v2;
  }
  RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, v3);
  v4 = RaidUnitResetUnit(a1);
  if ( v4 < 0 )
  {
    RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, v3);
    v4 = RaidUnitResetTarget(a1);
    if ( v4 < 0 )
    {
      RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, 0);
      if ( (Microsoft_Windows_StorPortEnableBits & 0x40000000) != 0 )
        Template_qcj(
          *(_QWORD *)(a1 + 24),
          v5,
          v6,
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_BYTE *)(a1 + 88),
          a1 + 1688);
      if ( *(_BYTE *)(a1 + 2552) && (unsigned __int8)StorIsEventQueueEmpty(*(_QWORD *)(a1 + 208)) )
      {
        v4 = 0;
      }
      else
      {
        v4 = RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 88));
        if ( v4 >= 0 )
          ++*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4768LL);
      }
    }
    else
    {
      RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, 0);
      ++*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4772LL);
    }
  }
  else
  {
    RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, 0);
    ++*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4776LL);
  }
  *(_QWORD *)(a1 + 2600) = KeQueryUnbiasedInterruptTime();
  return (unsigned int)v4;
}
