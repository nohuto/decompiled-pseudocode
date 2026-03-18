/*
 * XREFs of PopEsPowerSettingBatteryThresholdCallback @ 0x1405BFEBC
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

__int64 __fastcall PopEsPowerSettingBatteryThresholdCallback(__int64 a1, int *a2, int a3, __int64 a4)
{
  unsigned int v5; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  signed __int8 v10; // cf
  __int64 v11; // rbx
  struct _KTHREAD *v12; // rcx
  signed __int64 v13; // rcx
  ULONG_PTR v14; // rtt
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax

  v5 = -1073741811;
  if ( a2 && a3 == 4 )
  {
    CurrentThread = KeGetCurrentThread();
    v5 = 0;
    --CurrentThread->KernelApcDisable;
    v7 = KeAbPreAcquire((ULONG_PTR)&PopEsLock, 0LL, 0LL, a4);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&PopEsLock, 0LL);
    v11 = v7;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&PopEsLock, v7, (ULONG_PTR)&PopEsLock, v9);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    v12 = KeGetCurrentThread();
    qword_14032D448 = (__int64)v12;
    dword_14032E890 = *a2;
    if ( (unsigned int)dword_14032E890 > 0x64 )
      dword_14032E890 = 100;
    if ( v12 )
      qword_14032D448 = 0LL;
    _m_prefetchw(&PopEsLock);
    v13 = PopEsLock - 16;
    if ( (PopEsLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v13 = 0LL;
    if ( (PopEsLock & 2) != 0
      || (v14 = PopEsLock, v14 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopEsLock, v13, PopEsLock)) )
    {
      ExfReleasePushLock(&PopEsLock, v8);
    }
    KeAbPostRelease((ULONG_PTR)&PopEsLock);
    v15 = KeGetCurrentThread();
    v16 = v15->KernelApcDisable + 1;
    v15->KernelApcDisable = v16;
    if ( !v16
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
      && !v15->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    _m_prefetchw(&PopEsWorkItemDue);
    if ( _InterlockedOr(&PopEsWorkItemDue, 0x80000002) >= 0 )
      ExQueueWorkItem(&PopEsWorkItem, DelayedWorkQueue);
  }
  return v5;
}
