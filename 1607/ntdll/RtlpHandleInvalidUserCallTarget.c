/*
 * XREFs of RtlpHandleInvalidUserCallTarget @ 0x1800EFC70
 * Callers:
 *     LdrpHandleInvalidUserCallTarget @ 0x180096750 (LdrpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlFailFast2 @ 0x1800AAE70 (RtlFailFast2.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800EFB24 (RtlpGuardIsSuppressedAddress.c)
 */

NTSTATUS __fastcall RtlpHandleInvalidUserCallTarget(void *a1)
{
  if ( !RtlGuardAllowSuppressedCalls || !RtlpGuardIsSuppressedAddress(a1) )
    RtlFailFast2(0xAu);
  return RtlpGuardGrantSuppressedCallAccess((__int64)a1);
}
