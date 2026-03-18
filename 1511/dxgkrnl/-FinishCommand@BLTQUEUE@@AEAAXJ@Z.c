/*
 * XREFs of ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C00BFB94
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C00BFA8C (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C00E51EC (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C015DC70 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x1C015EB74 (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C015FBB0 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTQUEUE::FinishCommand(LARGE_INTEGER *this, DWORD a2)
{
  LARGE_INTEGER PerformanceCounter; // rax
  struct _KEVENT *QuadPart; // rcx

  this[36].LowPart = a2;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  QuadPart = (struct _KEVENT *)this[31].QuadPart;
  this[69] = PerformanceCounter;
  KeSetEvent(QuadPart, 0, 0);
}
