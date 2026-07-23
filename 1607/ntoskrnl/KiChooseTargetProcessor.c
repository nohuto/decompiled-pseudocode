/*
 * XREFs of KiChooseTargetProcessor @ 0x1400570D0
 * Callers:
 *     KiDeferredReadyThread @ 0x140056640 (KiDeferredReadyThread.c)
 * Callees:
 *     KiReduceByEffectiveIdleSmtSet @ 0x14009F110 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiEndThreadAccountingPeriod @ 0x1400D05F0 (KiEndThreadAccountingPeriod.c)
 *     KiSelectIdleProcessor @ 0x140133454 (KiSelectIdleProcessor.c)
 *     PpmPerfGetCurrentFrequency @ 0x140149EF0 (PpmPerfGetCurrentFrequency.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
 *     KiBeginCounterAccumulation @ 0x1401D6D44 (KiBeginCounterAccumulation.c)
 *     KiSelectCandidateProcessor @ 0x1401DBE90 (KiSelectCandidateProcessor.c)
 */

__int64 __fastcall KiChooseTargetProcessor(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  __int64 v4; // r10
  __int64 v7; // r9
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
  __int64 v29; // rsi
  __int64 v30; // r13
  __int64 v31; // rdx
  __int64 v32; // rbp
  __int64 v33; // r10
  unsigned int v34; // esi
  int v35; // r13d
  __int64 v36; // rsi
  _QWORD *v37; // rbx
  unsigned int v38; // esi
  _DWORD *v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r11
  __int64 v44; // rbx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // r11
  unsigned __int64 v47; // rcx
  bool v48; // zf
  unsigned __int64 v49; // rdx
  unsigned int v50; // ecx
  unsigned int v51; // eax
  unsigned __int8 *v52; // rdx
  __int64 v53; // r15
  int v54; // ebx
  char *v55; // rbp
  char v56; // dl
  unsigned int v57; // r9d
  int v58; // r8d
  __int64 v59; // rax
  unsigned __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // r8
  __int64 v63; // rax
  char v64; // cl
  int v65; // edx
  __int64 v66; // r9
  __int64 v67; // rdx
  char v68; // al
  char v69; // cl
  __int64 v70; // rax
  int v71; // edx
  __int64 v72; // rax
  unsigned __int64 v73; // rax
  unsigned int CurrentFrequency; // eax
  __int64 v75; // r11
  __int64 v76; // r8
  __int64 v77; // rcx
  unsigned __int64 *v78; // rdx
  unsigned int v79; // [rsp+20h] [rbp-E8h]
  __int64 v80; // [rsp+28h] [rbp-E0h]
  __int64 v81; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v82; // [rsp+38h] [rbp-D0h]
  __int64 v83; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v84; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v85; // [rsp+50h] [rbp-B8h]
  _DWORD *v86; // [rsp+58h] [rbp-B0h]
  int v87; // [rsp+60h] [rbp-A8h]
  int v88; // [rsp+64h] [rbp-A4h]
  int v89; // [rsp+68h] [rbp-A0h]
  int v90; // [rsp+6Ch] [rbp-9Ch]
  _BYTE v91[64]; // [rsp+70h] [rbp-98h] BYREF

  v4 = *a3;
  v86 = a4;
  v7 = *((unsigned __int16 *)a3 + 4);
  v79 = *((unsigned __int16 *)a3 + 4);
  v80 = v4;
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
        v81 = v23;
        if ( v23 )
        {
          v24 = v23 & *(_QWORD *)(a1 + 24936);
          if ( v24 )
          {
            v23 &= *(_QWORD *)(a1 + 24936);
            v81 = v24;
          }
          if ( *(_QWORD *)(a1 + 1608) != *(_QWORD *)(a1 + 24920) )
          {
            v23 = v81 & v22[1];
            if ( v23 )
            {
              v81 &= v22[1];
            }
            else
            {
              v68 = KiReduceByEffectiveIdleSmtSet(a1, &v81);
              v23 = v81;
              if ( v68 )
              {
LABEL_34:
                v26 = *(_BYTE *)(a1 + 1616);
                v27 = *(_DWORD *)(a1 + 24916);
                if ( *(_BYTE *)(v9 + 1616) == v26 && (*(_QWORD *)(a1 + 24928) & *(_QWORD *)(v9 + 1608)) != 0LL )
                  LOBYTE(v27) = *(_BYTE *)(v9 + 1617);
                _BitScanForward64(&v28, __ROR8__(v23, v27));
                v87 = KiProcessorNumberToIndexMappingTable[64 * v26 + (((_BYTE)v28 + (_BYTE)v27) & 0x3F)];
                v15 = KiProcessorBlock[v87];
                goto LABEL_13;
              }
            }
          }
          v25 = v23 & ~*(_QWORD *)(a1 + 24920);
          if ( v25 )
          {
            v23 &= ~*(_QWORD *)(a1 + 24920);
            v81 = v25;
          }
          goto LABEL_34;
        }
      }
      v10 = *(_QWORD *)(v9 + 1600);
      v11 = 0LL;
      v12 = *(unsigned int *)(a2 + 588);
      v82 = v10;
      v13 = KiProcessorBlock[v12];
      v14 = *(_QWORD *)(v13 + 1600);
      if ( v10 == v14 )
        v11 = v9;
      v15 = 0LL;
      v16 = v4 & *(_QWORD *)v14;
      if ( v16 )
      {
        if ( *(_QWORD *)(v13 + 1608) != *(_QWORD *)(v13 + 24920) )
        {
          if ( (v16 & *(_QWORD *)(v14 + 8)) != 0 )
          {
            v16 &= *(_QWORD *)(v14 + 8);
          }
          else
          {
            v40 = *(_QWORD *)(a1 + 1600);
            if ( v40 == v14 )
            {
              v41 = v16 & *(_QWORD *)(v40 + 16);
              v42 = *(_QWORD *)(a1 + 24920) & ~*(_QWORD *)(a1 + 1608);
              v43 = v16 & v42;
              v84 = v16 & v42;
              if ( (v16 & v42) != 0
                && (v41 & v42) == v42
                && (*(_BYTE *)(a1 + 11756) & 1) == 0
                && !*(_DWORD *)(a1 + 22680) )
              {
                v44 = *(_QWORD *)(a1 + 8);
                if ( !*(_BYTE *)(a1 + 32) )
                {
                  _disable();
                  *(_BYTE *)(a1 + 32) = 1;
                  v45 = __rdtsc();
                  v46 = v45 - *(_QWORD *)(a1 + 23352);
                  v47 = v46 + *(unsigned int *)(v44 + 80);
                  *(_QWORD *)(v44 + 72) += v46;
                  if ( v47 > 0xFFFFFFFF )
                    v47 = 0xFFFFFFFFLL;
                  *(_QWORD *)(a1 + 23352) = v45;
                  v48 = (*(_BYTE *)(v44 + 2) & 0x3E) == 0;
                  *(_DWORD *)(v44 + 80) = v47;
                  if ( !v48 )
                  {
                    KiEndThreadAccountingPeriod(a1, v44, v46, v7);
                    v10 = v82;
                    LODWORD(v7) = v79;
                    v4 = v80;
                  }
                  v85 = __rdtsc();
                  v49 = v85;
                  *(_QWORD *)(a1 + 23544) += v85 - *(_QWORD *)(a1 + 23352);
                  if ( (*(_BYTE *)(v44 + 2) & 0x20) != 0 )
                  {
                    CurrentFrequency = PpmPerfGetCurrentFrequency(a1);
                    v76 = 3LL;
                    if ( CurrentFrequency / 0x19 < 3 )
                      v76 = CurrentFrequency / 0x19;
                    v77 = *(unsigned __int8 *)(a1 + 23858) + 2944LL + 2 * v76;
                    v10 = v82;
                    v78 = (unsigned __int64 *)(a1 + 8 * v77);
                    v47 = v75 + *v78;
                    *v78 = v47;
                    v49 = v85;
                  }
                  *(_QWORD *)(a1 + 23352) = v49;
                  if ( (*(_BYTE *)(v44 + 2) & 0x10) != 0 )
                    *(_QWORD *)(a1 + 23360) = v49;
                  if ( (*(_BYTE *)(v44 + 2) & 2) != 0 )
                  {
                    KiBeginCounterAccumulation(v44, 0LL);
                    v10 = v82;
                    LODWORD(v7) = v79;
                    v4 = v80;
                  }
                  v48 = *(_BYTE *)(a1 + 6) == 0;
                  *(_BYTE *)(a1 + 32) = 0;
                  if ( !v48 )
                  {
                    LOBYTE(v47) = 2;
                    *(_BYTE *)(a1 + 6) = 0;
                    HalRequestSoftwareInterrupt(v47);
                    v10 = v82;
                    LODWORD(v7) = v79;
                    v4 = v80;
                  }
                  _enable();
                  v43 = v84;
                }
                v50 = *(_DWORD *)(v44 + 80);
                v51 = *(_DWORD *)(v44 + 84);
                if ( v50 >= v51 || v51 - v50 < KiShortExecutionCycles )
                  v16 = v43;
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
          v19 = v16 & *(_QWORD *)(v13 + 24920);
          if ( v19 || v11 && (v19 = v16 & *(_QWORD *)(v11 + 24920)) != 0 )
            v16 = v19;
          v20 = *(_BYTE *)(v13 + 1617);
          _BitScanForward64(&v21, __ROR8__(v16, v20));
          v88 = KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v13 + 1616) + (((_BYTE)v21 + v20) & 0x3F)];
          v15 = KiProcessorBlock[v88];
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
        *v86 = 1;
        return result;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 48), 0LL);
      v7 = v79;
      v4 = v80;
    }
    v29 = v4 & ~*(_QWORD *)(v14 + 136);
    if ( v10 != v14 && v29 && *(unsigned __int16 *)(v10 + 144) == (_DWORD)v7 )
    {
      v15 = KiSelectIdleProcessor(v4, a1, v10, v9);
      if ( v15 )
        goto LABEL_13;
      v10 = v82;
      LODWORD(v7) = v79;
      v4 = v80;
    }
    if ( (_WORD)v7 == *(_WORD *)(v10 + 144) )
      v30 = v29 & ~*(_QWORD *)(v10 + 136);
    else
      v30 = v29;
    v31 = *(_QWORD *)(a1 + 1600);
    v84 = v31;
    if ( v31 != v14 && v31 != v10 && v30 && *(unsigned __int16 *)(v31 + 144) == (_DWORD)v7 )
    {
      v15 = KiSelectIdleProcessor(v4, a1, v31, a1);
      if ( v15 )
        goto LABEL_13;
      v10 = v82;
      LOWORD(v7) = v79;
      v31 = v84;
    }
    v32 = (_WORD)v7 == *(_WORD *)(v31 + 144) ? v30 & ~*(_QWORD *)(v31 + 136) : v30;
    v33 = v80;
    v34 = *(_DWORD *)(v14 + 128) & ~((1 << *(_BYTE *)(v14 + 146)) | (1 << *(_WORD *)(v31 + 146)) | (1 << *(_WORD *)(v10 + 146)));
    v35 = 0;
    while ( v32 )
    {
      if ( ++v35 == (unsigned __int16)KeNumberNodes )
        break;
      v60 = *((unsigned __int16 *)qword_1403269E8
            + v35
            + (unsigned __int16)KeNumberNodes * (unsigned int)*(unsigned __int16 *)(v14 + 146));
      v61 = v34;
      if ( _bittest64(&v61, v60) )
      {
        v62 = KeNodeBlock[v60];
        v84 = v62;
        if ( (v33 & *(_QWORD *)(v62 + 136)) != 0 )
        {
          v15 = 0LL;
          v63 = KiProcessorBlock[*(unsigned int *)(v62 + 92)];
          v64 = *(_BYTE *)(v63 + 1617);
          v65 = *(unsigned __int8 *)(v63 + 1616);
          _BitScanForward64((unsigned __int64 *)&v63, __ROR8__(v33 & *(_QWORD *)(v62 + 136), v64));
          v66 = v33 & *(_QWORD *)v62;
          v83 = v66;
          v89 = KiProcessorNumberToIndexMappingTable[64 * v65 + (((_BYTE)v63 + v64) & 0x3F)];
          v67 = KiProcessorBlock[v89];
          v85 = v67;
          if ( v66 )
          {
            if ( *(_QWORD *)(v67 + 1608) != *(_QWORD *)(v67 + 24920) )
            {
              v66 = v83;
              if ( (v83 & *(_QWORD *)(v62 + 8)) != 0 )
              {
                v66 = v83 & *(_QWORD *)(v62 + 8);
                v83 = v66;
              }
              else if ( *(_QWORD *)(a1 + 1600) == v62 )
              {
                KiReduceByEffectiveIdleSmtSet(a1, &v83);
                v66 = v83;
                v33 = v80;
                v62 = v84;
                v67 = v85;
              }
            }
            if ( (v66 & *(_QWORD *)(v67 + 1608)) != 0 )
            {
              v15 = v67;
            }
            else
            {
              v69 = *(_BYTE *)(v67 + 1617);
              v70 = *(_QWORD *)(v67 + 24920);
              v71 = *(unsigned __int8 *)(v67 + 1616);
              v72 = v66 & v70;
              if ( v72 )
                v66 = v72;
              v83 = v66;
              _BitScanForward64(&v73, __ROR8__(v66, v69));
              v90 = KiProcessorNumberToIndexMappingTable[64 * v71 + (((_BYTE)v73 + v69) & 0x3F)];
              v15 = KiProcessorBlock[v90];
            }
          }
          if ( v15 )
            goto LABEL_13;
        }
        v32 &= ~*(_QWORD *)(v62 + 136);
      }
    }
    v36 = v33 & *(_QWORD *)(v13 + 24896);
    if ( ((v36 - 1) & v36) != 0 )
    {
      v52 = *(unsigned __int8 **)(v13 + 24904);
      v53 = v52[593];
      v54 = v52[592];
      v55 = &v91[v53];
      memmove(&v91[v53], v52 + 528, v52[592]);
      v56 = *(_BYTE *)(a2 + 195);
      v57 = v53 + v54;
      v58 = -1;
      if ( (unsigned int)v53 < (int)v53 + v54 )
      {
        v59 = __ROL8__(1LL, v53);
        do
        {
          if ( (v59 & v36) != 0 && *v55 < v56 )
          {
            v56 = *v55;
            v58 = v53;
          }
          LODWORD(v53) = v53 + 1;
          v59 = __ROL8__(v59, 1);
          ++v55;
        }
        while ( (unsigned int)v53 < v57 );
        if ( v58 >= 0 )
          v13 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v13 + 1616) + v58]];
      }
    }
    v37 = *(_QWORD **)(v13 + 1600);
    v38 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 48), 0LL) )
    {
      do
      {
        if ( (++v38 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v38);
      }
      while ( *(_QWORD *)(v13 + 48) );
    }
    v4 = v80;
    if ( (*v37 & v80) == 0 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 48), 0LL);
    v7 = v79;
  }
  v39 = v86;
  *v86 = 0;
  if ( (*(_BYTE *)(v13 + 35) & 2) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 48), 0LL);
    v13 = KiSelectCandidateProcessor(v13, a2, -1LL);
    if ( (*(_BYTE *)(v13 + 35) & 1) == 0 )
      *v39 = 1;
  }
  return v13;
}
