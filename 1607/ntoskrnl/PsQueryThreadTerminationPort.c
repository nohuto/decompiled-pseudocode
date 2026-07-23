/*
 * XREFs of PsQueryThreadTerminationPort @ 0x1403E1218
 * Callers:
 *     sub_140231EA8 @ 0x140231EA8 (sub_140231EA8.c)
 * Callees:
 *     <none>
 */

void *volatile *PsQueryThreadTerminationPort()
{
  return &KeGetCurrentThread()[1].StackLimit;
}
