/*
 * XREFs of ?BltQueueWorkerThread@BLTQUEUE@@SAXPEAX@Z @ 0x1C00D2810
 * Callers:
 *     <none>
 * Callees:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C00D24E0 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 */

void __fastcall __noreturn BLTQUEUE::BltQueueWorkerThread(BLTQUEUE *StartContext)
{
  bool v1; // zf
  __int64 v2; // rdx
  struct _KTHREAD *CurrentThread; // rcx

  v1 = *((_BYTE *)StartContext + 221) == 0;
  v2 = 14LL;
  CurrentThread = KeGetCurrentThread();
  if ( !v1 )
    v2 = 20LL;
  KeSetActualBasePriorityThread(CurrentThread, v2);
  BLTQUEUE::BltQueueWorker(StartContext);
}
