/*
 * XREFs of KiProcessExpiredTimerList @ 0x14010D420
 * Callers:
 *     KiRetireDpcList @ 0x140057E00 (KiRetireDpcList.c)
 *     KiExpireTimerTable @ 0x140124234 (KiExpireTimerTable.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     KiTimerWaitTest @ 0x140058810 (KiTimerWaitTest.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400598D0 (EtwGetKernelTraceTimestamp.c)
 *     KiProcessThreadWaitList @ 0x14008D420 (KiProcessThreadWaitList.c)
 *     EtwTraceTimedEvent @ 0x14009DEB8 (EtwTraceTimedEvent.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1401D1CD8 (KiResetGlobalDpcWatchdogProfiler.c)
 */

void __fastcall KiProcessExpiredTimerList(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rcx
  _DWORD *v6; // r12
  __int64 v7; // r14
  char v8; // r15
  bool v9; // si
  __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  ULONG_PTR v12; // r13
  ULONG_PTR v13; // rdx
  __int64 v14; // rbx
  _DWORD *v15; // rbx
  __int64 v16; // rcx
  unsigned int BugCheckParameter3; // [rsp+38h] [rbp-41h]
  __int64 v20; // [rsp+40h] [rbp-39h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-31h] BYREF
  __int64 v22; // [rsp+50h] [rbp-29h]
  _QWORD *v23; // [rsp+58h] [rbp-21h] BYREF
  int v24; // [rsp+60h] [rbp-19h]
  int v25; // [rsp+64h] [rbp-15h]
  _QWORD v26[2]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v27; // [rsp+78h] [rbp-1h]
  char v28; // [rsp+80h] [rbp+7h]
  char v29[16]; // [rsp+88h] [rbp+Fh] BYREF

  v5 = *(_QWORD *)(a1 + 8);
  v6 = a2;
  v7 = 0LL;
  v8 = BYTE4(PerfGlobalGroupMask) >> 7;
  BugCheckParameter3 = *(_DWORD *)(v5 + 484);
  v9 = (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0;
  v20 = a3;
  v22 = v5;
  do
  {
    v10 = _InterlockedExchange64((volatile __int64 *)(a3 + 8 * v7), 0LL);
    v7 = (unsigned int)(v7 + 1);
    if ( v10 )
    {
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v10);
      if ( v9 )
      {
        v26[0] = *(_QWORD *)(v10 + 24);
        v11 = KiWaitAlways ^ _byteswap_uint64(v10 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v10 + 48), KiWaitNever));
        if ( v11 )
          v27 = *(_QWORD *)(v11 + 24);
        else
          v27 = 0LL;
      }
      v12 = KiTimerWaitTest(a1, v10, (__int64)(v6 + 2));
      if ( v9 )
      {
        v25 = 0;
        v26[1] = v10;
        v28 = *(_BYTE *)(v10 + 1) >> 2;
        v23 = v26;
        v24 = 32;
        EtwTraceKernelEvent((int)&v23, 1, 0x40020000u, 3921, 1538);
      }
      if ( v12 )
      {
        if ( *(_QWORD *)(a1 + 11400) )
          KiProcessThreadWaitList(a1, 1u, 0LL, 2LL);
        if ( v8 )
          EtwGetKernelTraceTimestamp(v29, 0x20000080uLL);
        BugCheckParameter2 = *(_QWORD *)(v12 + 24);
        v13 = BugCheckParameter2;
        v14 = ((*a2)++ & 0xF) + 1LL;
        v15 = &a2[4 * v14];
        *(_QWORD *)v15 = v13;
        v15[2] = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(a1 + 23328) = 0;
        KiResetGlobalDpcWatchdogProfiler(a1);
        *(_BYTE *)(a1 + 11754) = 1;
        ((void (__fastcall *)(ULONG_PTR, _QWORD, _QWORD, _QWORD))BugCheckParameter2)(
          v12,
          *(_QWORD *)(v12 + 32),
          (unsigned int)v6[2],
          (unsigned int)a2[3]);
        v16 = v22;
        *(_BYTE *)(a1 + 11754) = 0;
        v15[3] = MEMORY[0xFFFFF78000000320];
        if ( BugCheckParameter3 != *(_DWORD *)(v16 + 484) )
          KeBugCheckEx(0xC7u, 5uLL, BugCheckParameter2, BugCheckParameter3, *(unsigned int *)(v16 + 484));
        if ( v8 )
          EtwTraceTimedEvent(0xF45u, 0x20000080u, (__int64)&BugCheckParameter2, 8, 0x400A02u, (__int64)v29);
      }
      a3 = v20;
      v6 = a2;
    }
  }
  while ( (unsigned int)v7 < a4 );
  if ( *(_QWORD *)(a1 + 11400) )
    KiProcessThreadWaitList(a1, 1u, 0LL, 2LL);
}
