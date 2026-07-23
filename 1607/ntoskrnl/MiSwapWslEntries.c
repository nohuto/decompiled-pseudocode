/*
 * XREFs of MiSwapWslEntries @ 0x1400499F0
 * Callers:
 *     MiUpdateWsle @ 0x14003C310 (MiUpdateWsle.c)
 *     MiRemoveLockedPageFromWorkingSet @ 0x1400B899C (MiRemoveLockedPageFromWorkingSet.c)
 *     NtLockVirtualMemory @ 0x1400B8D58 (NtLockVirtualMemory.c)
 * Callees:
 *     MiSystemCacheVaControlArea @ 0x1400189B0 (MiSystemCacheVaControlArea.c)
 *     MiUpdateWsleHash @ 0x140048900 (MiUpdateWsleHash.c)
 *     MiLocateIndirectHash @ 0x14004B690 (MiLocateIndirectHash.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiRemoveWsleFromFreeList @ 0x1400AE8AC (MiRemoveWsleFromFreeList.c)
 *     MiExchangeWsle @ 0x1400AFDA8 (MiExchangeWsle.c)
 *     MiInsertWsle @ 0x1400DFF30 (MiInsertWsle.c)
 *     MiReleaseWsle @ 0x1400E02D0 (MiReleaseWsle.c)
 *     MiRemoveEntryWsle @ 0x1400E0420 (MiRemoveEntryWsle.c)
 *     MI_READ_PDE @ 0x1400E3E10 (MI_READ_PDE.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

char __fastcall MiSwapWslEntries(ULONG_PTR a1, unsigned __int64 a2, ULONG_PTR a3)
{
  char v3; // al
  ULONG_PTR v6; // r13
  ULONG_PTR *v7; // rbx
  __int64 v8; // r8
  ULONG_PTR v9; // rsi
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // r10
  ULONG_PTR v20; // rax
  _BYTE *v21; // r10
  __int64 v22; // r9
  unsigned __int64 v23; // r11
  unsigned __int64 v24; // rcx
  ULONG_PTR v25; // rcx
  ULONG_PTR v26; // rbp
  __int64 v27; // r9
  unsigned __int64 v28; // r10
  ULONG_PTR v29; // rax
  _BYTE *v30; // r10
  __int64 v31; // r9
  __int64 v32; // r11
  __int64 v33; // rcx
  ULONG_PTR v34; // rcx
  __int64 v35; // rbx
  unsigned __int64 v36; // rdi
  __int64 v37; // rax
  ULONG_PTR *v38; // rcx
  bool v39; // zf
  ULONG_PTR v40; // r11
  __int64 v41; // r9
  __int64 v42; // r10
  __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rcx
  __int64 v46; // rsi
  __int64 v47; // r8
  __int64 v48; // rbp
  ULONG_PTR v49; // rcx
  ULONG_PTR v50; // rdx
  __int64 v51; // r8
  ULONG_PTR v52; // r8
  ULONG_PTR *v53; // rcx
  ULONG_PTR v54; // r11
  __int64 v55; // rcx
  __int64 v56; // r9
  __int64 v57; // r10
  __int64 v58; // r8
  __int64 v59; // rdx
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rcx
  ULONG_PTR v62; // rcx
  __int64 v63; // rbp
  ULONG_PTR v64; // rdx
  __int64 v65; // rsi
  __int64 v66; // r8
  ULONG_PTR *v67; // rdx
  __int64 v68; // rsi
  unsigned __int64 v69; // r14
  volatile signed __int64 *v70; // r14
  __int64 v71; // r10
  signed __int64 v72; // rax
  ULONG_PTR *v73; // r9
  ULONG_PTR v74; // rbp
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // rdx
  unsigned __int64 v77; // rdx
  unsigned __int64 v78; // rdx
  __int64 IndirectHash; // rax
  ULONG_PTR v80; // rbx
  unsigned __int64 v81; // rbx
  unsigned __int64 v82; // rcx
  signed __int64 v83; // rtt
  ULONG_PTR *v84; // r14
  ULONG_PTR *v85; // rdx
  __int64 v86; // rsi
  unsigned __int64 v87; // rbx
  volatile signed __int64 *v88; // rbx
  ULONG_PTR v89; // rax
  __int64 v90; // r9
  ULONG_PTR *v91; // r9
  ULONG_PTR v92; // rbp
  unsigned __int64 v93; // rax
  unsigned __int64 v94; // r15
  unsigned __int64 v95; // r15
  __int64 v96; // rax
  ULONG_PTR v97; // rdi
  signed __int64 v98; // rax
  unsigned __int64 v99; // r12
  signed __int64 v100; // rcx
  unsigned __int64 v101; // rdi
  unsigned __int64 v102; // rcx
  ULONG_PTR v103; // rax
  unsigned __int64 v104; // rcx
  signed __int64 v105; // rtt
  ULONG_PTR *v106; // r8
  unsigned __int64 v107; // rcx
  __int64 v108; // r9
  __int64 v109; // r10
  __int64 v110; // rdx
  unsigned __int64 v111; // r10
  unsigned __int64 v112; // r10
  __int64 v113; // r11
  __int64 v114; // r10
  __int64 v115; // rbx
  __int64 v116; // rdx
  __int64 v117; // rdx
  __int64 v118; // rax
  ULONG_PTR v119; // rbx
  unsigned __int64 v120; // rdx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // rcx
  unsigned __int64 v124; // r9
  unsigned __int64 v125; // r9
  __int64 v126; // r10
  __int64 v127; // r9
  __int64 v128; // r11
  __int64 v129; // rcx
  __int64 v130; // rcx
  ULONG_PTR v132; // [rsp+30h] [rbp-68h]
  ULONG_PTR v133; // [rsp+38h] [rbp-60h] BYREF
  ULONG_PTR v134; // [rsp+40h] [rbp-58h]
  ULONG_PTR v136; // [rsp+A8h] [rbp+10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+B0h] [rbp+18h]
  __int64 v138; // [rsp+B8h] [rbp+20h] BYREF

  BugCheckParameter2 = a3;
  v3 = *(_BYTE *)(a3 + 184) & 7;
  v6 = a3;
  if ( v3 == 2 )
    v7 = &::BugCheckParameter2;
  else
    v7 = (ULONG_PTR *)(*(_QWORD *)(a3 + 16) + 416LL);
  v8 = 0xFFFFFFFFFFFFLL;
  v9 = v7[10] + a1 * *((unsigned int *)v7 + 8);
  v134 = v9;
  if ( v3 == 2 )
  {
    v10 = *(_QWORD *)v9;
    if ( (*(_QWORD *)v9 & 1) != 0 )
    {
      if ( (v10 & 0x800000000000LL) != 0 )
        v11 = v10 | 0xFFFF000000000000uLL;
      else
        v11 = v10 & 0xFFFFFFFFFFFFLL;
      v12 = MiSystemCacheVaControlArea(v11);
      v16 = MiPartitionIdToPointer(*(_WORD *)(v12 + 60) & 0x3FF, v13, v14, v15);
      v8 = 0xFFFFFFFFFFFFLL;
      v6 = v16 + 6592;
    }
  }
  v17 = *(_QWORD *)v9;
  v18 = 0LL;
  if ( (*(_QWORD *)v9 & 4) == 0 )
  {
    if ( (v17 & 0x800000000000LL) != 0 )
      v19 = v17 | 0xFFFF000000000000uLL;
    else
      v19 = v17 & 0xFFFFFFFFFFFFLL;
    v20 = MI_READ_PTE_LOCK_FREE(((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (*v21 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x61940uLL, (__int64)((_QWORD)v21 << 25) >> 16, v20, 0LL);
    v136 = v20;
    if ( (*(_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v136) - 0x57FFFFFFFD8LL) & 0x200000000000000LL) != 0 )
    {
      if ( (*(_QWORD *)v9 & 8) != 0 )
        *(_QWORD *)v9 &= ~8uLL;
      v24 = *(_QWORD *)v9;
      if ( (*(_QWORD *)v9 & v22) != 0 )
        v25 = v24 | 0xFFFF000000000000uLL;
      else
        v25 = v24 & 0xFFFFFFFFFFFFLL;
      MiUpdateWsleHash(v25, v23, v6, 0);
    }
  }
  v26 = v7[10] + a2 * *((unsigned int *)v7 + 8);
  v132 = v26;
  v27 = *(_QWORD *)v26;
  if ( (*(_QWORD *)v26 & 5) == 1 )
  {
    if ( (v27 & 0x800000000000LL) != 0 )
      v28 = v27 | 0xFFFF000000000000uLL;
    else
      v28 = v27 & 0xFFFFFFFFFFFFLL;
    v29 = MI_READ_PTE_LOCK_FREE(((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (*v30 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x61940uLL, (__int64)((_QWORD)v30 << 25) >> 16, v29, 0LL);
    v136 = v29;
    if ( (*(_QWORD *)(MI_GET_PFN_FROM_PTE(&v136) + 40) & 0x200000000000000LL) != 0 )
    {
      if ( (v31 & 8) != 0 )
        *(_QWORD *)v26 = v31 & 0xFFFFFFFFFFFFFFF7uLL;
      v33 = *(_QWORD *)v26;
      if ( (*(_QWORD *)v26 & 0x800000000000LL) != 0 )
        v34 = v32 | v33;
      else
        v34 = v33 & 0xFFFFFFFFFFFFLL;
      MiUpdateWsleHash(v34, a2, a3, 0);
    }
  }
  v35 = *(_QWORD *)v26;
  v36 = *(_QWORD *)v9;
  if ( (*(_QWORD *)v26 & 1) == 0 )
  {
    MiRemoveWsleFromFreeList(BugCheckParameter2, a2, v8);
    MiRemoveEntryWsle(v6, v9);
    MiExchangeWsle(v6, v36, a2, a1);
    MiInsertWsle(v6, v26, 0LL);
    LOBYTE(v37) = MiReleaseWsle(a1, v6, 0LL, 0LL);
    return v37;
  }
  if ( (*(_BYTE *)(v6 + 184) & 7) == 2 )
    v38 = &::BugCheckParameter2;
  else
    v38 = (ULONG_PTR *)(*(_QWORD *)(v6 + 16) + 416LL);
  v39 = *((_DWORD *)v38 + 8) == 16;
  v138 = 0xF000000000000LL;
  if ( v39 )
  {
    v40 = v38[10];
    if ( (__int64)(v9 - v40) >> 4 >= v38[1] )
    {
      v41 = *(unsigned int *)(v9 + 8) | (v36 >> 16) & 0xF00000000LL;
      v42 = *(unsigned int *)(v9 + 12) | (v36 >> 20) & 0xF00000000LL;
      v43 = 2 * ((unsigned int)(v36 >> 9) & 7);
      if ( (v36 & 0x800000000000LL) != 0 )
        v44 = v36 | 0xFFFF000000000000uLL;
      else
        v44 = v36 & 0xFFFFFFFFFFFFLL;
      if ( v44 < 0xFFFFF68000000000uLL
        || ((v36 & 0x800000000000LL) == 0 ? (v45 = v36 & 0xFFFFFFFFFFFFLL) : (v45 = v36 | 0xFFFF000000000000uLL),
            v45 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        v43 = (unsigned int)(v43 + 1);
      }
      v46 = *(_QWORD *)(v6 + 16);
      v47 = v43 + 10;
      v48 = (unsigned int)v43;
      v49 = v40 + 16 * v42;
      v50 = v40 + 16 * v41;
      v51 = 2 * v47;
      if ( v42 == 0xFFFFFFFFFLL )
      {
        *(_QWORD *)(v46 + 8 * v51) = v41;
      }
      else
      {
        *(_DWORD *)(v49 + 8) = v41;
        *(_QWORD *)v49 ^= v138 & (*(_QWORD *)v49 ^ (v41 << 16));
      }
      if ( v41 == 0xFFFFFFFFFLL )
      {
        *(_QWORD *)(v46 + 8 * v51 + 8) = v42;
      }
      else
      {
        *(_DWORD *)(v50 + 12) = v42;
        *(_QWORD *)v50 ^= (*(_QWORD *)v50 ^ (v42 << 20)) & 0xF0000000000000LL;
      }
      --*(_QWORD *)(v46 + 8 * v48 + 32);
      v26 = v132;
    }
  }
  v52 = BugCheckParameter2;
  if ( (*(_BYTE *)(BugCheckParameter2 + 184) & 7) == 2 )
    v53 = &::BugCheckParameter2;
  else
    v53 = (ULONG_PTR *)(*(_QWORD *)(BugCheckParameter2 + 16) + 416LL);
  if ( *((_DWORD *)v53 + 8) == 16 )
  {
    v54 = v53[10];
    if ( (__int64)(v26 - v54) >> 4 >= v53[1] )
    {
      v55 = *(_QWORD *)v26;
      v56 = *(unsigned int *)(v26 + 8) | (*(_QWORD *)v26 >> 16) & 0xF00000000LL;
      v57 = *(unsigned int *)(v26 + 12) | (*(_QWORD *)v26 >> 20) & 0xF00000000LL;
      v58 = 2 * ((unsigned int)(*(_QWORD *)v26 >> 9) & 7);
      v59 = *(_QWORD *)v26;
      if ( (*(_QWORD *)v26 & 0x800000000000LL) != 0 )
        v60 = v59 | 0xFFFF000000000000uLL;
      else
        v60 = v59 & 0xFFFFFFFFFFFFLL;
      if ( v60 < 0xFFFFF68000000000uLL
        || ((*(_QWORD *)v26 & 0x800000000000LL) == 0
          ? (v61 = v55 & 0xFFFFFFFFFFFFLL)
          : (v61 = v55 | 0xFFFF000000000000uLL),
            v61 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        v58 = (unsigned int)(v58 + 1);
      }
      v62 = v54 + 16 * v56;
      v63 = (unsigned int)v58;
      v64 = v54 + 16 * v57;
      v65 = *(_QWORD *)(BugCheckParameter2 + 16);
      v66 = 2 * (v58 + 10);
      if ( v57 == 0xFFFFFFFFFLL )
      {
        *(_QWORD *)(v65 + 8 * v66) = v56;
      }
      else
      {
        *(_DWORD *)(v64 + 8) = v56;
        *(_QWORD *)v64 ^= v138 & (*(_QWORD *)v64 ^ (v56 << 16));
      }
      if ( v56 == 0xFFFFFFFFFLL )
      {
        *(_QWORD *)(v65 + 8 * v66 + 8) = v57;
      }
      else
      {
        *(_DWORD *)(v62 + 12) = v57;
        *(_QWORD *)v62 ^= (*(_QWORD *)v62 ^ (v57 << 20)) & 0xF0000000000000LL;
      }
      --*(_QWORD *)(v65 + 8 * v63 + 32);
      v52 = BugCheckParameter2;
    }
  }
  if ( (*(_BYTE *)(v52 + 184) & 7) == 2 )
    v67 = &::BugCheckParameter2;
  else
    v67 = (ULONG_PTR *)(*(_QWORD *)(v52 + 16) + 416LL);
  v68 = v35 & 0x800000000000LL;
  if ( (v35 & 0x800000000000LL) != 0 )
    v69 = v35 | 0xFFFF000000000000uLL;
  else
    v69 = v35 & 0xFFFFFFFFFFFFLL;
  v70 = (volatile signed __int64 *)(((v69 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *(_QWORD *)(a1 * *((unsigned int *)v67 + 8) + v67[10]) = v35;
  if ( (v35 & 8) != 0 )
  {
    v138 = MI_READ_PDE(v70);
    *(_QWORD *)MI_GET_PFN_FROM_PTE(&v138) = a1;
  }
  else
  {
    if ( (*(_BYTE *)(v52 + 184) & 7) == 2 )
      v73 = &::BugCheckParameter2;
    else
      v73 = (ULONG_PTR *)(*(_QWORD *)(v52 + 16) + 416LL);
    if ( (v35 & 4) != 0 )
    {
      v74 = v73[7];
      if ( !v74 || (v74 & 1) != 0 )
      {
        if ( v68 )
          v81 = v35 | 0xFFFF000000000000uLL;
        else
          v81 = v35 & 0xFFFFFFFFFFFFLL;
        v82 = v81 & 0xFFFFFFFFFFFFLL;
        if ( (v81 & 0x800000000000LL) != 0 )
          v82 = v81 | 0xFFFF000000000000uLL;
        *(_QWORD *)(v73[8] + 8 * ((v82 - v73[6]) >> 12)) = a1;
      }
      else
      {
        if ( (v35 & 1) != 0 )
        {
          if ( v68 )
            v75 = v35 | 0xFFFF000000000000uLL;
          else
            v75 = v35 & 0xFFFFFFFFFFFFLL;
          if ( (v75 & 0x800000000000LL) != 0 )
          {
            if ( v68 )
              v76 = v35 | 0xFFFF000000000000uLL;
            else
              v76 = v35 & 0xFFFFFFFFFFFFLL;
            v77 = v76 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL;
          }
          else
          {
            if ( v68 )
              v78 = v35 | 0xFFFF000000000000uLL;
            else
              v78 = v35 & 0xFFFFFFFFFFFFLL;
            v77 = v78 & 0xFFFFFFFFF000LL | 1;
          }
        }
        else
        {
          v77 = 0LL;
        }
        IndirectHash = MiLocateIndirectHash(v73, v77, (unsigned __int8)(v77 >> 12), v73);
        if ( IndirectHash == 0xFFFFFFFFFLL )
        {
          if ( v68 )
            v80 = v35 | 0xFFFF000000000000uLL;
          else
            v80 = v35 & 0xFFFFFFFFFFFFLL;
          KeBugCheckEx(0x1Au, 0x41282uLL, BugCheckParameter2, v80, a2);
        }
        *(_QWORD *)(v74 + 16 * IndirectHash + 8) = a1;
      }
    }
  }
  v71 = 0x80000000LL;
  v72 = *v70;
  do
  {
    v83 = v72;
    v72 = _InterlockedCompareExchange64(v70, v72 ^ (v72 ^ ((a1 | 0x80000000) << 52)) & 0x7FF0000000000000LL, v72);
  }
  while ( v83 != v72 );
  v84 = &::BugCheckParameter2;
  if ( (*(_BYTE *)(v6 + 184) & 7) == 2 )
    v85 = &::BugCheckParameter2;
  else
    v85 = (ULONG_PTR *)(*(_QWORD *)(v6 + 16) + 416LL);
  v86 = v36 & 0x800000000000LL;
  if ( (v36 & 0x800000000000LL) != 0 )
    v87 = v36 | 0xFFFF000000000000uLL;
  else
    v87 = v36 & 0xFFFFFFFFFFFFLL;
  v88 = (volatile signed __int64 *)(((v87 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *(_QWORD *)(a2 * *((unsigned int *)v85 + 8) + v85[10]) = v36;
  if ( (v36 & 8) != 0 )
  {
    v89 = MI_READ_PTE_LOCK_FREE(v88);
    if ( (*(_BYTE *)v88 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x61940uLL, (__int64)((_QWORD)v88 << 25) >> 16, v89, 0LL);
    v133 = v89;
    *(_QWORD *)MI_GET_PFN_FROM_PTE(&v133) = a2;
  }
  else
  {
    if ( (*(_BYTE *)(v6 + 184) & 7) == 2 )
      v91 = &::BugCheckParameter2;
    else
      v91 = (ULONG_PTR *)(*(_QWORD *)(v6 + 16) + 416LL);
    if ( (v36 & 4) != 0 )
    {
      v92 = v91[7];
      if ( !v92 || (v92 & 1) != 0 )
      {
        if ( v86 )
          v101 = v36 | 0xFFFF000000000000uLL;
        else
          v101 = v36 & 0xFFFFFFFFFFFFLL;
        v102 = v101 & 0xFFFFFFFFFFFFLL;
        if ( (v101 & 0x800000000000LL) != 0 )
          v102 = v101 | 0xFFFF000000000000uLL;
        v103 = v91[8];
        v104 = v102 - v91[6];
        v90 = 0x7FF0000000000000LL;
        *(_QWORD *)(v103 + 8 * (v104 >> 12)) = a2;
        goto LABEL_152;
      }
      if ( (v36 & 1) != 0 )
      {
        if ( v86 )
          v93 = v36 | 0xFFFF000000000000uLL;
        else
          v93 = v36 & 0xFFFFFFFFFFFFLL;
        if ( (v93 & 0x800000000000LL) != 0 )
        {
          if ( v86 )
            v94 = v36 | 0xFFFF000000000000uLL;
          else
            v94 = v36 & 0xFFFFFFFFFFFFLL;
          v18 = v94 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL;
        }
        else
        {
          if ( v86 )
            v95 = v36 | 0xFFFF000000000000uLL;
          else
            v95 = v36 & 0xFFFFFFFFFFFFLL;
          v18 = v95 & 0xFFFFFFFFF000LL | 1;
        }
      }
      v96 = MiLocateIndirectHash(v91, v18, (unsigned __int8)(v18 >> 12), v91);
      if ( v96 == 0xFFFFFFFFFLL )
      {
        if ( v86 )
          v97 = v36 | 0xFFFF000000000000uLL;
        else
          v97 = v36 & 0xFFFFFFFFFFFFLL;
        KeBugCheckEx(0x1Au, 0x41282uLL, v6, v97, a1);
      }
      v71 = 0x80000000LL;
      *(_QWORD *)(v92 + 16 * v96 + 8) = a2;
    }
    v90 = 0x7FF0000000000000LL;
  }
LABEL_152:
  v98 = *v88;
  v99 = v71 | a2;
  do
  {
    v100 = v98;
    if ( (v71 & v99) != 0 )
    {
      v100 = v98 ^ v90 & (v98 ^ (v99 << 52));
    }
    else
    {
      if ( (v99 & 1) != 0 )
        v100 = v98 | 0x20;
      if ( (v99 & 2) != 0 )
        v100 |= 0x42uLL;
    }
    v105 = v98;
    v98 = _InterlockedCompareExchange64(v88, v100, v98);
  }
  while ( v105 != v98 );
  if ( (*(_BYTE *)(v6 + 184) & 7) == 2 )
    v106 = &::BugCheckParameter2;
  else
    v106 = (ULONG_PTR *)(*(_QWORD *)(v6 + 16) + 416LL);
  if ( *((_DWORD *)v106 + 8) == 16 )
  {
    v107 = (__int64)(v132 - v106[10]) >> 4;
    if ( v107 >= v106[1] )
    {
      v108 = *(_QWORD *)v132;
      v109 = *(_QWORD *)v132;
      v110 = 2 * ((unsigned int)(*(_QWORD *)v132 >> 9) & 7);
      if ( (*(_QWORD *)v132 & 0x800000000000LL) != 0 )
        v111 = v109 | 0xFFFF000000000000uLL;
      else
        v111 = v109 & 0xFFFFFFFFFFFFLL;
      if ( v111 < 0xFFFFF68000000000uLL
        || ((*(_QWORD *)v132 & 0x800000000000LL) == 0
          ? (v112 = v108 & 0xFFFFFFFFFFFFLL)
          : (v112 = v108 | 0xFFFF000000000000uLL),
            v112 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        v110 = (unsigned int)(v110 + 1);
      }
      v113 = *(_QWORD *)(v6 + 16);
      v114 = 2 * (v110 + 10);
      v115 = (unsigned int)v110;
      v116 = *(_QWORD *)(v113 + 16 * (v110 + 10) + 8);
      *(_DWORD *)(v132 + 8) = -1;
      *(_DWORD *)(v132 + 12) = v116;
      *(_QWORD *)v132 = v108 ^ (v108 ^ (v116 << 20)) & 0xF0000000000000LL | 0xF000000000000LL;
      if ( v116 == 0xFFFFFFFFFLL )
      {
        *(_QWORD *)(v113 + 8 * v114) = v107;
      }
      else
      {
        v117 = v106[10] + 16 * v116;
        v118 = (*(_QWORD *)v117 ^ (v107 << 16)) & 0xF000000000000LL;
        *(_DWORD *)(v117 + 8) = v107;
        *(_QWORD *)v117 ^= v118;
      }
      *(_QWORD *)(v113 + 8 * v114 + 8) = v107;
      ++*(_QWORD *)(v113 + 8 * v115 + 32);
    }
  }
  LOBYTE(v37) = *(_BYTE *)(BugCheckParameter2 + 184) & 7;
  if ( (_BYTE)v37 != 2 )
    v84 = (ULONG_PTR *)(*(_QWORD *)(BugCheckParameter2 + 16) + 416LL);
  if ( *((_DWORD *)v84 + 8) == 16 )
  {
    v119 = v134;
    v120 = (__int64)(v134 - v84[10]) >> 4;
    if ( v120 >= v84[1] )
    {
      v121 = *(_QWORD *)v134;
      v122 = *(_QWORD *)v134;
      v123 = 2 * ((unsigned int)(*(_QWORD *)v134 >> 9) & 7);
      if ( (*(_QWORD *)v134 & 0x800000000000LL) != 0 )
        v124 = v122 | 0xFFFF000000000000uLL;
      else
        v124 = v122 & 0xFFFFFFFFFFFFLL;
      if ( v124 < 0xFFFFF68000000000uLL
        || ((*(_QWORD *)v134 & 0x800000000000LL) == 0
          ? (v125 = v121 & 0xFFFFFFFFFFFFLL)
          : (v125 = v121 | 0xFFFF000000000000uLL),
            v125 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        v123 = (unsigned int)(v123 + 1);
      }
      v126 = *(_QWORD *)(BugCheckParameter2 + 16);
      v127 = 2 * (v123 + 10);
      v128 = (unsigned int)v123;
      v129 = *(_QWORD *)(v126 + 16 * (v123 + 10) + 8);
      *(_DWORD *)(v134 + 8) = -1;
      *(_DWORD *)(v119 + 12) = v129;
      v37 = v121 ^ (v121 ^ (v129 << 20)) & 0xF0000000000000LL | 0xF000000000000LL;
      *(_QWORD *)v119 = v37;
      if ( v129 == 0xFFFFFFFFFLL )
      {
        *(_QWORD *)(v126 + 8 * v127) = v120;
      }
      else
      {
        v130 = v84[10] + 16 * v129;
        v37 = (*(_QWORD *)v130 ^ (v120 << 16)) & 0xF000000000000LL;
        *(_DWORD *)(v130 + 8) = v120;
        *(_QWORD *)v130 ^= v37;
      }
      *(_QWORD *)(v126 + 8 * v127 + 8) = v120;
      ++*(_QWORD *)(v126 + 8 * v128 + 32);
    }
  }
  return v37;
}
