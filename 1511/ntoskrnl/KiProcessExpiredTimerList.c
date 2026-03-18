/*
 * XREFs of KiProcessExpiredTimerList @ 0x1401CB088
 * Callers:
 *     KiRetireDpcList @ 0x140044110 (KiRetireDpcList.c)
 *     KiExpireTimerTable @ 0x140115548 (KiExpireTimerTable.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     KiTimerWaitTest @ 0x140045200 (KiTimerWaitTest.c)
 *     KiProcessThreadWaitList @ 0x1400C7610 (KiProcessThreadWaitList.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400DE680 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x1400DF398 (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __fastcall KiProcessExpiredTimerList(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rcx
  _DWORD *v6; // r12
  __int64 v7; // r14
  char v8; // r15
  ULONG_PTR v9; // rdx
  bool v10; // si
  __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  ULONG_PTR v13; // r13
  ULONG_PTR v14; // rdx
  __int64 v15; // rbx
  _DWORD *v16; // rbx
  __int64 v17; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-41h] BYREF
  __int64 v20; // [rsp+40h] [rbp-39h]
  unsigned int v21; // [rsp+48h] [rbp-31h]
  _DWORD BugCheckParameter3[3]; // [rsp+4Ch] [rbp-2Dh]
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
  v9 = *(unsigned int *)(v5 + 484);
  BugCheckParameter3[0] = *(_DWORD *)(v5 + 484);
  v10 = (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0;
  v21 = a4;
  v20 = a3;
  *(_QWORD *)&BugCheckParameter3[1] = v5;
  do
  {
    v11 = _InterlockedExchange64((volatile __int64 *)(a3 + 8 * v7), 0LL);
    v7 = (unsigned int)(v7 + 1);
    if ( v11 )
    {
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v11, v9, a3);
      if ( v10 )
      {
        v26[0] = *(_QWORD *)(v11 + 24);
        v12 = KiWaitAlways ^ _byteswap_uint64(v11 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v11 + 48), KiWaitNever));
        if ( v12 )
          v27 = *(_QWORD *)(v12 + 24);
        else
          v27 = 0LL;
      }
      v13 = KiTimerWaitTest(a1, v11, (__int64)(v6 + 2));
      if ( v10 )
      {
        v25 = 0;
        v26[1] = v11;
        v28 = *(_BYTE *)(v11 + 1) >> 2;
        v23 = v26;
        v24 = 32;
        EtwTraceKernelEvent((int)&v23, 1, 0x40020000u, 0xF51u, 1538);
      }
      if ( v13 )
      {
        if ( *(_QWORD *)(a1 + 11400) )
          KiProcessThreadWaitList(a1, 1LL, 0LL, 2u);
        if ( v8 )
          EtwGetKernelTraceTimestamp(v29, (char *)0x20000080);
        BugCheckParameter2 = *(_QWORD *)(v13 + 24);
        v14 = BugCheckParameter2;
        v15 = ((*a2)++ & 0xF) + 1LL;
        v16 = &a2[4 * v15];
        *(_QWORD *)v16 = v14;
        v16[2] = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(a1 + 23328) = 0;
        ((void (__fastcall *)(ULONG_PTR, _QWORD, _QWORD, _QWORD))BugCheckParameter2)(
          v13,
          *(_QWORD *)(v13 + 32),
          (unsigned int)v6[2],
          (unsigned int)a2[3]);
        v17 = *(_QWORD *)&BugCheckParameter3[1];
        v9 = BugCheckParameter3[0];
        v16[3] = MEMORY[0xFFFFF78000000320];
        if ( (_DWORD)v9 != *(_DWORD *)(v17 + 484) )
          KeBugCheckEx(0xC7u, 5uLL, BugCheckParameter2, v9, *(unsigned int *)(v17 + 484));
        if ( v8 )
          EtwTraceTimedEvent(0xF45u, 0x20000080u, (__int64)&BugCheckParameter2, 8, 0x400A02u, (__int64)v29);
      }
      v6 = a2;
      a3 = v20;
    }
  }
  while ( (unsigned int)v7 < v21 );
  if ( *(_QWORD *)(a1 + 11400) )
    KiProcessThreadWaitList(a1, 1LL, 0LL, 2u);
}
