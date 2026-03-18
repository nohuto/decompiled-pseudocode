/*
 * XREFs of ExpGetNextCallback @ 0x14058A288
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x14004FCE0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

unsigned __int64 __fastcall ExpGetNextCallback(_QWORD *Object, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v6; // esi
  __int64 *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // r9
  __int64 *v11; // rbx
  signed __int64 v12; // rcx
  ULONG_PTR v13; // rtt
  __int16 v14; // ax

  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  v7 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v9 = KeAbPreAcquire((ULONG_PTR)&ExpCallbackListLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpCallbackListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&ExpCallbackListLock, v9, (ULONG_PTR)&ExpCallbackListLock, v10);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v11 = (__int64 *)ExpCallbackListHead;
  if ( Object )
    v11 = (__int64 *)Object[5];
  while ( v11 != &ExpCallbackListHead )
  {
    v7 = v11 - 5;
    if ( ObReferenceObjectSafeWithTag((__int64)(v11 - 5)) )
    {
      v6 = 1;
      break;
    }
    v11 = (__int64 *)*v11;
  }
  _m_prefetchw(&ExpCallbackListLock);
  v12 = ExpCallbackListLock - 16;
  if ( (ExpCallbackListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v12 = 0LL;
  if ( (ExpCallbackListLock & 2) != 0
    || (v13 = ExpCallbackListLock,
        v13 != _InterlockedCompareExchange64((volatile signed __int64 *)&ExpCallbackListLock, v12, ExpCallbackListLock)) )
  {
    ExfReleasePushLock(&ExpCallbackListLock, v8);
  }
  KeAbPostRelease((ULONG_PTR)&ExpCallbackListLock);
  v14 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v14;
  if ( !v14 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457845u);
  return (unsigned __int64)v7 & -(__int64)(v6 != 0);
}
