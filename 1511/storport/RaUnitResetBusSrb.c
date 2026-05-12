/*
 * XREFs of RaUnitResetBusSrb @ 0x1C0032700
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0003080 (RaUnitScsiIrp.c)
 * Callees:
 *     Template_qcj @ 0x1C0036080 (Template_qcj.c)
 */

__int64 __fastcall RaUnitResetBusSrb(__int64 a1, __int64 a2)
{
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x40000000) != 0 )
    Template_qcj(a1, a2, *(_QWORD *)(a1 + 24), *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL), *(_BYTE *)(a1 + 88), a1 + 1688);
  return RaidUnitSubmitResetRequest(a1, a2);
}
