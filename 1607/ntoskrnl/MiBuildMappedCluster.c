/*
 * XREFs of MiBuildMappedCluster @ 0x14001F140
 * Callers:
 *     MiGatherMappedPages @ 0x14001FD70 (MiGatherMappedPages.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MiWriteCompletePfn @ 0x14004E120 (MiWriteCompletePfn.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiReleaseWriteInProgressCharges @ 0x14008E6FC (MiReleaseWriteInProgressCharges.c)
 *     MiReferencePageForModifiedWrite @ 0x1400FFD38 (MiReferencePageForModifiedWrite.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

char *__fastcall MiBuildMappedCluster(__int64 a1, char *a2, int a3)
{
  __int64 *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned __int64 v11; // r15
  __int64 PrototypePteDirect; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // r12
  __int64 v15; // rax
  int v16; // r11d
  __int64 v17; // r9
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r10
  unsigned __int64 v28; // r12
  __int64 v29; // r14
  __int64 v30; // rcx
  unsigned __int64 v31; // rbx
  __int64 v32; // rdx
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rdx
  ULONG_PTR v39; // rsi
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  char v43; // r14
  unsigned __int64 v44; // rcx
  __int64 *v45; // r15
  __int64 v46; // r14
  unsigned __int64 v47; // r14
  __int64 v48; // rsi
  unsigned __int64 v49; // rbx
  __int64 v50; // rax
  unsigned __int64 v51; // r14
  __int64 v52; // r14
  unsigned __int64 v53; // rsi
  char *PoolWithTag; // rax
  char *v55; // r14
  __int64 v56; // rdx
  __int64 v57; // r9
  __int64 v58; // r12
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 v62; // rax
  ULONG_PTR v63; // rsi
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  char v67; // bl
  __int64 v68; // r12
  __int64 v69; // rsi
  unsigned __int64 v70; // rbx
  char *v71; // rcx
  __int64 v72; // r14
  unsigned __int64 v74; // [rsp+28h] [rbp-49h]
  __int64 *v75; // [rsp+30h] [rbp-41h]
  char *v76; // [rsp+30h] [rbp-41h]
  __int64 v77; // [rsp+38h] [rbp-39h]
  char *v78; // [rsp+38h] [rbp-39h]
  unsigned __int64 v79; // [rsp+40h] [rbp-31h]
  unsigned __int64 v80; // [rsp+48h] [rbp-29h]
  __int64 v81; // [rsp+50h] [rbp-21h] BYREF
  __int64 *v82; // [rsp+58h] [rbp-19h]
  __int64 v83; // [rsp+60h] [rbp-11h]
  __int64 v84; // [rsp+68h] [rbp-9h]
  unsigned __int64 v85; // [rsp+70h] [rbp-1h]
  __int64 *v86; // [rsp+78h] [rbp+7h]
  __int64 v87; // [rsp+80h] [rbp+Fh]
  __int64 v90; // [rsp+E0h] [rbp+6Fh]
  unsigned int v92; // [rsp+E8h] [rbp+77h]
  int v93; // [rsp+E8h] [rbp+77h]
  char v94; // [rsp+F0h] [rbp+7Fh] BYREF

  v4 = (__int64 *)a2;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = (unsigned __int128)((a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v86 = v4 + 6;
  v75 = v4 + 6;
  v7 = v5 | 0x8000000000000000uLL;
  v87 = (a1 + 0x58000000000LL) / 48;
  v79 = v7;
  v80 = v7;
  v8 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF, v6, a1, a1 + 0x58000000000LL);
  v10 = *(_QWORD *)(v9 + 16);
  v11 = v7 & 0xFFFFFFFFFFFFF000uLL;
  v84 = v8;
  PrototypePteDirect = MiGetPrototypePteDirect(v10);
  v83 = PrototypePteDirect;
  if ( (v7 & 0xFFFFFFFFFFFFF000uLL) < *(_QWORD *)(PrototypePteDirect + 8) )
    v11 = *(_QWORD *)(PrototypePteDirect + 8);
  v14 = v11;
  if ( v11 < v7 - 120 )
    v14 = v7 - 120;
  v15 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(v13 + 40) & 0xFFFFFFFFFLL, &v94, 0x80000000LL);
  v16 = 0;
  v77 = v15;
  v85 = v7;
  v17 = v15;
  v18 = v15 + (v7 & 0xFFF);
  v19 = v7;
  if ( !a3 )
    v11 = v7;
  if ( v7 > v11 )
  {
    do
    {
      v18 -= 8LL;
      v20 = MI_READ_PTE_LOCK_FREE(v18);
      v81 = v20;
      if ( (v20 & 1) != 0 )
        break;
      if ( (v20 & 0x400) != 0 )
        break;
      if ( (v20 & 0x800) == 0 )
        break;
      v21 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v81);
      if ( !(unsigned int)MiIsPfnInline(v21) )
        break;
      if ( (*(_BYTE *)(48 * v22 - 0x58000000000LL + 34) & 0x10) == 0 )
        break;
      if ( *(_WORD *)(48 * v22 - 0x58000000000LL + 32) != (_WORD)v16 )
        break;
      v25 = *(_QWORD *)(48 * v22 - 0x58000000000LL + 40) >> 40;
      LOWORD(v25) = v24 & v25;
      v26 = MiPartitionIdToPointer(v25, v22, v23, v24);
      if ( v27 != v26 )
        break;
      v7 -= 8LL;
      if ( v7 >= v14 )
        v19 = v7;
    }
    while ( v7 > v11 );
    v4 = (__int64 *)a2;
    v17 = v77;
    v79 = v7;
    v85 = v19;
  }
  v28 = (v19 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  v29 = ((unsigned __int16)v18 ^ (unsigned __int16)v19) & 0xFFF ^ v18;
  v30 = *(unsigned int *)(v83 + 44);
  if ( v28 > *(_QWORD *)(v83 + 8) + 8 * v30 )
    v28 = *(_QWORD *)(v83 + 8) + 8 * v30;
  v82 = (__int64 *)v28;
  v31 = v28;
  if ( v28 > v19 + 128 )
    v31 = v19 + 128;
  v74 = v31;
  if ( a3 == v16 )
  {
    v31 = v19 + 8;
    v74 = v19 + 8;
    v28 = v19 + 8;
    v82 = (__int64 *)(v19 + 8);
  }
  v83 = v19;
  v32 = 1LL;
  v92 = 1;
  v33 = v19;
  if ( v19 < v28 )
  {
    v34 = v80;
    do
    {
      if ( v33 == v34 )
      {
        *v75++ = v87;
      }
      else
      {
        if ( (_DWORD)v32 == 3 && (__int64)(((char *)v75 - (char *)v4 - 48) & 0xFFFFFFFFFFFFFFF8uLL) >= 128 )
          goto LABEL_50;
        v35 = MI_READ_PTE_LOCK_FREE(v29);
        v81 = v35;
        v36 = v35;
        if ( (v35 & 1) != 0 || (v35 & 0x400) != 0 || (v35 & 0x800) == 0 )
          goto LABEL_49;
        v37 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v81);
        if ( !(unsigned int)MiIsPfnInline(v37) )
        {
          v31 = v74;
          v29 -= 8LL;
          v34 = v80;
          v33 -= 8LL;
LABEL_64:
          v32 = v92;
          goto LABEL_65;
        }
        v39 = 48 * v38 - 0x58000000000LL;
        MiLockPageAtDpcInline(v39);
        if ( v36 != MI_READ_PTE_LOCK_FREE(v29) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v31 = v74;
          v29 -= 8LL;
          v17 = v77;
          v33 -= 8LL;
          v34 = v80;
          goto LABEL_64;
        }
        if ( (*(_BYTE *)(v39 + 34) & 0x10) == 0
          || *(_WORD *)(v39 + 32)
          || (v42 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v39 + 40)) >> 8) & 0x3FF, v32, v40, v41),
              v84 != v42) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v4 = (__int64 *)a2;
          v17 = v77;
LABEL_49:
          v31 = v74;
          goto LABEL_50;
        }
        v31 = v74;
        if ( v33 >= v74 )
        {
          v32 = v92;
        }
        else
        {
          v92 = MiReferencePageForModifiedWrite(v39);
          v32 = v92;
          if ( !v92 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v4 = (__int64 *)a2;
            v17 = v77;
LABEL_50:
            v43 = v94;
            if ( v17 )
            {
              LOBYTE(v32) = v94;
              MiUnmapPageInHyperSpaceWorker(v17, v32);
              v17 = 0LL;
            }
            v44 = v80;
            if ( v33 >= v80 )
              goto LABEL_67;
            v45 = v75;
            v46 = ((char *)v75 - (char *)v4 - 48) >> 3;
            v83 = v46;
            if ( v46 )
            {
              if ( v75 > v4 + 6 )
              {
                v47 = (unsigned __int64)v86;
                do
                {
                  v48 = 48 * *--v45 - 0x58000000000LL;
                  v49 = (unsigned __int8)MiLockPageInline(v48);
                  MiWriteCompletePfn(v48, 1LL);
                  _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  __writecr8(v49);
                }
                while ( (unsigned __int64)v45 > v47 );
                v28 = (unsigned __int64)v82;
                v19 = v85;
                v46 = v83;
                v75 = v45;
              }
              MiReleaseWriteInProgressCharges(v84, v46, 1LL, v17);
              v44 = v80;
              v31 = v74;
            }
            if ( v31 == v19 + 8 )
            {
              v28 = v44 + 8;
              v82 = (__int64 *)(v44 + 8);
              v31 = v44 + 8;
            }
            else if ( v28 > v44 + 128 )
            {
              v31 = v44 + 128;
            }
            v19 = v44;
            v85 = v44;
            v74 = v31;
            v50 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL, &v94, 0x80000000LL);
            v34 = v80;
            v17 = v50;
            v77 = v50;
            v33 = v80 - 8;
            v29 = v50 + (v80 & 0xFFF) - 8;
            goto LABEL_64;
          }
          *v75++ = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v81);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v17 = v77;
      }
      v34 = v80;
LABEL_65:
      v4 = (__int64 *)a2;
      v33 += 8LL;
      v29 += 8LL;
      v83 = v33;
    }
    while ( v33 < v28 );
  }
  v43 = v94;
LABEL_67:
  if ( v17 )
  {
    LOBYTE(v32) = v43;
    MiUnmapPageInHyperSpaceWorker(v17, v32);
  }
  v51 = v33;
  if ( v33 > v31 )
    v51 = v31;
  v52 = (__int64)(v51 - v19) >> 3;
  if ( v92 == 3
    || (v53 = v79, v33 <= v31) && v79 >= v19
    || (PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * ((__int64)(v33 - v79) >> 3) + 48, 0x65576D4Du),
        (v78 = PoolWithTag) == 0LL) )
  {
    v71 = a2;
    goto LABEL_110;
  }
  v82 = v86;
  v76 = PoolWithTag + 48;
  v55 = PoolWithTag + 48;
  v93 = 1;
  v90 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL, &v94, 0x80000000LL);
  v57 = v90;
  v58 = v90 + (v79 & 0xFFF);
  while ( v53 < v33 )
  {
    if ( v53 >= v19 && v53 < v31 )
    {
      v59 = *v82++;
      *(_QWORD *)v55 = v59;
LABEL_92:
      v53 += 8LL;
      v58 += 8LL;
      v79 = v53;
      v55 += 8;
      goto LABEL_103;
    }
    if ( v93 != 3 || (__int64)((v55 - v78 - 48) & 0xFFFFFFFFFFFFFFF8uLL) < 128 )
    {
      v60 = MI_READ_PTE_LOCK_FREE(v58);
      v81 = v60;
      v61 = v60;
      if ( (v60 & 1) == 0 && (v60 & 0x400) == 0 && (v60 & 0x800) != 0 )
      {
        v62 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v81);
        if ( !(unsigned int)MiIsPfnInline(v62) )
          goto LABEL_103;
        v63 = 48 * v56 - 0x58000000000LL;
        MiLockPageAtDpcInline(v63);
        if ( v61 != MI_READ_PTE_LOCK_FREE(v58) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v53 = v79;
          v57 = v90;
          goto LABEL_103;
        }
        if ( (*(_BYTE *)(v63 + 34) & 0x10) != 0 && !*(_WORD *)(v63 + 32) )
        {
          v66 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v63 + 40)) >> 8) & 0x3FF, v56, v64, v65);
          if ( v84 == v66 )
          {
            v93 = MiReferencePageForModifiedWrite(v63);
            if ( v93 )
            {
              *(_QWORD *)v55 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v81);
              _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v53 = v79;
              v57 = v90;
              goto LABEL_92;
            }
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v57 = v90;
        v53 = v79;
      }
    }
    v67 = v94;
    if ( v57 )
    {
      LOBYTE(v56) = v94;
      MiUnmapPageInHyperSpaceWorker(v57, v56);
      v57 = 0LL;
    }
    if ( v53 >= v19 )
      goto LABEL_106;
    v68 = (v55 - v78 - 48) >> 3;
    if ( v68 )
    {
      if ( v55 > v76 )
      {
        do
        {
          v55 -= 8;
          v69 = 48LL * *(_QWORD *)v55 - 0x58000000000LL;
          v70 = (unsigned __int8)MiLockPageInline(v69);
          MiWriteCompletePfn(v69, 1LL);
          _InterlockedAnd64((volatile signed __int64 *)(v69 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v70);
        }
        while ( v55 > v76 );
        v33 = v83;
        v19 = v85;
      }
      MiReleaseWriteInProgressCharges(v84, v68, 1LL, v57);
    }
    v82 = v86;
    v53 = v19;
    v79 = v19;
    v90 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL, &v94, 0x80000000LL);
    v57 = v90;
    v58 = v90 + (v19 & 0xFFF);
LABEL_103:
    v31 = v74;
  }
  v67 = v94;
LABEL_106:
  if ( v57 )
  {
    LOBYTE(v56) = v67;
    MiUnmapPageInHyperSpaceWorker(v57, v56);
  }
  v71 = v78;
  v52 = (v55 - v78 - 48) >> 3;
LABEL_110:
  v72 = v52 << 12;
  *(_QWORD *)v71 = 0LL;
  *((_QWORD *)v71 + 4) = 0LL;
  *((_QWORD *)v71 + 5) = (unsigned int)v72;
  *((_WORD *)v71 + 4) = 8 * (((unsigned __int64)(v72 + 4095) >> 12) + 6);
  *((_WORD *)v71 + 5) = 2;
  return v71;
}
