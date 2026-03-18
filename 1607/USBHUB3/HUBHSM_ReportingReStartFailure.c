/*
 * XREFs of HUBHSM_ReportingReStartFailure @ 0x1C00078D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBHSM_ReportingReStartFailure(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 960);
  *(_DWORD *)(v1 + 1120) = -1073741823;
  KeSetEvent((PRKEVENT)(v1 + 1096), 0, 0);
  return 2053LL;
}
