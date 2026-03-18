/*
 * XREFs of KeInitializeAffinityEx @ 0x1400D5490
 * Callers:
 *     PpmUpdateProcessorPolicy @ 0x1405454EC (PpmUpdateProcessorPolicy.c)
 * Callees:
 *     <none>
 */

void *__fastcall KeInitializeAffinityEx(_QWORD *a1)
{
  *a1 = 1310721LL;
  return memset(a1 + 1, 0, 0xA0uLL);
}
