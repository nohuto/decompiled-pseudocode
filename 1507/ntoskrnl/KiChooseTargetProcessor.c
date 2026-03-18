/*
 * XREFs of KiChooseTargetProcessor @ 0x14004D7D0
 * Callers:
 *     KiDeferredReadyThread @ 0x14004CE40 (KiDeferredReadyThread.c)
 * Callees:
 *     MmGetNextNode @ 0x1400E70A8 (MmGetNextNode.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x140117A68 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiSelectIdleProcessor @ 0x14015AA84 (KiSelectIdleProcessor.c)
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     KiBeginCounterAccumulation @ 0x140204F4C (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 *     KiSelectCandidateProcessor @ 0x14020B500 (KiSelectCandidateProcessor.c)
 */

__int64 __fastcall KiChooseTargetProcessor(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  __int64 v4; // r10
  int v7; // r9d
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // r8
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rsi
  unsigned int v17; // edi
  __int64 result; // rax
  __int64 v19; // rax
  char v20; // cl
  unsigned __int64 v21; // rax
  _QWORD *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int8 v26; // dl
  int v27; // ecx
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r11
  __int64 v33; // rbx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r11
  unsigned __int64 v36; // rcx
  char v37; // al
  unsigned __int64 v38; // rdx
  bool v39; // zf
  unsigned int v40; // ecx
  unsigned int v41; // eax
  __int64 v42; // rsi
  __int64 v43; // rbp
  __int64 v44; // rdx
  __int64 v45; // r13
  __int64 v46; // rbp
  __int64 v47; // rsi
  unsigned int v48; // esi
  __int64 v49; // rsi
  unsigned __int8 *v50; // rdx
  __int64 v51; // r15
  int v52; // ebx
  char *v53; // rbp
  char v54; // dl
  unsigned int v55; // r9d
  int v56; // r8d
  __int64 v57; // rax
  _QWORD *v58; // rbx
  unsigned int v59; // esi
  _DWORD *v60; // rsi
  char v61; // al
  unsigned int NextNode; // eax
  __int64 v63; // rcx
  unsigned int CurrentFrequency; // eax
  __int64 v65; // rcx
  unsigned __int64 *v66; // rdx
  unsigned int v67; // eax
  __int64 v68; // r11
  __int64 v69; // rcx
  unsigned __int64 *v70; // rdx
  char v71; // [rsp+20h] [rbp-E8h]
  int v72; // [rsp+24h] [rbp-E4h]
  __int64 v73; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v74; // [rsp+30h] [rbp-D8h]
  __int64 v75; // [rsp+38h] [rbp-D0h]
  __int64 v76; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v77; // [rsp+48h] [rbp-C0h]
  int v78; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD *v79; // [rsp+58h] [rbp-B0h]
  int v80; // [rsp+60h] [rbp-A8h]
  int v81; // [rsp+64h] [rbp-A4h]
  _BYTE v82[64]; // [rsp+70h] [rbp-98h] BYREF

  v4 = *a3;
  v79 = a4;
  v7 = *((unsigned __int16 *)a3 + 4);
  v72 = v7;
  v74 = v4;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = *(unsigned int *)(a2 + 536);
      LODWORD(v8) = v8 & 0x7FFFFFFF;
      v9 = KiProcessorBlock[v8];
      if ( (_WORD)v7 == *(unsigned __int8 *)(a1 + 1616)
        && (*(_BYTE *)(a1 + 11756) & 1) != 0
        && (*(_BYTE *)(a2 + 643) == 15 || *(_DWORD *)(a2 + 84) < (unsigned int)KiShortExecutionCycles) )
      {
        v22 = *(_QWORD **)(a1 + 1600);
        v23 = v4 & *v22;
        v73 = v23;
        if ( v23 )
        {
          v24 = v23 & *(_QWORD *)(a1 + 24808);
          if ( v24 )
          {
            v23 &= *(_QWORD *)(a1 + 24808);
            v73 = v24;
          }
          if ( *(_QWORD *)(a1 + 1608) != *(_QWORD *)(a1 + 24792) )
          {
            v23 = v73 & v22[1];
            if ( v23 )
            {
              v73 &= v22[1];
            }
            else
            {
              v61 = KiReduceByEffectiveIdleSmtSet(a1, &v73);
              v23 = v73;
              if ( v61 )
              {
LABEL_34:
                v26 = *(_BYTE *)(a1 + 1616);
                v27 = *(_DWORD *)(a1 + 24788);
                if ( *(_BYTE *)(v9 + 1616) == v26 && (*(_QWORD *)(a1 + 24800) & *(_QWORD *)(v9 + 1608)) != 0LL )
                  LOBYTE(v27) = *(_BYTE *)(v9 + 1617);
                _BitScanForward64(&v28, __ROR8__(v23, v27));
                v80 = KiProcessorNumberToIndexMappingTable[64 * v26 + (((_BYTE)v28 + (_BYTE)v27) & 0x3F)];
                v15 = KiProcessorBlock[v80];
                goto LABEL_13;
              }
            }
          }
          v25 = v23 & ~*(_QWORD *)(a1 + 24792);
          if ( v25 )
          {
            v23 &= ~*(_QWORD *)(a1 + 24792);
            v73 = v25;
          }
          goto LABEL_34;
        }
      }
      v10 = *(_QWORD *)(v9 + 1600);
      v11 = 0LL;
      v12 = *(unsigned int *)(a2 + 588);
      v75 = v10;
      v13 = KiProcessorBlock[v12];
      v14 = *(_QWORD *)(v13 + 1600);
      if ( v10 == v14 )
        v11 = v9;
      v15 = 0LL;
      v16 = v4 & *(_QWORD *)v14;
      if ( v16 )
      {
        if ( *(_QWORD *)(v13 + 1608) != *(_QWORD *)(v13 + 24792) )
        {
          if ( (v16 & *(_QWORD *)(v14 + 8)) != 0 )
          {
            v16 &= *(_QWORD *)(v14 + 8);
          }
          else
          {
            v29 = *(_QWORD *)(a1 + 1600);
            if ( v29 == v14 )
            {
              v30 = v16 & *(_QWORD *)(v29 + 16);
              v31 = *(_QWORD *)(a1 + 24792) & ~*(_QWORD *)(a1 + 1608);
              v32 = v16 & v31;
              v76 = v16 & v31;
              if ( (v16 & v31) != 0
                && (v30 & v31) == v31
                && (*(_BYTE *)(a1 + 11756) & 1) == 0
                && !*(_DWORD *)(a1 + 22680) )
              {
                v33 = *(_QWORD *)(a1 + 8);
                if ( !*(_BYTE *)(a1 + 32) )
                {
                  _disable();
                  *(_BYTE *)(a1 + 32) = 1;
                  v34 = __rdtsc();
                  v35 = v34 - *(_QWORD *)(a1 + 23352);
                  v36 = v35 + *(unsigned int *)(v33 + 80);
                  *(_QWORD *)(v33 + 72) += v35;
                  if ( v36 > 0xFFFFFFFF )
                    v36 = 0xFFFFFFFFLL;
                  *(_QWORD *)(a1 + 23352) = v34;
                  v37 = *(_BYTE *)(v33 + 2);
                  *(_DWORD *)(v33 + 80) = v36;
                  v71 = v37;
                  if ( (v37 & 0x3E) != 0 )
                  {
                    if ( (v37 & 0x10) != 0 )
                    {
                      *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v33 + 124) + 23368) += *(_QWORD *)(a1 + 23352)
                                                                                       - *(_QWORD *)(a1 + 23360);
                      v37 &= ~0x10u;
                      *(_QWORD *)(a1 + 23360) = 0LL;
                      v71 &= ~0x10u;
                    }
                    if ( (v37 & 0x3E) != 0 )
                    {
                      if ( (v37 & 0x20) != 0 )
                      {
                        v36 = *(_QWORD *)(v33 + 1952);
                        v77 = v36;
                        if ( v36 )
                        {
                          CurrentFrequency = PpmPerfGetCurrentFrequency(a1);
                          v65 = 3LL;
                          v10 = v75;
                          if ( CurrentFrequency / 0x19 < 3 )
                            v65 = CurrentFrequency / 0x19;
                          v66 = (unsigned __int64 *)(v77 + 8 * (*(unsigned __int8 *)(a1 + 23858) + 2 * v65));
                          v36 = *v66 + v35;
                          v37 = v71;
                          *v66 = v36;
                        }
                        v37 &= ~0x20u;
                      }
                      if ( (v37 & 0x3E) != 0 )
                      {
                        v36 = *(_QWORD *)(v33 + 104);
                        if ( v36 )
                        {
                          for ( v36 += *(unsigned int *)(a1 + 1624); v36; v36 = *(_QWORD *)(v36 + 392) )
                            *(_QWORD *)v36 += v35;
                        }
                        if ( (*(_BYTE *)(v33 + 2) & 8) != 0 )
                        {
                          v36 = *(_QWORD *)(*(_QWORD *)(a1 + 1600) + 136LL);
                          if ( (v36 & *(_QWORD *)(v33 + 576)) != v36 )
                            *(_QWORD *)(a1 + 23392) += v35;
                        }
                        if ( *(_QWORD *)(v33 + 360) )
                        {
                          KiEndCounterAccumulation(v33);
                          v10 = v75;
                          v7 = v72;
                          v4 = v74;
                        }
                      }
                    }
                  }
                  v77 = __rdtsc();
                  v38 = v77;
                  *(_QWORD *)(a1 + 23544) += v77 - *(_QWORD *)(a1 + 23352);
                  if ( (*(_BYTE *)(v33 + 2) & 0x20) != 0 )
                  {
                    v67 = PpmPerfGetCurrentFrequency(a1);
                    v69 = 3LL;
                    v10 = v75;
                    if ( v67 / 0x19 < 3 )
                      v69 = v67 / 0x19;
                    v70 = (unsigned __int64 *)(a1 + 8 * (*(unsigned __int8 *)(a1 + 23858) + 2944LL + 2 * v69));
                    v36 = v68 + *v70;
                    *v70 = v36;
                    v38 = v77;
                  }
                  *(_QWORD *)(a1 + 23352) = v38;
                  if ( (*(_BYTE *)(v33 + 2) & 0x10) != 0 )
                    *(_QWORD *)(a1 + 23360) = v38;
                  if ( (*(_BYTE *)(v33 + 2) & 2) != 0 )
                  {
                    KiBeginCounterAccumulation(v33, 0LL);
                    v10 = v75;
                    v7 = v72;
                    v4 = v74;
                  }
                  v39 = *(_BYTE *)(a1 + 6) == 0;
                  *(_BYTE *)(a1 + 32) = 0;
                  if ( !v39 )
                  {
                    LOBYTE(v36) = 2;
                    *(_BYTE *)(a1 + 6) = 0;
                    HalRequestSoftwareInterrupt(v36);
                    v10 = v75;
                    v7 = v72;
                    v4 = v74;
                  }
                  _enable();
                  v32 = v76;
                }
                v40 = *(_DWORD *)(v33 + 80);
                v41 = *(_DWORD *)(v33 + 84);
                if ( v40 >= v41 || v41 - v40 < KiShortExecutionCycles )
                  v16 = v32;
              }
            }
          }
        }
        if ( (v16 & *(_QWORD *)(v13 + 1608)) != 0 )
        {
          v15 = v13;
        }
        else if ( v11 && (v16 & *(_QWORD *)(v11 + 1608)) != 0 )
        {
          v15 = v11;
        }
        else
        {
          v19 = *(_QWORD *)(v13 + 24792) & v16;
          if ( v19 || v11 && (v19 = v16 & *(_QWORD *)(v11 + 24792)) != 0 )
            v16 = v19;
          v20 = *(_BYTE *)(v13 + 1617);
          _BitScanForward64(&v21, __ROR8__(v16, v20));
          v81 = KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v13 + 1616) + (((_BYTE)v21 + v20) & 0x3F)];
          v15 = KiProcessorBlock[v81];
        }
      }
      if ( !v15 )
        break;
