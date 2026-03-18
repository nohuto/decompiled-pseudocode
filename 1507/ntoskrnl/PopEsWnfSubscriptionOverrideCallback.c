/*
 * XREFs of PopEsWnfSubscriptionOverrideCallback @ 0x1406BBA88
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExQueryWnfStateData @ 0x140563580 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopEsWnfSubscriptionOverrideCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r9
  signed __int8 v9; // cf
  __int64 v10; // rbx
  signed __int64 v11; // rcx
  ULONG_PTR v12; // rtt
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  unsigned int v16; // [rsp+20h] [rbp-18h] BYREF
  int v17[5]; // [rsp+24h] [rbp-14h] BYREF
  int v18; // [rsp+58h] [rbp+20h] BYREF

  v18 = a4;
  v17[0] = 4;
  if ( (int)ExQueryWnfStateData(a1, &v18, &v16, v17) >= 0 && v16 <= 2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = KeAbPreAcquire((ULONG_PTR)&PopEsLock, 0LL, 0LL, v4);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&PopEsLock, 0LL);
    v10 = v6;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx(&PopEsLock, v6, (ULONG_PTR)&PopEsLock, v8);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    qword_14032D448 = (__int64)KeGetCurrentThread();
    PopEsMode = v16;
    if ( qword_14032D448 )
      qword_14032D448 = 0LL;
    _m_prefetchw(&PopEsLock);
    v11 = PopEsLock - 16;
    if ( (PopEsLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v11 = 0LL;
    if ( (PopEsLock & 2) != 0
      || (v12 = PopEsLock, v12 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopEsLock, v11, PopEsLock)) )
    {
      ExfReleasePushLock(&PopEsLock, v7);
    }
    KeAbPostRelease((ULONG_PTR)&PopEsLock);
    v13 = KeGetCurrentThread();
    v14 = v13->KernelApcDisable + 1;
    v13->KernelApcDisable = v14;
    if ( !v14
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
      && !v13->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    _m_prefetchw(&PopEsWorkItemDue);
    if ( _InterlockedOr(&PopEsWorkItemDue, 0x80000002) >= 0 )
      ExQueueWorkItem(&PopEsWorkItem, DelayedWorkQueue);
  }
  return 0LL;
}
