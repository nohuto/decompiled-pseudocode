/*
 * XREFs of RtlGuardGrantSuppressedCallAccess @ 0x1800EA1DC
 * Callers:
 *     AVrfCallAPILookupCallback @ 0x1800CDE10 (AVrfCallAPILookupCallback.c)
 *     AVrfpSnapDllImports @ 0x1800CF420 (AVrfpSnapDllImports.c)
 * Callees:
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800EA22C (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800EA2C4 (RtlpGuardIsSuppressedAddress.c)
 */

__int64 __fastcall RtlGuardGrantSuppressedCallAccess(void *a1, _DWORD *a2)
{
  if ( !LdrSystemDllInitBlock.Wow64SharedInformation[9] )
  {
    *a2 = 0;
    return 0LL;
  }
  if ( !(unsigned __int8)RtlpGuardIsSuppressedAddress(a1) )
  {
    *a2 = 0;
    return 0LL;
  }
  *a2 = 1;
  return RtlpGuardGrantSuppressedCallAccess(a1);
}
