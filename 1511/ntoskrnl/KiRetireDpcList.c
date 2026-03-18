/*
 * XREFs of KiRetireDpcList @ 0x140044110
 * Callers:
 *     KiIdleLoop @ 0x140157220 (KiIdleLoop.c)
 *     KyRetireDpcList @ 0x14015ABB0 (KyRetireDpcList.c)
 * Callees:
 *     KiTimer2Expiration @ 0x1400332A0 (KiTimer2Expiration.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     KiExecuteAllDpcs @ 0x140044870 (KiExecuteAllDpcs.c)
 *     KiTimerWaitTest @ 0x140045200 (KiTimerWaitTest.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiProcessThreadWaitList @ 0x1400C7610 (KiProcessThreadWaitList.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400DE680 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x1400DF398 (EtwTraceTimedEvent.c)
 *     KeSignalGate @ 0x1400E9410 (KeSignalGate.c)
 *     PpmPerfGetCurrentFrequency @ 0x140141F40 (PpmPerfGetCurrentFrequency.c)
 *     KiAccumulateCycleStats @ 0x14014290C (KiAccumulateCycleStats.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KiBeginCounterAccumulation @ 0x1401C7ED8 (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x1401C7FE4 (KiEndCounterAccumulation.c)
 *     KiProcessExpiredTimerList @ 0x1401CB088 (KiProcessExpiredTimerList.c)
 */

