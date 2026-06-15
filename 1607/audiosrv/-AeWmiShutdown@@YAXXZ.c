/*
 * XREFs of ?AeWmiShutdown@@YAXXZ @ 0x18008272C
 * Callers:
 *     DllMain @ 0x18005426C (DllMain.c)
 * Callees:
 *     <none>
 */

void AeWmiShutdown(void)
{
  if ( g_fEventTracingEnabled )
  {
    EtwUnregisterTraceGuids(qword_180091018);
    qword_180091018 = 0LL;
    g_hAEWMITraceHandle = 0LL;
  }
}
