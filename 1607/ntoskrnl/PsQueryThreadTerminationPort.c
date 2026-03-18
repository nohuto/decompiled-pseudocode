/*
 * XREFs of PsQueryThreadTerminationPort @ 0x1403E1218
 * Callers:
 *     sub_14023207C @ 0x14023207C (sub_14023207C.c)
 * Callees:
 *     <none>
 */

void *volatile *PsQueryThreadTerminationPort()
{
  return &KeGetCurrentThread()[1].StackLimit;
}
