/*
 * XREFs of SepStopReferencingLogonSession @ 0x14047C9A8
 * Callers:
 *     SepLinkLogonSessions @ 0x140080A90 (SepLinkLogonSessions.c)
 *     NtSetInformationToken @ 0x1404797D0 (NtSetInformationToken.c)
 *     SepSetLogonSessionToken @ 0x14047D1FC (SepSetLogonSessionToken.c)
 * Callees:
 *     SepDeReferenceLogonSessionDirect @ 0x140080760 (SepDeReferenceLogonSessionDirect.c)
 *     SepConvertToOwnTokenClaims @ 0x14008078C (SepConvertToOwnTokenClaims.c)
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