LABEL_13:
      v17 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 48), 0LL) )
      {
        do
        {
          if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v17);
        }
        while ( *(_QWORD *)(v15 + 48) );
      }
      if ( !*(_BYTE *)(v15 + 35) )
      {
        result = v15;
        *v79 = 1;
        return result;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 48), 0LL);
      v7 = v72;
      v4 = v74;
    }
    v42 = v4 & ~*(_QWORD *)(v14 + 136);
    if ( v10 != v14 && v42 && *(unsigned __int16 *)(v10 + 144) == v7 )
    {
      v15 = KiSelectIdleProcessor(v4, a1, v10, v9);
      if ( v15 )
        goto LABEL_13;
      v10 = v75;
      v7 = v72;
      v4 = v74;
    }
    if ( (_WORD)v7 == *(_WORD *)(v10 + 144) )
      v43 = v42 & ~*(_QWORD *)(v10 + 136);
    else
      v43 = v42;
    v44 = *(_QWORD *)(a1 + 1600);
    v76 = v44;
    if ( v44 != v14 && v44 != v10 && v43 && *(unsigned __int16 *)(v44 + 144) == v7 )
    {
      v15 = KiSelectIdleProcessor(v4, a1, v44, a1);
      if ( v15 )
        goto LABEL_13;
      v10 = v75;
      LOWORD(v7) = v72;
      v44 = v76;
    }
    v45 = (_WORD)v7 == *(_WORD *)(v44 + 144) ? v43 & ~*(_QWORD *)(v44 + 136) : v43;
    v46 = v74;
    v47 = (1LL << *(_BYTE *)(v14 + 146)) | (1LL << *(_WORD *)(v44 + 146));
    v78 = 0;
    v48 = *(_DWORD *)(v14 + 128) & ~(v47 | (1 << *(_WORD *)(v10 + 146)));
    while ( v45 )
    {
      NextNode = MmGetNextNode(*(unsigned __int16 *)(v14 + 146), &v78);
      v63 = v48;
      if ( _bittest64(&v63, NextNode) )
      {
        v76 = KeNodeBlock[NextNode];
        v15 = KiSelectIdleProcessor(v46, a1, v76, 0LL);
        if ( v15 )
          goto LABEL_13;
        v45 &= ~*(_QWORD *)(v76 + 136);
      }
    }
    v49 = v46 & *(_QWORD *)(v13 + 24768);
    if ( ((v49 - 1) & v49) != 0 )
    {
      v50 = *(unsigned __int8 **)(v13 + 24776);
      v51 = v50[593];
      v52 = v50[592];
      v53 = &v82[v51];
      memmove(&v82[v51], v50 + 528, v50[592]);
      v54 = *(_BYTE *)(a2 + 195);
      v55 = v51 + v52;
      v56 = -1;
      if ( (unsigned int)v51 < (int)v51 + v52 )
      {
        v57 = __ROL8__(1LL, v51);
        do
        {
          if ( (v57 & v49) != 0 && *v53 < v54 )
          {
            v54 = *v53;
            v56 = v51;
          }
          LODWORD(v51) = v51 + 1;
          v57 = __ROL8__(v57, 1);
          ++v53;
        }
        while ( (unsigned int)v51 < v55 );
        if ( v56 >= 0 )
          v13 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v13 + 1616) + v56]];
      }
    }
    v58 = *(_QWORD **)(v13 + 1600);
    v59 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 48), 0LL) )
    {
      do
      {
        if ( (++v59 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v59);
      }
      while ( *(_QWORD *)(v13 + 48) );
    }
    v4 = v74;
    if ( (*v58 & v74) == 0 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 48), 0LL);
    v7 = v72;
  }
  v60 = v79;
  *v79 = 0;
  if ( (*(_BYTE *)(v13 + 35) & 2) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 48), 0LL);
    v13 = KiSelectCandidateProcessor(v13, a2, -1LL);
    if ( (*(_BYTE *)(v13 + 35) & 1) == 0 )
      *v60 = 1;
  }
  return v13;
}
