/*
 * XREFs of ?AeWmiShutdown@@YAXXZ @ 0x18009D0E4
 * Callers:
 *     DllMain @ 0x18006B014 (DllMain.c)
 * Callees:
 *     <none>
 */

void AeWmiShutdown(void)
{
  if ( g_fEventTracingEnabled )
  {
    EtwUnregisterTraceGuids(qword_1800AD018);
    qword_1800AD018 = 0LL;
    g_hAEWMITraceHandle = 0LL;
  }
}
