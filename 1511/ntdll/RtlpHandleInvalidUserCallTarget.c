/*
 * XREFs of RtlpHandleInvalidUserCallTarget @ 0x1800EA410
 * Callers:
 *     LdrpHandleInvalidUserCallTarget @ 0x180095370 (LdrpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlFailFast2 @ 0x1800A9B90 (RtlFailFast2.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800EA2C4 (RtlpGuardIsSuppressedAddress.c)
 */

NTSTATUS __fastcall RtlpHandleInvalidUserCallTarget(void *a1)
{
  if ( !RtlGuardAllowSuppressedCalls || !RtlpGuardIsSuppressedAddress(a1) )
    RtlFailFast2(0xAu);
  return RtlpGuardGrantSuppressedCallAccess((__int64)a1);
}
