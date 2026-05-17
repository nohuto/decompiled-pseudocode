/*
 * XREFs of RtlAddAccessAllowedAce @ 0x1800149B0
 * Callers:
 *     RtlCheckTokenCapability @ 0x18000DDF0 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x180011040 (RtlCheckTokenMembershipEx.c)
 *     RtlDefaultNpAcl @ 0x18008B250 (RtlDefaultNpAcl.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x180014CE4 (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAccessAllowedAce(int a1, int a2, int a3, void *Src)
{
  return RtlpAddKnownAce(a1, a2, 0, a3, Src, 0);
}
