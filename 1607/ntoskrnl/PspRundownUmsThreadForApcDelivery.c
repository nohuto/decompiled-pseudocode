/*
 * XREFs of PspRundownUmsThreadForApcDelivery @ 0x1406827D8
 * Callers:
 *     PspGetSetContextInternal @ 0x1404FB520 (PspGetSetContextInternal.c)
 *     KiSuspendUmsThread @ 0x140650990 (KiSuspendUmsThread.c)
 *     PspUmsUnInitThread @ 0x14067F7E0 (PspUmsUnInitThread.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObReferenceObjectSafe @ 0x14008BCA0 (ObReferenceObjectSafe.c)
 *     KeWaitForGate @ 0x140097498 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x1400ADD84 (KeInitializeGate.c)
 *     KeInsertQueueApc @ 0x1400C7E70 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1400EEDA8 (KeInitializeApc.c)
 *     PsLookupThreadByThreadId @ 0x14041F6B0 (PsLookupThreadByThreadId.c)
 *     KeClearUmsThreadKernelLock @ 0x140650580 (KeClearUmsThreadKernelLock.c)
 *     KeSetUmsThreadKernelLock @ 0x140650708 (KeSetUmsThreadKernelLock.c)
 *     KeSynchronizeUmsThread @ 0x140650770 (KeSynchronizeUmsThread.c)
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
  if ( !(unsigned __int8)KeInsertQueueApc((__int64)v14, (__int64)v12, a1, 2u) )
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
