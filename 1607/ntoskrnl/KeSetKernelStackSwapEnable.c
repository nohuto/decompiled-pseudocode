/*
 * XREFs of KeSetKernelStackSwapEnable @ 0x14007B5E4
 * Callers:
 *     NtSetInformationFile @ 0x140079360 (NtSetInformationFile.c)
 *     ExpWorkerThread @ 0x1400E7700 (ExpWorkerThread.c)
 *     ExpSetSwappingKernelApc @ 0x1403D1E74 (ExpSetSwappingKernelApc.c)
 *     NtQueryInformationFile @ 0x140444D30 (NtQueryInformationFile.c)
 *     ObWaitForMultipleObjects @ 0x14044EDD0 (ObWaitForMultipleObjects.c)
 *     ExSwapinWorkerThreads @ 0x14052ECF0 (ExSwapinWorkerThreads.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeSetKernelStackSwapEnable(BOOLEAN Enable)
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v2; // dl

  CurrentThread = KeGetCurrentThread();
  v2 = (*((_DWORD *)&CurrentThread->0 + 1) & 0x20) != 0;
  if ( Enable != v2 )
  {
    if ( Enable )
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
  }
  return v2;
}
