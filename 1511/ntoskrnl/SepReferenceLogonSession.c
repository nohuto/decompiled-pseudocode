/*
 * XREFs of SepReferenceLogonSession @ 0x1403C245C
 * Callers:
 *     SepCreateTokenEx @ 0x140004180 (SepCreateTokenEx.c)
 *     SepLinkLogonSessions @ 0x1400EF4FC (SepLinkLogonSessions.c)
 *     SepDuplicateLogonSessionReference @ 0x1400F2ED8 (SepDuplicateLogonSessionReference.c)
 *     SepDuplicateToken @ 0x140477C00 (SepDuplicateToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSilo @ 0x1400436F0 (PsGetCurrentServerSilo.c)
 *     SepReferenceLogonSessionSilo @ 0x1403C24A4 (SepReferenceLogonSessionSilo.c)
 */

__int64 __fastcall SepReferenceLogonSession(__int64 a1, __int64 a2)
{
  _QWORD *CurrentServerSilo; // rsi
  unsigned int v5; // ebx

  CurrentServerSilo = PsGetCurrentServerSilo();
  v5 = SepReferenceLogonSessionSilo(a1, CurrentServerSilo, a2);
  if ( CurrentServerSilo )
    ObfDereferenceObject(CurrentServerSilo);
  return v5;
}
