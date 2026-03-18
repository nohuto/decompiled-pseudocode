/*
 * XREFs of HUBDSM_ValidatingMSOSContainerIdHeaderDescriptor @ 0x1C00193B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_ValidatingMSOSContainerIdHeaderDescriptor(__int64 a1)
{
  return HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader(*(_QWORD *)(a1 + 960));
}
