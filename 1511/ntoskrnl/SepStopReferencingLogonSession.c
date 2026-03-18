/*
 * XREFs of SepStopReferencingLogonSession @ 0x1404BD780
 * Callers:
 *     SepLinkLogonSessions @ 0x1400EF4FC (SepLinkLogonSessions.c)
 *     NtSetInformationToken @ 0x1403C45C8 (NtSetInformationToken.c)
 *     SepSetLogonSessionToken @ 0x1404BD6B4 (SepSetLogonSessionToken.c)
 * Callees:
 *     SepDeReferenceLogonSessionDirect @ 0x1400EF720 (SepDeReferenceLogonSessionDirect.c)
 *     SepConvertToOwnTokenClaims @ 0x1400EF74C (SepConvertToOwnTokenClaims.c)
 */

__int64 __fastcall SepStopReferencingLogonSession(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // edi

  result = SepConvertToOwnTokenClaims(a1);
  v3 = result;
  if ( (int)result >= 0 )
  {
    SepDeReferenceLogonSessionDirect(*(_QWORD **)(a1 + 216));
    *(_DWORD *)(a1 + 200) |= 0x20u;
    return v3;
  }
  return result;
}
