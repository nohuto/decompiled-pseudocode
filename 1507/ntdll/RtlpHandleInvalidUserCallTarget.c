/*
 * XREFs of RtlpHandleInvalidUserCallTarget @ 0x1800E5930
 * Callers:
 *     LdrpHandleInvalidUserCallTarget @ 0x180083BC0 (LdrpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlFailFast2 @ 0x1800967B0 (RtlFailFast2.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800E57F0 (RtlpGuardIsSuppressedAddress.c)
 */

NTSTATUS __fastcall RtlpHandleInvalidUserCallTarget(void *a1)
{
  if ( !RtlGuardAllowSuppressedCalls || !RtlpGuardIsSuppressedAddress(a1) )
    RtlFailFast2(0xAu);
  return RtlpGuardGrantSuppressedCallAccess((__int64)a1);
}
