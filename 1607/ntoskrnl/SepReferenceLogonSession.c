/*
 * XREFs of SepReferenceLogonSession @ 0x140478574
 * Callers:
 *     SepCreateTokenEx @ 0x14007FC48 (SepCreateTokenEx.c)
 *     SepDuplicateLogonSessionReference @ 0x140080A84 (SepDuplicateLogonSessionReference.c)
 *     SepLinkLogonSessions @ 0x140080B10 (SepLinkLogonSessions.c)
 *     SepDuplicateToken @ 0x140411A90 (SepDuplicateToken.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1400131A0 (PsGetCurrentServerSilo.c)
 */

__int64 __fastcall SepReferenceLogonSession(__int64 a1, __int64 a2)
{
  __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return SepReferenceLogonSessionSilo(a1, CurrentServerSilo, a2);
}
