/*
 * XREFs of ?BltQueueWorkerThread@BLTQUEUE@@SAXPEAX@Z @ 0x1C00CEB30
 * Callers:
 *     <none>
 * Callees:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C00CF6B0 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 */

void __fastcall __noreturn BLTQUEUE::BltQueueWorkerThread(BLTQUEUE *StartContext)
{
  bool v1; // zf
  __int64 v2; // rdx
  struct _KTHREAD *CurrentThread; // rcx

  v1 = *((_BYTE *)StartContext + 317) == 0;
  v2 = 14LL;
  CurrentThread = KeGetCurrentThread();
  if ( !v1 )
    v2 = 20LL;
  KeSetActualBasePriorityThread(CurrentThread, v2);
  BLTQUEUE::BltQueueWorker(StartContext);
  JUMPOUT(0x1C00CEB62LL);
}
