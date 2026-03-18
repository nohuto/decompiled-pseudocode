/*
 * XREFs of SepReferenceLogonSession @ 0x14046E1E4
 * Callers:
 *     SepCreateTokenEx @ 0x14002EC40 (SepCreateTokenEx.c)
 *     SepLinkLogonSessions @ 0x140130B14 (SepLinkLogonSessions.c)
 *     SepFilterToken @ 0x140411C6C (SepFilterToken.c)
 *     SepDuplicateToken @ 0x140435D60 (SepDuplicateToken.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1400CE990 (PsGetCurrentServerSilo.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     SepReferenceLogonSessionSilo @ 0x14046E22C (SepReferenceLogonSessionSilo.c)
 */

__int64 __fastcall SepReferenceLogonSession(__int64 a1, __int64 a2)
{
  void *CurrentServerSilo; // rsi
  unsigned int v5; // ebx

  CurrentServerSilo = (void *)PsGetCurrentServerSilo();
  v5 = SepReferenceLogonSessionSilo(a1, CurrentServerSilo, a2);
  if ( CurrentServerSilo )
    PspDereferenceSiloObject(CurrentServerSilo);
  return v5;
}
