/*
 * XREFs of PsGetCurrentThreadTeb @ 0x1400AB8EC
 * Callers:
 *     EtwTraceThread @ 0x14045A914 (EtwTraceThread.c)
 *     EtwpPsProvTraceThread @ 0x14054B1D0 (EtwpPsProvTraceThread.c)
 * Callees:
 *     KeIsAttachedProcess @ 0x1400E7E80 (KeIsAttachedProcess.c)
 */

PVOID PsGetCurrentThreadTeb(void)
{
  void *v0; // rbx

  v0 = 0LL;
  if ( (KeGetCurrentThread()->MiscFlags & 0x400) == 0 && !(unsigned __int8)KeIsAttachedProcess() )
    return KeGetCurrentThread()->Teb;
  return v0;
}
