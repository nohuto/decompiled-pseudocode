/*
 * XREFs of PspSetJobIoRateControl @ 0x1404F1E7C
 * Callers:
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     PspIoRateControlInfoIsAnySet @ 0x1400B7168 (PspIoRateControlInfoIsAnySet.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     PspUnlockJob @ 0x140468EB0 (PspUnlockJob.c)
 *     PspUnlockJobConditionally @ 0x140469924 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x140469940 (PspLockJobConditionally.c)
 *     PspLockRootJobExclusive @ 0x14048AB04 (PspLockRootJobExclusive.c)
 *     PspJobIoRateControlDisable @ 0x1404A204C (PspJobIoRateControlDisable.c)
 *     PspIoRateEntryDeactivate @ 0x1404F1A38 (PspIoRateEntryDeactivate.c)
 *     PspIoRateEntryActivate @ 0x1404F1AB0 (PspIoRateEntryActivate.c)
 *     EtwTracePsIoRateControl @ 0x1404F1C9C (EtwTracePsIoRateControl.c)
 *     PspSetJobIoAttribution @ 0x1404F206C (PspSetJobIoAttribution.c)
 *     PspSetJobIoRateControlForVolume @ 0x140680918 (PspSetJobIoRateControlForVolume.c)
 */

__int64 __fastcall PspSetJobIoRateControl(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 *v5; // r14
  _BYTE *v6; // rax
  _BYTE *v7; // r15
  unsigned int v8; // esi
  __int64 v9; // rdx
  int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // rax
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  char v17; // [rsp+80h] [rbp+40h] BYREF
  char v18; // [rsp+90h] [rbp+50h] BYREF
  __int64 v19; // [rsp+98h] [rbp+58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v19 = 0LL;
  v16 = 0LL;
  v17 = 0;
  --CurrentThread->KernelApcDisable;
  v18 = 0;
  v5 = (unsigned __int64 *)(a1 + 1496);
  v6 = (_BYTE *)KeAbPreAcquire(a1 + 1496, 0LL, 0);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v6, (ULONG_PTR)v5);
  v8 = 1;
  if ( v7 )
    v7[26] |= 1u;
  if ( (*(_DWORD *)(a2 + 36) & 1) == 0 )
  {
    v15 = v16;
    if ( *(_QWORD *)(a1 + 1432) )
      v15 = *(_QWORD *)(a1 + 1432);
    v16 = v15;
    v8 = PspJobIoRateControlDisable(a1);
LABEL_15:
    v10 = 0;
    if ( !v8 )
      goto LABEL_18;
    goto LABEL_16;
  }
  PspLockRootJobExclusive(a1, (__int64)CurrentThread, &v19);
  PspLockJobConditionally(a1, &v19);
  LOBYTE(v9) = 1;
  v10 = PspSetJobIoAttribution(a1, v9, 0LL, 1LL);
  if ( v10 >= 0 )
  {
    PspUnlockJobConditionally(a1, &v19);
    PspUnlockJob(v19, (__int64)CurrentThread);
    if ( *(_QWORD *)(a2 + 24) )
    {
      v10 = PspSetJobIoRateControlForVolume(a1, a2, (unsigned int)&v17, (unsigned int)&v18, (__int64)&v16);
      if ( v10 >= 0 )
      {
LABEL_11:
        if ( !v17 )
          goto LABEL_13;
        goto LABEL_12;
      }
    }
    else
    {
      if ( !(unsigned __int8)PspIoRateControlInfoIsAnySet((_QWORD *)a2) )
      {
        if ( !*(_QWORD *)(a1 + 1432) )
          goto LABEL_15;
        v16 = *(_QWORD *)(a1 + 1432);
        PspIoRateEntryDeactivate((struct _EX_RUNDOWN_REF *)(a1 + 1392));
LABEL_12:
        v8 = 2;
LABEL_13:
        if ( v18 )
          --v8;
        goto LABEL_15;
      }
      v10 = PspIoRateEntryActivate((struct _EX_RUNDOWN_REF *)(a1 + 1392), a1, a2, &v17);
      if ( v10 >= 0 )
      {
        v16 = *(_QWORD *)(a1 + 1432);
        v18 = 1;
        goto LABEL_11;
      }
    }
LABEL_16:
    PspLockRootJobExclusive(a1, (__int64)CurrentThread, &v19);
    PspLockJobConditionally(a1, &v19);
    PspSetJobIoAttribution(a1, 0LL, 0LL, v8);
  }
  PspUnlockJobConditionally(a1, &v19);
  PspUnlockJob(v19, (__int64)CurrentThread);
LABEL_18:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v11, v12, v13);
  EtwTracePsIoRateControl(*(_DWORD *)(a1 + 1236), a2, v16, v10);
  return (unsigned int)v10;
}
