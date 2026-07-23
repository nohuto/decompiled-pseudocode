/*
 * XREFs of CmpGetCallbackObjectContext @ 0x140420F90
 * Callers:
 *     CmpCallbackFillObjectContext @ 0x1404522A0 (CmpCallbackFillObjectContext.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 */

__int64 __fastcall CmpGetCallbackObjectContext(__int64 a1, __int64 *a2)
{
  signed __int64 v2; // rbx
  __int64 v5; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rsi
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  ULONG_PTR v10; // rtt
  struct _KTHREAD *v11; // rdx
  __int16 v12; // ax
  __int64 v14; // rdx
  __int64 v15; // rcx
  $2B8565053CDC740D4E4887693DD8AC9E *v16; // rcx

  v2 = 0LL;
  v5 = 0LL;
  if ( !a1 || *(_DWORD *)a1 != 1803104306 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&CmpContextListLock, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&CmpContextListLock, v7, (ULONG_PTR)&CmpContextListLock);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v8 = *(_QWORD **)(a1 + 72);
  v9 = (_QWORD *)(a1 + 72);
  if ( v8 != v9 )
  {
    v14 = *a2;
    while ( 1 )
    {
      v15 = v8[4];
      if ( v15 == v14 )
        break;
      if ( v15 >= v14 )
      {
        v8 = (_QWORD *)*v8;
        if ( v8 != v9 )
          continue;
      }
      goto LABEL_8;
    }
    v5 = v8[7];
  }
LABEL_8:
  _m_prefetchw(&CmpContextListLock);
  if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v2 = CmpContextListLock - 16;
  if ( (CmpContextListLock & 2) != 0
    || (v10 = CmpContextListLock,
        v10 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, v2, CmpContextListLock)) )
  {
    ExfReleasePushLock(&CmpContextListLock);
  }
  KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
  v11 = KeGetCurrentThread();
  v12 = v11->KernelApcDisable + 1;
  v11->KernelApcDisable = v12;
  if ( !v12 )
  {
    v16 = &v11->152;
    if ( ($2B8565053CDC740D4E4887693DD8AC9E *)v16->ApcState.ApcListHead[0].Flink != v16 && !v11->SpecialApcDisable )
      KiCheckForKernelApcDelivery((__int64)v16);
  }
  return v5;
}
