/*
 * XREFs of PopBatteryAdd @ 0x1406B6124
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopChangeCapability @ 0x1405994A8 (PopChangeCapability.c)
 *     PopBatteryWaitTag @ 0x1406B7074 (PopBatteryWaitTag.c)
 */

void __fastcall PopBatteryAdd(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  __int64 v6; // r9
  signed __int8 v7; // cf
  __int64 v8; // rbx
  __int64 v9; // rdx
  signed __int64 v10; // rcx
  ULONG_PTR v11; // rtt
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax

  KeInitializeEvent((PRKEVENT)(a1 + 80), SynchronizationEvent, 0);
  if ( ++dword_14032E990 == 1 )
  {
    PopAcquirePolicyLock();
    LOBYTE(v3) = 1;
    PopChangeCapability(&byte_14032E53E, v3);
    PopReleasePolicyLock();
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&PopCB, 0LL, 0LL, v2);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&PopCB, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&PopCB, v5, (ULONG_PTR)&PopCB, v6);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  qword_14032E988 = (__int64)KeGetCurrentThread();
  byte_14032E998 = 1;
  PopBatteryWaitTag(a1);
  if ( qword_14032E988 )
    qword_14032E988 = 0LL;
  _m_prefetchw(&PopCB);
  v10 = PopCB - 16;
  if ( (PopCB & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v10 = 0LL;
  if ( (PopCB & 2) != 0
    || (v11 = PopCB, v11 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopCB, v10, PopCB)) )
  {
    ExfReleasePushLock(&PopCB, v9);
  }
  KeAbPostRelease((ULONG_PTR)&PopCB);
  v12 = KeGetCurrentThread();
  v13 = v12->KernelApcDisable + 1;
  v12->KernelApcDisable = v13;
  if ( !v13
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
    && !v12->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
