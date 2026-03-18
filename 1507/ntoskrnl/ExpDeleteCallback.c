/*
 * XREFs of ExpDeleteCallback @ 0x1406EF7E4
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

void __fastcall ExpDeleteCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // rax
  __int64 v7; // r9
  signed __int8 v8; // cf
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 *v11; // rcx
  signed __int64 v12; // rcx
  ULONG_PTR v13; // rtt
  __int16 v14; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&ExpCallbackListLock, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&ExpCallbackListLock, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&ExpCallbackListLock, v6, (ULONG_PTR)&ExpCallbackListLock, v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = *(_QWORD *)(a1 + 40);
  v11 = *(__int64 **)(a1 + 48);
  if ( *(_QWORD *)(v10 + 8) != a1 + 40 || *v11 != a1 + 40 )
    __fastfail(3u);
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  _m_prefetchw(&ExpCallbackListLock);
  v12 = ExpCallbackListLock - 16;
  if ( (ExpCallbackListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v12 = 0LL;
  if ( (ExpCallbackListLock & 2) != 0
    || (v13 = ExpCallbackListLock,
        v13 != _InterlockedCompareExchange64((volatile signed __int64 *)&ExpCallbackListLock, v12, ExpCallbackListLock)) )
  {
    ExfReleasePushLock(&ExpCallbackListLock, v10);
  }
  KeAbPostRelease((ULONG_PTR)&ExpCallbackListLock);
  v14 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v14;
  if ( !v14 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
}
