/*
 * XREFs of PsQueryThreadTerminationPort @ 0x140406224
 * Callers:
 *     sub_1402685C8 @ 0x1402685C8 (sub_1402685C8.c)
 * Callees:
 *     <none>
 */

void *volatile *PsQueryThreadTerminationPort()
{
  return &KeGetCurrentThread()[1].StackLimit;
}
