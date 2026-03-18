/*
 * XREFs of KeDisableTimer2 @ 0x1400F451C
 * Callers:
 *     ExDeleteTimer @ 0x140159520 (ExDeleteTimer.c)
 *     ExpDeleteTimer2 @ 0x140511974 (ExpDeleteTimer2.c)
 * Callees:
 *     EtwTraceTimedEvent @ 0x140083664 (EtwTraceTimedEvent.c)
 *     KeGenericProcessorCallback @ 0x1400D4D9C (KeGenericProcessorCallback.c)
 *     KiUpdateTimer2Flags @ 0x1400F5C10 (KiUpdateTimer2Flags.c)
 *     KiRemoveTimer2 @ 0x1400F5CA0 (KiRemoveTimer2.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1400F6734 (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1400F67A0 (KiAcquireTimer2LockUnlessDisabled.c)
 *     EtwGetKernelTraceTimestamp @ 0x140111B58 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     KiTraceCancelTimer2 @ 0x140209920 (KiTraceCancelTimer2.c)
 */

char __fastcall KeDisableTimer2(__int64 a1, char a2, char a3, __int64 *a4)
{
  __int64 v4; // rbx
  char v5; // r12
  __int64 v6; // r14
  char updated; // r13
  char v10; // r15
  char v11; // cl
  char v12; // r14
  unsigned int v13; // ebx
  char v14; // si
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // ecx
  char v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  char v24; // al
  unsigned int v27; // [rsp+34h] [rbp-CCh]
  unsigned __int8 CurrentIrql; // [rsp+38h] [rbp-C8h]
  __int64 v29; // [rsp+40h] [rbp-C0h]
  _QWORD v30[4]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v31[24]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v32[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v33[21]; // [rsp+88h] [rbp-78h] BYREF
  void *retaddr; // [rsp+178h] [rbp+78h]

  v29 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = 0LL;
  updated = 0;
  v27 = 32;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v10 = 1;
    v29 = *(_QWORD *)(a1 + 96);
    memset(v30, 0, sizeof(v30));
  }
  else
  {
    v10 = 0;
  }
  if ( a4 )
  {
    v16 = *a4;
    v17 = a4[1];
    if ( v10 && v16 )
    {
      LOBYTE(v30[3]) |= 8u;
      v30[1] = v16;
      v30[2] = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v17 ^ KiWaitAlways), KiWaitNever));
    }
    v6 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v16 ^ KiWaitAlways), KiWaitNever);
    v4 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v17 ^ KiWaitAlways), KiWaitNever);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v11 = KiAcquireTimer2LockUnlessDisabled(a1);
  if ( v11 )
  {
    __writecr8(CurrentIrql);
    v14 = a3;
    v12 = a2;
    goto LABEL_16;
  }
  if ( a4 )
  {
    *(_QWORD *)(a1 + 112) = v6;
    *(_QWORD *)(a1 + 120) = v4;
  }
  v12 = a2;
  if ( !a2 )
    goto LABEL_10;
  if ( (unsigned __int8)KiAcquireTimer2CollectionLockIfInserted(a1) )
  {
    KiRemoveTimer2(a1);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&KiTimer2CollectionLock, retaddr);
    else
      _InterlockedAnd64(&KiTimer2CollectionLock, 0LL);
    v5 = 1;
    goto LABEL_21;
  }
  if ( (*(_BYTE *)(a1 + 1) & 0xA) != 0 )
  {
    v5 = 1;
    v27 = 36;
LABEL_21:
    v13 = 4;
    goto LABEL_11;
  }
LABEL_10:
  v13 = 6;
LABEL_11:
  if ( v10 )
    EtwGetKernelTraceTimestamp(v31, 1073872896LL);
  updated = KiUpdateTimer2Flags(a1, v27, v13);
  __writecr8(CurrentIrql);
  v14 = a3;
  if ( a3 && !updated )
  {
    v32[1] = 0;
    v32[0] = 1310721;
    memset(v33, 0, 0xA0uLL);
    v18 = KiProcessorIndexToNumberMappingTable[KiClockTimerOwner];
    v19 = v18 & 0x3F;
    v20 = v18 >> 6;
    if ( (_DWORD)v20 )
      LOWORD(v32[0]) = v20 + 1;
    v33[(unsigned int)v20] = v33[v20] | (1LL << v19);
    KeGenericProcessorCallback(
      (unsigned __int16 *)v32,
      (void (__fastcall *)(struct _KPRCB *, __int64))PopPoCoalescinCallback,
      0LL,
      2);
  }
  v11 = 0;
LABEL_16:
  if ( v10 && !v11 )
  {
    v21 = KiWaitNever;
    v22 = KiWaitAlways;
    v23 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(v29 ^ KiWaitNever, KiWaitNever));
    if ( v5 )
    {
      KiTraceCancelTimer2(a1, v23);
      v22 = KiWaitAlways;
      v21 = KiWaitNever;
    }
    v30[0] = 0x7E35C6C7F3DD7277LL * (v21 ^ __ROR8__(v23 ^ _byteswap_uint64(a1 ^ v22), v21));
    v24 = v30[3];
    if ( v12 )
    {
      v24 = LOBYTE(v30[3]) | 1;
      LOBYTE(v30[3]) |= 1u;
    }
    if ( v14 )
    {
      v24 |= 2u;
      LOBYTE(v30[3]) = v24;
    }
    if ( updated )
    {
      EtwTraceTimedEvent(0xF6Bu, 0x40020000u, (__int64)v30, 32, 4197890, (__int64)v31);
    }
    else
    {
      LOBYTE(v30[3]) = v24 | 4;
      EtwTraceTimedEvent(0xF6Bu, 0x40020000u, (__int64)v30, 32, 1538, (__int64)v31);
    }
  }
  return v5;
}
