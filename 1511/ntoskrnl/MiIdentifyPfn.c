/*
 * XREFs of MiIdentifyPfn @ 0x140050C60
 * Callers:
 *     MmSetPfnListPriorities @ 0x1400145D0 (MmSetPfnListPriorities.c)
 *     MiIdentifyPfnWrapper @ 0x140050BC0 (MiIdentifyPfnWrapper.c)
 *     MmCopyToCachedPage @ 0x140069110 (MmCopyToCachedPage.c)
 *     MiDeletePageTableHierarchy @ 0x14006D570 (MiDeletePageTableHierarchy.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     MiDeleteValidSystemPte @ 0x1400A1760 (MiDeleteValidSystemPte.c)
 *     MiDemoteCombinedPte @ 0x14012836C (MiDemoteCombinedPte.c)
 *     MiConvertPrivateToProto @ 0x14012A57C (MiConvertPrivateToProto.c)
 *     MmTryIdentifyPage @ 0x1401D4978 (MmTryIdentifyPage.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14000A380 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiGetSubsectionDriverProtos @ 0x1400390D8 (MiGetSubsectionDriverProtos.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiStartingOffset @ 0x14007C940 (MiStartingOffset.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiGetTopLevelPfn @ 0x1400D56E0 (MiGetTopLevelPfn.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MmQuerySpecialPoolBlockType @ 0x1401DB89C (MmQuerySpecialPoolBlockType.c)
 *     MI_PFN_IS_ENCLAVE @ 0x1401DF9EC (MI_PFN_IS_ENCLAVE.c)
 *     MiGetSharedProtos @ 0x1401E2F60 (MiGetSharedProtos.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021422C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __fastcall MiIdentifyPfn(__int64 a1, unsigned __int64 *a2)
{
  __int128 v2; // xmm0
  _QWORD *v3; // rbx
  __int128 v5; // xmm1
  __m128i v6; // xmm2
  unsigned __int8 v7; // r10
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  char v11; // al
  bool v12; // r9
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // r15
  signed __int32 v20; // edx
  unsigned __int64 v21; // rdx
  __int16 v22; // r8
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rdi
  int v25; // eax
  unsigned __int64 v26; // r11
  unsigned __int64 v27; // r15
  unsigned int v28; // r14d
  unsigned __int64 v29; // r11
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  __int64 v32; // rsi
  int v33; // r13d
  __int64 v34; // r15
  __int64 *v35; // rcx
  __int64 v36; // rax
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rdx
  int v39; // r9d
  unsigned __int64 v40; // rax
  ULONG_PTR *v41; // r9
  unsigned int i; // r10d
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rdx
  int v45; // esi
  unsigned __int64 v46; // rcx
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rdx
  __int64 v50; // rax
  __int64 TopLevelPfn; // rax
  PVOID v52; // rax
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // r8
  __int64 v55; // rax
  __int64 v56; // rdx
  bool v57; // zf
  signed __int32 v58; // eax
  unsigned __int64 v59; // rax
  __int64 SharedProtos; // rax
  __int64 v61; // rsi
  __int64 v62; // r11
  char SpecialPoolBlockType; // al
  __int64 v64; // r8
  unsigned __int64 v65; // [rsp+20h] [rbp-59h] BYREF
  unsigned __int64 v66; // [rsp+28h] [rbp-51h] BYREF
  __int64 v67; // [rsp+30h] [rbp-49h] BYREF
  __int128 v68; // [rsp+38h] [rbp-41h] BYREF
  __int128 v69; // [rsp+48h] [rbp-31h]
  __m128i v70; // [rsp+58h] [rbp-21h]
  unsigned __int64 *v71; // [rsp+68h] [rbp-11h]
  _QWORD v72[4]; // [rsp+70h] [rbp-9h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+5Fh]

  v2 = *(_OWORD *)a1;
  v3 = a2;
  v5 = *(_OWORD *)(a1 + 16);
  v71 = a2;
  v68 = v2;
  v70 = *(__m128i *)(a1 + 32);
  v6 = _mm_srli_si128(v70, 3);
  v7 = _mm_cvtsi128_si32(_mm_srli_si128(v70, 2));
  v8 = (a1 + 0x58000000000LL) / 48;
  v9 = (*(_DWORD *)a2 ^ (16 * v7)) & 0x70;
  a2[1] = v8;
  *a2 ^= v9;
  v10 = *a2;
  v11 = _mm_cvtsi128_si32(v6);
  v69 = v5;
  v12 = (v11 & 8) != 0;
  if ( (v11 & 8) != 0 )
    v13 = 5LL;
  else
    v13 = v11 & 7;
  v14 = v10 ^ (v10 ^ (v13 << 57)) & 0xE00000000000000LL;
  *a2 = v14;
  v15 = (v14 >> 4) & 7;
  if ( (_DWORD)v15 == 1 )
    return;
  switch ( (int)v15 )
  {
    case 0:
    case 5:
      return;
    case 2:
    case 3:
    case 4:
      if ( v70.m128i_i16[0] )
        *a2 = v14 | 0x100;
      if ( (*((_QWORD *)&v69 + 1) & 0x4000000000000000LL) == 0 )
      {
        v16 = v68;
        goto LABEL_13;
      }
      if ( (v70.m128i_i64[1] & 0x200000000000000LL) == 0 )
        a2[2] = (__int64)((*((_QWORD *)&v68 + 1) & 0xFFFFFFFFFFFFFFF8uLL) << 25) >> 16;
      *a2 &= 0xFFFFFFFFFFFFFFF0uLL;
      return;
    case 6:
      v16 = v68;
      if ( !(_QWORD)v68 || v12 )
      {
        *a2 = v14 | 0x100;
      }
      else if ( v70.m128i_i16[0] > 1u )
      {
        *a2 = v14 | 0x100;
      }
      goto LABEL_13;
    case 7:
      v53 = v70.m128i_u64[1];
      v54 = *((_QWORD *)&v68 + 1) | 0x8000000000000000uLL;
      v55 = v14 | 0x100;
      *v3 = v55;
      if ( (v53 & 0x200000000000000LL) == 0 )
        v3[2] = (__int64)((v54 & 0xFFFFFFFFFFFFFFF8uLL) << 25) >> 16;
      if ( ((v53 >> 54) & 7) == 1 )
      {
        *v3 = (v55 ^ (v55 ^ ((_QWORD)v68 << 9)) & 0x1FFFFFFFFFFFE00LL) & 0xFFFFFFFFFFFFFFF0uLL | 9;
      }
      else
      {
        v56 = v53 & 0xFFFFFFFFFLL;
        if ( v56 == 0xFFFFFFFFDLL )
        {
          *v3 = v55 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
        }
        else if ( v56 == 0xFFFFFFFFFLL && v54 == 0xFFFFF68000000000uLL )
        {
          *v3 = v55 & 0xFFFFFFFFFFFFFFF0uLL | 5;
        }
        else
        {
          *v3 = v55 & 0xFFFFFFFFFFFFFFF0uLL;
        }
      }
      return;
    default:
      v16 = v68;
LABEL_13:
      v17 = v70.m128i_i64[1];
      if ( (v70.m128i_i64[1] & 0x200000000000000LL) != 0 )
      {
        if ( (v69 & 0x400) != 0 )
        {
          v18 = (__int64)v69 >> 16;
          v19 = *(_QWORD *)((__int64)v69 >> 16);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            LOBYTE(v17) = -1;
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v19 + 72, v17);
          }
          else
          {
            LODWORD(v66) = 0;
            if ( _interlockedbittestandset((volatile signed __int32 *)(v19 + 72), 0x1Fu) )
            {
              LOBYTE(v17) = -1;
              LODWORD(v66) = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v19 + 72), v17, v8);
            }
            v20 = *(_DWORD *)(v19 + 72);
            while ( (v20 & 0xBFFFFFFF) != 0x80000000 )
            {
              if ( (v20 & 0x40000000) == 0 )
              {
                v58 = _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 72), v20 | 0x40000000, v20);
                v57 = v20 == v58;
                v20 = v58;
                if ( !v57 )
                  continue;
              }
              KeYieldProcessorEx(&v66);
              v20 = *(_DWORD *)(v19 + 72);
            }
          }
          if ( (*(_QWORD *)(v19 + 64) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
          {
            v3[2] = *(_QWORD *)((*(_QWORD *)(v19 + 64) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v19 + 72, retaddr);
            else
              *(_DWORD *)(v19 + 72) = 0;
            v3[2] ^= (*((_DWORD *)v3 + 4) ^ (*(_DWORD *)(v19 + 56) >> 5)) & 1;
            v21 = *(_QWORD *)(v18 + 8);
            if ( v21 )
            {
              v22 = (*(_WORD *)(v18 + 34) >> 1) & 1;
              if ( v22 && (*(_DWORD *)(v19 + 56) & 0x4000000) != 0 )
              {
                *v3 ^= (MiStartingOffset(v18, v21, 0xFFFFFFFFLL) ^ *v3) & 0x1FFFFFFFFFFFE00LL;
              }
              else
              {
                v23 = *((_QWORD *)&v68 + 1) | 0x8000000000000000uLL;
                if ( (*(_DWORD *)(*(_QWORD *)v18 + 56LL) & 0x20) != 0 )
                {
                  if ( v23 < v21 || v23 >= v21 + 8LL * *(unsigned int *)(v18 + 44) )
                  {
                    if ( v22 )
                      SharedProtos = MiGetSharedProtos(*(_QWORD *)v18, 0xFFFFFFFFLL, v18);
                    else
                      SharedProtos = MiGetSubsectionDriverProtos((_QWORD *)v18);
                    v37 = (v23 << 9) - (*(_QWORD *)(SharedProtos + 32) << 9);
                  }
                  else
                  {
                    v37 = (v23 << 9) - (v21 << 9);
                  }
                  v24 = ((unsigned __int64)*(unsigned int *)(v18 + 36) << 9) + (v37 & 0xFFFFFFFFFFFFF000uLL);
                }
                else
                {
                  v24 = ((__int64)(v23 - v21) >> 3 << 12)
                      + ((*(unsigned int *)(v18 + 36) | ((unsigned __int64)(*(_WORD *)(v18 + 32) & 0xFFC0) << 26)) << 12);
                }
                *v3 ^= (v24 ^ *v3) & 0x1FFFFFFFFFFFE00LL;
              }
            }
            v25 = *(_DWORD *)(v19 + 56);
            if ( (v25 & 8) == 0 || (v25 & 1) != 0 )
              *v3 = *v3 & 0xFFFFFFFFFFFFFFF0uLL | 1;
            else
              *v3 = *v3 & 0xFFFFFFFFFFFFFFF0uLL | 8;
          }
          else
          {
            *v3 = *v3 & 0xFFFFFFFFFFFFFE8FuLL | 0x10;
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v19 + 72));
          }
        }
        else
        {
          v49 = *((_QWORD *)&v68 + 1) | 0x8000000000000000uLL;
          v3[2] = *((_QWORD *)&v68 + 1) | 0x8000000000000000uLL;
          if ( v68 >= 0 )
          {
            v3[2] = v49 | 1;
            v59 = *(_QWORD *)(v49 - 16);
            if ( v59 >= 0x1000000000000LL )
              v59 = 0xFFFFFFFFFFFFLL;
            *v3 ^= (*v3 ^ (v59 << 9)) & 0x1FFFFFFFFFFFE00LL;
          }
          *v3 = *v3 & 0xFFFFFFFFFFFFFFF0uLL | 2;
        }
        return;
      }
      v26 = *((_QWORD *)&v68 + 1);
      if ( *((_QWORD *)&v68 + 1) && (((unsigned __int64)v70.m128i_i64[1] >> 54) & 7) != 1 )
        v26 = *((_QWORD *)&v68 + 1) | 0x8000000000000000uLL;
      v65 = 0xFFFFFFFFFFFLL;
      if ( v26 + 0x200000000000LL <= 0xFFFFFFFFFFFLL
        || qword_1402FE8F0
        && v26 >= qword_1402FE8F0
        && v26 < qword_1402FE8F0 + (qword_1402FE8D0 << 21)
        && (*(_BYTE *)(48 * ((*(_QWORD *)(((v26 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                     - 0x57FFFFFFFDALL) & 0xF0) == 0xD0 )
      {
        *v3 = (*v3 ^ (*v3 ^ ((v26 - 1088) << 9)) & 0x1FFFFFFFFFFFE00LL) & 0xFFFFFFFFFFFFFFF0uLL | 3;
        v52 = (PVOID)0xFFFFF6FB7DBED000LL;
        goto LABEL_128;
      }
      if ( v26 == -8LL )
      {
        *v3 = *v3 & 0xFFFFFFFFFFFFFFF0uLL | 5;
        v52 = MmBadPointer;
LABEL_128:
        v3[2] = v52;
        return;
      }
      v27 = ((unsigned __int64)v70.m128i_i64[1] >> 54) & 7;
      if ( v27 == 1 )
      {
        v61 = *v3 ^ (*v3 ^ (v16 << 9)) & 0x1FFFFFFFFFFFE00LL;
        *v3 = v61;
        if ( v26 + 0x98000000000LL > 0x7FFFFFFFFFLL || (unsigned int)MI_PFN_IS_ENCLAVE(&v68) )
        {
          *v3 = v61 & 0xFFFFFFFFFFFFFFF0uLL | 9;
        }
        else
        {
          v3[2] = (__int64)((v62 & 0xFFFFFFFFFFFFFFF8uLL) << 25) >> 16;
          *v3 = v61 & 0xFFFFFFFFFFFFFFF0uLL | 0xD;
        }
        return;
      }
      v28 = 0;
      if ( v26 )
      {
        v29 = (__int64)(v26 << 25) >> 16;
        if ( v29 + 0x200000000000LL <= v65 )
        {
          v48 = *v3 & 0xFFFFFFFFFFFFFFF5uLL;
          v3[2] = v29;
          *v3 = v48 | 5;
          return;
        }
      }
      else
      {
        v29 = 0LL;
      }
      v30 = v70.m128i_i64[1] & 0xFFFFFFFFFLL;
      v3[2] = v29 & 0xFFFFFFFFFFFFF000uLL;
      if ( v30 == 0xFFFFFFFFDLL )
      {
        if ( v29 < qword_1402FE7B0 || v29 >= qword_1402FE7B0 + (qword_1402FE7A0 << 21) )
        {
          *v3 = *v3 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
          return;
        }
        goto LABEL_105;
      }
      if ( v29 > (unsigned __int64)MmHighestUserAddress )
      {
        if ( v27 == 2 )
        {
          *v3 = *v3 & 0xFFFFFFFFFFFFFFF0uLL | 0xB;
          return;
        }
        if ( v29 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
        {
          TopLevelPfn = MiGetTopLevelPfn(a1, 0LL);
          if ( (*(_QWORD *)(TopLevelPfn + 24) & 0x4000000000000000LL) != 0 )
            *v3 &= 0xFE000000000001FFuLL;
          else
            *v3 ^= (*v3 ^ (*(_QWORD *)TopLevelPfn << 9)) & 0x1FFFFFFFFFFFE00LL;
          if ( TopLevelPfn != a1 )
            _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
          *v3 = *v3 & 0xFFFFFFFFFFFFFFF0uLL | 7;
          return;
        }
        if ( v29 + 0x400000000000LL <= 0xF7FFFFFFFFFLL )
        {
          *v3 = *v3 & 0xFFFFFFFFFFFFFFF0uLL | 4;
          return;
        }
        if ( (v29 < qword_1402FE7B0 || v29 >= qword_1402FE7B0 + (qword_1402FE7A0 << 21))
          && v29 + 0x80000000000LL > 0x7FFFFFFFFFLL
          && (!PsNtosImageBase
           || (v29 >= PsNtosImageEnd || v29 < (unsigned __int64)PsNtosImageBase)
           && (v29 >= PsHalImageEnd || v29 < (unsigned __int64)PsHalImageBase)) )
        {
          if ( v29 && qword_1402FE8F0 && v29 >= qword_1402FE8F0 && v29 < qword_1402FE8F0 + (qword_1402FE8D0 << 21) )
          {
            *v3 = *v3 & 0xFFFFFFFFFFFFFFF0uLL | 4;
            SpecialPoolBlockType = MmQuerySpecialPoolBlockType(v29);
            if ( (SpecialPoolBlockType & 1) == 0 )
              *v3 = v64 & 0xFFFFFFFFFFFFFFF0uLL | 5;
            return;
          }
          goto LABEL_43;
        }
LABEL_105:
        *v3 = *v3 & 0xFFFFFFFFFFFFFFF0uLL | 6;
        return;
      }
LABEL_43:
      if ( (v7 & 7) == 6 && (!v16 || v12) )
      {
        if ( v29 > (unsigned __int64)MmHighestUserAddress )
        {
          v38 = 0xFFFFF6FAC0000000uLL;
          v39 = 0;
          v40 = *((_QWORD *)&v68 + 1) | 0x8000000000000000uLL;
          if ( (*((_QWORD *)&v68 + 1) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL )
          {
            while ( v40 <= 0xFFFFF6FFFFFFFFFFuLL )
            {
              if ( v40 <= 0xFFFFF6FB3FFFFFF8uLL && v40 >= v38 )
              {
LABEL_117:
                v50 = MiGetTopLevelPfn(a1, &v67);
                *v3 ^= (*v3 ^ (*(_QWORD *)v50 << 9)) & 0x1FFFFFFFFFFFE00LL;
                if ( v50 != a1 )
                  _InterlockedAnd64((volatile signed __int64 *)(v50 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                *v3 = *v3 & 0xFFFFFFFFFFFFFFF0uLL | 0xC;
                return;
              }
              ++v39;
              v40 = (__int64)(v40 << 25) >> 16;
              v38 &= 0xFFFFFFFFFFFFF000uLL;
              if ( v40 < 0xFFFFF68000000000uLL )
                break;
            }
          }
          v41 = &BugCheckParameter2;
          v65 = 0xFFFFF6FB7DE00000uLL;
          v67 = 0x7FFFFFFFF8LL;
          v66 = 0xFFFFF6FB7DBEDF68uLL;
          for ( i = 0; i < 3; ++i )
          {
            if ( *(v41 - 11) )
            {
              v43 = *v41;
              if ( ((*v41 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL == v65 )
                v43 = 0xFFFFF78000200000uLL;
              v44 = ((v43 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v45 = 0;
              v46 = *((_QWORD *)&v68 + 1) | 0x8000000000000000uLL;
              if ( (*((_QWORD *)&v68 + 1) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL )
              {
                while ( v46 <= 0xFFFFF6FFFFFFFFFFuLL && (v67 & (v46 >> 9)) - 0x98000000000LL != v66 )
                {
                  if ( v46 <= (((unsigned __int64)(*(_QWORD *)(*v41 + 104) - 1LL) >> 9) & 0x7FFFFFFFF8LL)
                            - 0x98000000000LL
                    && v46 >= v44 )
                  {
                    goto LABEL_117;
                  }
                  if ( v45 != 1 )
                  {
                    ++v45;
                    v46 = (__int64)(v46 << 25) >> 16;
                    v44 &= 0xFFFFFFFFFFFFF000uLL;
                    if ( v46 >= 0xFFFFF68000000000uLL )
                      continue;
                  }
                  break;
                }
              }
            }
            v41 += 32;
          }
        }
        v47 = *v3;
        if ( v29 + 0x98000000000LL > 0x7FFFFFFFFFLL )
        {
          *v3 = v47 & 0xFFFFFFFFFFFFFFF0uLL | 5;
          return;
        }
      }
      else
      {
        memset(v72, 0, sizeof(v72));
        v31 = (_QWORD *)(a1 + 40);
        v32 = a1;
        v33 = 0;
        if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) != v8 )
        {
          do
          {
            v34 = *v31 & 0xFFFFFFFFFLL;
            if ( v34 == 0xFFFFFFFFFLL )
              break;
            ++v33;
            LODWORD(v65) = 0;
            v32 = 48 * v34 - 0x58000000000LL;
            v72[v33 - 1] = v32;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v65);
                while ( (*(_QWORD *)(v32 + 24) & 0x8000000000000000uLL) != 0 );
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) );
              v28 = 0;
            }
            v31 = (_QWORD *)(v32 + 40);
          }
          while ( (*(_QWORD *)(v32 + 40) & 0xFFFFFFFFFLL) != v34 );
          v3 = v71;
        }
        LODWORD(v67) = v33;
        v35 = v72;
        do
        {
          v36 = *v35;
          if ( !*v35 )
            break;
          if ( v36 != v32 )
            _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          ++v28;
          ++v35;
        }
        while ( v28 < 4 );
        *v3 ^= (*v3 ^ (*(_QWORD *)v32 << 9)) & 0x1FFFFFFFFFFFE00LL;
        if ( v32 != a1 )
          _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (_DWORD)v67 == 4 )
        {
          *v3 &= 0xFFFFFFFFFFFFFFF0uLL;
          return;
        }
        v47 = *v3;
      }
      *v3 = v47 & 0xFFFFFFFFFFFFFFF0uLL | 3;
      return;
  }
}
