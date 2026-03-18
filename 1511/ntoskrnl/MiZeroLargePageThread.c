/*
 * XREFs of MiZeroLargePageThread @ 0x140131D18
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     MiZeroLargePages @ 0x140131E1C (MiZeroLargePages.c)
 */

__int64 __fastcall MiZeroLargePageThread(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8

  CurrentThread = KeGetCurrentThread();
  v5 = KeSetActualBasePriorityThread((__int64)CurrentThread, 0LL, a3);
  MiZeroLargePages(v6, a1, 0LL);
  KeSetActualBasePriorityThread((__int64)CurrentThread, v5, v7);
  return MiDeleteZeroThreadContext(MiSystemPartition, a1, 1LL);
}
