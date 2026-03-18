/*
 * XREFs of PspUserThreadStartup @ 0x140459060
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     VslpEnterIumSecureMode @ 0x1400AA174 (VslpEnterIumSecureMode.c)
 *     ExGenRandom @ 0x1400F0494 (ExGenRandom.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     PfProcessCreateNotification @ 0x1403E6410 (PfProcessCreateNotification.c)
 *     DbgkCreateThread @ 0x140459228 (DbgkCreateThread.c)
 *     PspWriteTebIdealProcessor @ 0x14045949C (PspWriteTebIdealProcessor.c)
 *     MmGetSessionLocaleId @ 0x14045964C (MmGetSessionLocaleId.c)
 *     PspDisablePrimaryTokenExchange @ 0x140459688 (PspDisablePrimaryTokenExchange.c)
 *     PspInitializeThunkContext @ 0x140459784 (PspInitializeThunkContext.c)
 *     PspTerminateThreadByPointer @ 0x140509A30 (PspTerminateThreadByPointer.c)
 *     DbgkCreateMinimalThread @ 0x14061AAC8 (DbgkCreateMinimalThread.c)
 */

NTSTATUS PspUserThreadStartup()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v1; // r8
  __int64 Process; // rsi
  _DWORD *Teb; // rbx
  NTSTATUS result; // eax
  struct _KPRCB *CurrentPrcb; // rbx
  int v6; // r8d
  unsigned __int64 v7; // rax
  int v8; // esp
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // [rsp+30h] [rbp-B8h]
  char v12[112]; // [rsp+50h] [rbp-98h] BYREF

  __writecr8(0LL);
  CurrentThread = KeGetCurrentThread();
  PspDisablePrimaryTokenExchange(CurrentThread);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) == 0 )
  {
    LOBYTE(v1) = 1;
    PspTerminateThreadByPointer(CurrentThread, 3221225547LL, v1);
  }
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( (*(_DWORD *)(Process + 1740) & 1) != 0 )
  {
    DbgkCreateMinimalThread(CurrentThread);
  }
  else
  {
    Teb = CurrentThread->Teb;
    Teb[66] = MmGetSessionLocaleId();
    PspWriteTebIdealProcessor(CurrentThread, CurrentThread);
    DbgkCreateThread(CurrentThread);
    if ( (*(_DWORD *)(Process + 772) & 0x80000) == 0
      && !_interlockedbittestandset((volatile signed __int32 *)(Process + 772), 0x13u) )
    {
      PfProcessCreateNotification(Process, *(_QWORD *)(Process + 952));
    }
  }
  while ( !MEMORY[0xFFFFF78000000330] )
  {
    v11 = MEMORY[0xFFFFF78000000014];
    CurrentPrcb = KeGetCurrentPrcb();
    v6 = ExGenRandom(1);
    v7 = __rdtsc();
    _InterlockedCompareExchange(
      (volatile signed __int32 *)0xFFFFF78000000330LL,
      (v8 + 48) ^ v11 ^ HIDWORD(v11) ^ v7 ^ v6 ^ CurrentPrcb->MmPageFaultCount ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime,
      0);
  }
  if ( *(_QWORD *)(Process + 720) )
  {
    v9 = VslpEnterIumSecureMode(0, 0LL, KeGetCurrentThread()->SecureThreadCookie, (__int64)v12);
    LOBYTE(v10) = 1;
    return PspTerminateThreadByPointer(CurrentThread, v9, v10);
  }
  else if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
  {
    return KeWaitForSingleObject(CurrentThread, UserRequest, 1, 0, 0LL);
  }
  else
  {
    result = *(_DWORD *)(Process + 1740);
    if ( (result & 1) == 0 )
      return PspInitializeThunkContext();
  }
  return result;
}
