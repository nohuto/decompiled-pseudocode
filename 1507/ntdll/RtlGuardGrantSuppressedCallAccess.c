/*
 * XREFs of RtlGuardGrantSuppressedCallAccess @ 0x1800E5708
 * Callers:
 *     AVrfCallAPILookupCallback @ 0x1800C4AE0 (AVrfCallAPILookupCallback.c)
 *     AVrfpSnapDllImports @ 0x1800C60F0 (AVrfpSnapDllImports.c)
 * Callees:
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800E5758 (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800E57F0 (RtlpGuardIsSuppressedAddress.c)
 */

__int64 __fastcall RtlGuardGrantSuppressedCallAccess(__int64 a1, _DWORD *a2)
{
  if ( !qword_1801572F0 )
  {
    *a2 = 0;
    return 0LL;
  }
  if ( !(unsigned __int8)RtlpGuardIsSuppressedAddress() )
  {
    *a2 = 0;
    return 0LL;
  }
  *a2 = 1;
  return RtlpGuardGrantSuppressedCallAccess(a1);
}
