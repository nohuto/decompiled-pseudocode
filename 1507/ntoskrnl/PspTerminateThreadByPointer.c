/*
 * XREFs of PspTerminateThreadByPointer @ 0x1404205B0
 * Callers:
 *     PspSystemThreadStartup @ 0x1400DAAD4 (PspSystemThreadStartup.c)
 *     PsDispatchIumService @ 0x140244710 (PsDispatchIumService.c)
 *     NtTerminateProcess @ 0x14041C6B4 (NtTerminateProcess.c)
 *     PspTerminateAllThreads @ 0x14041CBA4 (PspTerminateAllThreads.c)
 *     NtTerminateThread @ 0x140420500 (NtTerminateThread.c)
 *     PspInsertThread @ 0x140423090 (PspInsertThread.c)
 *     PspUserThreadStartup @ 0x14044F770 (PspUserThreadStartup.c)
 *     PsTerminateSystemThread @ 0x140557A14 (PsTerminateSystemThread.c)
 * Callees:
 *     KeRequestTerminationThread @ 0x14000C2F4 (KeRequestTerminationThread.c)
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     PspCatchCriticalBreak @ 0x1406C3D14 (PspCatchCriticalBreak.c)
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
  if ( (*(_DWORD *)(v4 + 1716) & 1) != 0 )
    return 3221225659LL;
  if ( !_interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 1724), 0) )
    *(_DWORD *)(BugCheckParameter1 + 1760) = a2;
  KeRequestTerminationThread(BugCheckParameter1);
  return 0LL;
}
