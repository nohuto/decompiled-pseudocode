/*
 * XREFs of PspGetNextJob @ 0x140506758
 * Callers:
 *     PspEnforceLimits @ 0x140506688 (PspEnforceLimits.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x14004FCE0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

__int64 *__fastcall PspGetNextJob(_QWORD *Object, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *v6; // r14
  __int64 v7; // rbx
  __int64 v8; // r9
  __int64 *v9; // rbx
  __int16 v10; // ax

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&PspJobListLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspJobListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PspJobListLock, v7, (ULONG_PTR)&PspJobListLock, v8);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v9 = (__int64 *)PspJobList;
  if ( Object )
    v9 = (__int64 *)Object[3];
  while ( v9 != &PspJobList )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)(v9 - 3)) )
    {
      v6 = v9 - 3;
      break;
    }
    v9 = (__int64 *)*v9;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspJobListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspJobListLock);
  KeAbPostRelease((ULONG_PTR)&PspJobListLock);
  v10 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v10;
  if ( !v10 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return v6;
}
