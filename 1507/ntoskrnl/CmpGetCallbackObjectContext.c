/*
 * XREFs of CmpGetCallbackObjectContext @ 0x140520E30
 * Callers:
 *     CmpCallbackFillObjectContext @ 0x140498B70 (CmpCallbackFillObjectContext.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

__int64 __fastcall CmpGetCallbackObjectContext(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  signed __int64 v4; // rbx
  __int64 v7; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r9
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  ULONG_PTR v14; // rtt
  struct _KTHREAD *v15; // rdx
  __int16 v16; // ax
  __int64 v18; // rcx

  v4 = 0LL;
  v7 = 0LL;
  if ( !a1 || *(_DWORD *)a1 != 1803104306 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = KeAbPreAcquire((ULONG_PTR)&CmpContextListLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&CmpContextListLock, v10, (ULONG_PTR)&CmpContextListLock, v11);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v12 = *(_QWORD **)(a1 + 72);
  v13 = (_QWORD *)(a1 + 72);
  if ( v12 != v13 )
  {
    v9 = *a2;
    while ( 1 )
    {
      v18 = v12[4];
      if ( v18 == v9 )
        break;
      if ( v18 >= v9 )
      {
        v12 = (_QWORD *)*v12;
        if ( v12 != v13 )
          continue;
      }
      goto LABEL_8;
    }
    v7 = v12[7];
  }
LABEL_8:
  _m_prefetchw(&CmpContextListLock);
  if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v4 = CmpContextListLock - 16;
  if ( (CmpContextListLock & 2) != 0
    || (v14 = CmpContextListLock,
        v14 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, v4, CmpContextListLock)) )
  {
    ExfReleasePushLock(&CmpContextListLock, v9);
  }
  KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
  v15 = KeGetCurrentThread();
  v16 = v15->KernelApcDisable + 1;
  v15->KernelApcDisable = v16;
  if ( !v16
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
    && !v15->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v7;
}
