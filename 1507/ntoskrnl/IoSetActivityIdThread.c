/*
 * XREFs of IoSetActivityIdThread @ 0x14011A840
 * Callers:
 *     PiDqIrpQueryCreate @ 0x1404419DC (PiDqIrpQueryCreate.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x140441C48 (PiDqObjectManagerServiceActionQueue.c)
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
