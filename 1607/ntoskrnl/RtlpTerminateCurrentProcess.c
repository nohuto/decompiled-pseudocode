/*
 * XREFs of RtlpTerminateCurrentProcess @ 0x140688460
 * Callers:
 *     RtlAssert @ 0x140213284 (RtlAssert.c)
 * Callees:
 *     <none>
 */

__int64 RtlpTerminateCurrentProcess()
{
  return PsTerminateProcess((ULONG_PTR)KeGetCurrentThread()->ApcState.Process);
}
