/*
 * XREFs of IoSetActivityIdThread @ 0x140099C34
 * Callers:
 *     PiDqIrpQueryCreate @ 0x14045DEAC (PiDqIrpQueryCreate.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14045E118 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall IoSetActivityIdThread(void *a1)
{
  struct _KTHREAD *CurrentThread; // rdx
  PVOID result; // rax

  CurrentThread = KeGetCurrentThread();
  result = CurrentThread[1].WaitBlock[0].SparePtr;
  CurrentThread[1].WaitBlock[0].SparePtr = a1;
  return result;
}
