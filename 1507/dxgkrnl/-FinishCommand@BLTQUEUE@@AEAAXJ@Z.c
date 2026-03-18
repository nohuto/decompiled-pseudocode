/*
 * XREFs of ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C00AD8D4
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C00AD7D0 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C00D24E0 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C0159950 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x1C015A850 (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C015B8BC (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
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
  this[66] = PerformanceCounter;
  KeSetEvent(QuadPart, 0, 0);
}
