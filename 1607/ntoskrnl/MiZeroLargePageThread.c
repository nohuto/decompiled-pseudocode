/*
 * XREFs of MiZeroLargePageThread @ 0x14013F190
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x1400D2840 (KeSetActualBasePriorityThread.c)
 *     MiDeleteZeroThreadContext @ 0x14013F1EC (MiDeleteZeroThreadContext.c)
 *     MiZeroLargePages @ 0x14013F2D0 (MiZeroLargePages.c)
 */

void __fastcall MiZeroLargePageThread(void *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = KeSetActualBasePriorityThread((__int64)CurrentThread, 0);
  MiZeroLargePages(v4, a1);
  KeSetActualBasePriorityThread((__int64)CurrentThread, v3);
  MiDeleteZeroThreadContext(a1);
  ExFreePoolWithTag(a1, 0);
}
