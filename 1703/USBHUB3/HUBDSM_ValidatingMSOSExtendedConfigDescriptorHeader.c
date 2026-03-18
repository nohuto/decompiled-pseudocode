/*
 * XREFs of HUBDSM_ValidatingMSOSExtendedConfigDescriptorHeader @ 0x1C001B270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_ValidatingMSOSExtendedConfigDescriptorHeader(__int64 a1)
{
  return HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader(*(_QWORD *)(a1 + 960));
}
