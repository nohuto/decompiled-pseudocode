/*
 * XREFs of KiRetireDpcList @ 0x140057E00
 * Callers:
 *     KiIdleLoop @ 0x140161FE0 (KiIdleLoop.c)
 *     KyRetireDpcList @ 0x140166550 (KyRetireDpcList.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiTimerWaitTest @ 0x140058810 (KiTimerWaitTest.c)
 *     KiExecuteAllDpcs @ 0x140058E00 (KiExecuteAllDpcs.c)
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400598D0 (EtwGetKernelTraceTimestamp.c)
 *     KiTimer2Expiration @ 0x140059C20 (KiTimer2Expiration.c)
 *     KiProcessThreadWaitList @ 0x14008D420 (KiProcessThreadWaitList.c)
 *     KeSignalGate @ 0x1400A6E1C (KeSignalGate.c)
 *     KiProcessExpiredTimerList @ 0x14010D420 (KiProcessExpiredTimerList.c)
 *     PpmPerfGetCurrentFrequency @ 0x140149EF0 (PpmPerfGetCurrentFrequency.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1401D1CD8 (KiResetGlobalDpcWatchdogProfiler.c)
 *     KiBeginCounterAccumulation @ 0x1401D6D44 (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x1401D6E50 (KiEndCounterAccumulation.c)
 */

