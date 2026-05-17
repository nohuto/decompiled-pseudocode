/*
 * XREFs of RtlpHandleInvalidUserCallTarget @ 0x1800EFC70
 * Callers:
 *     LdrpHandleInvalidUserCallTarget @ 0x180096760 (LdrpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlFailFast2 @ 0x1800AAE70 (RtlFailFast2.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800EFB24 (RtlpGuardIsSuppressedAddress.c)
 */

__int64 __fastcall RtlpHandleInvalidUserCallTarget(unsigned __int64 a1)
{
  if ( !RtlGuardAllowSuppressedCalls || !RtlpGuardIsSuppressedAddress(a1) )
    RtlFailFast2(0xAu);
  return RtlpGuardGrantSuppressedCallAccess(a1);
}
