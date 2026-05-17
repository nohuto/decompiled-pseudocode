/*
 * XREFs of RtlGuardGrantSuppressedCallAccess @ 0x1800EFA3C
 * Callers:
 *     AVrfCallAPILookupCallback @ 0x1800D5DC0 (AVrfCallAPILookupCallback.c)
 *     AVrfpSnapDllImports @ 0x1800D736C (AVrfpSnapDllImports.c)
 * Callees:
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800EFA8C (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800EFB24 (RtlpGuardIsSuppressedAddress.c)
 */

__int64 __fastcall RtlGuardGrantSuppressedCallAccess(__int64 a1, _DWORD *a2)
{
  if ( !qword_180163310 )
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
