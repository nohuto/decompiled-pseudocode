/*
 * XREFs of PfGenerateTrace @ 0x1405668C4
 * Callers:
 *     PfPowerActionNotify @ 0x1403EE01C (PfPowerActionNotify.c)
 *     PfSetSuperfetchInformation @ 0x140454728 (PfSetSuperfetchInformation.c)
 *     PfpLogEventRequest @ 0x1405666C4 (PfpLogEventRequest.c)
 *     PfpLogScenarioEvent @ 0x1405667B8 (PfpLogScenarioEvent.c)
 * Callees:
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PfGenerateTrace(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rax
  __int64 v8; // r9
  signed __int8 v9; // cf
  __int64 v10; // rsi
  PVOID v11; // rsi
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax
  unsigned int v14; // edi
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&PfTGlobals, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&PfTGlobals, 0LL);
  v10 = v7;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&PfTGlobals, v7, (ULONG_PTR)&PfTGlobals, v8);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( *(_QWORD *)a1 )
  {
    if ( !a2 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 80));
    KeResetEvent((PRKEVENT)(a1 + 56));
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    v11 = *(PVOID *)a1;
    ObfReferenceObject(*(PVOID *)a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
    KeAbPostRelease((ULONG_PTR)&PfTGlobals);
    v12 = KeGetCurrentThread();
    v13 = v12->KernelApcDisable + 1;
    v12->KernelApcDisable = v13;
    if ( !v13
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
      && !v12->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    Object[0] = (PVOID)(a1 + 56);
    Object[1] = v11;
    KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
    ObfDereferenceObject(v11);
    if ( !a2 )
      _InterlockedAdd((volatile signed __int32 *)(a1 + 80), 0xFFFFFFFF);
    return 0;
  }
  else
  {
    v14 = -1073741177;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
    KeAbPostRelease((ULONG_PTR)&PfTGlobals);
    v16 = KeGetCurrentThread();
    v17 = v16->KernelApcDisable + 1;
    v16->KernelApcDisable = v17;
    if ( !v17
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
      && !v16->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v14;
}
