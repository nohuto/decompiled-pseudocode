/*
 * XREFs of PopBatteryRemove @ 0x1406B6CA8
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     IoCancelIrp @ 0x140073FAC (IoCancelIrp.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PopBatteryQueueWork @ 0x14014FB80 (PopBatteryQueueWork.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopChangeCapability @ 0x1405994A8 (PopChangeCapability.c)
 */

void __fastcall PopBatteryRemove(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  signed __int8 v7; // cf
  __int64 v8; // rbx
  struct _KTHREAD *v9; // rcx
  __int64 *v10; // rax
  __int64 *v11; // rdx
  __int64 **v12; // rcx
  signed __int64 v13; // rcx
  ULONG_PTR v14; // rtt
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax

  IoCancelIrp(*(PIRP *)(a1 + 56));
  KeWaitForSingleObject((PVOID)(a1 + 80), Executive, 0, 0, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((ULONG_PTR)&PopCB, 0LL, 0LL, v3);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&PopCB, 0LL);
  v8 = v4;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&PopCB, v4, (ULONG_PTR)&PopCB, v6);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = KeGetCurrentThread();
  v10 = (__int64 *)(a1 + 64);
  qword_14032E988 = (__int64)v9;
  if ( *(_QWORD *)(a1 + 64) )
  {
    v11 = (__int64 *)*v10;
    v12 = *(__int64 ***)(a1 + 72);
    if ( *(__int64 **)(*v10 + 8) != v10 || *v12 != v10 )
      __fastfail(3u);
    *v12 = v11;
    v11[1] = (__int64)v12;
    *v10 = 0LL;
    --dword_14032E994;
    ++dword_14032E9F8;
    byte_14032E998 = 1;
    PopBatteryQueueWork(3u);
    v9 = (struct _KTHREAD *)qword_14032E988;
  }
  if ( v9 )
    qword_14032E988 = 0LL;
  _m_prefetchw(&PopCB);
  v13 = PopCB - 16;
  if ( (PopCB & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v13 = 0LL;
  if ( (PopCB & 2) != 0
    || (v14 = PopCB, v14 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopCB, v13, PopCB)) )
  {
    ExfReleasePushLock(&PopCB, v5);
  }
  KeAbPostRelease((ULONG_PTR)&PopCB);
  v15 = KeGetCurrentThread();
  v16 = v15->KernelApcDisable + 1;
  v15->KernelApcDisable = v16;
  if ( !v16
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
    && !v15->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( !--dword_14032E990 )
  {
    PopAcquirePolicyLock();
    PopChangeCapability(&byte_14032E53E, 0LL);
    PopReleasePolicyLock();
  }
}
