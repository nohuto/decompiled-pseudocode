/*
 * XREFs of RtlCheckTokenMembership @ 0x1400083B0
 * Callers:
 *     ExpCheckFullProcessInformationAccess @ 0x140413094 (ExpCheckFullProcessInformationAccess.c)
 *     PopValidateContextMembership @ 0x1405842DC (PopValidateContextMembership.c)
 *     RtlCapabilityCheck @ 0x1406C97D8 (RtlCapabilityCheck.c)
 *     NtFilterBootOption @ 0x1406D6460 (NtFilterBootOption.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCheckTokenMembership(void *a1, void *a2)
{
  return RtlCheckTokenMembershipEx(a1, a2);
}
