/*
 * XREFs of MiInSwapSharedWorkingSetWorker @ 0x1406632F4
 * Callers:
 *     <none>
 * Callees:
 *     MiGetProcessPartition @ 0x14002BAF0 (MiGetProcessPartition.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     MiProcessWsInSwapSupport @ 0x1400B6F90 (MiProcessWsInSwapSupport.c)
 *     KiStackAttachProcess @ 0x1400CD1F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CE820 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     MiFreeWorkingSetSwapContext @ 0x1404F16CC (MiFreeWorkingSetSwapContext.c)
 *     EtwTraceWorkingSetSwap @ 0x1404F271C (EtwTraceWorkingSetSwap.c)
 */

LONG_PTR __fastcall MiInSwapSharedWorkingSetWorker(__int64 a1)
{
  __int64 v1; // rdi
  int *ProcessPartition; // rax
  _DWORD v5[10]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v6[48]; // [rsp+48h] [rbp-40h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  KiStackAttachProcess((_KPROCESS *)v1, 0, (__int64)v6);
  v5[0] = 1;
  EtwTraceWorkingSetSwap((PEPROCESS)v1, 3, (__int64)v5);
  _InterlockedExchange((volatile __int32 *)(v1 + 1832), 1000);
  MiProcessWsInSwapSupport(*(_QWORD *)(a1 + 8), 1u);
  _InterlockedExchange((volatile __int32 *)(v1 + 1832), 0);
  v5[8] = -1;
  EtwTraceWorkingSetSwap((PEPROCESS)v1, 1, (__int64)v5);
  KiUnstackDetachProcess((struct _KTHREAD *)v6, 0);
  ProcessPartition = MiGetProcessPartition(v1);
  *(_QWORD *)(a1 + 48) = 0LL;
  MiFreeWorkingSetSwapContext((__int64)ProcessPartition, a1);
  return ObfDereferenceObjectWithTag((PVOID)v1, 0x73576D4Du);
}
