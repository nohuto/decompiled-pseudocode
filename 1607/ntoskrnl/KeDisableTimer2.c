/*
 * XREFs of KeDisableTimer2 @ 0x1400F583C
 * Callers:
 *     ExDeleteTimer @ 0x140130FE8 (ExDeleteTimer.c)
 *     ExpDeleteTimer2 @ 0x1404FEE3C (ExpDeleteTimer2.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1400598D0 (EtwGetKernelTraceTimestamp.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     EtwTraceTimedEvent @ 0x14009DEB8 (EtwTraceTimedEvent.c)
 *     KeGenericProcessorCallback @ 0x1400C85B4 (KeGenericProcessorCallback.c)
 *     KeAddProcessorAffinityEx @ 0x1400D1E28 (KeAddProcessorAffinityEx.c)
 *     KiUpdateTimer2Flags @ 0x1400EA620 (KiUpdateTimer2Flags.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1400EA698 (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1400EA6D4 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiRemoveTimer2 @ 0x1400F76D0 (KiRemoveTimer2.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KiTraceCancelTimer2 @ 0x1401DAA5C (KiTraceCancelTimer2.c)
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
  char v13; // bl
  char v14; // si
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rbx
  char v21; // al
  int v24; // [rsp+34h] [rbp-CCh]
  unsigned __int8 CurrentIrql; // [rsp+38h] [rbp-C8h]
  __int64 v26; // [rsp+40h] [rbp-C0h]
  _QWORD v27[4]; // [rsp+48h] [rbp-B8h] BYREF
  char v28[24]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v29[22]; // [rsp+80h] [rbp-80h] BYREF

  v26 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = 0LL;
  updated = 0;
  v24 = 32;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v10 = 1;
    v26 = *(_QWORD *)(a1 + 96);
    memset(v27, 0, sizeof(v27));
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
      LOBYTE(v27[3]) |= 8u;
      v27[1] = v16;
      v27[2] = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v17 ^ KiWaitAlways), KiWaitNever));
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
    goto LABEL_17;
  }
  if ( a4 )
  {
    *(_QWORD *)(a1 + 112) = v6;
    *(_QWORD *)(a1 + 120) = v4;
  }
  v12 = a2;
  if ( !a2 )
    goto LABEL_10;
  if ( KiAcquireTimer2CollectionLockIfInserted(a1) )
  {
    KiRemoveTimer2(a1);
    KxReleaseSpinLock(&KiTimer2CollectionLock);
LABEL_20:
    v5 = 1;
    v13 = 4;
    goto LABEL_11;
  }
  if ( (*(_BYTE *)(a1 + 1) & 0xA) != 0 )
  {
    v24 = 36;
    goto LABEL_20;
  }
LABEL_10:
  v13 = 6;
LABEL_11:
  if ( v10 )
    EtwGetKernelTraceTimestamp(v28, 0x40020000uLL);
  updated = KiUpdateTimer2Flags((volatile signed __int32 *)a1, v24, v13);
  __writecr8(CurrentIrql);
  v14 = a3;
  if ( a3 && !updated )
  {
    LODWORD(v29[0]) = 1310721;
    memset((char *)v29 + 4, 0, 0xA4uLL);
    KeAddProcessorAffinityEx(v29, KiClockTimerOwner);
    KeGenericProcessorCallback(v29, (void (__fastcall *)(struct _KPRCB *, __int64))xHalFreeMessageTarget, 0LL, 2);
  }
  v11 = 0;
LABEL_17:
  if ( v10 && !v11 )
  {
    v18 = KiWaitNever;
    v19 = KiWaitAlways;
    v20 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(v26 ^ KiWaitNever, KiWaitNever));
    if ( v5 )
    {
      KiTraceCancelTimer2(a1, v20);
      v19 = KiWaitAlways;
      v18 = KiWaitNever;
    }
    v27[0] = 0x7E35C6C7F3DD7277LL * (v18 ^ __ROR8__(v20 ^ _byteswap_uint64(a1 ^ v19), v18));
    v21 = v27[3];
    if ( v12 )
    {
      v21 = LOBYTE(v27[3]) | 1;
      LOBYTE(v27[3]) |= 1u;
    }
    if ( v14 )
    {
      v21 |= 2u;
      LOBYTE(v27[3]) = v21;
    }
    if ( updated )
    {
      EtwTraceTimedEvent(0xF6Bu, 0x40020000u, (__int64)v27, 32, 0x400E02u, (__int64)v28);
    }
    else
    {
      LOBYTE(v27[3]) = v21 | 4;
      EtwTraceTimedEvent(0xF6Bu, 0x40020000u, (__int64)v27, 32, 0x602u, (__int64)v28);
    }
  }
  return v5;
}
