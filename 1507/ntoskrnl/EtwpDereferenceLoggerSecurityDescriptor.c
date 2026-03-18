/*
 * XREFs of EtwpDereferenceLoggerSecurityDescriptor @ 0x1404D32A8
 * Callers:
 *     EtwpCheckLoggerControlAccess @ 0x1404D3244 (EtwpCheckLoggerControlAccess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406E58C8 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwpDereferenceLoggerSecurityDescriptor(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rax
  __int64 v3; // r8
  signed __int64 v4; // rtt

  _m_prefetchw((const void *)(a1 + 800));
  v2 = *(_QWORD *)(a1 + 800);
  v3 = a2 ^ v2;
  if ( (a2 ^ (unsigned __int64)v2) >= 0xF )
  {
LABEL_4:
    ObDereferenceSecurityDescriptor(a2, 1u, v3, a2);
  }
  else
  {
    while ( 1 )
    {
      v4 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 800), v2 + 1, v2);
      if ( v4 == v2 )
        break;
      if ( (a2 ^ (unsigned __int64)v2) >= 0xF )
        goto LABEL_4;
    }
  }
}
