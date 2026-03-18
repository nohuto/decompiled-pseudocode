/*
 * XREFs of SepDeReferenceLogonSessionDirect @ 0x1400EF720
 * Callers:
 *     SepLinkLogonSessions @ 0x1400EF4FC (SepLinkLogonSessions.c)
 *     NtQueryInformationToken @ 0x140431390 (NtQueryInformationToken.c)
 *     SepStopReferencingLogonSession @ 0x1404BD780 (SepStopReferencingLogonSession.c)
 *     SeShutdownServerSilo @ 0x14064D31C (SeShutdownServerSilo.c)
 *     SepSetServerSiloToken @ 0x14064DBBC (SepSetServerSiloToken.c)
 *     SeGetLinkedToken @ 0x1406536C8 (SeGetLinkedToken.c)
 * Callees:
 *     SepDeReferenceLogonSession @ 0x14049B694 (SepDeReferenceLogonSession.c)
 */

signed __int64 __fastcall SepDeReferenceLogonSessionDirect(_QWORD *a1)
{
  signed __int64 result; // rax
  signed __int64 v2; // rtt
  __int64 v3; // rdx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  _m_prefetchw(a1 + 3);
  result = a1[3];
  while ( result - 1 > 0 )
  {
    v2 = result;
    result = _InterlockedCompareExchange64(a1 + 3, result - 1, result);
    if ( v2 == result )
      return result;
  }
  if ( result != 1 )
    __fastfail(0xEu);
  v3 = a1[20];
  v4 = a1[1];
  return SepDeReferenceLogonSession(&v4, v3);
}
