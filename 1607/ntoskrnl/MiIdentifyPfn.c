/*
 * XREFs of MiIdentifyPfn @ 0x14000F810
 * Callers:
 *     MiIdentifyPfnWrapper @ 0x14000F770 (MiIdentifyPfnWrapper.c)
 *     MmCopyToCachedPage @ 0x140037480 (MmCopyToCachedPage.c)
 *     MmSetPfnListPriorities @ 0x1400BC000 (MmSetPfnListPriorities.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiDeletePageTableHierarchy @ 0x1400E2BE0 (MiDeletePageTableHierarchy.c)
 *     MiDeleteValidSystemPte @ 0x1400FE970 (MiDeleteValidSystemPte.c)
 *     MmTryIdentifyPage @ 0x1401E53F4 (MmTryIdentifyPage.c)
 *     MiConvertPrivateToProto @ 0x1401F8734 (MiConvertPrivateToProto.c)
 *     MiDemoteCombinedPte @ 0x1401F95DC (MiDemoteCombinedPte.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x140026854 (MiGetSubsectionDriverProtos.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14002EA80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiStartingOffset @ 0x1400318C0 (MiStartingOffset.c)
 *     MiGetTopLevelPfn @ 0x1401086F0 (MiGetTopLevelPfn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MmQuerySpecialPoolBlockType @ 0x1401EC48C (MmQuerySpecialPoolBlockType.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiGetSharedProtos @ 0x1401F4EB4 (MiGetSharedProtos.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DB5C (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14022DCC8 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __fastcall MiIdentifyPfn(__m128i *a1, _QWORD *a2)
{
  unsigned __int64 v2; // rbp
  __m128i v3; // xmm0
  _QWORD *v4; // rsi
  __m128i v5; // xmm1
  __m128i v6; // xmm0
  unsigned __int8 v7; // bl
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  char v11; // al
  bool v12; // r14
  unsigned int v13; // eax
  __int64 v14; // r11
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r10
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 PrototypePteDirect; // r14
  __int64 v26; // r13
  signed __int32 v27; // edx
  bool v28; // zf
  signed __int32 v29; // eax
  unsigned __int64 v30; // rdx
  __int16 v31; // r8
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rbx
  int v35; // eax
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // r10
  __int64 v38; // rcx
  __int64 v39; // r11
  _QWORD *v40; // r8
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  unsigned int v43; // r15d
  unsigned __int64 v44; // r10
  unsigned __int64 v45; // rax
  __int64 v46; // r9
  _QWORD *v47; // rcx
  __int64 v48; // rbx
  int v49; // r13d
  __int64 v50; // rax
  __int64 v51; // r14
  __int64 *v52; // rcx
  __int64 v53; // rax
  unsigned __int64 v54; // r8
  __int64 v55; // r8
  unsigned __int64 v56; // r8
  unsigned __int64 v57; // r13
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rcx
  int v60; // r11d
  unsigned int v61; // r13d
  __int64 *v62; // r12
  __int64 v63; // rcx
  ULONG_PTR *v64; // r11
  unsigned __int64 v65; // rdi
  unsigned __int64 v66; // r11
  int v67; // ebx
  unsigned __int64 v68; // rax
  __int64 TopLevelPfn; // rax
  __int64 v70; // r9
  _QWORD *v71; // rcx
  __int64 v72; // rbx
  int v73; // r13d
  __int64 v74; // rax
  __int64 v75; // r14
  __int64 *v76; // rcx
  __int64 v77; // rax
  int v78; // [rsp+40h] [rbp+0h] BYREF
  void *retaddr; // [rsp+118h] [rbp+D8h]

  v2 = (unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL;
  v3 = *a1;
  v4 = a2;
  *(_QWORD *)(v2 + 24) = a2;
  v5 = a1[1];
  *(_QWORD *)(v2 + 8) = a1;
  *(__m128i *)(v2 + 40) = v3;
  v6 = a1[2];
  *(__m128i *)(v2 + 56) = v5;
  *(__m128i *)(v2 + 72) = v6;
  v7 = _mm_cvtsi128_si32(_mm_srli_si128(v6, 2));
  v8 = (__int64)((unsigned __int128)((__int64)a1[0x5800000000LL].m128i_i64 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v9 = (v8 >> 63) + v8;
  v10 = (*(_DWORD *)a2 ^ (16 * v7)) & 0x70;
  *(_QWORD *)(v2 + 16) = v9;
  *a2 ^= v10;
  v11 = _mm_cvtsi128_si32(_mm_srli_si128(v6, 3));
  a2[1] = v9;
  v12 = (v11 & 8) != 0;
  if ( (v11 & 8) != 0 )
    v13 = 5;
  else
    v13 = v11 & 7;
  v14 = *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
  v15 = *a2 ^ (*a2 ^ ((unsigned __int64)v13 << 57)) & 0xE00000000000000LL;
  *v4 = v15;
  switch ( (v15 >> 4) & 7 )
  {
    case 0uLL:
    case 1uLL:
    case 5uLL:
      return;
    case 2uLL:
    case 3uLL:
    case 4uLL:
      if ( *(_WORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) )
        *v4 = v15 | 0x100;
      if ( (*(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) & 0x4000000000000000LL) == 0 )
        goto LABEL_9;
      if ( (*(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) & 0x200000000000000LL) == 0 )
        v4[2] = ((__int64)(*(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_21;
    case 6uLL:
      if ( !v14 || v12 || *(_WORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) > 1u )
        *v4 = v15 | 0x100;
      goto LABEL_9;
    case 7uLL:
      v20 = v15 | 0x100;
      v21 = *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50);
      v22 = *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) | 0x8000000000000000uLL;
      *v4 = v20;
      if ( (v21 & 0x200000000000000LL) == 0 )
        v4[2] = ((__int64)(v22 << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL;
      if ( ((v21 >> 54) & 7) == 1 )
      {
        v19 = (v20 ^ (v20 ^ (*(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) << 9)) & 0x1FFFFFFFFFFFE00LL) & 0xFFFFFFFFFFFFFFF0uLL | 9;
        goto LABEL_184;
      }
      v23 = v21 & 0xFFFFFFFFFLL;
      if ( v23 == 0xFFFFFFFFDLL )
      {
        *v4 = v20 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
      }
      else if ( v23 == 0xFFFFFFFFFLL && v22 == 0xFFFFF68000000000uLL )
      {
        *v4 = v20 & 0xFFFFFFFFFFFFFFF0uLL | 5;
      }
      else
      {
        *v4 = v20 & 0xFFFFFFFFFFFFFFF0uLL;
      }
      return;
    default:
LABEL_9:
      v16 = *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50);
      if ( (v16 & 0x200000000000000LL) != 0 )
      {
        if ( (*(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) & 0x400LL) != 0 )
        {
          PrototypePteDirect = MiGetPrototypePteDirect();
          v26 = *(_QWORD *)PrototypePteDirect;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            LOBYTE(v24) = -1;
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v26 + 72, v24);
          }
          else
          {
            *(_DWORD *)v2 = 0;
            if ( _interlockedbittestandset((volatile signed __int32 *)(v26 + 72), 0x1Fu) )
            {
              LOBYTE(v24) = -1;
              *(_DWORD *)v2 = ExpWaitForSpinLockExclusiveAndAcquire(v26 + 72, v24);
            }
            v27 = *(_DWORD *)(v26 + 72);
            while ( (v27 & 0xBFFFFFFF) != 0x80000000 )
            {
              if ( (v27 & 0x40000000) == 0 )
              {
                v29 = _InterlockedCompareExchange((volatile signed __int32 *)(v26 + 72), v27 | 0x40000000, v27);
                v28 = v27 == v29;
                v27 = v29;
                if ( !v28 )
                  continue;
              }
              KeYieldProcessorEx((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL);
              v27 = *(_DWORD *)(v26 + 72);
            }
          }
          if ( (*(_QWORD *)(v26 + 64) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
          {
            *v4 = *v4 & 0xFFFFFFFFFFFFFE8FuLL | 0x10;
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v26 + 72));
            return;
          }
          v4[2] = *(_QWORD *)((*(_QWORD *)(v26 + 64) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v26 + 72, retaddr);
          else
            *(_DWORD *)(v26 + 72) = 0;
          v4[2] ^= (*((_DWORD *)v4 + 4) ^ (*(_DWORD *)(v26 + 56) >> 5)) & 1;
          v30 = *(_QWORD *)(PrototypePteDirect + 8);
          if ( v30 )
          {
            v31 = (*(_WORD *)(PrototypePteDirect + 34) >> 1) & 1;
            if ( v31 && (*(_DWORD *)(v26 + 56) & 0x4000000) != 0 )
            {
              *v4 ^= (MiStartingOffset(PrototypePteDirect, v30, 0xFFFFFFFFLL) ^ *v4) & 0x1FFFFFFFFFFFE00LL;
            }
            else
            {
              v32 = *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) | 0x8000000000000000uLL;
              if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x20) != 0 )
              {
                if ( v32 < v30 || v32 >= v30 + 8LL * *(unsigned int *)(PrototypePteDirect + 44) )
                {
                  if ( v31 )
                    v33 = (v32 << 9)
                        - (*(_QWORD *)(MiGetSharedProtos(
                                         *(_QWORD *)PrototypePteDirect,
                                         0xFFFFFFFFLL,
                                         PrototypePteDirect)
                                     + 32) << 9);
                  else
                    v33 = (v32 << 9) - (*(_QWORD *)(MiGetSubsectionDriverProtos(PrototypePteDirect) + 32) << 9);
                }
                else
                {
                  v33 = (v32 << 9) - (v30 << 9);
                }
                v34 = ((unsigned __int64)*(unsigned int *)(PrototypePteDirect + 36) << 9)
                    + (v33 & 0xFFFFFFFFFFFFF000uLL);
              }
              else
              {
                v34 = ((__int64)(v32 - v30) >> 3 << 12)
                    + ((*(unsigned int *)(PrototypePteDirect + 36) | ((unsigned __int64)(*(_WORD *)(PrototypePteDirect
                                                                                                  + 32) & 0xFFC0) << 26)) << 12);
              }
              *v4 ^= (v34 ^ *v4) & 0x1FFFFFFFFFFFE00LL;
            }
          }
          v35 = *(_DWORD *)(v26 + 56);
          if ( (v35 & 8) == 0 || (v35 & 1) != 0 )
            v19 = *v4 & 0xFFFFFFFFFFFFFFF0uLL | 1;
          else
            v19 = *v4 & 0xFFFFFFFFFFFFFFF0uLL | 8;
        }
        else
        {
          v17 = *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) | 0x8000000000000000uLL;
          v4[2] = v17;
          if ( *(__int64 *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) >= 0 )
          {
            v4[2] = v17 | 1;
            v18 = *(_QWORD *)(v17 - 16);
            if ( v18 >= 0x1000000000000LL )
              v18 = 0xFFFFFFFFFFFFLL;
            *v4 ^= (*v4 ^ (v18 << 9)) & 0x1FFFFFFFFFFFE00LL;
          }
          v19 = *v4 & 0xFFFFFFFFFFFFFFF0uLL | 2;
        }
        goto LABEL_184;
      }
      v36 = *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
      v37 = v36;
      if ( v36 && ((v16 >> 54) & 7) != 1 )
        v37 = v36 | 0x8000000000000000uLL;
      if ( v37 >= qword_140327F60 && v37 < qword_140327F60 + 0x100000000000LL
        || qword_140326C70
        && v37 >= qword_140326C70
        && v37 < qword_140326C70 + (qword_140326C50 << 21)
        && (*(_BYTE *)(48 * ((*(_QWORD *)(((v37 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                     - 0x57FFFFFFFDALL) & 0xF0) == 0xD0 )
      {
        *v4 = (*v4 ^ (*v4 ^ ((v37 - 1088) << 9)) & 0x1FFFFFFFFFFFE00LL) & 0xFFFFFFFFFFFFFFF0uLL | 3;
        v4[2] = 0xFFFFF6FB7DBED000uLL;
        return;
      }
      if ( v37 == -8LL )
      {
        *v4 = *v4 & 0xFFFFFFFFFFFFFFF0uLL | 5;
        v4[2] = MmBadPointer;
        return;
      }
      v38 = (v16 >> 54) & 7;
      if ( v38 != 1 )
      {
        v43 = 0;
        if ( v37 )
          v44 = (__int64)(v37 << 25) >> 16;
        else
          v44 = 0LL;
        if ( v44 >= qword_140327F60 && v44 < qword_140327F60 + 0x100000000000LL )
        {
          v45 = *v4 & 0xFFFFFFFFFFFFFFF5uLL;
          v4[2] = v44;
          v19 = v45 | 5;
          goto LABEL_184;
        }
        v4[2] = v44 & 0xFFFFFFFFFFFFF000uLL;
        if ( (v16 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
        {
          if ( v44 < qword_140326B30 || v44 >= qword_140326B30 + (qword_140326B20 << 21) )
          {
            v19 = *v4 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
            goto LABEL_184;
          }
          goto LABEL_97;
        }
        if ( v44 > 0x7FFFFFFEFFFFLL )
        {
          if ( v38 == 2 )
          {
            v19 = *v4 & 0xFFFFFFFFFFFFFFF0uLL | 0xB;
            goto LABEL_184;
          }
          if ( v44 >= qword_140326950 && v44 < qword_140326950 + 0x8000000000LL )
          {
            v46 = *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
            *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 0LL;
            v47 = (_QWORD *)(v46 + 40);
            *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
            v48 = v46;
            *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = 0LL;
            v49 = 0;
            v50 = *(_QWORD *)(v46 + 40) & 0xFFFFFFFFFLL;
            *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 0LL;
            if ( v50 != *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) )
            {
              do
              {
                v51 = *v47 & 0xFFFFFFFFFLL;
                if ( v51 == 0xFFFFFFFFFLL )
                  break;
                ++v49;
                v48 = 48 * v51 - 0x58000000000LL;
                *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 0;
                *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58 + 8LL * (unsigned int)(v49 - 1)) = v48;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v48 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(v2 + 32);
                  while ( (*(_QWORD *)(v48 + 24) & 0x8000000000000000uLL) != 0 );
                }
                v47 = (_QWORD *)(v48 + 40);
              }
              while ( (*(_QWORD *)(v48 + 40) & 0xFFFFFFFFFLL) != v51 );
              v4 = *(_QWORD **)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
              v46 = *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
            }
            v52 = (__int64 *)(v2 + 88);
            do
            {
              v53 = *v52;
              if ( !*v52 )
                break;
              if ( v53 != v48 )
                _InterlockedAnd64((volatile signed __int64 *)(v53 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              ++v43;
              ++v52;
            }
            while ( v43 < 4 );
            if ( (*(_QWORD *)(v48 + 24) & 0x4000000000000000LL) != 0 )
              *v4 &= 0xFE000000000001FFuLL;
            else
              *v4 ^= (*v4 ^ (*(_QWORD *)v48 << 9)) & 0x1FFFFFFFFFFFE00LL;
            if ( v48 != v46 )
              _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v19 = *v4 & 0xFFFFFFFFFFFFFFF0uLL | 7;
            goto LABEL_184;
          }
          if ( v44 >= qword_140327F70 && v44 < qword_140327F70 + 0xF8000000000LL )
          {
            v19 = *v4 & 0xFFFFFFFFFFFFFFF0uLL | 4;
            goto LABEL_184;
          }
          if ( v44 >= qword_140326B30 && v44 < qword_140326B30 + (qword_140326B20 << 21)
            || v44 >= qword_140328030 && v44 < qword_140328030 + 0x8000000000LL
            || PsNtosImageBase
            && (v44 >= (unsigned __int64)PsNtosImageBase && v44 < PsNtosImageEnd
             || v44 >= (unsigned __int64)PsHalImageBase && v44 < PsHalImageEnd) )
          {
LABEL_97:
            v19 = *v4 & 0xFFFFFFFFFFFFFFF0uLL | 6;
            goto LABEL_184;
          }
          if ( qword_140326C70 && v44 >= qword_140326C70 && v44 < qword_140326C70 + (qword_140326C50 << 21) )
          {
            v54 = *v4 & 0xFFFFFFFFFFFFFFF0uLL | 4;
            *v4 = v54;
            if ( (MmQuerySpecialPoolBlockType(v44, 0x8000000000LL, v54, 0xFFFFF68000000000uLL) & 1) == 0 )
              *v4 = v55 & 0xFFFFFFFFFFFFFFF0uLL | 5;
            return;
          }
        }
        if ( (v7 & 7) == 6 && (!v14 || v12) )
        {
          if ( v44 > 0x7FFFFFFEFFFFLL )
          {
            v56 = (((unsigned __int64)qword_140326D38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v57 = v36 | 0x8000000000000000uLL;
            v58 = (((unsigned __int64)qword_140327FD0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v57;
            v59 = v57;
            v60 = 0;
            if ( v57 >= 0xFFFFF68000000000uLL )
            {
              while ( 1 )
              {
                if ( v59 > 0xFFFFF6FFFFFFFFFFuLL )
                  goto LABEL_148;
                if ( v59 >= v58 && v59 <= v56 )
                  break;
                ++v60;
                v58 &= 0xFFFFFFFFFFFFF000uLL;
                v59 = (__int64)(v59 << 25) >> 16;
                if ( v59 < 0xFFFFF68000000000uLL )
                  goto LABEL_148;
              }
LABEL_165:
              TopLevelPfn = MiGetTopLevelPfn(
                              *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
                              v2 + 4,
                              v56,
                              0xFFFFF68000000000uLL);
              *v4 ^= (*v4 ^ (*(_QWORD *)TopLevelPfn << 9)) & 0x1FFFFFFFFFFFE00LL;
              if ( TopLevelPfn != *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 8) )
                _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v19 = *v4 & 0xFFFFFFFFFFFFFFF0uLL | 0xC;
LABEL_184:
              *v4 = v19;
              return;
            }
LABEL_148:
            v61 = 0;
            v62 = (__int64 *)&unk_140326DF8;
            do
            {
              v63 = *v62;
              if ( *v62 && *(_QWORD *)(v63 + 104) )
              {
                v64 = (*(_BYTE *)(v63 + 184) & 7) == 2
                    ? &BugCheckParameter2
                    : (ULONG_PTR *)(*(_QWORD *)(v63 + 16) + 416LL);
                v65 = (((v64[9] - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v66 = ((v64[10] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v67 = 0;
                v68 = *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
                if ( v68 >= 0xFFFFF68000000000uLL )
                {
                  while ( v68 <= 0xFFFFF6FFFFFFFFFFuLL )
                  {
                    v56 = ((v68 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                    if ( ((v68 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
                      break;
                    if ( v68 >= v66 && v68 <= v65 )
                      goto LABEL_165;
                    if ( v67 != 1 )
                    {
                      ++v67;
                      v66 &= 0xFFFFFFFFFFFFF000uLL;
                      v68 = (__int64)(v68 << 25) >> 16;
                      if ( v68 >= 0xFFFFF68000000000uLL )
                        continue;
                    }
                    break;
                  }
                }
              }
              ++v61;
              ++v62;
            }
            while ( v61 < 3 );
          }
          if ( v44 < 0xFFFFF68000000000uLL || v44 > 0xFFFFF6FFFFFFFFFFuLL )
          {
            v19 = *v4 & 0xFFFFFFFFFFFFFFF0uLL | 5;
            goto LABEL_184;
          }
        }
        else
        {
          v70 = *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
          *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) = 0LL;
          v71 = (_QWORD *)(v70 + 40);
          *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88) = 0LL;
          v72 = v70;
          *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90) = 0LL;
          v73 = 0;
          v74 = *(_QWORD *)(v70 + 40) & 0xFFFFFFFFFLL;
          *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78) = 0LL;
          if ( v74 != *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) )
          {
            do
            {
              v75 = *v71 & 0xFFFFFFFFFLL;
              if ( v75 == 0xFFFFFFFFFLL )
                break;
              ++v73;
              v72 = 48 * v75 - 0x58000000000LL;
              *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0;
              *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78 + 8LL * (unsigned int)(v73 - 1)) = v72;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v72 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(v2 + 16);
                while ( (*(_QWORD *)(v72 + 24) & 0x8000000000000000uLL) != 0 );
              }
              v71 = (_QWORD *)(v72 + 40);
            }
            while ( (*(_QWORD *)(v72 + 40) & 0xFFFFFFFFFLL) != v75 );
            v4 = *(_QWORD **)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
            v70 = *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
          }
          *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = v73;
          v76 = (__int64 *)(v2 + 120);
          do
          {
            v77 = *v76;
            if ( !*v76 )
              break;
            if ( v77 != v72 )
              _InterlockedAnd64((volatile signed __int64 *)(v77 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            ++v43;
            ++v76;
          }
          while ( v43 < 4 );
          *v4 ^= (*v4 ^ (*(_QWORD *)v72 << 9)) & 0x1FFFFFFFFFFFE00LL;
          if ( v72 != v70 )
            _InterlockedAnd64((volatile signed __int64 *)(v72 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFE0uLL) + 4) == 4 )
          {
LABEL_21:
            *v4 &= 0xFFFFFFFFFFFFFFF0uLL;
            return;
          }
        }
        v19 = *v4 & 0xFFFFFFFFFFFFFFF0uLL | 3;
        goto LABEL_184;
      }
      *v4 ^= (*v4 ^ (v14 << 9)) & 0x1FFFFFFFFFFFE00LL;
      v39 = *v4;
      if ( v37 >= 0xFFFFF68000000000uLL && v37 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v40 = (_QWORD *)qword_140326AD8;
        if ( qword_140326AD8 )
        {
          v41 = (__int64)(v2 + 0x58000000028LL) / 48;
          do
          {
            v42 = v40[3];
            if ( v41 < v42 )
            {
              v40 = (_QWORD *)*v40;
            }
            else
            {
              if ( v41 - v42 < v40[4] )
                goto LABEL_87;
              v40 = (_QWORD *)v40[1];
            }
          }
          while ( v40 );
        }
        v4[2] = ((__int64)(v37 << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL;
        *v4 = v39 & 0xFFFFFFFFFFFFFFF0uLL | 0xD;
        return;
      }
LABEL_87:
      *v4 = v39 & 0xFFFFFFFFFFFFFFF0uLL | 9;
      return;
  }
}
