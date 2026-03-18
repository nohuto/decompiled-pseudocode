/*
 * XREFs of RtlpTerminateCurrentProcess @ 0x14068837C
 * Callers:
 *     RtlAssert @ 0x140213458 (RtlAssert.c)
 * Callees:
 *     <none>
 */

__int64 RtlpTerminateCurrentProcess()
{
  return PsTerminateProcess((ULONG_PTR)KeGetCurrentThread()->ApcState.Process);
}
