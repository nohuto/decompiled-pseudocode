/*
 * XREFs of PsQueryThreadTerminationPort @ 0x1403B4228
 * Callers:
 *     sub_140217EA0 @ 0x140217EA0 (sub_140217EA0.c)
 * Callees:
 *     <none>
 */

void *volatile *PsQueryThreadTerminationPort()
{
  return &KeGetCurrentThread()[1].StackLimit;
}
