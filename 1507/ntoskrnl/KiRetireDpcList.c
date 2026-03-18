/*
 * XREFs of KiRetireDpcList @ 0x1400A4C50
 * Callers:
 *     KiIdleLoop @ 0x140186810 (KiIdleLoop.c)
 *     KyRetireDpcList @ 0x14018A620 (KyRetireDpcList.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     EtwTraceTimedEvent @ 0x140083664 (EtwTraceTimedEvent.c)
 *     KiTimerWaitTest @ 0x1400A40F0 (KiTimerWaitTest.c)
 *     KiExecuteAllDpcs @ 0x1400A53E0 (KiExecuteAllDpcs.c)
 *     KiTimer2Expiration @ 0x1400F5180 (KiTimer2Expiration.c)
 *     KiProcessThreadWaitList @ 0x1400F7350 (KiProcessThreadWaitList.c)
 *     EtwGetKernelTraceTimestamp @ 0x140111B58 (EtwGetKernelTraceTimestamp.c)
 *     KeSignalGate @ 0x140127FF0 (KeSignalGate.c)
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiBeginCounterAccumulation @ 0x140204F4C (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 *     KiProcessExpiredTimerList @ 0x140209C50 (KiProcessExpiredTimerList.c)
 */

signed __int16 __fastcall KiRetireDpcList(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r13
  unsigned __int64 v3; // rax
  __int64 v4; // r9
  unsigned __int64 v5; // rcx
  char v6; // r10
  __int16 v7; // r14
  unsigned __int64 v8; // r10
  bool v9; // zf
  signed __int16 result; // ax
  __int64 v11; // rcx
  int v12; // esi
  unsigned __int64 v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // ecx
  int v18; // eax
  unsigned __int64 v19; // r10
  unsigned int v20; // r14d
  __int64 v21; // r8
  int v22; // esi
  unsigned int v23; // edx
  int v24; // ecx
  __int64 v25; // rdi
  __int64 **v26; // rbx
  unsigned int v27; // r14d
  __int64 v28; // r13
  char v29; // si
  ULONG_PTR v30; // r12
  bool v31; // r15
  __int64 v32; // rax
  __int64 v33; // rbx
  unsigned int v34; // edi
  unsigned __int64 v35; // rdi
  ULONG_PTR v36; // rdx
  char v37; // cl
  __int64 *v38; // rbx
  __int64 v39; // r9
  __int64 v40; // r8
  __int64 v41; // r10
  unsigned int v42; // eax
  unsigned int v43; // r13d
  char v44; // r11
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 **v47; // rax
  __int64 v48; // rcx
  unsigned int v49; // edx
  volatile signed __int32 *v50; // rcx
  unsigned int v51; // edx
  ULONG_PTR BugCheckParameter4; // rcx
  _QWORD *i; // rcx
  unsigned int CurrentFrequency; // eax
  __int64 v55; // r11
  __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  unsigned int v58; // eax
  __int64 v59; // r9
  __int64 v60; // rcx
  char v61; // [rsp+30h] [rbp-D0h]
  unsigned int v62; // [rsp+34h] [rbp-CCh]
  int v63; // [rsp+38h] [rbp-C8h]
  __int64 v64; // [rsp+40h] [rbp-C0h]
  char v65; // [rsp+48h] [rbp-B8h]
  int v67; // [rsp+58h] [rbp-A8h]
  unsigned int v68; // [rsp+5Ch] [rbp-A4h]
  unsigned int v69; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v70; // [rsp+68h] [rbp-98h]
  unsigned __int64 v71; // [rsp+70h] [rbp-90h]
  __int64 v72; // [rsp+78h] [rbp-88h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-80h] BYREF
  int v74; // [rsp+88h] [rbp-78h]
  unsigned __int64 v75; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v76; // [rsp+98h] [rbp-68h]
  _QWORD v77[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v78[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v79[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v80; // [rsp+E0h] [rbp-20h]
  char v81; // [rsp+E8h] [rbp-18h]
  _BYTE v82[16]; // [rsp+F0h] [rbp-10h] BYREF
  int v83; // [rsp+100h] [rbp+0h] BYREF
  __int64 v84[33]; // [rsp+108h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v72 = v1;
  v2 = a1;
  v83 = 0;
  do
  {
    *(_BYTE *)(v2 + 32) = 1;
    v3 = __rdtsc();
    v4 = v3 - *(_QWORD *)(v2 + 23352);
    v5 = v4 + *(unsigned int *)(v1 + 80);
    *(_QWORD *)(v1 + 72) += v4;
    *(_QWORD *)(v2 + 23352) = v3;
    v6 = *(_BYTE *)(v1 + 2);
    if ( v5 > 0xFFFFFFFF )
      LODWORD(v5) = -1;
    *(_DWORD *)(v1 + 80) = v5;
    if ( (v6 & 0x3E) != 0 )
    {
      if ( (v6 & 0x10) != 0 )
      {
        *(_QWORD *)(v2 + 8LL * *(unsigned __int8 *)(v1 + 124) + 23368) += *(_QWORD *)(v2 + 23352)
                                                                        - *(_QWORD *)(v2 + 23360);
        v6 &= ~0x10u;
        *(_QWORD *)(v2 + 23360) = 0LL;
      }
      if ( (v6 & 0x3E) != 0 )
      {
        if ( (v6 & 0x20) != 0 )
        {
          if ( *(_QWORD *)(v1 + 1952) )
          {
            CurrentFrequency = PpmPerfGetCurrentFrequency(v2);
            v56 = 3LL;
            if ( CurrentFrequency / 0x19 < 3 )
              v56 = CurrentFrequency / 0x19;
            *(_QWORD *)(v55 + 8 * (*(unsigned __int8 *)(v2 + 23858) + 2 * v56)) += v4;
          }
          v6 &= ~0x20u;
        }
        if ( (v6 & 0x3E) != 0 )
        {
          v11 = *(_QWORD *)(v1 + 104);
          if ( v11 )
          {
            for ( i = (_QWORD *)(*(unsigned int *)(v2 + 1624) + v11); i; i = (_QWORD *)i[49] )
              *i += v4;
          }
          if ( (*(_BYTE *)(v1 + 2) & 8) != 0
            && (*(_QWORD *)(*(_QWORD *)(v2 + 1600) + 136LL) & *(_QWORD *)(v1 + 576)) != *(_QWORD *)(*(_QWORD *)(v2 + 1600)
                                                                                                  + 136LL) )
          {
            *(_QWORD *)(v2 + 23392) += v4;
          }
          if ( *(_QWORD *)(v1 + 360) )
            KiEndCounterAccumulation(v1);
        }
      }
    }
    *(_BYTE *)(v2 + 11754) = 1;
    v7 = *(_WORD *)(v2 + 11756);
    *(_WORD *)(v2 + 11756) = 1;
    v65 = v7;
    if ( (v7 & 8) != 0 )
    {
      v12 = *(_DWORD *)(v2 + 11760);
      v71 = MEMORY[0xFFFFF78000000008];
      v13 = MEMORY[0xFFFFF78000000008];
      v14 = MEMORY[0xFFFFF78000000008] >> 18;
      *(_DWORD *)(v2 + 11760) = MEMORY[0xFFFFF78000000008] >> 18;
      _enable();
      v84[0] = MEMORY[0xFFFFF78000000014];
      if ( KiSerializeTimerExpiration )
      {
        if ( !*(_BYTE *)(v2 + 33) )
        {
LABEL_66:
          _disable();
          goto LABEL_6;
        }
        v15 = KiProcessorBlock[0] + 13824;
      }
      else
      {
        v15 = v2 + 13824;
      }
      v64 = v15;
      if ( v15 )
      {
        v16 = *(unsigned int *)(v2 + 26784);
        *(_DWORD *)(v2 + 26784) = ((_BYTE)v16 + 1) & 0xF;
        *(_QWORD *)(v2 + 16 * (v16 + 1658)) = v13;
        *(LARGE_INTEGER *)(v2 + 16 * (v16 + 1658) + 8) = KeQueryPerformanceCounter(0LL);
        if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
        {
          v75 = v13;
          v77[0] = &v75;
          v77[1] = 8LL;
          EtwTraceKernelEvent((int)v77, 1, 0x40020000u, 0xF50u, 1538);
        }
        v17 = v14 - v12 + 1;
        v69 = v17;
        if ( v17 <= 0x100 )
        {
LABEL_34:
          v63 = v17;
          v18 = 256 - v17;
          v70 = v13;
          v19 = v13;
          if ( 256 - v17 > 0x18 )
            v18 = 24;
          goto LABEL_36;
        }
        v41 = (v14 - v17 + 1) << 18;
        do
        {
          if ( v17 <= 0x100 )
            goto LABEL_34;
          v19 = v41 + 0x4000000;
          v63 = 256;
          v70 = v19;
          v18 = 0;
LABEL_36:
          v20 = 0;
          v21 = v64;
          v74 = v12 + v63;
          v22 = v12 - 1;
          v62 = 0;
          v61 = -64;
          v23 = v74 - 1;
          v24 = v74 - 1 + v18;
          v68 = v74 - 1;
          v67 = v24;
          do
          {
            v25 = v21 + 32 * ((unsigned __int8)++v22 + 16LL);
            if ( v20 <= v23 || *(_QWORD *)(v25 + 24) <= v19 )
            {
              v26 = (__int64 **)(v25 + 8);
              if ( v26 != (__int64 **)*v26 )
              {
                do
                {
                  v43 = 0;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)v25, 0LL) )
                  {
                    do
                    {
                      if ( (++v43 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                        _mm_pause();
                      else
                        HvlNotifyLongSpinWait(v43);
                    }
                    while ( *(_QWORD *)v25 );
                  }
                  v21 = v64;
                  v19 = v70;
                  v44 = v61;
                  do
                  {
                    if ( v26 == (__int64 **)*v26 )
                      goto LABEL_73;
                    v45 = (__int64)(*v26 - 4);
                    if ( *(_QWORD *)(v45 + 24) > v70 )
                    {
                      *(_QWORD *)(v25 + 24) = *(_QWORD *)(v45 + 24);
LABEL_73:
                      _InterlockedAnd64((volatile signed __int64 *)v25, 0LL);
                      v2 = a1;
                      goto LABEL_74;
                    }
                    v46 = **v26;
                    v47 = *(__int64 ***)(v45 + 40);
                    if ( *(__int64 **)(v46 + 8) != *v26 || *v47 != *v26 )
                      __fastfail(3u);
                    *v47 = (__int64 *)v46;
                    *(_QWORD *)(v46 + 8) = v47;
                    if ( v47 == (__int64 **)v46 )
                    {
                      *(_DWORD *)(v25 + 28) = -1;
                      v48 = qword_1403D2238[2 * *(unsigned __int8 *)(v64 - 12208)];
                      if ( KiSerializeTimerExpiration )
                      {
                        v49 = v22 & 0x3F;
                        v50 = (volatile signed __int32 *)(v48 + 8LL * ((unsigned __int8)v22 >> 6));
                      }
                      else
                      {
                        v49 = *(unsigned __int8 *)(v64 - 12207);
                        v50 = (volatile signed __int32 *)(((unsigned __int64)(unsigned __int8)v22 << 6) + v48);
                      }
                      _interlockedbittestandreset64(v50, v49);
                    }
                    v51 = v62;
                    BugCheckParameter4 = _InterlockedExchange64((volatile __int64 *)(v64 + 8LL * v62), v45);
                    if ( BugCheckParameter4 )
                      KeBugCheckEx(0xC7u, 8uLL, 1uLL, v45, BugCheckParameter4);
                    v76 = 0;
                    ++v62;
                    v44 ^= (v44 ^ v51) & 0x3F;
                    v61 = v44;
                    HIBYTE(v76) = v44 ^ *(_BYTE *)(v45 + 3);
                    _InterlockedXor((volatile signed __int32 *)v45, v76);
                  }
                  while ( v51 != 63 );
                  _InterlockedAnd64((volatile signed __int64 *)v25, 0LL);
                  v2 = a1;
                  KiProcessExpiredTimerList(a1, &v83, v64, 64LL);
                  v62 = 0;
                }
                while ( v26 != (__int64 **)*v26 );
                v21 = v64;
                v19 = v70;
LABEL_74:
                v23 = v68;
                v24 = v67;
              }
              ++v20;
            }
          }
          while ( v22 != v24 );
          if ( v62 )
          {
            v27 = 0;
            v28 = *(_QWORD *)(v2 + 8);
            v29 = BYTE4(PerfGlobalGroupMask) >> 7;
            v30 = *(unsigned int *)(v28 + 484);
            v31 = (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0;
            do
            {
              v32 = v27++;
              v33 = _InterlockedExchange64((volatile __int64 *)(v21 + 8 * v32), 0LL);
              if ( v33 )
              {
                v34 = 0;
                if ( _interlockedbittestandset((volatile signed __int32 *)v33, 7u) )
                {
                  do
                  {
                    if ( (++v34 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                      _mm_pause();
                    else
                      HvlNotifyLongSpinWait(v34);
                  }
                  while ( (*(_DWORD *)v33 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v33, 7u) );
                }
                if ( v31 )
                {
                  v79[0] = *(_QWORD *)(v33 + 24);
                  v57 = KiWaitAlways ^ _byteswap_uint64(v33 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v33 + 48), KiWaitNever));
                  if ( v57 )
                    v80 = *(_QWORD *)(v57 + 24);
                  else
                    v80 = 0LL;
                }
                v35 = KiTimerWaitTest(a1, v33, v84);
                if ( v31 )
                {
                  v79[1] = v33;
                  v81 = *(_BYTE *)(v33 + 1) >> 2;
                  v78[0] = v79;
                  v78[1] = 32LL;
                  EtwTraceKernelEvent((int)v78, 1, 0x40020000u, 0xF51u, 1538);
                }
                if ( v35 )
                {
                  if ( *(_QWORD *)(a1 + 11400) )
                    KiProcessThreadWaitList(a1, 1LL, 0LL, 2LL);
                  if ( v29 )
                    EtwGetKernelTraceTimestamp(v82, 536871040LL);
                  v37 = v83;
                  BugCheckParameter2 = *(_QWORD *)(v35 + 24);
                  v36 = BugCheckParameter2;
                  ++v83;
                  v38 = &v84[2 * (v37 & 0xF) + 1];
                  *((_DWORD *)v38 + 2) = MEMORY[0xFFFFF78000000320];
                  *v38 = v36;
                  v39 = HIDWORD(v84[0]);
                  v40 = LODWORD(v84[0]);
                  *(_DWORD *)(a1 + 23328) = 0;
                  ((void (__fastcall *)(unsigned __int64, _QWORD, __int64, __int64))BugCheckParameter2)(
                    v35,
                    *(_QWORD *)(v35 + 32),
                    v40,
                    v39);
                  *((_DWORD *)v38 + 3) = MEMORY[0xFFFFF78000000320];
                  if ( (_DWORD)v30 != *(_DWORD *)(v28 + 484) )
                    KeBugCheckEx(0xC7u, 5uLL, BugCheckParameter2, v30, *(unsigned int *)(v28 + 484));
                  if ( v29 )
                    EtwTraceTimedEvent(0xF45u, 0x20000080u, (__int64)&BugCheckParameter2, 8, 4196866, (__int64)v82);
                }
                v21 = v64;
              }
            }
            while ( v27 < v62 );
            v2 = a1;
            if ( *(_QWORD *)(a1 + 11400) )
              KiProcessThreadWaitList(a1, 1LL, 0LL, 2LL);
          }
          v9 = v69 == v63;
          v17 = v69 - v63;
          v12 = v74;
          v41 = v70;
          v13 = v71;
          v69 -= v63;
        }
        while ( !v9 );
        v1 = v72;
        LOBYTE(v7) = v65;
        if ( (*(_BYTE *)(v2 + 11756) & 8) == 0 )
        {
          v42 = *(_DWORD *)(v2 + 23340);
          *(_DWORD *)(v2 + 23336) = 0;
          if ( v42 >= KeTimeIncrement )
            *(_DWORD *)(v2 + 23340) = v42 - KeTimeIncrement;
          else
            *(_DWORD *)(v2 + 23340) = 0;
        }
      }
      if ( *(_BYTE *)(v2 + 33) )
        KiTimer2Expiration(v2, v13, &v83);
      goto LABEL_66;
    }
LABEL_6:
    KiExecuteAllDpcs(v2, v1, &v83, 0LL);
    *(_BYTE *)(v2 + 11754) = 0;
    if ( (v7 & 4) != 0 )
    {
      _enable();
      KeSignalGate(v2 + 22528, 0LL);
      _disable();
    }
    v8 = __rdtsc();
    *(_QWORD *)(v2 + 23544) += v8 - *(_QWORD *)(v2 + 23352);
    if ( (*(_BYTE *)(v1 + 2) & 0x20) != 0 )
    {
      v58 = PpmPerfGetCurrentFrequency(v2);
      v60 = 3LL;
      if ( v58 / 0x19 < 3 )
        v60 = v58 / 0x19;
      *(_QWORD *)(8 * (*(unsigned __int8 *)(v2 + 23858) + 2 * v60) + 23552 + v2) += v59;
    }
    *(_QWORD *)(v2 + 23352) = v8;
    if ( (*(_BYTE *)(v1 + 2) & 0x10) != 0 )
      *(_QWORD *)(v2 + 23360) = v8;
    if ( (*(_BYTE *)(v1 + 2) & 2) != 0 )
      KiBeginCounterAccumulation(v1, 0LL);
    v9 = *(_BYTE *)(v2 + 6) == 0;
    *(_BYTE *)(v2 + 32) = 0;
    if ( !v9 )
      *(_BYTE *)(v2 + 6) = 0;
    result = _InterlockedCompareExchange16((volatile signed __int16 *)(v2 + 11756), 0, 1);
  }
  while ( result != 1 );
  *(_QWORD *)(v2 + 11680) = 0LL;
  return result;
}
