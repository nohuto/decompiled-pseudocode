/*
 * XREFs of SmSetThreadPagePriority @ 0x1400F7AD8
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400F7568 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperCommandProcess @ 0x14011066C (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x140070140 (PsGetPagePriorityThread.c)
 *     PsSetPagePriorityThread @ 0x1400FB7D0 (PsSetPagePriorityThread.c)
 */

__int64 __fastcall SmSetThreadPagePriority(struct _KTHREAD **a1)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 result; // rax
  __int64 v3; // r8
  int v4; // edx

  CurrentThread = *a1;
  if ( !*a1 )
  {
    CurrentThread = KeGetCurrentThread();
    *a1 = CurrentThread;
  }
  result = PsGetPagePriorityThread((__int64)CurrentThread);
  if ( (_DWORD)result != v4 )
    return PsSetPagePriorityThread(v3);
  return result;
}
