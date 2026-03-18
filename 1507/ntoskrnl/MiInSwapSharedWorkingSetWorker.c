/*
 * XREFs of MiInSwapSharedWorkingSetWorker @ 0x1406A93F4
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     MiGetProcessPartition @ 0x14008F8A0 (MiGetProcessPartition.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MiProcessWsInSwapSupport @ 0x1400DE920 (MiProcessWsInSwapSupport.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     EtwTraceWorkingSetSwap @ 0x1404FAFD8 (EtwTraceWorkingSetSwap.c)
 *     MiFreeWorkingSetSwapContext @ 0x1404FB0F8 (MiFreeWorkingSetSwapContext.c)
 */

LONG_PTR __fastcall MiInSwapSharedWorkingSetWorker(__int64 a1)
{
  __int64 v1; // rdi
  __int16 *ProcessPartition; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  _DWORD v7[10]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v8[48]; // [rsp+48h] [rbp-40h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  KiStackAttachProcess((_KPROCESS *)v1, 0, (__int64)v8);
  v7[0] = 1;
  EtwTraceWorkingSetSwap((PEPROCESS)v1, 3, (__int64)v7);
  _InterlockedExchange((volatile __int32 *)(v1 + 1808), 1000);
  MiProcessWsInSwapSupport(*(_QWORD *)(a1 + 8), 1u);
  _InterlockedExchange((volatile __int32 *)(v1 + 1808), 0);
  v7[8] = -1;
  EtwTraceWorkingSetSwap((PEPROCESS)v1, 1, (__int64)v7);
  KiUnstackDetachProcess((struct _KTHREAD *)v8, 0);
  ProcessPartition = MiGetProcessPartition(v1);
  *(_QWORD *)(a1 + 48) = 0LL;
  MiFreeWorkingSetSwapContext((struct _KEVENT *)ProcessPartition, a1, v4, v5);
  return ObfDereferenceObjectWithTag((PVOID)v1, 0x73576D4Du);
}
