/*
 * XREFs of RaidUnitHierarchicalReset @ 0x1C0032BD0
 * Callers:
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C002338C (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidHierarchicalResetWorkRoutine @ 0x1C0031EA0 (RaidHierarchicalResetWorkRoutine.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1C00223E8 (RaidAdapterResetBus.c)
 *     RaUnitSetHierarchicalResetSrbTimeoutCountdown @ 0x1C00314B8 (RaUnitSetHierarchicalResetSrbTimeoutCountdown.c)
 *     RaidUnitResetTarget @ 0x1C003346C (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C00336F4 (RaidUnitResetUnit.c)
 */

__int64 __fastcall RaidUnitHierarchicalReset(__int64 a1)
{
  unsigned int v1; // edi
  int v3; // edi
  int v4; // esi
  __int64 result; // rax
  int v6; // edi

  v1 = *(_DWORD *)(a1 + 976);
  if ( v1 < 0x1E )
    v1 = 30;
  v3 = v1 >> 1;
  RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, v3);
  v4 = RaidUnitResetUnit(a1);
  if ( v4 < 0 )
  {
    RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, v3);
    v6 = RaidUnitResetTarget(a1);
    if ( v6 < 0 )
    {
      RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, 0);
      result = RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 88));
      if ( (int)result >= 0 )
        ++*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4768LL);
    }
    else
    {
      RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, 0);
      result = (unsigned int)v6;
      ++*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4772LL);
    }
  }
  else
  {
    RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, 0);
    result = (unsigned int)v4;
    ++*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4776LL);
  }
  return result;
}
