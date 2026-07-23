/*
 * XREFs of PsGetCurrentThreadTeb @ 0x1400A9E54
 * Callers:
 *     EtwTraceThread @ 0x1404597E4 (EtwTraceThread.c)
 *     EtwpPsProvTraceThread @ 0x14054B710 (EtwpPsProvTraceThread.c)
 * Callees:
 *     KeIsAttachedProcess @ 0x1400E5D20 (KeIsAttachedProcess.c)
 */

PVOID PsGetCurrentThreadTeb(void)
{
  void *v0; // rbx

  v0 = 0LL;
  if ( (KeGetCurrentThread()->MiscFlags & 0x400) == 0 && !(unsigned __int8)KeIsAttachedProcess() )
    return KeGetCurrentThread()->Teb;
  return v0;
}
