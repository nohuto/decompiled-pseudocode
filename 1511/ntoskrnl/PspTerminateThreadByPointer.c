/*
 * XREFs of PspTerminateThreadByPointer @ 0x1403F2F24
 * Callers:
 *     PspSystemThreadStartup @ 0x1400F7154 (PspSystemThreadStartup.c)
 *     PsDispatchIumService @ 0x1401F5B10 (PsDispatchIumService.c)
 *     PspInsertThread @ 0x1403EF330 (PspInsertThread.c)
 *     PspTerminateAllThreads @ 0x1403F2750 (PspTerminateAllThreads.c)
 *     PspUserThreadStartup @ 0x140445974 (PspUserThreadStartup.c)
 *     NtTerminateProcess @ 0x140450420 (NtTerminateProcess.c)
 *     NtTerminateThread @ 0x1404AF3BC (NtTerminateThread.c)
 *     PsTerminateSystemThread @ 0x1404C2D14 (PsTerminateSystemThread.c)
 * Callees:
 *     KeRequestTerminationThread @ 0x140030C48 (KeRequestTerminationThread.c)
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 *     PspCatchCriticalBreak @ 0x1406417F4 (PspCatchCriticalBreak.c)
 */

__int64 __fastcall PspTerminateThreadByPointer(ULONG_PTR BugCheckParameter1, unsigned int a2, char a3)
{
  __int64 v4; // rdi

  v4 = *(_QWORD *)(BugCheckParameter1 + 544);
  if ( (*(_DWORD *)(BugCheckParameter1 + 1724) & 0x20) != 0 && (*(_DWORD *)(v4 + 772) & 0x40000008) == 0 )
    PspCatchCriticalBreak("Terminating critical thread 0x%p (in %s)\n", BugCheckParameter1);
  if ( a3 && (struct _KTHREAD *)BugCheckParameter1 == KeGetCurrentThread() )
  {
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 1724), 1u);
    PspExitThread(a2);
    __debugbreak();
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 116) & 0x400) != 0 )
    return 3221225506LL;
  if ( (*(_DWORD *)(v4 + 1724) & 1) != 0 )
    return 3221225659LL;
  if ( !_interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 1724), 0) )
    *(_DWORD *)(BugCheckParameter1 + 1760) = a2;
  KeRequestTerminationThread(BugCheckParameter1);
  return 0LL;
}
