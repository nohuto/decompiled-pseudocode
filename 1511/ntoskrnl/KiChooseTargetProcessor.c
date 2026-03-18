/*
 * XREFs of KiChooseTargetProcessor @ 0x140088720
 * Callers:
 *     KiDeferredReadyThread @ 0x140087D50 (KiDeferredReadyThread.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x14007BD20 (KiEndThreadAccountingPeriod.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x1400E1A1C (KiReduceByEffectiveIdleSmtSet.c)
 *     KiSelectIdleProcessor @ 0x14012BA30 (KiSelectIdleProcessor.c)
 *     PpmPerfGetCurrentFrequency @ 0x140141F40 (PpmPerfGetCurrentFrequency.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
 *     KiBeginCounterAccumulation @ 0x1401C7ED8 (KiBeginCounterAccumulation.c)
 *     KiSelectCandidateProcessor @ 0x1401CC3D8 (KiSelectCandidateProcessor.c)
 */

__int64 __fastcall KiChooseTargetProcessor(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  __int64 v4; // r10
  __int64 v5; // r12
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r13
  unsigned __int64 v10; // r8
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rbx
  unsigned __int64 v16; // rsi
  unsigned int v17; // esi
  __int64 result; // rax
  _QWORD *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int8 v23; // dl
  int v24; // ecx
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  char v27; // cl
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // r11
  __int64 v31; // rbx
  unsigned __int64 v32; // rax
  __int64 v33; // r11
  unsigned __int64 v34; // rcx
  bool v35; // zf
  unsigned int v36; // ecx
  unsigned int v37; // eax
  __int64 v38; // rbp
  __int64 v39; // rsi
  __int64 v40; // r13
  __int64 v41; // rbp
  __int64 v42; // r10
  unsigned int v43; // esi
  int v44; // r13d
  __int64 v45; // rsi
  _QWORD *v46; // rsi
  unsigned int v47; // ebx
  _DWORD *v48; // rdi
  unsigned __int8 *v49; // rdx
  __int64 v50; // r15
  int v51; // ebx
  char *v52; // rbp
  unsigned int v53; // r9d
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  char v57; // cl
  int v58; // edx
  __int64 v59; // r9
  char v60; // al
  char v61; // cl
  __int64 v62; // rax
  int v63; // edx
  unsigned __int64 v64; // rax
  unsigned int CurrentFrequency; // eax
  __int64 v66; // r11
  __int64 v67; // rcx
  unsigned __int64 *v68; // rdx
  unsigned int v69; // [rsp+20h] [rbp-E8h]
  __int64 v70; // [rsp+28h] [rbp-E0h]
  __int64 v71; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v72; // [rsp+38h] [rbp-D0h]
  __int64 v73; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v74; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v75; // [rsp+50h] [rbp-B8h]
  _DWORD *v76; // [rsp+58h] [rbp-B0h]
  int v77; // [rsp+60h] [rbp-A8h]
  int v78; // [rsp+64h] [rbp-A4h]
  int v79; // [rsp+68h] [rbp-A0h]
  int v80; // [rsp+6Ch] [rbp-9Ch]
  _BYTE v81[64]; // [rsp+70h] [rbp-98h] BYREF

  v4 = *a3;
  v5 = a2;
  v76 = a4;
  v7 = *((unsigned __int16 *)a3 + 4);
  v69 = *((unsigned __int16 *)a3 + 4);
  v70 = v4;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = *(unsigned int *)(v5 + 536);
      LODWORD(v8) = v8 & 0x7FFFFFFF;
      v9 = KiProcessorBlock[v8];
      if ( (_WORD)v7 == *(unsigned __int8 *)(a1 + 1616)
        && (*(_BYTE *)(a1 + 11756) & 1) != 0
        && (*(_BYTE *)(v5 + 643) == 15 || *(_DWORD *)(v5 + 84) < (unsigned int)KiShortExecutionCycles) )
      {
        v19 = *(_QWORD **)(a1 + 1600);
        v20 = v4 & *v19;
        v71 = v20;
        if ( v20 )
        {
          v21 = v20 & *(_QWORD *)(a1 + 24808);
          if ( v21 )
          {
            v20 &= *(_QWORD *)(a1 + 24808);
            v71 = v21;
          }
          if ( *(_QWORD *)(a1 + 1608) != *(_QWORD *)(a1 + 24792) )
          {
            v20 = v71 & v19[1];
            if ( v20 )
            {
              v71 &= v19[1];
            }
            else
            {
              v60 = KiReduceByEffectiveIdleSmtSet(a1, &v71);
              v20 = v71;
              if ( v60 )
              {
LABEL_30:
                v23 = *(_BYTE *)(a1 + 1616);
                v24 = *(_DWORD *)(a1 + 24788);
                if ( *(_BYTE *)(v9 + 1616) == v23 && (*(_QWORD *)(a1 + 24800) & *(_QWORD *)(v9 + 1608)) != 0LL )
                  LOBYTE(v24) = *(_BYTE *)(v9 + 1617);
                v10 = __ROR8__(v20, v24);
                _BitScanForward64(&v25, v10);
                a2 = v23 << 6;
                v79 = KiProcessorNumberToIndexMappingTable[(unsigned int)a2 + (((_BYTE)v25 + (_BYTE)v24) & 0x3F)];
                v15 = KiProcessorBlock[v79];
                goto LABEL_13;
              }
            }
          }
          v22 = v20 & ~*(_QWORD *)(a1 + 24792);
          if ( v22 )
          {
            v20 &= ~*(_QWORD *)(a1 + 24792);
            v71 = v22;
          }
          goto LABEL_30;
        }
      }
      v10 = *(_QWORD *)(v9 + 1600);
      v11 = 0LL;
      v12 = *(unsigned int *)(v5 + 588);
      v72 = v10;
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
            a2 = *(_QWORD *)(a1 + 1600);
            if ( a2 == v14 )
            {
              a2 = v16 & *(_QWORD *)(a2 + 16);
              v29 = *(_QWORD *)(a1 + 24792) & ~*(_QWORD *)(a1 + 1608);
              v30 = v16 & v29;
              v75 = v16 & v29;
              if ( (v16 & v29) != 0
                && (a2 & v29) == v29
                && (*(_BYTE *)(a1 + 11756) & 1) == 0
                && !*(_DWORD *)(a1 + 22680) )
              {
                v31 = *(_QWORD *)(a1 + 8);
                if ( !*(_BYTE *)(a1 + 32) )
                {
                  _disable();
                  *(_BYTE *)(a1 + 32) = 1;
                  v32 = __rdtsc();
                  v33 = v32 - *(_QWORD *)(a1 + 23352);
                  v34 = v33 + *(unsigned int *)(v31 + 80);
                  *(_QWORD *)(v31 + 72) += v33;
                  if ( v34 > 0xFFFFFFFF )
                    v34 = 0xFFFFFFFFLL;
                  *(_QWORD *)(a1 + 23352) = v32;
                  v35 = (*(_BYTE *)(v31 + 2) & 0x3E) == 0;
                  *(_DWORD *)(v31 + 80) = v34;
                  if ( !v35 )
                  {
                    KiEndThreadAccountingPeriod(a1, v31, v33, v7);
                    v10 = v72;
                    LODWORD(v7) = v69;
                    v4 = v70;
                  }
                  v74 = __rdtsc();
                  a2 = v74;
                  *(_QWORD *)(a1 + 23544) += v74 - *(_QWORD *)(a1 + 23352);
                  if ( (*(_BYTE *)(v31 + 2) & 0x20) != 0 )
                  {
                    CurrentFrequency = PpmPerfGetCurrentFrequency(a1);
                    v67 = 3LL;
                    v10 = v72;
                    if ( CurrentFrequency / 0x19 < 3 )
                      v67 = CurrentFrequency / 0x19;
                    v68 = (unsigned __int64 *)(a1 + 8 * (*(unsigned __int8 *)(a1 + 23858) + 2944LL + 2 * v67));
                    v34 = v66 + *v68;
                    *v68 = v34;
                    a2 = v74;
                  }
                  *(_QWORD *)(a1 + 23352) = a2;
                  if ( (*(_BYTE *)(v31 + 2) & 0x10) != 0 )
                    *(_QWORD *)(a1 + 23360) = a2;
                  if ( (*(_BYTE *)(v31 + 2) & 2) != 0 )
                  {
                    KiBeginCounterAccumulation(v31, 0LL);
                    v10 = v72;
                    LODWORD(v7) = v69;
                    v4 = v70;
                  }
                  v35 = *(_BYTE *)(a1 + 6) == 0;
                  *(_BYTE *)(a1 + 32) = 0;
                  if ( !v35 )
                  {
                    LOBYTE(v34) = 2;
                    *(_BYTE *)(a1 + 6) = 0;
                    HalRequestSoftwareInterrupt(v34);
                    v10 = v72;
                    LODWORD(v7) = v69;
                    v4 = v70;
                  }
                  _enable();
                  v30 = v75;
                }
                v36 = *(_DWORD *)(v31 + 80);
                v37 = *(_DWORD *)(v31 + 84);
                if ( v36 >= v37 || v37 - v36 < KiShortExecutionCycles )
                  v16 = v30;
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
          v26 = v16 & *(_QWORD *)(v13 + 24792);
          if ( v26 || v11 && (v26 = v16 & *(_QWORD *)(v11 + 24792)) != 0 )
            v16 = v26;
          v27 = *(_BYTE *)(v13 + 1617);
          _BitScanForward64(&v28, __ROR8__(v16, v27));
          a2 = *(unsigned __int8 *)(v13 + 1616) << 6;
          v80 = KiProcessorNumberToIndexMappingTable[(unsigned int)a2 + (((_BYTE)v28 + v27) & 0x3F)];
          v15 = KiProcessorBlock[v80];
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
            HvlNotifyLongSpinWait(v17, a2, v10);
        }
        while ( *(_QWORD *)(v15 + 48) );
      }
      if ( !*(_BYTE *)(v15 + 35) )
      {
        result = v15;
        *v76 = 1;
        return result;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 48), 0LL);
      v7 = v69;
      v4 = v70;
    }
    v38 = v4 & ~*(_QWORD *)(v14 + 136);
    if ( v10 != v14 && v38 && *(unsigned __int16 *)(v10 + 144) == (_DWORD)v7 )
    {
      v15 = KiSelectIdleProcessor(v4, a1, v10, v9);
      if ( v15 )
        goto LABEL_13;
      v10 = v72;
      LODWORD(v7) = v69;
      v4 = v70;
    }
    if ( (_WORD)v7 == *(_WORD *)(v10 + 144) )
      v39 = v38 & ~*(_QWORD *)(v10 + 136);
    else
      v39 = v38;
    v40 = *(_QWORD *)(a1 + 1600);
    if ( v40 != v14 && v40 != v10 && v39 && *(unsigned __int16 *)(v40 + 144) == (_DWORD)v7 )
    {
      v15 = KiSelectIdleProcessor(v4, a1, *(_QWORD *)(a1 + 1600), a1);
      if ( v15 )
        goto LABEL_13;
      v10 = v72;
      LOWORD(v7) = v69;
    }
    v41 = (_WORD)v7 == *(_WORD *)(v40 + 144) ? v39 & ~*(_QWORD *)(v40 + 136) : v39;
    v42 = v70;
    v43 = *(_DWORD *)(v14 + 128) & ~((1 << *(_BYTE *)(v14 + 146)) | (1 << *(_WORD *)(v40 + 146)) | (1 << *(_WORD *)(v10 + 146)));
    v44 = 0;
    while ( v41 )
    {
      if ( ++v44 == (unsigned __int16)KeNumberNodes )
        a2 = 0xFFFFFFFFLL;
      else
        a2 = *((unsigned __int16 *)qword_1402FE6B8
             + v44
             + (unsigned __int16)KeNumberNodes * (unsigned int)*(unsigned __int16 *)(v14 + 146));
      v55 = v43;
      if ( _bittest64(&v55, (unsigned int)a2) )
      {
        v10 = KeNodeBlock[(unsigned int)a2];
        v75 = v10;
        if ( (v42 & *(_QWORD *)(v10 + 136)) != 0 )
        {
          v15 = 0LL;
          v56 = KiProcessorBlock[*(unsigned int *)(v10 + 92)];
          v57 = *(_BYTE *)(v56 + 1617);
          v58 = *(unsigned __int8 *)(v56 + 1616);
          _BitScanForward64((unsigned __int64 *)&v56, __ROR8__(v42 & *(_QWORD *)(v10 + 136), v57));
          v59 = v42 & *(_QWORD *)v10;
          v73 = v59;
          v78 = KiProcessorNumberToIndexMappingTable[64 * v58 + (((_BYTE)v56 + v57) & 0x3F)];
          a2 = KiProcessorBlock[v78];
          v74 = a2;
          if ( v59 )
          {
            if ( *(_QWORD *)(a2 + 1608) != *(_QWORD *)(a2 + 24792) )
            {
              v59 = v73;
              if ( (v73 & *(_QWORD *)(v10 + 8)) != 0 )
              {
                v59 = v73 & *(_QWORD *)(v10 + 8);
                v73 = v59;
              }
              else if ( *(_QWORD *)(a1 + 1600) == v10 )
              {
                KiReduceByEffectiveIdleSmtSet(a1, &v73);
                v59 = v73;
                v42 = v70;
                v10 = v75;
                a2 = v74;
              }
            }
            if ( (v59 & *(_QWORD *)(a2 + 1608)) != 0 )
            {
              v15 = a2;
            }
            else
            {
              v61 = *(_BYTE *)(a2 + 1617);
              v62 = *(_QWORD *)(a2 + 24792) & v59;
              v63 = *(unsigned __int8 *)(a2 + 1616);
              if ( v62 )
                v59 = v62;
              a2 = (unsigned int)(v63 << 6);
              v73 = v59;
              _BitScanForward64(&v64, __ROR8__(v59, v61));
              v77 = KiProcessorNumberToIndexMappingTable[(unsigned int)a2 + (((_BYTE)v64 + v61) & 0x3F)];
              v15 = KiProcessorBlock[v77];
            }
          }
          if ( v15 )
            goto LABEL_13;
        }
        v41 &= ~*(_QWORD *)(v10 + 136);
      }
    }
    v45 = v42 & *(_QWORD *)(v13 + 24768);
    if ( ((v45 - 1) & v45) != 0 )
    {
      v49 = *(unsigned __int8 **)(v13 + 24776);
      v50 = v49[593];
      v51 = v49[592];
      v52 = &v81[v50];
      memmove(&v81[v50], v49 + 528, v49[592]);
      a2 = *(unsigned __int8 *)(v5 + 195);
      v53 = v50 + v51;
      v10 = 0xFFFFFFFFLL;
      if ( (unsigned int)v50 < (int)v50 + v51 )
      {
        v54 = __ROL8__(1LL, v50);
        do
        {
          if ( (v54 & v45) != 0 && *v52 < (char)a2 )
          {
            a2 = (unsigned __int8)*v52;
            v10 = (unsigned int)v50;
          }
          LODWORD(v50) = v50 + 1;
          v54 = __ROL8__(v54, 1);
          ++v52;
        }
        while ( (unsigned int)v50 < v53 );
        if ( (v10 & 0x80000000) == 0LL )
          v13 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v13 + 1616)
                                                                    + (unsigned int)v10]];
      }
    }
    v46 = *(_QWORD **)(v13 + 1600);
    v47 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 48), 0LL) )
    {
      do
      {
        if ( (++v47 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v47, a2, v10);
      }
      while ( *(_QWORD *)(v13 + 48) );
    }
    v4 = v70;
    if ( (*v46 & v70) == 0 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 48), 0LL);
    v7 = v69;
  }
  v48 = v76;
  *v76 = 0;
  if ( (*(_BYTE *)(v13 + 35) & 2) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 48), 0LL);
    v13 = KiSelectCandidateProcessor(v13, v5, -1LL);
    if ( (*(_BYTE *)(v13 + 35) & 1) == 0 )
      *v48 = 1;
  }
  return v13;
}
