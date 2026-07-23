/*
 * XREFs of MiIdentifyPfn @ 0x1400C4A30
 * Callers:
 *     MmSetPfnListPriorities @ 0x140011DA0 (MmSetPfnListPriorities.c)
 *     MiDeleteValidSystemPte @ 0x140038C20 (MiDeleteValidSystemPte.c)
 *     MiDeletePageTableHierarchy @ 0x140039EA0 (MiDeletePageTableHierarchy.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MmCopyToCachedPage @ 0x1400B3650 (MmCopyToCachedPage.c)
 *     MiIdentifyPfnWrapper @ 0x1400C4980 (MiIdentifyPfnWrapper.c)
 *     MmTryIdentifyPage @ 0x1402164B4 (MmTryIdentifyPage.c)
 *     MiConvertPrivateToProto @ 0x140228698 (MiConvertPrivateToProto.c)
 *     MiDemoteCombinedPte @ 0x14022A174 (MiDemoteCombinedPte.c)
 * Callees:
 *     MiStartingOffset @ 0x140055230 (MiStartingOffset.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiGetTopLevelPfn @ 0x1400FD760 (MiGetTopLevelPfn.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiGetSharedProtos @ 0x14021C58C (MiGetSharedProtos.c)
 *     MmQuerySpecialPoolBlockType @ 0x1402203F8 (MmQuerySpecialPoolBlockType.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiIdentifyPfn(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rsi
  __int128 v3; // xmm1
  __m128i v4; // xmm2
  unsigned __int8 v5; // bl
  __int64 v6; // r11
  __int64 v7; // rax
  __int64 v8; // rdx
  char v9; // al
  bool v10; // r10
  unsigned int v11; // eax
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  __int64 result; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  __int64 v20; // rdx
  __int64 *PrototypePteDirect; // r15
  __int64 v22; // r13
  unsigned int v23; // edi
  signed __int32 i; // edx
  unsigned __int64 v25; // rdx
  __int16 v26; // r8
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rbx
  int v30; // eax
  __int64 v31; // r15
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  __int64 v34; // r8
  unsigned __int64 v35; // r8
  unsigned int v36; // r13d
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // r8
  __int64 v41; // r8
  unsigned __int64 v42; // r15
  unsigned __int64 v43; // rcx
  int v44; // r8d
  unsigned __int64 v45; // rax
  ULONG_PTR *v46; // rdi
  unsigned int j; // r14d
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // r8
  int v50; // r9d
  unsigned __int64 v51; // rcx
  __int64 v52; // rax
  __int64 TopLevelPfn; // rax
  __int64 v54; // r8
  _QWORD *v55; // rcx
  __int64 v56; // rdi
  int v57; // edx
  __int64 v58; // rax
  __int64 v59; // r15
  unsigned int v60; // ebx
  __int64 *v61; // rcx
  __int64 v62; // rax
  __int64 v64; // [rsp+28h] [rbp-51h] BYREF
  unsigned __int64 v65; // [rsp+30h] [rbp-49h]
  unsigned __int64 v66; // [rsp+38h] [rbp-41h]
  __int128 v67; // [rsp+40h] [rbp-39h]
  __int128 v68; // [rsp+50h] [rbp-29h]
  __m128i v69; // [rsp+60h] [rbp-19h]
  _QWORD v70[4]; // [rsp+70h] [rbp-9h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+5Fh]

  v2 = a2;
  v3 = *(_OWORD *)(a1 + 16);
  v67 = *(_OWORD *)a1;
  v65 = (unsigned __int64)a2;
  v69 = *(__m128i *)(a1 + 32);
  v4 = _mm_srli_si128(v69, 3);
  v5 = _mm_cvtsi128_si32(_mm_srli_si128(v69, 2));
  v6 = (a1 + 0x58000000000LL) / 48;
  v7 = (*(_DWORD *)a2 ^ (16 * v5)) & 0x70;
  a2[1] = v6;
  *a2 ^= v7;
  v8 = *a2;
  v9 = _mm_cvtsi128_si32(v4);
  v68 = v3;
  v10 = (v9 & 8) != 0;
  if ( (v9 & 8) != 0 )
    v11 = 5;
  else
    v11 = v9 & 7;
  v12 = v67;
  v13 = v8 ^ (v8 ^ ((unsigned __int64)v11 << 57)) & 0xE00000000000000LL;
  *v2 = v13;
  result = (v13 >> 4) & 7;
  switch ( result )
  {
    case 0LL:
    case 1LL:
    case 5LL:
      return result;
    case 2LL:
    case 3LL:
    case 4LL:
      if ( v69.m128i_i16[0] )
        *v2 = v13 | 0x100;
      if ( (*((_QWORD *)&v68 + 1) & 0x4000000000000000LL) == 0 )
        goto LABEL_9;
      result = 0x200000000000000LL;
      if ( (v69.m128i_i64[1] & 0x200000000000000LL) == 0 )
      {
        result = (__int64)((*((_QWORD *)&v67 + 1) & 0xFFFFFFFFFFFFFFF8uLL) << 25) >> 16;
        v2[2] = result;
      }
      *v2 &= 0xFFFFFFFFFFFFFFF0uLL;
      return result;
    case 6LL:
      if ( !v12 || v10 || v69.m128i_i16[0] > 1u )
        *v2 = v13 | 0x100;
      goto LABEL_9;
    case 7LL:
      v17 = v13 | 0x100;
      v18 = v69.m128i_u64[1];
      v19 = *((_QWORD *)&v67 + 1) | 0x8000000000000000uLL;
      *v2 = v17;
      if ( (v18 & 0x200000000000000LL) == 0 )
        v2[2] = (__int64)((v19 & 0xFFFFFFFFFFFFFFF8uLL) << 25) >> 16;
      if ( ((v18 >> 54) & 7) == 1 )
      {
        result = (v17 ^ (v17 ^ ((_QWORD)v67 << 9)) & 0x1FFFFFFFFFFFE00LL) & 0xFFFFFFFFFFFFFFF0uLL | 9;
        *v2 = result;
      }
      else
      {
        result = 0xFFFFFFFFDLL;
        v20 = v18 & 0xFFFFFFFFFLL;
        if ( v20 == 0xFFFFFFFFDLL )
        {
          *v2 = v17 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
        }
        else if ( v20 == 0xFFFFFFFFFLL && v19 == 0xFFFFF68000000000uLL )
        {
          *v2 = v17 & 0xFFFFFFFFFFFFFFF0uLL | 5;
        }
        else
        {
          *v2 = v17 & 0xFFFFFFFFFFFFFFF0uLL;
        }
      }
      return result;
    default:
LABEL_9:
      if ( (v69.m128i_i64[1] & 0x200000000000000LL) != 0 )
      {
        if ( (v68 & 0x400) != 0 )
        {
          PrototypePteDirect = (__int64 *)MiGetPrototypePteDirect(v68, 0x140000000uLL, v12, v69.m128i_i64[1]);
          v22 = *PrototypePteDirect;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v22 + 72);
          }
          else
          {
            v23 = 0;
            if ( _interlockedbittestandset((volatile signed __int32 *)(v22 + 72), 0x1Fu) )
              v23 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v22 + 72));
            for ( i = *(_DWORD *)(v22 + 72); (i & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)(v22 + 72) )
            {
              if ( (i & 0x40000000) == 0 )
                _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 72), i | 0x40000000, i);
              if ( (++v23 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v23);
            }
          }
          if ( (*(_QWORD *)(v22 + 64) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
          {
            v2[2] = *(_QWORD *)((*(_QWORD *)(v22 + 64) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v22 + 72, retaddr);
            else
              *(_DWORD *)(v22 + 72) = 0;
            v2[2] ^= (*((_DWORD *)v2 + 4) ^ (*(_DWORD *)(v22 + 56) >> 5)) & 1;
            v25 = PrototypePteDirect[1];
            if ( v25 )
            {
              v26 = (*((_WORD *)PrototypePteDirect + 17) >> 1) & 1;
              if ( v26 && (*(_DWORD *)(v22 + 56) & 0x4000000) != 0 )
              {
                *v2 ^= (MiStartingOffset(PrototypePteDirect, v25, 0xFFFFFFFF) ^ *v2) & 0x1FFFFFFFFFFFE00LL;
              }
              else
              {
                v27 = *((_QWORD *)&v67 + 1) | 0x8000000000000000uLL;
                if ( (*(_DWORD *)(*PrototypePteDirect + 56) & 0x20) != 0 )
                {
                  if ( v27 < v25 || v27 >= v25 + 8LL * *((unsigned int *)PrototypePteDirect + 11) )
                  {
                    if ( v26 )
                      v28 = (v27 << 9)
                          - (*(_QWORD *)(MiGetSharedProtos(*PrototypePteDirect, 0xFFFFFFFFLL, PrototypePteDirect) + 32) << 9);
                    else
                      v28 = (v27 << 9) - (*(_QWORD *)(PrototypePteDirect[3] + 32) << 9);
                  }
                  else
                  {
                    v28 = (v27 << 9) - (v25 << 9);
                  }
                  v29 = ((unsigned __int64)*((unsigned int *)PrototypePteDirect + 9) << 9)
                      + (v28 & 0xFFFFFFFFFFFFF000uLL);
                }
                else
                {
                  v29 = ((__int64)(v27 - v25) >> 3 << 12)
                      + ((*((unsigned int *)PrototypePteDirect + 9) | ((unsigned __int64)((_WORD)PrototypePteDirect[4] & 0xFFC0) << 26)) << 12);
                }
                *v2 ^= (v29 ^ *v2) & 0x1FFFFFFFFFFFE00LL;
              }
            }
            v30 = *(_DWORD *)(v22 + 56);
            if ( (v30 & 8) == 0 || (v30 & 1) != 0 )
            {
              result = *v2 & 0xFFFFFFFFFFFFFFF0uLL | 1;
              *v2 = result;
            }
            else
            {
              result = *v2 & 0xFFFFFFFFFFFFFFF0uLL | 8;
              *v2 = result;
            }
          }
          else
          {
            result = *v2 & 0xFFFFFFFFFFFFFE8FuLL | 0x10;
            *v2 = result;
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              return ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v22 + 72, retaddr);
            else
              *(_DWORD *)(v22 + 72) = 0;
          }
        }
        else
        {
          v15 = *((_QWORD *)&v67 + 1) | 0x8000000000000000uLL;
          v2[2] = *((_QWORD *)&v67 + 1) | 0x8000000000000000uLL;
          if ( v67 >= 0 )
          {
            v2[2] = v15 | 1;
            v16 = *(_QWORD *)(v15 - 16);
            if ( v16 >= 0x1000000000000LL )
              v16 = 0xFFFFFFFFFFFFLL;
            *v2 ^= (*v2 ^ (v16 << 9)) & 0x1FFFFFFFFFFFE00LL;
          }
          result = *v2 & 0xFFFFFFFFFFFFFFF0uLL | 2;
          *v2 = result;
        }
        return result;
      }
      v31 = *((_QWORD *)&v67 + 1);
      v32 = *((_QWORD *)&v67 + 1);
      if ( *((_QWORD *)&v67 + 1) && (((unsigned __int64)v69.m128i_i64[1] >> 54) & 7) != 1 )
        v32 = *((_QWORD *)&v67 + 1) | 0x8000000000000000uLL;
      if ( v32 + 0x200000000000LL <= 0xFFFFFFFFFFFLL
        || qword_14034EDB0
        && v32 >= qword_14034EDB0
        && v32 < qword_14034EDB0 + (qword_14034ED90 << 21)
        && (*(_BYTE *)(48 * ((*(_QWORD *)(((v32 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                     - 0x57FFFFFFFDALL) & 0xF0) == 0xD0 )
      {
        *v2 = (*v2 ^ (*v2 ^ ((v32 - 1088) << 9)) & 0x1FFFFFFFFFFFE00LL) & 0xFFFFFFFFFFFFFFF0uLL | 3;
        result = 0xFFFFF6FB7DBED000uLL;
        goto LABEL_169;
      }
      if ( v32 == -8LL )
      {
        *v2 = *v2 & 0xFFFFFFFFFFFFFFF0uLL | 5;
        result = (__int64)MmBadPointer;
LABEL_169:
        v2[2] = result;
        return result;
      }
      v33 = ((unsigned __int64)v69.m128i_i64[1] >> 54) & 7;
      if ( v33 == 1 )
      {
        result = v32 + 0x98000000000LL;
        v34 = *v2 ^ (*v2 ^ (v12 << 9)) & 0x1FFFFFFFFFFFE00LL;
        *v2 = v34;
        if ( v32 + 0x98000000000LL > 0x7FFFFFFFFFLL )
        {
          v35 = v34 & 0xFFFFFFFFFFFFFFF0uLL | 9;
        }
        else
        {
          v35 = v34 & 0xFFFFFFFFFFFFFFF0uLL | 0xD;
          v2[2] = (__int64)((v32 & 0xFFFFFFFFFFFFFFF8uLL) << 25) >> 16;
        }
        *v2 = v35;
        return result;
      }
      v36 = 0;
      if ( v32 )
      {
        v37 = (__int64)(v32 << 25) >> 16;
        if ( v37 + 0x200000000000LL <= 0xFFFFFFFFFFFLL )
        {
          v38 = *v2 & 0xFFFFFFFFFFFFFFF5uLL;
          v2[2] = v37;
          result = v38 | 5;
          *v2 = result;
          return result;
        }
      }
      else
      {
        v37 = 0LL;
      }
      v39 = v69.m128i_i64[1] & 0xFFFFFFFFFLL;
      v2[2] = v37 & 0xFFFFFFFFFFFFF000uLL;
      if ( v39 == 0xFFFFFFFFDLL )
      {
        if ( v37 < qword_14034EC70 || v37 >= qword_14034EC70 + (qword_14034EC60 << 21) )
        {
          result = *v2 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
          *v2 = result;
          return result;
        }
LABEL_118:
        result = *v2 & 0xFFFFFFFFFFFFFFF0uLL | 6;
        *v2 = result;
        return result;
      }
      if ( v37 <= (unsigned __int64)MmHighestUserAddress )
        goto LABEL_119;
      if ( v33 == 2 )
      {
        result = *v2 & 0xFFFFFFFFFFFFFFF0uLL | 0xB;
        *v2 = result;
        return result;
      }
      if ( v37 + 0x70000000000LL > 0x7FFFFFFFFFLL )
      {
        if ( v37 + 0x400000000000LL <= 0xF7FFFFFFFFFLL )
        {
          result = *v2 & 0xFFFFFFFFFFFFFFF0uLL | 4;
          *v2 = result;
          return result;
        }
        if ( v37 >= qword_14034EC70 && v37 < qword_14034EC70 + (qword_14034EC60 << 21)
          || v37 + 0x80000000000LL <= 0x7FFFFFFFFFLL
          || PsNtosImageBase
          && (v37 >= (unsigned __int64)PsNtosImageBase && v37 < PsNtosImageEnd
           || v37 >= (unsigned __int64)PsHalImageBase && v37 < PsHalImageEnd) )
        {
          goto LABEL_118;
        }
        if ( v37 && qword_14034EDB0 && v37 >= qword_14034EDB0 && v37 < qword_14034EDB0 + (qword_14034ED90 << 21) )
        {
          *v2 = *v2 & 0xFFFFFFFFFFFFFFF0uLL | 4;
          result = MmQuerySpecialPoolBlockType(v37);
          if ( (result & 1) == 0 )
            *v2 = v41 & 0xFFFFFFFFFFFFFFF0uLL | 5;
        }
        else
        {
LABEL_119:
          if ( (v5 & 7) == 6 && (!v12 || v10) )
          {
            if ( v37 > (unsigned __int64)MmHighestUserAddress )
            {
              v42 = v31 | 0x8000000000000000uLL;
              v43 = 0xFFFFF6FAC0000000uLL;
              v44 = 0;
              v45 = v42;
              if ( v42 >= 0xFFFFF68000000000uLL )
              {
                while ( v45 <= 0xFFFFF6FFFFFFFFFFuLL )
                {
                  if ( v45 >= v43 && v45 <= 0xFFFFF6FB3FFFFFF8uLL )
                  {
LABEL_142:
                    TopLevelPfn = MiGetTopLevelPfn(a1, &v64);
                    *v2 ^= (*v2 ^ (*(_QWORD *)TopLevelPfn << 9)) & 0x1FFFFFFFFFFFE00LL;
                    if ( TopLevelPfn != a1 )
                      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    result = *v2 & 0xFFFFFFFFFFFFFFF0uLL | 0xC;
                    *v2 = result;
                    return result;
                  }
                  ++v44;
                  v45 = (__int64)(v45 << 25) >> 16;
                  v43 &= 0xFFFFFFFFFFFFF000uLL;
                  if ( v45 < 0xFFFFF68000000000uLL )
                    break;
                }
              }
              v46 = &BugCheckParameter2;
              v66 = 0xFFFFF6FB7DE00000uLL;
              v64 = 0x7FFFFFFFF8LL;
              v65 = 0xFFFFF6FB7DBEDF68uLL;
              for ( j = 0; j < 3; ++j )
              {
                if ( *(v46 - 11) )
                {
                  v48 = *v46;
                  if ( ((*v46 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL == v66 )
                    v48 = 0xFFFFF78000200000uLL;
                  v49 = ((v48 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                  v50 = 0;
                  v51 = v42;
                  if ( v42 >= 0xFFFFF68000000000uLL )
                  {
                    while ( v51 <= 0xFFFFF6FFFFFFFFFFuLL && (v64 & (v51 >> 9)) - 0x98000000000LL != v65 )
                    {
                      if ( v51 >= v49
                        && v51 <= (((unsigned __int64)(*(_QWORD *)(*v46 + 104) - 1LL) >> 9) & 0x7FFFFFFFF8LL)
                                - 0x98000000000LL )
                      {
                        goto LABEL_142;
                      }
                      if ( v50 != 1 )
                      {
                        ++v50;
                        v51 = (__int64)(v51 << 25) >> 16;
                        v49 &= 0xFFFFFFFFFFFFF000uLL;
                        if ( v51 >= 0xFFFFF68000000000uLL )
                          continue;
                      }
                      break;
                    }
                  }
                }
                v46 += 32;
              }
            }
            v52 = *v2;
            if ( v37 + 0x98000000000LL > 0x7FFFFFFFFFLL )
            {
              result = v52 & 0xFFFFFFFFFFFFFFF0uLL | 5;
              *v2 = result;
              return result;
            }
          }
          else
          {
            v54 = a1;
            v55 = (_QWORD *)(a1 + 40);
            v56 = a1;
            v57 = 0;
            v58 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
            memset(v70, 0, sizeof(v70));
            if ( v58 != v6 )
            {
              do
              {
                v59 = *v55 & 0xFFFFFFFFFLL;
                if ( v59 == 0xFFFFFFFFFLL )
                  break;
                ++v57;
                v60 = 0;
                v56 = 48 * v59 - 0x58000000000LL;
                LODWORD(v66) = v57;
                v70[v57 - 1] = v56;
                if ( _interlockedbittestandset64((volatile signed __int32 *)(v56 + 24), 0x3FuLL) )
                {
                  do
                  {
                    if ( (++v60 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                      _mm_pause();
                    else
                      HvlNotifyLongSpinWait(v60);
                  }
                  while ( (*(_QWORD *)(v56 + 24) & 0x8000000000000000uLL) != 0
                       || _interlockedbittestandset64((volatile signed __int32 *)(v56 + 24), 0x3FuLL) );
                  v57 = v66;
                }
                v55 = (_QWORD *)(v56 + 40);
              }
              while ( (*(_QWORD *)(v56 + 40) & 0xFFFFFFFFFLL) != v59 );
              v2 = (_QWORD *)v65;
              v54 = a1;
            }
            LODWORD(v64) = v57;
            v61 = v70;
            do
            {
              v62 = *v61;
              if ( !*v61 )
                break;
              if ( v62 != v56 )
                _InterlockedAnd64((volatile signed __int64 *)(v62 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              ++v36;
              ++v61;
            }
            while ( v36 < 4 );
            result = (*v2 ^ (*(_QWORD *)v56 << 9)) & 0x1FFFFFFFFFFFE00LL;
            *v2 ^= result;
            if ( v56 != v54 )
              _InterlockedAnd64((volatile signed __int64 *)(v56 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( (_DWORD)v64 == 4 )
            {
              *v2 &= 0xFFFFFFFFFFFFFFF0uLL;
              return result;
            }
            v52 = *v2;
          }
          result = v52 & 0xFFFFFFFFFFFFFFF0uLL | 3;
          *v2 = result;
        }
      }
      else
      {
        v40 = MiGetTopLevelPfn(a1, 0LL);
        if ( (*(_QWORD *)(v40 + 24) & 0x4000000000000000LL) != 0 )
          *v2 &= 0xFE000000000001FFuLL;
        else
          *v2 ^= (*v2 ^ (*(_QWORD *)v40 << 9)) & 0x1FFFFFFFFFFFE00LL;
        if ( v40 != a1 )
          _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        result = *v2 & 0xFFFFFFFFFFFFFFF0uLL | 7;
        *v2 = result;
      }
      return result;
  }
}
