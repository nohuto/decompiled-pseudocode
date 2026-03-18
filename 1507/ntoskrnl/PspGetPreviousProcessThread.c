/*
 * XREFs of PspGetPreviousProcessThread @ 0x14041CE2C
 * Callers:
 *     PspTerminateAllThreads @ 0x14041CBA4 (PspTerminateAllThreads.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x14004FCE0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PspGetPreviousProcessThread(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // r15
  __int64 v7; // r12
  int v8; // r14d
  unsigned __int64 *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // r9
  __int64 v12; // rbx
  __int16 v13; // ax

  CurrentThread = KeGetCurrentThread();
  v5 = a1 + 1152;
  v7 = 0LL;
  v8 = 0;
  --CurrentThread->KernelApcDisable;
  v9 = (unsigned __int64 *)(a1 + 728);
  v10 = KeAbPreAcquire(a1 + 728, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v9, v10, (ULONG_PTR)v9, v11);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( a2 )
    v12 = a2[211];
  else
    v12 = *(_QWORD *)(v5 + 8);
  while ( v12 != v5 )
  {
    v7 = v12 - 1680;
    if ( ObReferenceObjectSafeWithTag(v12 - 1680) )
    {
      v8 = 1;
      break;
    }
    v12 = *(_QWORD *)(v12 + 8);
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v9);
  KeAbPostRelease((ULONG_PTR)v9);
  v13 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v13;
  if ( !v13
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  return v7 & -(__int64)(v8 != 0);
}
