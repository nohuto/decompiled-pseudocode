/*
 * XREFs of CmpFlushUnsupportedOperationTelemetry @ 0x14047D4CC
 * Callers:
 *     CmpDoReconcileNextHive @ 0x1404806D8 (CmpDoReconcileNextHive.c)
 *     CmShutdownSystem @ 0x1405FC64C (CmShutdownSystem.c)
 * Callees:
 *     CmpSendUnsupportedOperationTelemetryEvent @ 0x14060BEB4 (CmpSendUnsupportedOperationTelemetryEvent.c)
 */

__int64 CmpFlushUnsupportedOperationTelemetry()
{
  int v0; // ebx
  volatile __int32 *v1; // rdi
  __int64 result; // rax

  v0 = 0;
  v1 = (volatile __int32 *)&CmpUnsupportedOperationHits;
  do
  {
    if ( _InterlockedExchange(v1, 0) )
      result = CmpSendUnsupportedOperationTelemetryEvent((unsigned int)v0);
    ++v0;
    ++v1;
  }
  while ( v0 < 24 );
  return result;
}
