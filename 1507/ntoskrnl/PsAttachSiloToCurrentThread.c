/*
 * XREFs of PsAttachSiloToCurrentThread @ 0x14052EA20
 * Callers:
 *     SepRmCallLsa @ 0x140117528 (SepRmCallLsa.c)
 *     EtwpLogger @ 0x1404A17E4 (EtwpLogger.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14052E744 (SepCleanupLUIDDeviceMapDirectory.c)
 *     EtwpServerSiloCreateNotify @ 0x140593ABC (EtwpServerSiloCreateNotify.c)
 *     SeInitServerSilo @ 0x140593C18 (SeInitServerSilo.c)
 *     SepRmCommandServerThread @ 0x1405A7600 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x1405A79A8 (SepRmLsaConnectRequest.c)
 *     CsrShutdownSynchronization @ 0x1406C094C (CsrShutdownSynchronization.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1406D62B4 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     EtwpServerSiloTerminateNotify @ 0x1406E6DD0 (EtwpServerSiloTerminateNotify.c)
 *     ExWnfServerSiloTerminated @ 0x1406F7718 (ExWnfServerSiloTerminated.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PsAttachSiloToCurrentThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r14
  __int64 v7; // rbp
  __int64 v8; // r9
  __int64 v9; // rbp
  __int64 v10; // rax
  __int16 v11; // ax
  __int64 v13; // rax

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  if ( (PspDebugFlags & 4) != 0 && !a1 && Process[2].ActiveProcessors.Bitmap[12] && (PspDebugFlags & 8) != 0 )
    __debugbreak();
  if ( (PspDebugFlags & 0x10) != 0 )
  {
    if ( a1 )
    {
      v13 = *(_QWORD *)(a1 + 256);
      if ( v13 )
      {
        if ( *(int *)(v13 + 112) >= 3 && (PspDebugFlags & 0x20) != 0 )
          __debugbreak();
      }
    }
  }
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&Process[1], 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)&Process[1], v7, (ULONG_PTR)&Process[1], v8);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v9 = *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160];
  v10 = v9;
  if ( v9 == -3 )
    v10 = Process[2].ActiveProcessors.Bitmap[12];
  if ( v10 == a1 )
    v9 = -2LL;
  else
    *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] = a1;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&Process[1].Header.Lock);
  KeAbPostRelease((ULONG_PTR)&Process[1]);
  v11 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v11;
  if ( !v11
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v9;
}
