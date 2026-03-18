/*
 * XREFs of MiBuildMappedCluster @ 0x1400E4A80
 * Callers:
 *     MiGatherMappedPages @ 0x1400E37E8 (MiGatherMappedPages.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiReleaseWriteInProgressCharges @ 0x140082AE0 (MiReleaseWriteInProgressCharges.c)
 *     MiWriteCompletePfn @ 0x1400B51B0 (MiWriteCompletePfn.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     MiReferencePageForModifiedWrite @ 0x1400E69AC (MiReferencePageForModifiedWrite.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

unsigned __int64 *__fastcall MiBuildMappedCluster(__int64 a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 *v3; // r12
  unsigned __int64 v6; // rcx
  unsigned __int64 *v7; // r13
  unsigned __int64 v8; // rbx
  __int64 v9; // r8
  unsigned __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 PrototypePteDirect; // rax
  __int64 v14; // r8
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r14
  __int64 v21; // r9
  _QWORD *v22; // r10
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  BOOL v27; // eax
  __int64 v28; // r9
  __int64 v29; // rcx
  unsigned __int64 v30; // r11
  __int64 v31; // rcx
  __int64 *v32; // r14
  unsigned __int64 v33; // rbp
  unsigned __int64 v34; // rcx
  __int64 v35; // rdx
  unsigned __int64 v36; // r15
  unsigned __int64 v37; // rax
  __int64 PteShadow; // rbx
  unsigned __int64 v39; // rax
  BOOL v40; // eax
  __int64 v41; // r9
  unsigned __int64 v42; // r10
  unsigned int v43; // r13d
  ULONG_PTR v44; // rsi
  __int64 v45; // rax
  unsigned int v46; // eax
  __int64 v47; // r9
  unsigned __int64 v48; // rax
  unsigned __int8 v49; // bl
  __int64 v50; // rcx
  unsigned __int64 v51; // r14
  unsigned __int64 v52; // rsi
  __int64 v53; // rbx
  unsigned __int8 CurrentIrql; // r15
  unsigned int v55; // r14d
  unsigned __int64 v56; // rbx
  unsigned __int64 v57; // rbx
  unsigned __int64 v58; // rsi
  __int64 v59; // rsi
  unsigned __int64 v60; // rbp
  char *PoolWithTag; // rax
  char *v62; // r13
  unsigned __int64 *v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // r12
  __int64 *v68; // r14
  unsigned __int64 v69; // rax
  __int64 v70; // rbx
  unsigned __int64 v71; // r13
  BOOL v72; // eax
  ULONG_PTR v73; // rbp
  unsigned int v74; // r13d
  __int64 v75; // rax
  unsigned __int8 v76; // bl
  unsigned __int64 v77; // r14
  unsigned __int64 v78; // rbp
  __int64 v79; // rbx
  unsigned __int8 v80; // r12
  unsigned int v81; // r14d
  __int64 v82; // rsi
  unsigned __int64 v84; // [rsp+20h] [rbp-A8h]
  unsigned __int64 *v85; // [rsp+20h] [rbp-A8h]
  __int64 v86; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v87; // [rsp+28h] [rbp-A0h]
  unsigned __int64 *v88; // [rsp+28h] [rbp-A0h]
  unsigned __int64 *v89; // [rsp+30h] [rbp-98h]
  unsigned __int64 v90; // [rsp+38h] [rbp-90h]
  __int64 v91; // [rsp+40h] [rbp-88h]
  char *v92; // [rsp+40h] [rbp-88h]
  unsigned __int64 v93; // [rsp+48h] [rbp-80h]
  unsigned __int64 v94; // [rsp+50h] [rbp-78h]
  unsigned __int64 v95; // [rsp+58h] [rbp-70h]
  __int16 *v96; // [rsp+60h] [rbp-68h]
  unsigned __int64 *v97; // [rsp+68h] [rbp-60h]
  unsigned __int64 v98; // [rsp+70h] [rbp-58h]
  unsigned __int64 v99; // [rsp+70h] [rbp-58h]
  unsigned int v103; // [rsp+E0h] [rbp+18h]
  int v104; // [rsp+E0h] [rbp+18h]
  unsigned __int8 v105; // [rsp+E8h] [rbp+20h] BYREF

  v3 = a2;
  v6 = (__int64)((unsigned __int128)((a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v97 = a2 + 6;
  v7 = a2 + 6;
  v89 = a2 + 6;
  v8 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  v98 = (v6 >> 63) + v6;
  v90 = v8;
  v84 = v8;
  v10 = *(_QWORD *)(a1 + 8) & 0x7FFFFFFFFFFFF000LL | 0x8000000000000000uLL;
  v96 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
  PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(v9 + 16), v11, v9, v12);
  v86 = PrototypePteDirect;
  v15 = PrototypePteDirect;
  if ( (v8 & 0xFFFFFFFFFFFFF000uLL) < *(_QWORD *)(PrototypePteDirect + 8) )
    v10 = *(_QWORD *)(PrototypePteDirect + 8);
  v16 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(v14 + 40) & 0xFFFFFFFFFLL, &v105, 0x80000000LL);
  v18 = 0LL;
  v91 = v16;
  v93 = v8;
  v19 = v8;
  v20 = v16 + (v8 & 0xFFF);
  v21 = 0x90482413000LL;
  if ( !a3 )
    v10 = v8;
  if ( v8 > v10 )
  {
    v22 = (_QWORD *)(v20 + 0x90482413000LL);
    do
    {
      v20 -= 8LL;
      v23 = *(_QWORD *)v20;
      if ( (unsigned __int64)(v22 - 1) <= 0x7F8 )
      {
        if ( (unsigned int)MiPteHasShadow(v17, v23) && (v23 & 1) != 0 && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
        {
          v24 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v24 )
          {
            v25 = *(_QWORD *)(v24 + 8 * ((v20 >> 3) & 0x1FF));
            if ( (v25 & 0x20) != 0 )
              v23 |= 0x20uLL;
            if ( (v25 & 0x42) != 0 )
              v23 |= 0x42uLL;
          }
        }
        v18 = 0LL;
      }
      if ( (v23 & 0x401) != 0 )
        break;
      if ( (v23 & 0x800) == 0 )
        break;
      v26 = MiReverseSwizzleInvalidPte(v23, v23, v18, v21);
      v27 = MI_IS_PFN((v26 >> 12) & 0xFFFFFFFFFLL);
      v18 = 0LL;
      if ( !v27 )
        break;
      v29 = 48 * v28 - 0x58000000000LL;
      if ( (*(_BYTE *)(v29 + 34) & 0x10) == 0
        || *(_WORD *)(v29 + 32)
        || v96 != MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v29 + 40)) >> 8) & 0x3FF) )
      {
        break;
      }
      v8 -= 8LL;
      if ( v8 >= v30 )
        v19 = v8;
    }
    while ( v8 > v10 );
    v3 = a2;
    v21 = 0x90482413000LL;
    v7 = v89;
    v15 = v86;
    v93 = v19;
    v90 = v8;
  }
  v31 = *(unsigned int *)(v15 + 44);
  v32 = (__int64 *)(((unsigned __int16)v20 ^ (unsigned __int16)v19) & 0xFFF ^ v20);
  v33 = (v19 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  if ( v33 > *(_QWORD *)(v15 + 8) + 8 * v31 )
    v33 = *(_QWORD *)(v15 + 8) + 8 * v31;
  v87 = v33;
  v34 = v33;
  if ( v33 > v19 + 128 )
    v34 = v19 + 128;
  v94 = v34;
  if ( a3 == (_DWORD)v18 )
  {
    v94 = v19 + 8;
    v33 = v19 + 8;
    v87 = v19 + 8;
  }
  v95 = v19;
  v35 = 1LL;
  v103 = 1;
  v36 = v19;
  if ( v19 < v33 )
  {
    v37 = v84;
    while ( 1 )
    {
      if ( v36 == v37 )
      {
        *v7++ = v98;
        v89 = v7;
        goto LABEL_93;
      }
      if ( (_DWORD)v35 == 3 && (__int64)(((char *)v7 - (char *)v3 - 48) & 0xFFFFFFFFFFFFFFF8uLL) >= 128 )
        goto LABEL_70;
      PteShadow = *v32;
      if ( (unsigned __int64)(v32 + 0x12090482600LL) <= 0x7F8 )
        PteShadow = MiReadPteShadow(v32, *v32);
      if ( (PteShadow & 0x401) != 0 || (PteShadow & 0x800) == 0 )
        goto LABEL_70;
      v39 = MiReverseSwizzleInvalidPte(PteShadow, v35, v18, v21);
      v40 = MI_IS_PFN((v39 >> 12) & 0xFFFFFFFFFLL);
      v18 = 0LL;
      if ( v40 )
        break;
      v37 = v84;
      --v32;
      v36 -= 8LL;
LABEL_92:
      v35 = v103;
LABEL_93:
      v36 += 8LL;
      ++v32;
      v95 = v36;
      if ( v36 >= v33 )
        goto LABEL_94;
      v21 = 0x90482413000LL;
    }
    v43 = 0;
    v44 = 48 * v41 - 0x58000000000LL;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v44 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v43 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v43);
      }
      while ( (*(_QWORD *)(v44 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v44 + 24), 0x3FuLL) );
      v42 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v45 = *v32;
    if ( (unsigned __int64)(v32 + 0x12090482600LL) <= 0x7F8 )
      v45 = MiReadPteShadow(v32, *v32);
    if ( PteShadow == v45 )
    {
      if ( (*(_BYTE *)(v44 + 34) & 0x10) != 0
        && !*(_WORD *)(v44 + 32)
        && v96 == MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v44 + 40)) >> 8) & 0x3FF) )
      {
        if ( v36 >= v94 )
        {
          v7 = v89;
          v35 = v103;
          goto LABEL_67;
        }
        v46 = MiReferencePageForModifiedWrite(v44);
        v103 = v46;
        if ( v46 )
        {
          v48 = MiReverseSwizzleInvalidPte(PteShadow, v46, 0LL, v47);
          v42 = 0x7FFFFFFFFFFFFFFFLL;
          *v89 = (v48 >> 12) & 0xFFFFFFFFFLL;
          v7 = ++v89;
LABEL_67:
          _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), v42);
          v37 = v84;
          goto LABEL_93;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), v42);
      }
      v7 = v89;
LABEL_70:
      v49 = v105;
      v50 = v91;
      if ( v91 )
      {
        MiUnmapPageInHyperSpaceWorker(v91, v105);
        v50 = 0LL;
      }
      v51 = v84;
      if ( v36 >= v84 )
        goto LABEL_95;
      v52 = ((char *)v7 - (char *)v3 - 48) >> 3;
      if ( v52 )
      {
        if ( v7 > v3 + 6 )
        {
          do
          {
            v53 = 48 * *--v7 - 0x58000000000LL;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            v55 = 0;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v53 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v55 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v55);
              }
              while ( (*(_QWORD *)(v53 + 24) & 0x8000000000000000uLL) != 0
                   || _interlockedbittestandset64((volatile signed __int32 *)(v53 + 24), 0x3FuLL) );
            }
            MiWriteCompletePfn(v53, 1);
            _InterlockedAnd64((volatile signed __int64 *)(v53 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(CurrentIrql);
          }
          while ( v7 > v97 );
          v33 = v87;
          v3 = a2;
          v51 = v84;
          v89 = v7;
        }
        MiReleaseWriteInProgressCharges((__int64)v96, v52, 1);
      }
      v56 = v94;
      if ( v94 == v93 + 8 )
      {
        v33 = v51 + 8;
        v87 = v51 + 8;
        v94 = v51 + 8;
      }
      else
      {
        if ( v33 > v51 + 128 )
          v56 = v51 + 128;
        v94 = v56;
      }
      v93 = v51;
      v91 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL, &v105, 0x80000000LL);
      v32 = (__int64 *)((v51 & 0xFFF) + v91 - 8);
      v37 = v84;
      v36 = v84 - 8;
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), v42);
      v7 = v89;
      --v32;
      v37 = v84;
      v36 -= 8LL;
    }
    v18 = 0LL;
    goto LABEL_92;
  }
LABEL_94:
  v49 = v105;
  v50 = v91;
LABEL_95:
  if ( v50 )
    MiUnmapPageInHyperSpaceWorker(v50, v49);
  v57 = v94;
  v58 = v36;
  if ( v36 > v94 )
    v58 = v94;
  v59 = (__int64)(v58 - v93) >> 3;
  if ( v103 == 3 )
    goto LABEL_156;
  v60 = v90;
  if ( v36 <= v94 && v90 >= v93 )
    goto LABEL_156;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * ((__int64)(v36 - v90) >> 3) + 48, 0x65576D4Du);
  v92 = PoolWithTag;
  v62 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_156;
  v88 = v97;
  v104 = 1;
  v85 = (unsigned __int64 *)(PoolWithTag + 48);
  v63 = (unsigned __int64 *)(PoolWithTag + 48);
  v67 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL, &v105, 0x80000000LL);
  v68 = (__int64 *)(v67 + (v90 & 0xFFF));
  while ( v60 < v36 )
  {
    if ( v60 >= v93 && v60 < v57 )
    {
      v69 = *v88++;
      *v63 = v69;
LABEL_132:
      v60 += 8LL;
      ++v68;
      v90 = v60;
      ++v63;
      goto LABEL_150;
    }
    if ( v104 != 3 || (__int64)(((char *)v63 - v62 - 48) & 0xFFFFFFFFFFFFFFF8uLL) < 128 )
    {
      v70 = *v68;
      if ( (unsigned __int64)(v68 + 0x12090482600LL) <= 0x7F8 )
        v70 = MiReadPteShadow(v68, *v68);
      if ( (v70 & 0x401) == 0 && (v70 & 0x800) != 0 )
      {
        v71 = ((unsigned __int64)MiReverseSwizzleInvalidPte(v70, v64, v65, v66) >> 12) & 0xFFFFFFFFFLL;
        v99 = v71;
        v72 = MI_IS_PFN(v71);
        v66 = 0LL;
        if ( !v72 )
          goto LABEL_150;
        v73 = 48 * v71 - 0x58000000000LL;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v73 + 24), 0x3FuLL) )
        {
          v74 = 0;
          do
          {
            if ( (++v74 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v74);
          }
          while ( (*(_QWORD *)(v73 + 24) & 0x8000000000000000uLL) != 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v73 + 24), 0x3FuLL) );
          v71 = v99;
          v66 = 0LL;
        }
        v75 = *v68;
        if ( (unsigned __int64)(v68 + 0x12090482600LL) <= 0x7F8 )
          v75 = MiReadPteShadow(v68, *v68);
        if ( v70 != v75 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v73 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v60 = v90;
          goto LABEL_150;
        }
        if ( (*(_BYTE *)(v73 + 34) & 0x10) != 0
          && *(_WORD *)(v73 + 32) == (_WORD)v66
          && v96 == MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v73 + 40)) >> 8) & 0x3FF) )
        {
          v104 = MiReferencePageForModifiedWrite(v73);
          if ( v104 )
          {
            *v63 = v71;
            _InterlockedAnd64((volatile signed __int64 *)(v73 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v60 = v90;
            goto LABEL_132;
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v73 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v62 = v92;
        v60 = v90;
      }
    }
    v76 = v105;
    if ( v67 )
    {
      MiUnmapPageInHyperSpaceWorker(v67, v105);
      v67 = 0LL;
    }
    v77 = v93;
    if ( v60 >= v93 )
      goto LABEL_153;
    v78 = ((char *)v63 - v62 - 48) >> 3;
    if ( v78 )
    {
      if ( v63 > v85 )
      {
        do
        {
          v79 = 48 * *--v63 - 0x58000000000LL;
          v80 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v81 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v79 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v81 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v81);
            }
            while ( (*(_QWORD *)(v79 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v79 + 24), 0x3FuLL) );
          }
          MiWriteCompletePfn(v79, 1);
          _InterlockedAnd64((volatile signed __int64 *)(v79 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v80);
        }
        while ( v63 > v85 );
        v36 = v95;
        v77 = v93;
      }
      MiReleaseWriteInProgressCharges((__int64)v96, v78, 1);
    }
    v88 = v97;
    v60 = v77;
    v90 = v77;
    v67 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL, &v105, 0x80000000LL);
    v68 = (__int64 *)(v67 + (v77 & 0xFFF));
LABEL_150:
    v62 = v92;
    v57 = v94;
  }
  v76 = v105;
LABEL_153:
  if ( v67 )
    MiUnmapPageInHyperSpaceWorker(v67, v76);
  v3 = (unsigned __int64 *)v62;
  v59 = ((char *)v63 - v62 - 48) >> 3;
LABEL_156:
  v82 = v59 << 12;
  *v3 = 0LL;
  v3[4] = 0LL;
  v3[5] = (unsigned int)v82;
  *((_WORD *)v3 + 4) = 8 * (((unsigned __int64)(v82 + 4095) >> 12) + 6);
  *((_WORD *)v3 + 5) = 2;
  return v3;
}
