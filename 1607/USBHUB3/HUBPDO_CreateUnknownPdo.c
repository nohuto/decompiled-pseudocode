/*
 * XREFs of HUBPDO_CreateUnknownPdo @ 0x1C00699B0
 * Callers:
 *     HUBDSM_CreatingUnknownChildPDOAndReportingToPnp @ 0x1C001A5A0 (HUBDSM_CreatingUnknownChildPDOAndReportingToPnp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPDO_CreateUnknownPdo(__int64 a1)
{
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1424LL) = 2;
  return HUBPDO_CreatePdoInternal(a1, 0);
}
