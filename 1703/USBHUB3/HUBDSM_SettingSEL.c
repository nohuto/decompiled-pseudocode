/*
 * XREFs of HUBDSM_SettingSEL @ 0x1C001DB10
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_SetSelUsingControlTransfer @ 0x1C00250C0 (HUBDTX_SetSelUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_SettingSEL(__int64 a1)
{
  HUBDTX_SetSelUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
