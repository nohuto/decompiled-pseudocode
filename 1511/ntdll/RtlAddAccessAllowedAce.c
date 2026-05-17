/*
 * XREFs of RtlAddAccessAllowedAce @ 0x1800191F0
 * Callers:
 *     RtlCheckTokenCapability @ 0x18005E0B0 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x18005E3A0 (RtlCheckTokenMembershipEx.c)
 *     RtlDefaultNpAcl @ 0x1800CC680 (RtlDefaultNpAcl.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x180019524 (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAccessAllowedAce(int a1, int a2, int a3, void *Src)
{
  return RtlpAddKnownAce(a1, a2, 0, a3, Src, 0);
}
