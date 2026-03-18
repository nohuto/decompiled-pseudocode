/*
 * XREFs of HUBPDO_CreateUnknownPdo @ 0x1C0067D10
 * Callers:
 *     HUBDSM_CreatingUnknownChildPDOAndReportingToPnp @ 0x1C0019B70 (HUBDSM_CreatingUnknownChildPDOAndReportingToPnp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPDO_CreateUnknownPdo(__int64 a1)
{
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1424LL) = 2;
  return HUBPDO_CreatePdoInternal(a1, 0);
}
