/*
 * XREFs of PspRundownUmsThreadForApcDelivery @ 0x1406C6990
 * Callers:
 *     PspGetSetContextInternal @ 0x14044DC60 (PspGetSetContextInternal.c)
 *     KiSuspendUmsThread @ 0x14069A0CC (KiSuspendUmsThread.c)
 *     PspUmsUnInitThread @ 0x1406C3888 (PspUmsUnInitThread.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14000CF3C (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1400215A8 (KeInitializeApc.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObReferenceObjectSafe @ 0x140075130 (ObReferenceObjectSafe.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KeWaitForGate @ 0x140126304 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x14012F290 (KeInitializeGate.c)
 *     PsLookupThreadByThreadId @ 0x1405115F0 (PsLookupThreadByThreadId.c)
 *     KeClearUmsThreadKernelLock @ 0x140699C9C (KeClearUmsThreadKernelLock.c)
 *     KeSetUmsThreadKernelLock @ 0x140699E24 (KeSetUmsThreadKernelLock.c)
 *     KeSynchronizeUmsThread @ 0x140699E8C (KeSynchronizeUmsThread.c)
 */

__int64 __fastcall PspRundownUmsThreadForApcDelivery(__int64 a1, _DWORD *a2, __int64 a3, char a4)
{
  __int64 v4; // r13
  char v8; // r15
  __int64 result; // rax
  NTSTATUS v10; // r14d
  __int64 v11; // rsi
  PETHREAD v12; // rsi
  __int16 v13; // ax
  HANDLE ThreadId[2]; // [rsp+40h] [rbp-69h] BYREF
  _BYTE v15[88]; // [rsp+50h] [rbp-59h] BYREF
  _DWORD *v16; // [rsp+A8h] [rbp-1h]
  int v17; // [rsp+B0h] [rbp+7h]
  _DWORD v18[18]; // [rsp+B8h] [rbp+Fh] BYREF
  PETHREAD Thread; // [rsp+110h] [rbp+67h] BYREF
  __int64 v20; // [rsp+120h] [rbp+77h]

  v20 = a3;
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
  KeInitializeGate((__int64)v18);
  v16 = a2;
  KeInitializeApc((__int64)v15, (__int64)v12, 0, (__int64)PspRelinquishUmsThreadSpecialApc, 0LL, 0LL, 0, 0LL);
  if ( !KeInsertQueueApc((__int64)v15, (__int64)v12, a1, 2) )
  {
LABEL_16:
    *a2 |= 2u;
    goto LABEL_19;
  }
  KeWaitForGate(v18, 0);
  v10 = v17;
  if ( v17 < 0 || (*a2 & 1) == 0 )
  {
LABEL_19:
    v13 = *(_WORD *)(a1 + 486) + 1;
    *(_WORD *)(a1 + 486) = v13;
    if ( !v13 && *(_QWORD *)(a1 + 152) != a1 + 152 )
      KiCheckForKernelApcDelivery();
    if ( !v8 )
      goto LABEL_24;
    goto LABEL_23;
  }
  KeSynchronizeUmsThread(a1, a4);
LABEL_23:
  ObfDereferenceObject(v12);
LABEL_24:
  if ( v10 < 0 )
  {
    KeClearUmsThreadKernelLock(v20);
    *a2 &= ~4u;
  }
  return (unsigned int)v10;
}
