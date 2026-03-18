/*
 * XREFs of RtlpTerminateCurrentProcess @ 0x140648DB8
 * Callers:
 *     RtlAssert @ 0x1401F912C (RtlAssert.c)
 * Callees:
 *     <none>
 */

__int64 RtlpTerminateCurrentProcess()
{
  return PsTerminateProcess((ULONG_PTR)KeGetCurrentThread()->ApcState.Process, 0xC0000001);
}
