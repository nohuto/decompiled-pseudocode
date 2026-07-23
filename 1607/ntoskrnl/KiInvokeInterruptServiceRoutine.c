/*
 * XREFs of KiInvokeInterruptServiceRoutine @ 0x1401D87C0
 * Callers:
 *     KiInterruptDispatchCommon @ 0x1401D8494 (KiInterruptDispatchCommon.c)
 * Callees:
 *     KiSetTimerEx @ 0x140006F70 (KiSetTimerEx.c)
 *     KiCallInterruptServiceRoutine @ 0x14000BE60 (KiCallInterruptServiceRoutine.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400598D0 (EtwGetKernelTraceTimestamp.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     PerfInfoLogInterrupt @ 0x1400904F0 (PerfInfoLogInterrupt.c)
 *     KeCancelTimer @ 0x1400C1310 (KeCancelTimer.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

bool __fastcall KiInvokeInterruptServiceRoutine(__int64 a1, unsigned __int8 a2, int a3)
{
  unsigned __int8 v3; // r14
  unsigned __int8 CurrentIrql; // r15
  char v7; // r13
  bool v8; // si
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  char v15; // [rsp+30h] [rbp-D0h]
  __int16 Object; // [rsp+38h] [rbp-C8h] BYREF
  char v17; // [rsp+3Ah] [rbp-C6h]
  int v18; // [rsp+3Ch] [rbp-C4h]
  _QWORD v19[4]; // [rsp+40h] [rbp-C0h] BYREF
  struct _KTIMER v20; // [rsp+60h] [rbp-A0h] BYREF
  int v21[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v22; // [rsp+B0h] [rbp-50h]
  void *v23; // [rsp+B8h] [rbp-48h]
  __int16 *p_Object; // [rsp+C0h] [rbp-40h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  _BYTE v26[208]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v27; // [rsp+1B0h] [rbp+B0h]
  __int64 v28; // [rsp+240h] [rbp+140h]
  __int128 v29; // [rsp+270h] [rbp+170h] BYREF

  v3 = *(_BYTE *)(a1 + 93);
  v29 = 0uLL;
  CurrentIrql = a2;
  v15 = 0;
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
      *(_QWORD *)&v20.Header.Lock = 8LL;
      v19[1] = v19;
      v19[2] = a1;
      v19[0] = v19;
      Object = 1;
      v20.Header.WaitListHead.Blink = &v20.Header.WaitListHead;
      v17 = 6;
      v20.Header.WaitListHead.Flink = &v20.Header.WaitListHead;
      v23 = &KiPassiveIsrWatchdog;
      p_Object = &Object;
      v18 = 0;
      v20.DueTime.QuadPart = 0LL;
      *(_QWORD *)&v20.Processor = 0LL;
      v21[0] = 275;
      v25 = 0LL;
      v22 = 0LL;
      KiSetTimerEx((__int64)&v20, -10000000LL * KiPassiveWatchdogTimeout, 0, 0, (__int64)v21);
      v15 = 1;
    }
  }
  *(_QWORD *)(a1 + 152) = KeGetCurrentThread();
  if ( v8 )
    EtwGetKernelTraceTimestamp((char *)&v29, 0x20004000uLL);
  v10 = KiCallInterruptServiceRoutine(a1, v7);
  if ( v8 )
  {
    v27 = *((_QWORD *)&v29 + 1);
    v28 = v29;
    PerfInfoLogInterrupt(a1, (a3 << 8) | v10, (__int64)v26);
  }
  if ( v15 && !KeCancelTimer(&v20) )
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v11, v12, v13);
  }
  return v10 == 1;
}
