/*
 * XREFs of HUBDSM_ValidatingBOSDescriptor @ 0x1C0019CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_ValidatingBOSDescriptor(__int64 a1)
{
  return HUBDTX_ValidateAndCacheBOSDescriptor(*(_QWORD *)(a1 + 960));
}
