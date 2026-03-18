/*
 * XREFs of KiInvokeInterruptServiceRoutine @ 0x1401CA1C8
 * Callers:
 *     KiInterruptDispatchCommon @ 0x1401C9E9C (KiInterruptDispatchCommon.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeCancelTimer @ 0x140091500 (KeCancelTimer.c)
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 *     PerfInfoLogInterrupt @ 0x1400D1A20 (PerfInfoLogInterrupt.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400DE680 (EtwGetKernelTraceTimestamp.c)
 *     KiCallInterruptServiceRoutine @ 0x1400F6730 (KiCallInterruptServiceRoutine.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

bool __fastcall KiInvokeInterruptServiceRoutine(__int64 a1, unsigned __int8 a2, int a3)
{
  unsigned __int8 v3; // si
  unsigned __int8 CurrentIrql; // r15
  char v7; // r13
  bool v8; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v10; // r13
  char v12; // [rsp+30h] [rbp-D0h]
  __int16 Object; // [rsp+38h] [rbp-C8h] BYREF
  char v14; // [rsp+3Ah] [rbp-C6h]
  int v15; // [rsp+3Ch] [rbp-C4h]
  _QWORD v16[4]; // [rsp+40h] [rbp-C0h] BYREF
  struct _KTIMER Timer; // [rsp+60h] [rbp-A0h] BYREF
  struct _KDPC Dpc; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v19[208]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v20; // [rsp+1B0h] [rbp+B0h]
  __int64 v21; // [rsp+240h] [rbp+140h]
  __int128 v22; // [rsp+270h] [rbp+170h] BYREF

  v3 = *(_BYTE *)(a1 + 93);
  v22 = 0uLL;
  CurrentIrql = a2;
  v12 = 0;
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
      *(_QWORD *)&Timer.Header.Lock = 8LL;
      v16[1] = v16;
      v16[2] = a1;
      v16[0] = v16;
      Timer.Header.WaitListHead.Blink = &Timer.Header.WaitListHead;
      Timer.Header.WaitListHead.Flink = &Timer.Header.WaitListHead;
      Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)&KiPassiveIsrWatchdog;
      Dpc.DeferredContext = &Object;
      Object = 1;
      v14 = 6;
      v15 = 0;
      Timer.DueTime.QuadPart = 0LL;
      *(_QWORD *)&Timer.Processor = 0LL;
      Dpc.TargetInfoAsUlong = 275;
      Dpc.DpcData = 0LL;
      Dpc.ProcessorHistory = 0LL;
      KeSetTimer(&Timer, (LARGE_INTEGER)(-10000000LL * KiPassiveWatchdogTimeout), &Dpc);
      v12 = 1;
    }
  }
  *(_QWORD *)(a1 + 152) = KeGetCurrentThread();
  if ( v8 )
    EtwGetKernelTraceTimestamp((char *)&v22, (char *)0x20004000);
  v10 = KiCallInterruptServiceRoutine(a1, v7);
  if ( v8 )
  {
    v20 = *((_QWORD *)&v22 + 1);
    v21 = v22;
    PerfInfoLogInterrupt(a1, (a3 << 8) | v10, (__int64)v19);
  }
  if ( v12 && !KeCancelTimer(&Timer) )
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v10 == 1;
}
