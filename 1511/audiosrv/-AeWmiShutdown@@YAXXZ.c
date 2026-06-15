/*
 * XREFs of ?AeWmiShutdown@@YAXXZ @ 0x180099F54
 * Callers:
 *     DllMain @ 0x180069D28 (DllMain.c)
 * Callees:
 *     <none>
 */

void AeWmiShutdown(void)
{
  if ( g_fEventTracingEnabled )
  {
    EtwUnregisterTraceGuids(qword_1800AB018);
    qword_1800AB018 = 0LL;
    g_hAEWMITraceHandle = 0LL;
  }
}
