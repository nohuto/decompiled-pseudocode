/*
 * XREFs of KeSetKernelStackSwapEnable @ 0x1400DE5E0
 * Callers:
 *     ExpWorkerThread @ 0x14006F990 (ExpWorkerThread.c)
 *     NtSetInformationFile @ 0x14008E8E0 (NtSetInformationFile.c)
 *     ExpSetSwappingKernelApc @ 0x14039D514 (ExpSetSwappingKernelApc.c)
 *     ObWaitForMultipleObjects @ 0x14040B380 (ObWaitForMultipleObjects.c)
 *     NtQueryInformationFile @ 0x14040F570 (NtQueryInformationFile.c)
 *     ExSwapinWorkerThreads @ 0x1404F5C2C (ExSwapinWorkerThreads.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeSetKernelStackSwapEnable(BOOLEAN Enable)
{
  struct _KTHREAD *CurrentThread; // rdx
  BOOLEAN result; // al

  CurrentThread = KeGetCurrentThread();
  result = (*((_DWORD *)&CurrentThread->0 + 1) & 0x20) != 0;
  if ( Enable != result )
  {
    if ( Enable )
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
  }
  return result;
}
