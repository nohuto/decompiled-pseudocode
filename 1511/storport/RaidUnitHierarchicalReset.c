/*
 * XREFs of RaidUnitHierarchicalReset @ 0x1C0034460
 * Callers:
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C00258CC (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidHierarchicalResetWorkRoutine @ 0x1C0033700 (RaidHierarchicalResetWorkRoutine.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1C002492C (RaidAdapterResetBus.c)
 *     RaUnitSetHierarchicalResetSrbTimeoutCountdown @ 0x1C0032824 (RaUnitSetHierarchicalResetSrbTimeoutCountdown.c)
 *     RaidUnitResetTarget @ 0x1C0034E70 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C003511C (RaidUnitResetUnit.c)
 *     Template_qcj @ 0x1C0036080 (Template_qcj.c)
 */

__int64 __fastcall RaidUnitHierarchicalReset(__int64 a1)
{
  unsigned int v2; // eax
  int v3; // edi
  int v4; // esi
  int v5; // edx
  int v6; // r8d

  if ( *(_BYTE *)(a1 + 2528) )
  {
    v3 = 2 * *(_DWORD *)(a1 + 2548);
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
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x40000000) != 0 )
        Template_qcj(
          *(_QWORD *)(a1 + 24),
          v5,
          v6,
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_BYTE *)(a1 + 88),
          a1 + 1688);
      v4 = RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 88));
      if ( v4 >= 0 )
        ++*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4768LL);
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
  *(_QWORD *)(a1 + 2576) = KeQueryUnbiasedInterruptTime();
  return (unsigned int)v4;
}
