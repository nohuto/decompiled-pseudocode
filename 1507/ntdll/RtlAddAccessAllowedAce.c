/*
 * XREFs of RtlAddAccessAllowedAce @ 0x18001FD50
 * Callers:
 *     RtlCheckTokenCapability @ 0x18004AAA0 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x18004AF00 (RtlCheckTokenMembershipEx.c)
 *     RtlDefaultNpAcl @ 0x180050BE0 (RtlDefaultNpAcl.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x180020084 (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAccessAllowedAce(int a1, int a2, int a3, void *Src)
{
  return RtlpAddKnownAce(a1, a2, 0, a3, Src, 0);
}