signed __int16 __fastcall KiRetireDpcList(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r14
  __int64 v3; // r8
  unsigned __int64 v4; // rax
  __int64 v5; // r10
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r11
  unsigned int CurrentFrequency; // kr00_4
  __int64 v11; // rcx
  _QWORD *i; // rcx
  unsigned __int64 v13; // rcx
  __int16 v14; // si
  int v15; // edi
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rsi
  unsigned __int8 v18; // cl
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // ecx
  __int64 v22; // r10
  int v23; // edx
  unsigned __int64 v24; // r10
  int v25; // eax
  __int64 v26; // r8
  unsigned int v27; // r9d
  unsigned int v28; // edx
  unsigned int v29; // ecx
  int v30; // r12d
  unsigned int v31; // r14d
  char v32; // si
  __int64 v33; // rbx
  _QWORD **v34; // rdi
  _QWORD *v35; // rax
  ULONG_PTR v36; // r9
  _QWORD *v37; // rdx
  _QWORD *v38; // rax
  __int64 v39; // rax
  unsigned int v40; // edx
  volatile signed __int32 *v41; // rax
  ULONG_PTR BugCheckParameter4; // rcx
  char v43; // al
  __int64 v44; // r9
  unsigned int v45; // esi
  __int64 v46; // r13
  char v47; // r15
  bool v48; // r14
  unsigned int v49; // r12d
  __int64 v50; // rax
  __int64 v51; // rbx
  unsigned __int64 v52; // rdx
  __int64 v53; // rdi
  ULONG_PTR v54; // rdx
  char v55; // cl
  ULONG_PTR *v56; // rbx
  __int64 v57; // r9
  __int64 v58; // r8
  unsigned int v59; // ebx
  bool v60; // zf
  __int64 v61; // rcx
  char *v62; // rax
  __int64 v63; // rax
  int v64; // r8d
  unsigned int v65; // eax
  unsigned __int64 v66; // r10
  __int64 v67; // r9
  unsigned int v68; // kr04_4
  unsigned int v69; // r8d
  _QWORD *v70; // rdx
  signed __int16 result; // ax
  char v72; // [rsp+34h] [rbp-CCh]
  unsigned int v74; // [rsp+40h] [rbp-C0h]
  unsigned int v75; // [rsp+40h] [rbp-C0h]
  __int64 v76; // [rsp+48h] [rbp-B8h]
  unsigned int v77; // [rsp+50h] [rbp-B0h]
  unsigned int v78; // [rsp+54h] [rbp-ACh]
  bool v79; // [rsp+54h] [rbp-ACh]
  unsigned int v80; // [rsp+58h] [rbp-A8h]
  __int64 v81; // [rsp+58h] [rbp-A8h]
  int v82; // [rsp+60h] [rbp-A0h]
  unsigned int v83; // [rsp+64h] [rbp-9Ch]
  unsigned __int64 v84; // [rsp+68h] [rbp-98h]
  unsigned __int64 v85; // [rsp+70h] [rbp-90h]
  int v86; // [rsp+78h] [rbp-88h] BYREF
  int v87; // [rsp+7Ch] [rbp-84h] BYREF
  int v88; // [rsp+80h] [rbp-80h]
  int v89; // [rsp+84h] [rbp-7Ch]
  __int64 v90; // [rsp+88h] [rbp-78h]
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v92; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v93; // [rsp+A0h] [rbp-60h]
  _QWORD v94[2]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v95[2]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v96[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v97; // [rsp+E8h] [rbp-18h]
  char v98; // [rsp+F0h] [rbp-10h]
  _QWORD v99[3]; // [rsp+F8h] [rbp-8h] BYREF
  int v100; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v101[33]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v102[4]; // [rsp+220h] [rbp+120h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = a1;
  v90 = v1;
  v100 = 0;
  do
  {
    v3 = 0xFFFFFFFFLL;
    *(_BYTE *)(v2 + 32) = 1;
    v4 = __rdtsc();
    v5 = v4 - *(_QWORD *)(v2 + 23352);
    v6 = v5 + *(_QWORD *)(v1 + 72);
    v7 = v5 + *(unsigned int *)(v1 + 80);
    *(_QWORD *)(v1 + 72) = v6;
    *(_QWORD *)(v2 + 23352) = v4;
    v8 = *(unsigned __int8 *)(v1 + 2);
    if ( v7 > 0xFFFFFFFF )
      LODWORD(v7) = -1;
    *(_DWORD *)(v1 + 80) = v7;
    if ( (v8 & 0x3E) != 0 )
    {
      if ( (v8 & 0x10) != 0 )
      {
        v6 = *(_QWORD *)(v2 + 23352) - *(_QWORD *)(v2 + 23360);
        *(_QWORD *)(v2 + 8LL * *(unsigned __int8 *)(v1 + 124) + 23368) += v6;
        LOBYTE(v8) = v8 & 0xEF;
        *(_QWORD *)(v2 + 23360) = 0LL;
      }
      if ( (v8 & 0x3E) != 0 )
      {
        if ( (v8 & 0x20) != 0 )
        {
          if ( *(_QWORD *)(v1 + 1960) )
          {
            CurrentFrequency = PpmPerfGetCurrentFrequency(v2);
            v3 = 3LL;
            if ( CurrentFrequency / 0x19 < 3 )
              v3 = CurrentFrequency / 0x19;
            v6 = v9 + 8 * (*(unsigned __int8 *)(v2 + 23858) + 2 * v3);
            *(_QWORD *)v6 += v5;
          }
          LOBYTE(v8) = v8 & 0xDF;
        }
        if ( (v8 & 0x3E) != 0 )
        {
          v11 = *(_QWORD *)(v1 + 104);
          if ( v11 )
          {
            for ( i = (_QWORD *)(*(unsigned int *)(v2 + 1624) + v11); i; i = (_QWORD *)i[51] )
              *i += v5;
          }
          if ( (*(_BYTE *)(v1 + 2) & 8) != 0 )
          {
            v13 = *(_QWORD *)(*(_QWORD *)(v2 + 1600) + 136LL);
            v6 = v13 & *(_QWORD *)(v1 + 576);
            if ( v6 != v13 )
              *(_QWORD *)(v2 + 23392) += v5;
          }
          if ( *(_QWORD *)(v1 + 360) )
            KiEndCounterAccumulation(v1, v6, v3, v8);
        }
      }
    }
    v14 = *(_WORD *)(v2 + 11756);
    *(_WORD *)(v2 + 11756) = 1;
    v72 = v14;
    if ( (v14 & 8) == 0 )
      goto LABEL_108;
    v15 = *(_DWORD *)(v2 + 11760);
    v16 = MEMORY[0xFFFFF78000000008];
    v85 = MEMORY[0xFFFFF78000000008];
    if ( KiLastNonHrTimerExpiration == *(_QWORD *)(v2 + 11560) )
    {
      v18 = 0;
      _enable();
      v101[0] = MEMORY[0xFFFFF78000000014];
      goto LABEL_105;
    }
    *(_QWORD *)(v2 + 11560) = KiLastNonHrTimerExpiration;
    v17 = v16 >> 18;
    v18 = 1;
    *(_DWORD *)(v2 + 11760) = v16 >> 18;
    _enable();
    v101[0] = MEMORY[0xFFFFF78000000014];
    if ( KiSerializeTimerExpiration )
    {
      if ( !*(_BYTE *)(v2 + 33) )
        goto LABEL_104;
      v19 = KiProcessorBlock[0] + 13824;
    }
    else
    {
      v19 = v2 + 13824;
    }
    v76 = v19;
    if ( !v19 )
      goto LABEL_104;
    v20 = *(unsigned int *)(v2 + 26912);
    *(_DWORD *)(v2 + 26912) = ((_BYTE)v20 + 1) & 0xF;
    *(_QWORD *)(v2 + 16 * (v20 + 1666)) = v16;
    *(LARGE_INTEGER *)(v2 + 16 * (v20 + 1666) + 8) = KeQueryPerformanceCounter(0LL);
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      v92 = v16;
      v94[0] = &v92;
      v94[1] = 8LL;
      EtwTraceKernelEvent((int)v94, 1, 0x40020000u, 3920, 1538);
    }
    v21 = v17 - v15 + 1;
    v83 = v21;
    if ( v21 > 0x100 )
    {
      v22 = (v17 - v21 + 1) << 18;
      goto LABEL_34;
    }
    while ( 2 )
    {
      v82 = v21;
      v25 = 256 - v21;
      v23 = v21;
      v24 = v16;
      if ( 256 - v21 > 0x18 )
        v25 = 24;
LABEL_38:
      v26 = v76;
      v27 = v23 + v15 - 1;
      v89 = v23 + v15;
      v28 = v27 + v25;
      v84 = v24;
      v29 = 0;
      v74 = v27 + v25;
      v78 = v27;
      v30 = v15 - 1;
      v80 = 0;
      v31 = 0;
      v77 = 0;
      v32 = -64;
      do
      {
        v33 = v26 + 32 * ((unsigned __int8)++v30 + 16LL);
        if ( v29 <= v27 || *(_QWORD *)(v33 + 24) <= v24 )
        {
          v34 = (_QWORD **)(v33 + 8);
          if ( v34 != *v34 )
          {
            while ( 2 )
            {
              v86 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)v33, 0LL) )
              {
                do
                  KeYieldProcessorEx(&v86);
                while ( *(_QWORD *)v33 );
              }
              v26 = v76;
              do
              {
                v35 = *v34;
                if ( v34 == *v34 )
                  goto LABEL_61;
                v36 = (ULONG_PTR)(v35 - 4);
                if ( *(v35 - 1) > v84 )
                {
                  *(_QWORD *)(v33 + 24) = *(_QWORD *)(v36 + 24);
LABEL_61:
                  _InterlockedAnd64((volatile signed __int64 *)v33, 0LL);
                  goto LABEL_62;
                }
                v37 = (_QWORD *)*v35;
                v38 = *(_QWORD **)(v36 + 40);
                if ( v37[1] != v36 + 32 || (_QWORD *)*v38 != *v34 )
                  __fastfail(3u);
                *v38 = v37;
                v37[1] = v38;
                if ( v38 == v37 )
                {
                  *(_DWORD *)(v33 + 28) = -1;
                  v39 = qword_1403AB288[2 * *(unsigned __int8 *)(v76 - 12208)];
                  if ( KiSerializeTimerExpiration )
                  {
                    v40 = v30 & 0x3F;
                    v41 = (volatile signed __int32 *)(v39 + 8LL * ((unsigned __int8)v30 >> 6));
                  }
                  else
                  {
                    v40 = *(unsigned __int8 *)(v76 - 12207);
                    v41 = (volatile signed __int32 *)(((unsigned __int64)(unsigned __int8)v30 << 6) + v39);
                  }
                  _interlockedbittestandreset64(v41, v40);
                }
                BugCheckParameter4 = _InterlockedExchange64((volatile __int64 *)(v76 + 8LL * v31), v36);
                if ( BugCheckParameter4 )
                  KeBugCheckEx(0xC7u, 8uLL, 1uLL, v36, BugCheckParameter4);
                v93 = 0;
                v43 = v32 ^ v31++;
                v77 = v31;
                v32 ^= v43 & 0x3F;
                HIBYTE(v93) = v32 ^ *(_BYTE *)(v36 + 3);
                _InterlockedXor((volatile signed __int32 *)v36, v93);
              }
              while ( v31 != 64 );
              _InterlockedAnd64((volatile signed __int64 *)v33, 0LL);
              KiProcessExpiredTimerList(a1, &v100, v76, 64LL);
              v31 = 0;
              v77 = 0;
              if ( v34 != *v34 )
                continue;
              break;
            }
            v26 = v76;
LABEL_62:
            v28 = v74;
            v29 = v80;
          }
          v27 = v78;
          ++v29;
          v24 = v84;
          v80 = v29;
        }
      }
      while ( v30 != v28 );
      if ( !v31 )
      {
        v2 = a1;
        goto LABEL_97;
      }
      v44 = a1;
      v45 = 0;
      v46 = *(_QWORD *)(a1 + 8);
      v47 = BYTE4(PerfGlobalGroupMask) >> 7;
      v48 = (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0;
      v81 = v46;
      v79 = v48;
      v49 = *(_DWORD *)(v46 + 484);
      v75 = v49;
      do
      {
        v50 = v45++;
        v51 = _InterlockedExchange64((volatile __int64 *)(v26 + 8 * v50), 0LL);
        if ( !v51 )
          continue;
        v87 = 0;
        if ( _interlockedbittestandset((volatile signed __int32 *)v51, 7u) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v87);
            while ( (*(_DWORD *)v51 & 0x80u) != 0 );
          }
          while ( _interlockedbittestandset((volatile signed __int32 *)v51, 7u) );
          v44 = a1;
        }
        if ( v48 )
        {
          v96[0] = *(_QWORD *)(v51 + 24);
          v52 = KiWaitAlways ^ _byteswap_uint64(v51 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v51 + 48), KiWaitNever));
          if ( v52 )
            v97 = *(_QWORD *)(v52 + 24);
          else
            v97 = 0LL;
        }
        v53 = KiTimerWaitTest(v44, v51, v101);
        if ( v48 )
        {
          v96[1] = v51;
          v98 = *(_BYTE *)(v51 + 1) >> 2;
          v95[0] = v96;
          v95[1] = 32LL;
          EtwTraceKernelEvent((int)v95, 1, 0x40020000u, 3921, 1538);
        }
        if ( v53 )
        {
          if ( *(_QWORD *)(a1 + 11400) )
            KiProcessThreadWaitList(a1, 1LL, 0LL, 2LL);
          if ( v47 )
            EtwGetKernelTraceTimestamp(v99, 536871040LL);
          v55 = v100;
          BugCheckParameter2 = *(_QWORD *)(v53 + 24);
          v54 = BugCheckParameter2;
          ++v100;
          v56 = &v101[2 * (v55 & 0xF) + 1];
          *((_DWORD *)v56 + 2) = MEMORY[0xFFFFF78000000320];
          *v56 = v54;
          *(_DWORD *)(a1 + 23328) = 0;
          KiResetGlobalDpcWatchdogProfiler(a1);
          v57 = HIDWORD(v101[0]);
          v58 = LODWORD(v101[0]);
          *(_BYTE *)(a1 + 11754) = 1;
          ((void (__fastcall *)(__int64, _QWORD, __int64, __int64))BugCheckParameter2)(
            v53,
            *(_QWORD *)(v53 + 32),
            v58,
            v57);
          v44 = a1;
          *(_BYTE *)(a1 + 11754) = 0;
          *((_DWORD *)v56 + 3) = MEMORY[0xFFFFF78000000320];
          if ( v49 != *(_DWORD *)(v46 + 484) )
            KeBugCheckEx(0xC7u, 5uLL, BugCheckParameter2, v49, *(unsigned int *)(v46 + 484));
          if ( !v47 )
            goto LABEL_92;
          v59 = EtwpActiveSystemLoggers;
          v60 = !_BitScanForward((unsigned int *)&v61, EtwpActiveSystemLoggers);
          v102[2] = &BugCheckParameter2;
          v88 = v61;
          v102[3] = 8LL;
          if ( v60 )
            goto LABEL_92;
          do
          {
            v59 &= v59 - 1;
            v62 = (char *)&EtwpGroupMasks + 32 * (unsigned int)v61;
            if ( v62 && (*((_DWORD *)v62 + 1) & 0x80u) != 0 )
            {
              v63 = (unsigned __int16)word_1402FD342[2 * v61];
              v64 = (unsigned __int16)EtwpSystemLogger[2 * (unsigned int)v61];
              v102[1] = 8LL;
              v102[0] = &v99[v63];
              EtwpLogKernelEvent((unsigned int)v102, v61, v64, 2, 3909, 4196866);
            }
            v60 = !_BitScanForward((unsigned int *)&v61, v59);
          }
          while ( !v60 );
          v48 = v79;
          v46 = v81;
          v49 = v75;
          v88 = v61;
        }
        v44 = a1;
