/*
 * XREFs of PsGetCurrentThreadTeb @ 0x140120674
 * Callers:
 *     EtwTraceThread @ 0x14053C038 (EtwTraceThread.c)
 *     EtwpPsProvTraceThread @ 0x1406E4CDC (EtwpPsProvTraceThread.c)
 * Callees:
 *     <none>
 */

PVOID PsGetCurrentThreadTeb(void)
{
  if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeGetCurrentThread()->ApcStateIndex == 1 )
    return 0LL;
  else
    return KeGetCurrentThread()->Teb;
}
