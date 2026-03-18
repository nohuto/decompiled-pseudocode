/*
 * XREFs of SepReferenceLogonSession @ 0x1404796A4
 * Callers:
 *     SepCreateTokenEx @ 0x14007FBC8 (SepCreateTokenEx.c)
 *     SepDuplicateLogonSessionReference @ 0x140080A04 (SepDuplicateLogonSessionReference.c)
 *     SepLinkLogonSessions @ 0x140080A90 (SepLinkLogonSessions.c)
 *     SepDuplicateToken @ 0x140412BD0 (SepDuplicateToken.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140013620 (PsGetCurrentServerSilo.c)
 */

__int64 __fastcall SepReferenceLogonSession(__int64 a1, __int64 a2)
{
  __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return SepReferenceLogonSessionSilo(a1, CurrentServerSilo, a2);
}
