/*
 * XREFs of PsGetCurrentThreadTeb @ 0x1400EB578
 * Callers:
 *     EtwTraceThread @ 0x140502700 (EtwTraceThread.c)
 *     EtwpPsProvTraceThread @ 0x140661CA4 (EtwpPsProvTraceThread.c)
 * Callees:
 *     KeIsAttachedProcess @ 0x1400701C0 (KeIsAttachedProcess.c)
 */

PVOID PsGetCurrentThreadTeb(void)
{
  void *v0; // rbx

  v0 = 0LL;
  if ( (KeGetCurrentThread()->MiscFlags & 0x400) == 0 && !KeIsAttachedProcess() )
    return KeGetCurrentThread()->Teb;
  return v0;
}
