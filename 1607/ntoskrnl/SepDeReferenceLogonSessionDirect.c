/*
 * XREFs of SepDeReferenceLogonSessionDirect @ 0x140080760
 * Callers:
 *     SepLinkLogonSessions @ 0x140080A90 (SepLinkLogonSessions.c)
 *     NtQueryInformationToken @ 0x14040F810 (NtQueryInformationToken.c)
 *     SepStopReferencingLogonSession @ 0x14047C9A8 (SepStopReferencingLogonSession.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x14067E3A8 (PspCompleteServerSiloShutdownDeferred.c)
 *     SepSetServerSiloToken @ 0x14068D340 (SepSetServerSiloToken.c)
 *     SeGetLinkedToken @ 0x1406929BC (SeGetLinkedToken.c)
 * Callees:
 *     SepDeReferenceLogonSession @ 0x1404E50DC (SepDeReferenceLogonSession.c)
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