signed __int16 __fastcall KiRetireDpcList(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r13
  __int64 v3; // r8
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  char v8; // di
  __int16 v9; // bx
  unsigned __int64 v10; // r10
  bool v11; // zf
  signed __int16 result; // ax
  __int64 v13; // rcx
  int v14; // esi
  unsigned __int64 v15; // r15
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // ecx
  int v20; // eax
  unsigned __int64 v21; // r10
  unsigned int v22; // r14d
  __int64 v23; // r8
  int v24; // esi
  __int64 v25; // rdx
  int v26; // ecx
  __int64 v27; // rdi
  __int64 **v28; // rbx
  __int64 v29; // r14
  __int64 v30; // r13
  char v31; // si
  ULONG_PTR v32; // r12
  bool v33; // r15
  __int64 v34; // rbx
  __int64 v35; // rdi
  __int64 v36; // r10
  unsigned int v37; // eax
  char v38; // r11
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 **v41; // rax
  __int64 v42; // rcx
  unsigned int v43; // edx
  volatile signed __int32 *v44; // rcx
  unsigned int v45; // edx
  ULONG_PTR BugCheckParameter4; // rcx
  ULONG_PTR v47; // rdx
  char v48; // cl
  ULONG_PTR *v49; // rbx
  __int64 v50; // r9
  __int64 v51; // r8
  _QWORD *i; // rcx
  unsigned __int64 v53; // rdx
  unsigned int CurrentFrequency; // eax
  __int64 v55; // r9
  __int64 v56; // rcx
  char v57; // [rsp+30h] [rbp-D0h]
  unsigned int v58; // [rsp+34h] [rbp-CCh]
  char v59; // [rsp+38h] [rbp-C8h]
  __int64 v60; // [rsp+40h] [rbp-C0h]
  int v61; // [rsp+48h] [rbp-B8h]
  unsigned int v62; // [rsp+50h] [rbp-B0h]
  int v63; // [rsp+54h] [rbp-ACh]
  unsigned __int64 v65; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v66; // [rsp+68h] [rbp-98h]
  int v67; // [rsp+70h] [rbp-90h]
  __int64 v68; // [rsp+78h] [rbp-88h]
  int v69; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v71; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v72; // [rsp+98h] [rbp-68h]
  _QWORD v73[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v74[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v75[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v76; // [rsp+E0h] [rbp-20h]
  char v77; // [rsp+E8h] [rbp-18h]
  _BYTE v78[16]; // [rsp+F0h] [rbp-10h] BYREF
  int v79; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v80[33]; // [rsp+108h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v68 = v1;
  v2 = a1;
  v79 = 0;
  do
  {
    *(_BYTE *)(v2 + 32) = 1;
    v3 = 0xFFFFFFFFLL;
    v4 = __rdtsc();
    v5 = v4 - *(_QWORD *)(v2 + 23352);
    v6 = v5 + *(_QWORD *)(v1 + 72);
    v7 = v5 + *(unsigned int *)(v1 + 80);
    *(_QWORD *)(v1 + 72) = v6;
    *(_QWORD *)(v2 + 23352) = v4;
    v8 = *(_BYTE *)(v1 + 2);
    if ( v7 > 0xFFFFFFFF )
      LODWORD(v7) = -1;
    *(_DWORD *)(v1 + 80) = v7;
    if ( (v8 & 0x3E) != 0 )
    {
      if ( (v8 & 0x10) != 0 )
      {
        v6 = *(_QWORD *)(v2 + 23352) - *(_QWORD *)(v2 + 23360);
        *(_QWORD *)(v2 + 8LL * *(unsigned __int8 *)(v1 + 124) + 23368) += v6;
        v8 &= ~0x10u;
        *(_QWORD *)(v2 + 23360) = 0LL;
      }
      if ( (v8 & 0x3E) != 0 )
      {
        if ( (v8 & 0x20) != 0 )
        {
          KiAccumulateCycleStats(v2, v1, v5, 0xFFFFF78000000008uLL);
          v8 &= ~0x20u;
        }
        if ( (v8 & 0x3E) != 0 )
        {
          v13 = *(_QWORD *)(v1 + 104);
          if ( v13 )
          {
            for ( i = (_QWORD *)(*(unsigned int *)(v2 + 1624) + v13); i; i = (_QWORD *)i[49] )
              *i += v5;
          }
          if ( (*(_BYTE *)(v1 + 2) & 8) != 0 )
          {
            v6 = *(_QWORD *)(*(_QWORD *)(v2 + 1600) + 136LL);
            if ( (*(_QWORD *)(v1 + 576) & v6) != v6 )
              *(_QWORD *)(v2 + 23392) += v5;
          }
          if ( *(_QWORD *)(v1 + 360) )
            KiEndCounterAccumulation(v1, v6, v3, 0xFFFFF78000000008uLL);
        }
      }
    }
    *(_BYTE *)(v2 + 11754) = 1;
    v9 = *(_WORD *)(v2 + 11756);
    *(_WORD *)(v2 + 11756) = 1;
    v59 = v9;
    if ( (v9 & 8) != 0 )
    {
      v14 = *(_DWORD *)(v2 + 11760);
      v66 = MEMORY[0xFFFFF78000000008];
      v15 = MEMORY[0xFFFFF78000000008];
      v16 = MEMORY[0xFFFFF78000000008] >> 18;
      *(_DWORD *)(v2 + 11760) = MEMORY[0xFFFFF78000000008] >> 18;
      _enable();
      v80[0] = MEMORY[0xFFFFF78000000014];
      if ( KiSerializeTimerExpiration )
      {
        if ( !*(_BYTE *)(v2 + 33) )
        {
LABEL_59:
          _disable();
          goto LABEL_6;
        }
        v17 = KiProcessorBlock[0] + 13824;
      }
      else
      {
        v17 = v2 + 13824;
      }
      v60 = v17;
      if ( v17 )
      {
        v18 = *(unsigned int *)(v2 + 26784);
        *(_DWORD *)(v2 + 26784) = ((_BYTE)v18 + 1) & 0xF;
        *(_QWORD *)(v2 + 16 * (v18 + 1658)) = v15;
        *(LARGE_INTEGER *)(v2 + 16 * (v18 + 1658) + 8) = KeQueryPerformanceCounter(0LL);
        if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
        {
          v71 = v15;
          v74[0] = &v71;
          v74[1] = 8LL;
          EtwTraceKernelEvent((int)v74, 1, 0x40020000u, 0xF50u, 1538);
        }
        v19 = v16 - v14 + 1;
        v62 = v19;
        if ( v19 <= 0x100 )
        {
LABEL_35:
          v61 = v19;
          v20 = 256 - v19;
          v65 = v15;
          v21 = v15;
          if ( 256 - v19 > 0x18 )
            v20 = 24;
          goto LABEL_37;
        }
        v36 = (v16 - v19 + 1) << 18;
        do
        {
          if ( v19 <= 0x100 )
            goto LABEL_35;
          v21 = v36 + 0x4000000;
          v61 = 256;
          v65 = v21;
          v20 = 0;
LABEL_37:
          v22 = 0;
          v23 = v60;
          v67 = v14 + v61;
          v24 = v14 - 1;
          v58 = 0;
          v57 = -64;
          v25 = (unsigned int)(v67 - 1);
          v26 = v25 + v20;
          v63 = v25 + v20;
          do
          {
            v27 = v23 + 32 * ((unsigned __int8)++v24 + 16LL);
            if ( v22 <= (unsigned int)v25 || *(_QWORD *)(v27 + 24) <= v21 )
            {
              v28 = (__int64 **)(v27 + 8);
              if ( v28 != (__int64 **)*v28 )
              {
                do
                {
                  v69 = 0;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)v27, 0LL) )
                  {
                    do
                      KeYieldProcessorEx(&v69);
                    while ( *(_QWORD *)v27 );
                  }
                  v23 = v60;
                  v21 = v65;
                  v38 = v57;
                  do
                  {
                    if ( v28 == (__int64 **)*v28 )
                      goto LABEL_66;
                    v39 = (__int64)(*v28 - 4);
                    if ( *(_QWORD *)(v39 + 24) > v65 )
                    {
                      *(_QWORD *)(v27 + 24) = *(_QWORD *)(v39 + 24);
LABEL_66:
                      _InterlockedAnd64((volatile signed __int64 *)v27, 0LL);
                      goto LABEL_67;
                    }
                    v40 = **v28;
                    v41 = *(__int64 ***)(v39 + 40);
                    if ( *(__int64 **)(v40 + 8) != *v28 || *v41 != *v28 )
                      __fastfail(3u);
                    *v41 = (__int64 *)v40;
                    *(_QWORD *)(v40 + 8) = v41;
                    if ( v41 == (__int64 **)v40 )
                    {
                      *(_DWORD *)(v27 + 28) = -1;
                      v42 = qword_140383178[2 * *(unsigned __int8 *)(v60 - 12208)];
                      if ( KiSerializeTimerExpiration )
                      {
                        v43 = v24 & 0x3F;
                        v44 = (volatile signed __int32 *)(v42 + 8LL * ((unsigned __int8)v24 >> 6));
                      }
                      else
                      {
                        v43 = *(unsigned __int8 *)(v60 - 12207);
                        v44 = (volatile signed __int32 *)(((unsigned __int64)(unsigned __int8)v24 << 6) + v42);
                      }
                      _interlockedbittestandreset64(v44, v43);
                    }
                    v45 = v58;
                    BugCheckParameter4 = _InterlockedExchange64((volatile __int64 *)(v60 + 8LL * v58), v39);
                    if ( BugCheckParameter4 )
                      KeBugCheckEx(0xC7u, 8uLL, 1uLL, v39, BugCheckParameter4);
                    v72 = 0;
                    ++v58;
                    v38 ^= (v38 ^ v45) & 0x3F;
                    v57 = v38;
                    HIBYTE(v72) = v38 ^ *(_BYTE *)(v39 + 3);
                    _InterlockedXor((volatile signed __int32 *)v39, v72);
                  }
                  while ( v45 != 63 );
                  _InterlockedAnd64((volatile signed __int64 *)v27, 0LL);
                  KiProcessExpiredTimerList(v2, &v79, v60, 64LL);
                  v58 = 0;
                }
                while ( v28 != (__int64 **)*v28 );
                v23 = v60;
                v21 = v65;
LABEL_67:
                v25 = (unsigned int)(v67 - 1);
                v26 = v63;
              }
              ++v22;
            }
          }
          while ( v24 != v26 );
          if ( v58 )
          {
            v29 = 0LL;
            v30 = *(_QWORD *)(v2 + 8);
            v31 = BYTE4(PerfGlobalGroupMask) >> 7;
            v32 = *(unsigned int *)(v30 + 484);
            v33 = (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0;
            do
            {
              v34 = _InterlockedExchange64((volatile __int64 *)(v23 + 8 * v29), 0LL);
              v29 = (unsigned int)(v29 + 1);
              if ( v34 )
              {
                KiAcquireKobjectLockSafe((volatile signed __int32 *)v34, v25, v23);
                if ( v33 )
                {
                  v75[0] = *(_QWORD *)(v34 + 24);
                  v53 = KiWaitAlways ^ _byteswap_uint64(v34 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v34 + 48), KiWaitNever));
                  if ( v53 )
                    v76 = *(_QWORD *)(v53 + 24);
                  else
                    v76 = 0LL;
                }
                v35 = KiTimerWaitTest(a1, v34, v80);
                if ( v33 )
                {
                  v75[1] = v34;
                  v77 = *(_BYTE *)(v34 + 1) >> 2;
                  v73[0] = v75;
                  v73[1] = 32LL;
                  EtwTraceKernelEvent((int)v73, 1, 0x40020000u, 0xF51u, 1538);
                }
                if ( v35 )
                {
                  if ( *(_QWORD *)(a1 + 11400) )
                    KiProcessThreadWaitList(a1, 1LL, 0LL);
                  if ( v31 )
                    EtwGetKernelTraceTimestamp(v78, 536871040LL);
                  v48 = v79;
                  BugCheckParameter2 = *(_QWORD *)(v35 + 24);
                  v47 = BugCheckParameter2;
                  ++v79;
                  v49 = &v80[2 * (v48 & 0xF) + 1];
                  *((_DWORD *)v49 + 2) = MEMORY[0xFFFFF78000000320];
                  *v49 = v47;
                  v50 = HIDWORD(v80[0]);
                  v51 = LODWORD(v80[0]);
                  *(_DWORD *)(a1 + 23328) = 0;
                  ((void (__fastcall *)(__int64, _QWORD, __int64, __int64))BugCheckParameter2)(
                    v35,
                    *(_QWORD *)(v35 + 32),
                    v51,
                    v50);
                  *((_DWORD *)v49 + 3) = MEMORY[0xFFFFF78000000320];
                  if ( (_DWORD)v32 != *(_DWORD *)(v30 + 484) )
                    KeBugCheckEx(0xC7u, 5uLL, BugCheckParameter2, v32, *(unsigned int *)(v30 + 484));
                  if ( v31 )
                    EtwTraceTimedEvent(3909, 536871040, (unsigned int)&BugCheckParameter2, 8, 4196866, (__int64)v78);
                }
                v23 = v60;
              }
            }
            while ( (unsigned int)v29 < v58 );
            v2 = a1;
            if ( *(_QWORD *)(a1 + 11400) )
              KiProcessThreadWaitList(a1, 1LL, 0LL);
          }
          v11 = v62 == v61;
          v19 = v62 - v61;
          v14 = v67;
          v36 = v65;
          v15 = v66;
          v62 -= v61;
        }
        while ( !v11 );
        v1 = v68;
        LOBYTE(v9) = v59;
        if ( (*(_BYTE *)(v2 + 11756) & 8) == 0 )
        {
          v37 = *(_DWORD *)(v2 + 23340);
          *(_DWORD *)(v2 + 23336) = 0;
          if ( v37 >= KeTimeIncrement )
            *(_DWORD *)(v2 + 23340) = v37 - KeTimeIncrement;
          else
            *(_DWORD *)(v2 + 23340) = 0;
        }
      }
      if ( *(_BYTE *)(v2 + 33) )
        KiTimer2Expiration(v2, v15, (__int64)&v79);
      goto LABEL_59;
    }
LABEL_6:
    KiExecuteAllDpcs(v2, v1, &v79, 0LL);
    *(_BYTE *)(v2 + 11754) = 0;
    if ( (v9 & 4) != 0 )
    {
      _enable();
      KeSignalGate(v2 + 22528, 0LL);
      _disable();
    }
    v10 = __rdtsc();
    *(_QWORD *)(v2 + 23544) += v10 - *(_QWORD *)(v2 + 23352);
    if ( (*(_BYTE *)(v1 + 2) & 0x20) != 0 )
    {
      CurrentFrequency = PpmPerfGetCurrentFrequency(v2);
      v56 = 3LL;
      if ( CurrentFrequency / 0x19 < 3 )
        v56 = CurrentFrequency / 0x19;
      *(_QWORD *)(8 * (*(unsigned __int8 *)(v2 + 23858) + 2 * v56) + 23552 + v2) += v55;
    }
    *(_QWORD *)(v2 + 23352) = v10;
    if ( (*(_BYTE *)(v1 + 2) & 0x10) != 0 )
      *(_QWORD *)(v2 + 23360) = v10;
    if ( (*(_BYTE *)(v1 + 2) & 2) != 0 )
      KiBeginCounterAccumulation(v1, 0LL);
    v11 = *(_BYTE *)(v2 + 6) == 0;
    *(_BYTE *)(v2 + 32) = 0;
    if ( !v11 )
      *(_BYTE *)(v2 + 6) = 0;
    result = _InterlockedCompareExchange16((volatile signed __int16 *)(v2 + 11756), 0, 1);
  }
  while ( result != 1 );
  *(_QWORD *)(v2 + 11680) = 0LL;
  return result;
}
