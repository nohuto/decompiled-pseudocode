/*
 * XREFs of EtwpDereferenceLoggerSecurityDescriptor @ 0x140490CE4
 * Callers:
 *     EtwpCheckLoggerControlAccess @ 0x140490C98 (EtwpCheckLoggerControlAccess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406A3390 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwpDereferenceLoggerSecurityDescriptor(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 784));
  v2 = *(_QWORD *)(a1 + 784);
  if ( (a2 ^ (unsigned __int64)v2) >= 0xF )
  {
LABEL_4:
    ObDereferenceSecurityDescriptor(a2, 1u);
  }
  else
  {
    while ( 1 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 784), v2 + 1, v2);
      if ( v3 == v2 )
        break;
      if ( (a2 ^ (unsigned __int64)v2) >= 0xF )
        goto LABEL_4;
    }
  }
}
