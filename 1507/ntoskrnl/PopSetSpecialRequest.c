/*
 * XREFs of PopSetSpecialRequest @ 0x140409CAC
 * Callers:
 *     PopPowerRequestActionInfo @ 0x1404E9BB8 (PopPowerRequestActionInfo.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PopDiagTracePowerRequestChange @ 0x1400D1E04 (PopDiagTracePowerRequestChange.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PspChargeJobWakeCounter @ 0x140417810 (PspChargeJobWakeCounter.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404E6210 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopSetSpecialRequest(__int64 a1, int a2, void *a3)
{
  int v4; // ebp
  __int64 v5; // rcx
  NTSTATUS v6; // edi
  unsigned __int64 v7; // rbx
  PVOID v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdx
  signed __int64 v11; // rcx
  ULONG_PTR v12; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v14; // ax
  char v16; // r8
  void *v17; // rbx
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  if ( a2 == 3 )
  {
    v4 = 1;
    v6 = ObReferenceObjectByHandle(a3, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    if ( v6 >= 0 )
    {
      v7 = *((_QWORD *)Object + 118);
      v8 = Object;
      if ( v7 && (*(_DWORD *)(v7 + 1296) & 0x1000) != 0 )
      {
        PspChargeJobWakeCounter((PVOID)v7, 1, (__int64)Object, a1);
        ObfReferenceObjectWithTag((PVOID)v7, 0x6B577350u);
        v9 = v7 | 3;
      }
      else
      {
        v9 = 0LL;
      }
      LOBYTE(v5) = 1;
      PopAcquirePowerRequestPushLock(v5);
      if ( *(_QWORD *)(a1 + 96) )
      {
        v6 = -1073741811;
      }
      else
      {
        *(_QWORD *)(a1 + 88) = v9;
        *(_QWORD *)(a1 + 96) = v8;
        v9 = 0LL;
        ++*(_DWORD *)(a1 + 44);
        PopDiagTracePowerRequestChange(a1);
        v6 = 0;
      }
      if ( qword_14032F7D8 )
        qword_14032F7D8 = 0LL;
      _m_prefetchw(&PopPowerRequestLock);
      v11 = PopPowerRequestLock - 16;
      if ( (PopPowerRequestLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v11 = 0LL;
      if ( (PopPowerRequestLock & 2) != 0
        || (v12 = PopPowerRequestLock,
            v12 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&PopPowerRequestLock,
                     v11,
                     PopPowerRequestLock)) )
      {
        ExfReleasePushLock(&PopPowerRequestLock, v10);
      }
      KeAbPostRelease((ULONG_PTR)&PopPowerRequestLock);
      CurrentThread = KeGetCurrentThread();
      v14 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v14;
      if ( !v14
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( v9 )
      {
        v16 = v9;
        v17 = (void *)(v9 & 0xFFFFFFFFFFFFFFF8uLL);
        if ( (v16 & 7) == 5 )
          v4 = 5;
        PspChargeJobWakeCounter(v17, v4, 0LL, a1);
        ObDereferenceObjectDeferDeleteWithTag(v17, 0x6B577350u);
      }
      ObfDereferenceObject(Object);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
