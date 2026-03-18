/*
 * XREFs of RtlpTerminateCurrentProcess @ 0x1406CBE3C
 * Callers:
 *     RtlAssert @ 0x140248194 (RtlAssert.c)
 * Callees:
 *     <none>
 */

__int64 RtlpTerminateCurrentProcess()
{
  return PsTerminateProcess((__int64)KeGetCurrentThread()->ApcState.Process, 0xC0000001);
}
