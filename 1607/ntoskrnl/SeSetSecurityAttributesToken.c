/*
 * XREFs of SeSetSecurityAttributesToken @ 0x14068D1A0
 * Callers:
 *     <none>
 * Callees:
 *     SepInternalSetSecurityAttributesToken @ 0x14021973C (SepInternalSetSecurityAttributesToken.c)
 */

__int64 __fastcall SeSetSecurityAttributesToken(void *a1, KPROCESSOR_MODE a2, _DWORD *a3, __int64 a4)
{
  return SepInternalSetSecurityAttributesToken(a1, a2, 0, a3, a4);
}
