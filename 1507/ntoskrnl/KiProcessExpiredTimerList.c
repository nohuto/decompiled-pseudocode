/*
 * XREFs of KiProcessExpiredTimerList @ 0x140209C50
 * Callers:
 *     KiRetireDpcList @ 0x1400A4C50 (KiRetireDpcList.c)
 *     KiExpireTimerTable @ 0x14014ABA0 (KiExpireTimerTable.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     EtwTraceTimedEvent @ 0x140083664 (EtwTraceTimedEvent.c)
 *     KiTimerWaitTest @ 0x1400A40F0 (KiTimerWaitTest.c)
 *     KiProcessThreadWaitList @ 0x1400F7350 (KiProcessThreadWaitList.c)
 *     EtwGetKernelTraceTimestamp @ 0x140111B58 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __fastcall KiProcessExpiredTimerList(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rcx
  __int64 v6; // r15
  __int64 v7; // r9
  _DWORD *v8; // r8
  char v9; // r13
  bool v10; // r14
  __int64 v11; // rbx
  unsigned int v12; // esi
  unsigned __int64 v13; // rdx
  unsigned int *v14; // r12
  unsigned __int64 v15; // rsi
  ULONG_PTR v16; // rdx
  __int64 v17; // rbx
  _DWORD *v18; // rbx
  __int64 v19; // rcx
  ULONG_PTR v20; // rdx
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-41h] BYREF
  __int64 v23; // [rsp+40h] [rbp-39h]
  unsigned int v24; // [rsp+48h] [rbp-31h]
  _DWORD BugCheckParameter3[3]; // [rsp+4Ch] [rbp-2Dh]
  _QWORD *v26; // [rsp+58h] [rbp-21h] BYREF
  int v27; // [rsp+60h] [rbp-19h]
  int v28; // [rsp+64h] [rbp-15h]
  _QWORD v29[2]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v30; // [rsp+78h] [rbp-1h]
  char v31; // [rsp+80h] [rbp+7h]
  char v32[16]; // [rsp+88h] [rbp+Fh] BYREF

  v5 = *(_QWORD *)(a1 + 8);
  v6 = 0LL;
  v24 = a4;
  v7 = a3;
  v23 = a3;
  v8 = a2;
  v9 = BYTE4(PerfGlobalGroupMask) >> 7;
  BugCheckParameter3[0] = *(_DWORD *)(v5 + 484);
  v10 = (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0;
  *(_QWORD *)&BugCheckParameter3[1] = v5;
  do
  {
    v11 = _InterlockedExchange64((volatile __int64 *)(v7 + 8 * v6), 0LL);
    v6 = (unsigned int)(v6 + 1);
    if ( v11 )
    {
      v12 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)v11, 7u) )
      {
        do
        {
          if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v12);
        }
        while ( (*(_DWORD *)v11 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v11, 7u) );
        v8 = a2;
      }
      if ( v10 )
      {
        v29[0] = *(_QWORD *)(v11 + 24);
        v13 = KiWaitAlways ^ _byteswap_uint64(v11 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v11 + 48), KiWaitNever));
        if ( v13 )
          v30 = *(_QWORD *)(v13 + 24);
        else
          v30 = 0LL;
      }
      v14 = v8 + 2;
      v15 = KiTimerWaitTest(a1, v11, (__int64 *)v8 + 1);
      if ( v10 )
      {
        v28 = 0;
        v29[1] = v11;
        v31 = *(_BYTE *)(v11 + 1) >> 2;
        v26 = v29;
        v27 = 32;
        EtwTraceKernelEvent((int)&v26, 1, 0x40020000u, 0xF51u, 1538);
      }
      if ( v15 )
      {
        if ( *(_QWORD *)(a1 + 11400) )
          KiProcessThreadWaitList(a1, 1u, 0, 2u);
        if ( v9 )
          EtwGetKernelTraceTimestamp(v32, (char *)0x20000080);
        BugCheckParameter2 = *(_QWORD *)(v15 + 24);
        v16 = BugCheckParameter2;
        v17 = ((*a2)++ & 0xF) + 1LL;
        v18 = &a2[4 * v17];
        *(_QWORD *)v18 = v16;
        v18[2] = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(a1 + 23328) = 0;
        ((void (__fastcall *)(unsigned __int64, _QWORD, _QWORD, _QWORD))BugCheckParameter2)(
          v15,
          *(_QWORD *)(v15 + 32),
          *v14,
          (unsigned int)a2[3]);
        v19 = *(_QWORD *)&BugCheckParameter3[1];
        v20 = BugCheckParameter3[0];
        v18[3] = MEMORY[0xFFFFF78000000320];
        if ( (_DWORD)v20 != *(_DWORD *)(v19 + 484) )
          KeBugCheckEx(0xC7u, 5uLL, BugCheckParameter2, v20, *(unsigned int *)(v19 + 484));
        if ( v9 )
          EtwTraceTimedEvent(0xF45u, 0x20000080u, (__int64)&BugCheckParameter2, 8, 4196866, (__int64)v32);
      }
      v8 = a2;
      v7 = v23;
    }
  }
  while ( (unsigned int)v6 < v24 );
  if ( *(_QWORD *)(a1 + 11400) )
    KiProcessThreadWaitList(a1, 1u, 0, 2u);
}
