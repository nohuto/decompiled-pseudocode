/*
 * XREFs of PsChangeQuantumTable @ 0x140581874
 * Callers:
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 *     PspInitPhase0 @ 0x1407C344C (PspInitPhase0.c)
 * Callees:
 *     MmIsThisAnNtAsSystem @ 0x140006D08 (MmIsThisAnNtAsSystem.c)
 *     KeSetQuantumProcess @ 0x14000ABF8 (KeSetQuantumProcess.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     PspComputeQuantum @ 0x14046A2A8 (PspComputeQuantum.c)
 */

void __fastcall PsChangeQuantumTable(char a1, char a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // eax
  int v7; // eax
  char *v8; // rbx
  int v9; // edi
  char v10; // al
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v12; // rbx
  __int64 v13; // r9
  __int64 *i; // rbx
  char v15; // al
  __int64 v16; // r8
  __int16 v17; // ax

  v5 = a2 & 3;
  if ( v5 >= 2 )
    v5 = 2;
  PsPrioritySeparation = v5;
  v7 = a2 & 0xC;
  if ( v7 == 4 )
  {
    v8 = (char *)&PspVariableQuantums;
  }
  else if ( v7 == 8 )
  {
    v8 = PspFixedQuantums;
  }
  else
  {
    v8 = PspFixedQuantums;
    if ( !MmIsThisAnNtAsSystem() )
      v8 = (char *)&PspVariableQuantums;
  }
  v9 = a2 & 0x30;
  if ( v9 != 32 && (v9 == 16 || MmIsThisAnNtAsSystem()) )
    v8 += 3;
  PspForegroundQuantum = *(_WORD *)v8;
  v10 = v8[2];
  PspUseJobSchedulingClasses = v8 == &byte_14072198F;
  byte_14077EC7E = v10;
  if ( a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v12 = KeAbPreAcquire((ULONG_PTR)&PspActiveProcessLock, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&PspActiveProcessLock, v12, (ULONG_PTR)&PspActiveProcessLock, v13);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    for ( i = (__int64 *)PsActiveProcessHead; i != &PsActiveProcessHead; i = (__int64 *)*i )
    {
      v15 = PspComputeQuantum((__int64)(i - 94), *((_BYTE *)i + 738));
      KeSetQuantumProcess(v16, v15);
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
    KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
    v17 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v17;
    if ( !v17
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
