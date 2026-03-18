/*
 * XREFs of KiInvokeInterruptServiceRoutine @ 0x140207B64
 * Callers:
 *     KiInterruptDispatchCommon @ 0x1402077A8 (KiInterruptDispatchCommon.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeCancelTimer @ 0x140066860 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     PerfInfoLogInterrupt @ 0x1400A3F90 (PerfInfoLogInterrupt.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KiCallInterruptServiceRoutine @ 0x140101210 (KiCallInterruptServiceRoutine.c)
 *     EtwGetKernelTraceTimestamp @ 0x140111B58 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

bool __fastcall KiInvokeInterruptServiceRoutine(__int64 a1, unsigned __int8 a2, int a3)
{
  unsigned __int8 v3; // r14
  unsigned __int8 CurrentIrql; // r15
  char v7; // r13
  bool v8; // si
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v10; // r13
  struct _KTHREAD *v11; // rdx
  __int16 v12; // ax
  char v14; // [rsp+30h] [rbp-D0h]
  __int16 Object; // [rsp+38h] [rbp-C8h] BYREF
  char v16; // [rsp+3Ah] [rbp-C6h]
  int v17; // [rsp+3Ch] [rbp-C4h]
  _QWORD v18[4]; // [rsp+40h] [rbp-C0h] BYREF
  struct _KTIMER v19; // [rsp+60h] [rbp-A0h] BYREF
  int v20[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v21; // [rsp+B0h] [rbp-50h]
  void *v22; // [rsp+B8h] [rbp-48h]
  __int16 *p_Object; // [rsp+C0h] [rbp-40h]
  __int64 v24; // [rsp+D8h] [rbp-28h]
  _BYTE v25[208]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v26; // [rsp+1B0h] [rbp+B0h]
  __int64 v27; // [rsp+240h] [rbp+140h]
  __int128 v28; // [rsp+270h] [rbp+170h] BYREF

  v3 = *(_BYTE *)(a1 + 93);
  v28 = 0uLL;
  CurrentIrql = a2;
  v14 = 0;
  v7 = 1;
  v8 = 0;
  if ( v3 )
  {
    if ( a2 != v3 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v3);
    }
    if ( ((*(_QWORD *)(a1 + 72) + 3LL) & 0xFFFFFFFFFFFFFFFDuLL) == 0 )
      v7 = 0;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(*(PVOID *)(a1 + 128), Executive, 0, 0, 0LL);
    v8 = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
    if ( (_BYTE)KdDebuggerEnabled && KiPassiveWatchdogTimeout )
    {
      *(_QWORD *)&v19.Header.Lock = 8LL;
      v18[1] = v18;
      v18[2] = a1;
      v18[0] = v18;
      Object = 1;
      v19.Header.WaitListHead.Blink = &v19.Header.WaitListHead;
      v16 = 6;
      v19.Header.WaitListHead.Flink = &v19.Header.WaitListHead;
      v22 = &KiPassiveIsrWatchdog;
      p_Object = &Object;
      v17 = 0;
      v19.DueTime.QuadPart = 0LL;
      *(_QWORD *)&v19.Processor = 0LL;
      v20[0] = 275;
      v24 = 0LL;
      v21 = 0LL;
      KiSetTimerEx((__int64)&v19, -10000000LL * KiPassiveWatchdogTimeout, 0, 0, (__int64)v20);
      v14 = 1;
    }
  }
  *(_QWORD *)(a1 + 152) = KeGetCurrentThread();
  if ( v8 )
    EtwGetKernelTraceTimestamp((char *)&v28, (char *)0x20004000);
  v10 = KiCallInterruptServiceRoutine(a1, v7);
  if ( v8 )
  {
    v26 = *((_QWORD *)&v28 + 1);
    v27 = v28;
    PerfInfoLogInterrupt(a1, (a3 << 8) | v10, (__int64)v25);
  }
  if ( v14 && !KeCancelTimer(&v19) )
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  *(_QWORD *)(a1 + 152) = 0LL;
  if ( v3 )
  {
    if ( CurrentIrql != v3 )
      __writecr8(CurrentIrql);
  }
  else
  {
    KeSetEvent(*(PRKEVENT *)(a1 + 128), 0, 0);
    v11 = KeGetCurrentThread();
    v12 = v11->KernelApcDisable + 1;
    v11->KernelApcDisable = v12;
    if ( !v12
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
      && !v11->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v10 == 1;
}
