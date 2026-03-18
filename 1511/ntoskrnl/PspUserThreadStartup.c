/*
 * XREFs of PspUserThreadStartup @ 0x140445974
 * Callers:
 *     <none>
 * Callees:
 *     ExGenRandom @ 0x14002D854 (ExGenRandom.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     PspTerminateThreadByPointer @ 0x1403F2F24 (PspTerminateThreadByPointer.c)
 *     DbgkCreateThread @ 0x140445B24 (DbgkCreateThread.c)
 *     PspWriteTebIdealProcessor @ 0x140445D80 (PspWriteTebIdealProcessor.c)
 *     MmGetSessionLocaleId @ 0x140445F30 (MmGetSessionLocaleId.c)
 *     PspDisablePrimaryTokenExchange @ 0x140445F6C (PspDisablePrimaryTokenExchange.c)
 *     PspInitializeThunkContext @ 0x14044603C (PspInitializeThunkContext.c)
 *     PfProcessCreateNotification @ 0x1404D6424 (PfProcessCreateNotification.c)
 *     DbgkCreateMinimalThread @ 0x1405F089C (DbgkCreateMinimalThread.c)
 *     HvlStartSecureThread @ 0x1405F6D70 (HvlStartSecureThread.c)
 */

NTSTATUS PspUserThreadStartup()
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rsi
  _DWORD *Teb; // rbx
  struct _KPRCB *CurrentPrcb; // rbx
  int v4; // ecx
  unsigned __int64 v5; // rax
  int v6; // esp
  unsigned int started; // eax
  NTSTATUS result; // eax
  __int64 v9; // [rsp+80h] [rbp+18h]

  __writecr8(0LL);
  CurrentThread = KeGetCurrentThread();
  PspDisablePrimaryTokenExchange(CurrentThread);
  if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) == 0 )
    PspTerminateThreadByPointer((ULONG_PTR)CurrentThread, 0xC000004B, 1);
  Process = CurrentThread->ApcState.Process;
  if ( (HIDWORD(Process[2].SwapListEntry.Next) & 1) != 0 )
  {
    DbgkCreateMinimalThread(CurrentThread);
  }
  else
  {
    Teb = CurrentThread->Teb;
    Teb[66] = MmGetSessionLocaleId();
    PspWriteTebIdealProcessor(CurrentThread, CurrentThread);
    DbgkCreateThread(CurrentThread);
    if ( (Process[1].DirectoryTableBase & 0x8000000000000LL) == 0
      && !_interlockedbittestandset((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x13u) )
    {
      PfProcessCreateNotification(Process, Process[1].Affinity.Bitmap[17]);
    }
  }
  while ( !MEMORY[0xFFFFF78000000330] )
  {
    v9 = MEMORY[0xFFFFF78000000014];
    CurrentPrcb = KeGetCurrentPrcb();
    v4 = ExGenRandom(1);
    v5 = __rdtsc();
    _InterlockedCompareExchange(
      (volatile signed __int32 *)0xFFFFF78000000330LL,
      (v6 + 128) ^ v9 ^ HIDWORD(v9) ^ v5 ^ v4 ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime ^ CurrentPrcb->MmPageFaultCount,
      0);
  }
  if ( Process->SecurePid )
  {
    started = HvlStartSecureThread();
    return PspTerminateThreadByPointer((ULONG_PTR)CurrentThread, started, 1);
  }
  else if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 1) != 0 )
  {
    return KeWaitForSingleObject(CurrentThread, UserRequest, 1, 0, 0LL);
  }
  else
  {
    result = HIDWORD(Process[2].SwapListEntry.Next);
    if ( (result & 1) == 0 )
      return PspInitializeThunkContext();
  }
  return result;
}
