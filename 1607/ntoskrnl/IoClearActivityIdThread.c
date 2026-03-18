/*
 * XREFs of IoClearActivityIdThread @ 0x140085278
 * Callers:
 *     PiDqIrpQueryCreate @ 0x14048B3E8 (PiDqIrpQueryCreate.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14048B654 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall IoClearActivityIdThread(void *a1)
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  result[1].WaitBlock[0].SparePtr = a1;
  return result;
}
