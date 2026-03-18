/*
 * XREFs of MiInSwapSharedWorkingSetWorker @ 0x14062AD24
 * Callers:
 *     <none>
 * Callees:
 *     MiProcessWsInSwapSupport @ 0x140001D18 (MiProcessWsInSwapSupport.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     MiGetProcessPartition @ 0x140063890 (MiGetProcessPartition.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MiFreeWorkingSetSwapContext @ 0x1403B5964 (MiFreeWorkingSetSwapContext.c)
 *     EtwTraceWorkingSetSwap @ 0x1404D05EC (EtwTraceWorkingSetSwap.c)
 */

LONG_PTR __fastcall MiInSwapSharedWorkingSetWorker(__int64 a1)
{
  __int64 v1; // rdi
  int *ProcessPartition; // rax
  _DWORD v5[10]; // [rsp+20h] [rbp-68h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v6; // [rsp+48h] [rbp-40h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  KiStackAttachProcess((_KPROCESS *)v1, 0LL, (__int64)&v6);
  v5[0] = 1;
  EtwTraceWorkingSetSwap((PEPROCESS)v1, 3, (__int64)v5);
  _InterlockedExchange((volatile __int32 *)(v1 + 1816), 1000);
  MiProcessWsInSwapSupport(*(_QWORD *)(a1 + 8), 1u);
  _InterlockedExchange((volatile __int32 *)(v1 + 1816), 0);
  v5[8] = -1;
  EtwTraceWorkingSetSwap((PEPROCESS)v1, 1, (__int64)v5);
  KiUnstackDetachProcess(&v6, 0LL);
  ProcessPartition = MiGetProcessPartition(v1);
  *(_QWORD *)(a1 + 48) = 0LL;
  MiFreeWorkingSetSwapContext((__int64)ProcessPartition, a1);
  return ObfDereferenceObjectWithTag((PVOID)v1, 0x73576D4Du);
}
