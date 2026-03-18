/*
 * XREFs of PspTerminateThreadByPointer @ 0x140509A30
 * Callers:
 *     PspSystemThreadStartup @ 0x140002BE4 (PspSystemThreadStartup.c)
 *     PsDispatchIumService @ 0x14020FC24 (PsDispatchIumService.c)
 *     PspUserThreadStartup @ 0x140459060 (PspUserThreadStartup.c)
 *     PsTerminateSystemThread @ 0x1404EDAF8 (PsTerminateSystemThread.c)
 *     NtTerminateProcess @ 0x140507D84 (NtTerminateProcess.c)
 *     NtTerminateThread @ 0x140508958 (NtTerminateThread.c)
 *     PspTerminateAllThreads @ 0x1405096F0 (PspTerminateAllThreads.c)
 *     PspInsertThread @ 0x140516750 (PspInsertThread.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x1400136A0 (PsGetProcessServerSilo.c)
 *     KeRequestTerminationThread @ 0x1400C9DE0 (KeRequestTerminationThread.c)
 *     PspExitThread @ 0x14051611C (PspExitThread.c)
 *     PspCatchCriticalBreak @ 0x14067FBF8 (PspCatchCriticalBreak.c)
 */

__int64 __fastcall PspTerminateThreadByPointer(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rdi

  v4 = *(_QWORD *)(a1 + 544);
  if ( (*(_DWORD *)(a1 + 1728) & 0x20) != 0 && (*(_DWORD *)(v4 + 772) & 0x40000008) == 0 )
  {
    PsGetProcessServerSilo(v4);
    PspCatchCriticalBreak("Terminating critical thread 0x%p (in %s)\n", (const void *)a1, (const char *)(v4 + 1104));
  }
  if ( a3 && (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1728), 1u);
    PspExitThread(a2);
    __debugbreak();
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
    return 3221225506LL;
  if ( (*(_DWORD *)(v4 + 1740) & 1) != 0 )
    return 3221225659LL;
  if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 1728), 0) )
    *(_DWORD *)(a1 + 1776) = a2;
  KeRequestTerminationThread(a1);
  return 0LL;
}
