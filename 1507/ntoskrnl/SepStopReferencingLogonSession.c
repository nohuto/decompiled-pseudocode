/*
 * XREFs of SepStopReferencingLogonSession @ 0x14046BD78
 * Callers:
 *     SepLinkLogonSessions @ 0x140130B14 (SepLinkLogonSessions.c)
 *     NtSetInformationToken @ 0x14046BEF8 (NtSetInformationToken.c)
 *     SepSetLogonSessionToken @ 0x14055CA6C (SepSetLogonSessionToken.c)
 * Callees:
 *     SepConvertToOwnTokenClaims @ 0x14002D81C (SepConvertToOwnTokenClaims.c)
 *     SepDeReferenceLogonSession @ 0x14052E368 (SepDeReferenceLogonSession.c)
 */

__int64 __fastcall SepStopReferencingLogonSession(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // edi
  _QWORD *v4; // rdx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  result = SepConvertToOwnTokenClaims(a1);
  v3 = result;
  if ( (int)result >= 0 )
  {
    v4 = *(_QWORD **)(a1 + 216);
    _m_prefetchw(v4 + 3);
    v5 = v4[3];
    while ( v5 - 1 > 0 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange64(v4 + 3, v5 - 1, v5);
      if ( v6 == v5 )
        goto LABEL_5;
    }
    if ( v5 != 1 )
      __fastfail(0xEu);
    v7 = v4[1];
    v8 = v4[20];
    v9 = v7;
    SepDeReferenceLogonSession(&v9, v8);
LABEL_5:
    *(_DWORD *)(a1 + 200) |= 0x20u;
    return v3;
  }
  return result;
}
