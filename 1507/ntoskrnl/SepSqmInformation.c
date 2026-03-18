/*
 * XREFs of SepSqmInformation @ 0x1406D7ABC
 * Callers:
 *     SeAdjustObjectAppContainerSecurity @ 0x1406D7010 (SeAdjustObjectAppContainerSecurity.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     EtwRegister @ 0x14054C680 (EtwRegister.c)
 *     SepSetSqmObjectName @ 0x1406D79D8 (SepSetSqmObjectName.c)
 */

void __fastcall SepSqmInformation(struct _KTHREAD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // r9
  signed __int8 v8; // cf
  __int64 v9; // rdi
  struct _KTHREAD *v10; // rcx
  __int16 v11; // ax
  __int16 v12; // ax

  v4 = (__int64)a1;
  if ( qword_1403861F0 )
  {
LABEL_20:
    SepSetSqmObjectName((__int64)a1, v4);
    return;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&qword_1403861F8, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1403861F8, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&qword_1403861F8, v6, (ULONG_PTR)&qword_1403861F8, v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( qword_1403861F0 || EtwRegister(&stru_1402AD180, 0LL, 0LL, &qword_1403861F0) >= 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403861F8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403861F8);
    KeAbPostRelease((ULONG_PTR)&qword_1403861F8);
    a1 = KeGetCurrentThread();
    v12 = a1->KernelApcDisable + 1;
    a1->KernelApcDisable = v12;
    if ( !v12
      && ($CD287064E7C9F7953DE243E927CFCB99 *)a1->ApcState.ApcListHead[0].Flink != &a1->152
      && !a1->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    goto LABEL_20;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403861F8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403861F8);
  KeAbPostRelease((ULONG_PTR)&qword_1403861F8);
  v10 = KeGetCurrentThread();
  v11 = v10->KernelApcDisable + 1;
  v10->KernelApcDisable = v11;
  if ( !v11
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152
    && !v10->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
