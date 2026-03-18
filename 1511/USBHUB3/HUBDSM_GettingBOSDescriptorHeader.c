/*
 * XREFs of HUBDSM_GettingBOSDescriptorHeader @ 0x1C0019A10
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer @ 0x1C00210F4 (HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_GettingBOSDescriptorHeader(__int64 a1)
{
  HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
