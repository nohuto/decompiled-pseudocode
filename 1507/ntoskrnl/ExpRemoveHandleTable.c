/*
 * XREFs of ExpRemoveHandleTable @ 0x140508E0C
 * Callers:
 *     ExDestroyHandleTable @ 0x140508CB0 (ExDestroyHandleTable.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

void __fastcall ExpRemoveHandleTable(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rax
  __int64 v7; // r9
  signed __int8 v8; // cf
  __int64 v9; // rdi
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int16 v13; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&HandleTableListLock, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&HandleTableListLock, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&HandleTableListLock, v6, (ULONG_PTR)&HandleTableListLock, v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = (_QWORD *)(a1 + 24);
  v11 = *(_QWORD *)(a1 + 24);
  v12 = *(_QWORD **)(a1 + 32);
  if ( *(_QWORD *)(v11 + 8) != a1 + 24 || (_QWORD *)*v12 != v10 )
    __fastfail(3u);
  *v12 = v11;
  *(_QWORD *)(v11 + 8) = v12;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&HandleTableListLock);
  KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
  v13 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v13;
  if ( !v13
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  *(_QWORD *)(a1 + 32) = a1 + 24;
  *v10 = v10;
}
