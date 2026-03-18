/*
 * XREFs of PspUserThreadStartup @ 0x14044F770
 * Callers:
 *     <none>
 * Callees:
 *     ExGenRandom @ 0x140020AD0 (ExGenRandom.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockExclusive @ 0x1400F36C0 (ExfReleasePushLockExclusive.c)
 *     KeSynchronizeAddressPolicy @ 0x1401FF8D4 (KeSynchronizeAddressPolicy.c)
 *     KeKvaShadowingActive @ 0x140209EF0 (KeKvaShadowingActive.c)
 *     SeTokenIsAdmin @ 0x14040FEA8 (SeTokenIsAdmin.c)
 *     PspTerminateThreadByPointer @ 0x1404205B0 (PspTerminateThreadByPointer.c)
 *     PfProcessCreateNotification @ 0x140443FBC (PfProcessCreateNotification.c)
 *     DbgkCreateThread @ 0x14044FA8C (DbgkCreateThread.c)
 *     MmGetSessionLocaleId @ 0x14044FD10 (MmGetSessionLocaleId.c)
 *     PspInitializeThunkContext @ 0x14044FD4C (PspInitializeThunkContext.c)
 *     PspWriteTebIdealProcessor @ 0x140479050 (PspWriteTebIdealProcessor.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     DbgkCreateMinimalThread @ 0x1406694E4 (DbgkCreateMinimalThread.c)
 *     HvlStartSecureThread @ 0x140670C80 (HvlStartSecureThread.c)
 *     MmSynchronizeAddressPolicy @ 0x1406A85EC (MmSynchronizeAddressPolicy.c)
 */

NTSTATUS __fastcall PspUserThreadStartup(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // r15
  __int64 v6; // rbx
  __int64 v7; // r9
  __int16 v8; // ax
  PACCESS_TOKEN v9; // rbx
  BOOL v10; // edi
  __int64 v11; // rdi
  _DWORD *Teb; // rbx
  struct _KPRCB *CurrentPrcb; // rbx
  int v14; // ecx
  unsigned __int64 v15; // rax
  int v16; // esp
  NTSTATUS result; // eax
  unsigned int started; // eax
  signed __int32 v19[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v20; // [rsp+30h] [rbp-38h]
  __int64 v21; // [rsp+80h] [rbp+18h]

  __writecr8(0LL);
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( (*(_DWORD *)(Process + 768) & 0x8000) == 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(Process + 768), 0xFu);
    --CurrentThread->KernelApcDisable;
    _InterlockedOr(v19, 0);
    if ( (*(_QWORD *)(Process + 728) & 1) != 0 )
    {
      v6 = KeAbPreAcquire(Process + 728, 0LL, 0LL, a4);
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Process + 728), v6, Process + 728, v7);
      if ( v6 )
        *(_BYTE *)(v6 + 26) |= 1u;
      ExfReleasePushLockExclusive((volatile signed __int64 *)(Process + 728));
      if ( v6 )
        KeAbPostRelease(Process + 728);
    }
    v8 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v8;
    if ( !v8
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( ((unsigned int)KeKvaShadowingActive() || (KeGetCurrentPrcb()->BpbFeatures & 2) != 0)
    && (*(_DWORD *)(Process + 1716) & 0x800) == 0 )
  {
    v9 = PsReferencePrimaryToken((PEPROCESS)Process);
    v10 = SeTokenIsAdmin(v9) != 0;
    ObfDereferenceObject(v9);
    if ( *(_QWORD *)(Process + 720) )
      v10 = 1;
    if ( v10 )
    {
      *(_BYTE *)(Process + 640) = 1;
      _InterlockedOr(v19, 0);
    }
    if ( *(_BYTE *)(Process + 640) == 1 )
      *(_QWORD *)(Process + 1952) = 0LL;
    KeSynchronizeAddressPolicy(Process);
    if ( !_interlockedbittestandset((volatile signed __int32 *)(Process + 1716), 0xBu) && *(_BYTE *)(Process + 640) == 1 )
      MmSynchronizeAddressPolicy(Process);
    _interlockedbittestandset((volatile signed __int32 *)(Process + 1716), 0xBu);
  }
  if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) == 0 )
    PspTerminateThreadByPointer((ULONG_PTR)CurrentThread, 0xC000004B, 1);
  v11 = (__int64)CurrentThread->ApcState.Process;
  v20 = v11;
  if ( (*(_DWORD *)(v11 + 1716) & 1) != 0 )
  {
    DbgkCreateMinimalThread(CurrentThread);
  }
  else
  {
    Teb = CurrentThread->Teb;
    Teb[66] = MmGetSessionLocaleId();
    PspWriteTebIdealProcessor(CurrentThread, CurrentThread);
    DbgkCreateThread(CurrentThread);
    if ( (*(_DWORD *)(v11 + 772) & 0x80000) == 0
      && !_interlockedbittestandset((volatile signed __int32 *)(v11 + 772), 0x13u) )
    {
      PfProcessCreateNotification(v11, *(_QWORD *)(v11 + 952));
    }
  }
  while ( !MEMORY[0xFFFFF78000000330] )
  {
    v21 = MEMORY[0xFFFFF78000000014];
    CurrentPrcb = KeGetCurrentPrcb();
    v14 = ExGenRandom(1);
    v15 = __rdtsc();
    _InterlockedCompareExchange(
      (volatile signed __int32 *)0xFFFFF78000000330LL,
      (v16 + 128) ^ v21 ^ HIDWORD(v21) ^ v15 ^ v14 ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime ^ CurrentPrcb->MmPageFaultCount,
      0);
  }
  if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 1) != 0 )
    return KeWaitForSingleObject(CurrentThread, UserRequest, 1, 0, 0LL);
  result = *(_DWORD *)(v11 + 1716);
  if ( (result & 1) == 0 )
  {
    if ( *(_QWORD *)(v11 + 720) )
    {
      started = HvlStartSecureThread();
      return PspTerminateThreadByPointer((ULONG_PTR)CurrentThread, started, 1);
    }
    else
    {
      return PspInitializeThunkContext();
    }
  }
  return result;
}