LABEL_92:
        v26 = v76;
      }
      while ( v45 < v77 );
      v2 = a1;
      if ( *(_QWORD *)(a1 + 11400) )
        KiProcessThreadWaitList(a1, 1LL, 0LL, 2LL);
LABEL_97:
      v60 = v83 == v82;
      v21 = v83 - v82;
      v15 = v89;
      v22 = v84;
      v16 = v85;
      v83 -= v82;
      if ( !v60 )
      {
LABEL_34:
        if ( v21 <= 0x100 )
          continue;
        v23 = 256;
        v24 = v22 + 0x4000000;
        v82 = 256;
        v25 = 0;
        goto LABEL_38;
      }
      break;
    }
    v1 = v90;
    if ( (*(_BYTE *)(v2 + 11756) & 8) != 0 )
    {
      v18 = 1;
LABEL_104:
      LOBYTE(v14) = v72;
      goto LABEL_105;
    }
    v65 = *(_DWORD *)(v2 + 23340);
    LOBYTE(v14) = v72;
    *(_DWORD *)(v2 + 23336) = 0;
    v18 = 1;
    if ( v65 < KeTimeIncrement )
      *(_DWORD *)(v2 + 23340) = 0;
    else
      *(_DWORD *)(v2 + 23340) = v65 - KeTimeIncrement;
