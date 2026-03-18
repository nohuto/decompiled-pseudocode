/*
 * XREFs of PsReportProcessMemoryLimitViolation @ 0x1406C41C8
 * Callers:
 *     MiChargeProcessCommitment @ 0x14008F8D0 (MiChargeProcessCommitment.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     PspSendJobNotification @ 0x14013A2C4 (PspSendJobNotification.c)
 */

void __fastcall PsReportProcessMemoryLimitViolation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbp
  __int64 v6; // rbx
  __int64 v7; // r9
  __int64 v8; // r14
  __int16 v9; // ax

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v6 = *(_QWORD *)(Process[1].Affinity.Bitmap[16] + 816);
  if ( v6 && (*(_DWORD *)(v6 + 256) & 0x100) != 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v8 = KeAbPreAcquire(v6 + 1024, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 1024), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)(v6 + 1024), v8, v6 + 1024, v7);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    if ( *(_QWORD *)(v6 + 456) && (*(_DWORD *)(v6 + 884) & 0x200) != 0 && (Process[1].DirectoryTableBase & 0x24) == 4 )
    {
      _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0x20u);
      PspSendJobNotification(v6, 9LL, (int)Process[1].Header.WaitListHead.Blink, 1);
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 1024), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v6 + 1024));
    KeAbPostRelease(v6 + 1024);
    v9 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v9;
    if ( !v9 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
}
