/*
 * XREFs of PspRundownUmsThreadForApcDelivery @ 0x140643C78
 * Callers:
 *     PspGetSetContextInternal @ 0x1403EDB60 (PspGetSetContextInternal.c)
 *     KiSuspendUmsThread @ 0x14061B590 (KiSuspendUmsThread.c)
 *     PspUmsUnInitThread @ 0x140641318 (PspUmsUnInitThread.c)
 * Callees:
 *     KeInitializeApc @ 0x14002C320 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1400313A0 (KeInsertQueueApc.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObReferenceObjectSafe @ 0x1400C8410 (ObReferenceObjectSafe.c)
 *     KeWaitForGate @ 0x1400DEBE8 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x1400EF318 (KeInitializeGate.c)
 *     PsLookupThreadByThreadId @ 0x140436060 (PsLookupThreadByThreadId.c)
 *     KeClearUmsThreadKernelLock @ 0x14061B18C (KeClearUmsThreadKernelLock.c)
 *     KeSetUmsThreadKernelLock @ 0x14061B314 (KeSetUmsThreadKernelLock.c)
 *     KeSynchronizeUmsThread @ 0x14061B37C (KeSynchronizeUmsThread.c)
 */

__int64 __fastcall PspRundownUmsThreadForApcDelivery(__int64 a1, _DWORD *a2, __int64 a3, char a4)
{
  __int64 v4; // r13
  char v8; // r15
  __int64 result; // rax
  NTSTATUS v10; // r14d
  __int64 v11; // rdi
  PETHREAD v12; // rdi
  HANDLE ThreadId[2]; // [rsp+40h] [rbp-69h] BYREF
  _BYTE v14[88]; // [rsp+50h] [rbp-59h] BYREF
  _DWORD *v15; // [rsp+A8h] [rbp-1h]
  int v16; // [rsp+B0h] [rbp+7h]
  _BYTE v17[72]; // [rsp+B8h] [rbp+Fh] BYREF
  PETHREAD Thread; // [rsp+110h] [rbp+67h] BYREF
  __int64 v19; // [rsp+120h] [rbp+77h]

  v19 = a3;
  v4 = *(_QWORD *)(a1 + 496);
  Thread = 0LL;
  v8 = 0;
  result = KeSetUmsThreadKernelLock(a3, (unsigned __int64 *)ThreadId);
  v10 = result;
  if ( (int)result < 0 )
    return result;
  *a2 |= 4u;
  --*(_WORD *)(a1 + 486);
  if ( a4 )
  {
    v11 = _InterlockedExchange64((volatile __int64 *)(a1 + 504), -1LL);
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 504);
    if ( v11 == -1 )
      goto LABEL_17;
  }
  if ( !*(_QWORD *)(v4 + 72) )
  {
    *a2 |= 1u;
LABEL_18:
    v12 = Thread;
    goto LABEL_19;
  }
  if ( v11 )
  {
    v12 = *(PETHREAD *)(v11 + 96);
    ObReferenceObjectSafe((__int64)v12);
    v8 = 1;
    goto LABEL_9;
  }
  if ( !ThreadId[0] || (v10 = PsLookupThreadByThreadId(ThreadId[0], &Thread), v10 < 0) )
  {
LABEL_17:
    *a2 |= 2u;
    goto LABEL_18;
  }
  v12 = Thread;
  v8 = 1;
  if ( Thread->Process != *(_KPROCESS **)(a1 + 544) )
    goto LABEL_16;
LABEL_9:
  KeInitializeGate((__int64)v17);
  v15 = a2;
  KeInitializeApc((__int64)v14, (__int64)v12, 0, (__int64)PspRelinquishUmsThreadSpecialApc, 0LL, 0LL, 0, 0LL);
  if ( !(unsigned __int8)KeInsertQueueApc((__int64)v14, (__int64)v12, a1, 2) )
  {
LABEL_16:
    *a2 |= 2u;
    goto LABEL_19;
  }
  KeWaitForGate((__int64)v17, 0);
  v10 = v16;
  if ( v16 >= 0 && (*a2 & 1) != 0 )
  {
    KeSynchronizeUmsThread(a1, a4);
LABEL_20:
    ObfDereferenceObject(v12);
    goto LABEL_21;
  }
LABEL_19:
  KiLeaveGuardedRegionUnsafe(a1);
  if ( v8 )
    goto LABEL_20;
LABEL_21:
  if ( v10 < 0 )
  {
    KeClearUmsThreadKernelLock(v19);
    *a2 &= ~4u;
  }
  return (unsigned int)v10;
}
