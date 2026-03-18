/*
 * XREFs of HUBDSM_QueryingLanguageSpecificProductIdString @ 0x1C0018120
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_GetProductIdStringDescriptorUsingControlTransfer @ 0x1C00211C8 (HUBDTX_GetProductIdStringDescriptorUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_QueryingLanguageSpecificProductIdString(__int64 a1)
{
  HUBDTX_GetProductIdStringDescriptorUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