LABEL_105:
    if ( *(_BYTE *)(v2 + 33) )
      KiTimer2Expiration(v2, v16, v18, &v100);
    _disable();
LABEL_108:
    KiExecuteAllDpcs(v2, v1, &v100, 0LL);
    if ( (v14 & 4) != 0 )
    {
      _enable();
      KeSignalGate(v2 + 22528, 0LL);
      _disable();
    }
    v66 = __rdtsc();
    *(_QWORD *)(v2 + 23544) += v66 - *(_QWORD *)(v2 + 23352);
    if ( (*(_BYTE *)(v1 + 2) & 0x20) != 0 )
    {
      v68 = PpmPerfGetCurrentFrequency(v2);
      v69 = 3;
      if ( v68 / 0x19 < 3 )
        v69 = v68 / 0x19;
      v70 = (_QWORD *)(v2 + 8 * (*(unsigned __int8 *)(v2 + 23858) + 2 * (v69 + 1472LL)));
      *v70 += v67;
    }
    *(_QWORD *)(v2 + 23352) = v66;
    if ( (*(_BYTE *)(v1 + 2) & 0x10) != 0 )
      *(_QWORD *)(v2 + 23360) = v66;
    if ( (*(_BYTE *)(v1 + 2) & 2) != 0 )
      KiBeginCounterAccumulation(v1, 0LL);
    v60 = *(_BYTE *)(v2 + 6) == 0;
    *(_BYTE *)(v2 + 32) = 0;
    if ( !v60 )
      *(_BYTE *)(v2 + 6) = 0;
    result = _InterlockedCompareExchange16((volatile signed __int16 *)(v2 + 11756), 0, 1);
  }
  while ( result != 1 );
  *(_QWORD *)(v2 + 11680) = 0LL;
  return result;
}
