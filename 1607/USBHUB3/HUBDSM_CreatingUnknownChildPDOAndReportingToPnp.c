/*
 * XREFs of HUBDSM_CreatingUnknownChildPDOAndReportingToPnp @ 0x1C001A5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CreatingUnknownChildPDOAndReportingToPnp(__int64 a1)
{
  return HUBPDO_CreateUnknownPdo(*(_QWORD *)(a1 + 960));
}
