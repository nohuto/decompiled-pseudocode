/*
 * XREFs of MiSwapWslEntries @ 0x140057020
 * Callers:
 *     MiRemoveLockedPageFromWorkingSet @ 0x140021840 (MiRemoveLockedPageFromWorkingSet.c)
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     MiUpdateWsle @ 0x140056490 (MiUpdateWsle.c)
 *     NtLockVirtualMemory @ 0x1400BB80C (NtLockVirtualMemory.c)
 * Callees:
 *     MiUpdateWsleHash @ 0x14005A900 (MiUpdateWsleHash.c)
 *     MI_READ_PDE @ 0x14006DE04 (MI_READ_PDE.c)
 *     MiInsertWsle @ 0x1400B7450 (MiInsertWsle.c)
 *     MiRemoveEntryWsle @ 0x1400B7840 (MiRemoveEntryWsle.c)
 *     MiReleaseWsle @ 0x1400BAAFC (MiReleaseWsle.c)
 *     MiLocateIndirectHash @ 0x1400C8250 (MiLocateIndirectHash.c)
 *     MiRemoveWsleFromFreeList @ 0x140105920 (MiRemoveWsleFromFreeList.c)
 *     MiExchangeWsle @ 0x140106588 (MiExchangeWsle.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

signed __int64 __fastcall MiSwapWslEntries(ULONG_PTR a1, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 v3; // r13
  ULONG_PTR v4; // r12
  __int64 v7; // r8
  __int64 v8; // r9
  ULONG_PTR v9; // r15
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  __int64 v12; // rbx
  ULONG_PTR v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  ULONG_PTR v16; // rsi
  __int64 v17; // rdi
  unsigned __int64 v18; // rbx
  __int64 v19; // rbx
  ULONG_PTR v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  __int64 v23; // rbx
  unsigned __int64 v24; // rdi
  signed __int64 result; // rax
  bool v26; // zf
  __int64 v27; // r11
  __int64 v28; // r9
  __int64 v29; // r10
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r11
  __int64 v38; // rcx
  __int64 v39; // r9
  __int64 v40; // r10
  __int64 v41; // rdx
  __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rcx
  __int64 v45; // rsi
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rbp
  unsigned __int64 v50; // r15
  unsigned __int64 v51; // rsi
  volatile signed __int64 *v52; // r15
  _QWORD *v53; // r9
  __int64 v54; // r12
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rdx
  __int64 IndirectHash; // rax
  ULONG_PTR v58; // rbx
  unsigned __int64 v59; // rbx
  unsigned __int64 v60; // rcx
  signed __int64 v61; // rax
  signed __int64 v62; // rtt
  __int64 v63; // rbp
  unsigned __int64 v64; // rbx
  volatile signed __int64 *v65; // rbx
  ULONG_PTR v66; // rax
  __int64 v67; // r14
  signed __int64 v68; // rcx
  _QWORD *v69; // r9
  __int64 v70; // r15
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rsi
  unsigned __int64 v73; // rsi
  __int64 v74; // rax
  ULONG_PTR v75; // rdi
  unsigned __int64 v76; // rdi
  unsigned __int64 v77; // rcx
  signed __int64 v78; // rtt
  unsigned __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // rdx
  __int64 v82; // rax
  unsigned __int64 v83; // rdx
  unsigned __int64 v84; // rdx
  __int64 v85; // r10
  __int64 v86; // r9
  __int64 v87; // rdx
  __int64 v88; // rdx
  ULONG_PTR v89; // r11
  unsigned __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // rcx
  __int64 v93; // rax
  unsigned __int64 v94; // rcx
  unsigned __int64 v95; // rcx
  __int64 v96; // r10
  __int64 v97; // r9
  __int64 v98; // rcx
  __int64 v99; // rcx
  ULONG_PTR v100; // [rsp+38h] [rbp-50h]
  __int64 v101; // [rsp+40h] [rbp-48h] BYREF
  ULONG_PTR v102; // [rsp+48h] [rbp-40h]
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp+18h] BYREF
  ULONG_PTR v105; // [rsp+A8h] [rbp+20h] BYREF

  BugCheckParameter2 = a3;
  v3 = *(_QWORD *)(a3 + 184);
  v4 = a3;
  v7 = 0x7FFFFFFFF8LL;
  v8 = 0x98000000000LL;
  v9 = *(_QWORD *)(v3 + 496) + a1 * *(unsigned int *)(v3 + 64);
  v102 = v9;
  v10 = *(_QWORD *)v9;
  if ( (*(_QWORD *)v9 & 4) == 0 )
  {
    if ( (v10 & 0x800000000000LL) != 0 )
      v11 = v10 | 0xFFFF000000000000uLL;
    else
      v11 = v10 & 0xFFFFFFFFFFFFLL;
    v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v13 = MI_READ_PTE_LOCK_FREE(v12);
    if ( (*(_BYTE *)v12 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x61940uLL, v12 << 25 >> 16, v13, 0LL);
    v105 = v13;
    if ( (*(_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v105) - 0x57FFFFFFFD8LL) & 0x200000000000000LL) != 0 )
    {
      if ( (v10 & 8) != 0 )
        *(_QWORD *)v9 = v10 & 0xFFFFFFFFFFFFFFF7uLL;
      v14 = *(_QWORD *)v9;
      if ( (*(_QWORD *)v9 & 0x800000000000LL) != 0 )
        v15 = v14 | 0xFFFF000000000000uLL;
      else
        v15 = v14 & 0xFFFFFFFFFFFFLL;
      MiUpdateWsleHash(v15, a1, v4, 0LL);
    }
    v8 = 0x98000000000LL;
    v7 = 0x7FFFFFFFF8LL;
  }
  v16 = *(_QWORD *)(v3 + 496) + a2 * *(unsigned int *)(v3 + 64);
  v100 = v16;
  v17 = *(_QWORD *)v16;
  if ( (*(_QWORD *)v16 & 5) == 1 )
  {
    if ( (v17 & 0x800000000000LL) != 0 )
      v18 = v17 | 0xFFFF000000000000uLL;
    else
      v18 = v17 & 0xFFFFFFFFFFFFLL;
    v19 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v20 = MI_READ_PTE_LOCK_FREE(v19);
    if ( (*(_BYTE *)v19 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x61940uLL, v19 << 25 >> 16, v20, 0LL);
    v105 = v20;
    if ( (*(_QWORD *)(MI_GET_PFN_FROM_PTE(&v105) + 40) & 0x200000000000000LL) != 0 )
    {
      if ( (v17 & 8) != 0 )
        *(_QWORD *)v16 = v17 & 0xFFFFFFFFFFFFFFF7uLL;
      v21 = *(_QWORD *)v16;
      if ( (*(_QWORD *)v16 & 0x800000000000LL) != 0 )
        v22 = v21 | 0xFFFF000000000000uLL;
      else
        v22 = v21 & 0xFFFFFFFFFFFFLL;
      MiUpdateWsleHash(v22, a2, v4, 0LL);
    }
  }
  v23 = *(_QWORD *)v16;
  v24 = *(_QWORD *)v9;
  if ( (*(_QWORD *)v16 & 1) != 0 )
  {
    v26 = *(_DWORD *)(v3 + 64) == 16;
    v101 = 0xF000000000000LL;
    if ( v26 )
    {
      v27 = *(_QWORD *)(v3 + 496);
      if ( (unsigned __int64)((__int64)(v9 - v27) >> 4) >= *(_QWORD *)(v3 + 8) )
      {
        v28 = *(unsigned int *)(v9 + 8) | (v24 >> 16) & 0xF00000000LL;
        v29 = *(unsigned int *)(v9 + 12) | (v24 >> 20) & 0xF00000000LL;
        v30 = 2 * ((unsigned int)(v24 >> 9) & 7);
        if ( (v24 & 0x800000000000LL) != 0 )
          v31 = v24 | 0xFFFF000000000000uLL;
        else
          v31 = v24 & 0xFFFFFFFFFFFFLL;
        if ( v31 < 0xFFFFF68000000000uLL
          || ((v24 & 0x800000000000LL) == 0 ? (v32 = v24 & 0xFFFFFFFFFFFFLL) : (v32 = v24 | 0xFFFF000000000000uLL),
              v32 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          v30 = (unsigned int)(v30 + 1);
        }
        v33 = (unsigned int)v30;
        v34 = 2 * (v30 + 15);
        v35 = v27 + 16 * v28;
        v36 = v27 + 16 * v29;
        if ( v29 == 0xFFFFFFFFFLL )
        {
          *(_QWORD *)(v3 + 8 * v34) = v28;
        }
        else
        {
          *(_DWORD *)(v36 + 8) = *(_DWORD *)(v9 + 8);
          *(_QWORD *)v36 ^= v101 & (*(_QWORD *)v36 ^ (v28 << 16));
        }
        if ( v28 == 0xFFFFFFFFFLL )
        {
          *(_QWORD *)(v3 + 8 * v34 + 8) = v29;
        }
        else
        {
          *(_DWORD *)(v35 + 12) = v29;
          *(_QWORD *)v35 ^= (*(_QWORD *)v35 ^ (v29 << 20)) & 0xF0000000000000LL;
        }
        --*(_QWORD *)(v3 + 8 * v33 + 112);
        v16 = v100;
      }
    }
    if ( *(_DWORD *)(v3 + 64) == 16 )
    {
      v37 = *(_QWORD *)(v3 + 496);
      if ( (unsigned __int64)((__int64)(v16 - v37) >> 4) >= *(_QWORD *)(v3 + 8) )
      {
        v38 = *(_QWORD *)v16;
        v39 = *(unsigned int *)(v16 + 8) | (*(_QWORD *)v16 >> 16) & 0xF00000000LL;
        v40 = *(unsigned int *)(v16 + 12) | (*(_QWORD *)v16 >> 20) & 0xF00000000LL;
        v41 = 2 * ((unsigned int)(*(_QWORD *)v16 >> 9) & 7);
        v42 = *(_QWORD *)v16;
        if ( (*(_QWORD *)v16 & 0x800000000000LL) != 0 )
          v43 = v42 | 0xFFFF000000000000uLL;
        else
          v43 = v42 & 0xFFFFFFFFFFFFLL;
        if ( v43 < 0xFFFFF68000000000uLL
          || ((*(_QWORD *)v16 & 0x800000000000LL) == 0
            ? (v44 = v38 & 0xFFFFFFFFFFFFLL)
            : (v44 = v38 | 0xFFFF000000000000uLL),
              v44 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          v41 = (unsigned int)(v41 + 1);
        }
        v45 = (unsigned int)v41;
        v46 = 2 * (v41 + 15);
        v47 = v37 + 16 * v40;
        v48 = v37 + 16 * v39;
        if ( v40 == 0xFFFFFFFFFLL )
        {
          *(_QWORD *)(v3 + 8 * v46) = v39;
        }
        else
        {
          *(_DWORD *)(v47 + 8) = v39;
          *(_QWORD *)v47 ^= (*(_QWORD *)v47 ^ (v39 << 16)) & 0xF000000000000LL;
        }
        if ( v39 == 0xFFFFFFFFFLL )
        {
          *(_QWORD *)(v3 + 8 * v46 + 8) = v40;
        }
        else
        {
          *(_DWORD *)(v48 + 12) = v40;
          *(_QWORD *)v48 ^= (*(_QWORD *)v48 ^ (v40 << 20)) & 0xF0000000000000LL;
        }
        --*(_QWORD *)(v3 + 8 * v45 + 112);
      }
    }
    v49 = v23 & 0x800000000000LL;
    if ( (v23 & 0x800000000000LL) != 0 )
      v50 = v23 | 0xFFFF000000000000uLL;
    else
      v50 = v23 & 0xFFFFFFFFFFFFLL;
    v51 = 0LL;
    v52 = (volatile signed __int64 *)(((v50 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *(_QWORD *)(a1 * *(unsigned int *)(*(_QWORD *)(v4 + 184) + 64LL) + *(_QWORD *)(*(_QWORD *)(v4 + 184) + 496LL)) = v23;
    if ( (v23 & 8) != 0 )
    {
      BugCheckParameter2 = MI_READ_PDE(v52);
      *(_QWORD *)MI_GET_PFN_FROM_PTE(&BugCheckParameter2) = a1;
    }
    else
    {
      v53 = *(_QWORD **)(v4 + 184);
      if ( (v23 & 4) != 0 )
      {
        v54 = v53[11];
        if ( !v54 || (v54 & 1) != 0 )
        {
          if ( v49 )
            v59 = v23 | 0xFFFF000000000000uLL;
          else
            v59 = v23 & 0xFFFFFFFFFFFFLL;
          v60 = v59 & 0xFFFFFFFFFFFFLL;
          if ( (v59 & 0x800000000000LL) != 0 )
            v60 = v59 | 0xFFFF000000000000uLL;
          *(_QWORD *)(v53[12] + 8 * ((v60 - v53[10]) >> 12)) = a1;
        }
        else
        {
          if ( (v23 & 1) != 0 )
          {
            if ( v49 )
              v55 = v23 | 0xFFFF000000000000uLL;
            else
              v55 = v23 & 0xFFFFFFFFFFFFLL;
            if ( (v55 & 0x800000000000LL) != 0 )
              v56 = v23 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL;
            else
              v56 = v23 & 0xFFFFFFFFF000LL | 1;
          }
          else
          {
            v56 = 0LL;
          }
          IndirectHash = MiLocateIndirectHash(v53, v56, (unsigned __int8)(v56 >> 12));
          if ( IndirectHash == 0xFFFFFFFFFLL )
          {
            if ( v49 )
              v58 = v23 | 0xFFFF000000000000uLL;
            else
              v58 = v23 & 0xFFFFFFFFFFFFLL;
            KeBugCheckEx(0x1Au, 0x41282uLL, BugCheckParameter2, v58, a2);
          }
          *(_QWORD *)(v54 + 16 * IndirectHash + 8) = a1;
        }
        v4 = BugCheckParameter2;
      }
    }
    v61 = *v52;
    do
    {
      v62 = v61;
      v61 = _InterlockedCompareExchange64(v52, v61 ^ (v61 ^ ((a1 | 0x80000000) << 52)) & 0x7FF0000000000000LL, v61);
    }
    while ( v62 != v61 );
    v63 = v24 & 0x800000000000LL;
    if ( (v24 & 0x800000000000LL) != 0 )
      v64 = v24 | 0xFFFF000000000000uLL;
    else
      v64 = v24 & 0xFFFFFFFFFFFFLL;
    v65 = (volatile signed __int64 *)(((v64 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *(_QWORD *)(a2 * *(unsigned int *)(*(_QWORD *)(v4 + 184) + 64LL) + *(_QWORD *)(*(_QWORD *)(v4 + 184) + 496LL)) = v24;
    if ( (v24 & 8) != 0 )
    {
      v66 = MI_READ_PTE_LOCK_FREE(v65);
      if ( (*(_BYTE *)v65 & 1) == 0 )
        KeBugCheckEx(0x1Au, 0x61940uLL, (__int64)((_QWORD)v65 << 25) >> 16, v66, 0LL);
      v101 = v66;
      *(_QWORD *)MI_GET_PFN_FROM_PTE(&v101) = a2;
    }
    else
    {
      v69 = *(_QWORD **)(v4 + 184);
      if ( (v24 & 4) != 0 )
      {
        v70 = v69[11];
        if ( !v70 || (v70 & 1) != 0 )
        {
          if ( v63 )
            v76 = v24 | 0xFFFF000000000000uLL;
          else
            v76 = v24 & 0xFFFFFFFFFFFFLL;
          v77 = v76 & 0xFFFFFFFFFFFFLL;
          if ( (v76 & 0x800000000000LL) != 0 )
            v77 = v76 | 0xFFFF000000000000uLL;
          *(_QWORD *)(v69[12] + 8 * ((v77 - v69[10]) >> 12)) = a2;
        }
        else
        {
          if ( (v24 & 1) != 0 )
          {
            if ( v63 )
              v71 = v24 | 0xFFFF000000000000uLL;
            else
              v71 = v24 & 0xFFFFFFFFFFFFLL;
            if ( (v71 & 0x800000000000LL) != 0 )
            {
              if ( v63 )
                v72 = v24 | 0xFFFF000000000000uLL;
              else
                v72 = v24 & 0xFFFFFFFFFFFFLL;
              v51 = v72 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL;
            }
            else
            {
              if ( v63 )
                v73 = v24 | 0xFFFF000000000000uLL;
              else
                v73 = v24 & 0xFFFFFFFFFFFFLL;
              v51 = v73 & 0xFFFFFFFFF000LL | 1;
            }
          }
          v74 = MiLocateIndirectHash(*(_QWORD *)(v4 + 184), v51, (unsigned __int8)(v51 >> 12));
          if ( v74 == 0xFFFFFFFFFLL )
          {
            if ( v63 )
              v75 = v24 | 0xFFFF000000000000uLL;
            else
              v75 = v24 & 0xFFFFFFFFFFFFLL;
            KeBugCheckEx(0x1Au, 0x41282uLL, v4, v75, a1);
          }
          *(_QWORD *)(v70 + 16 * v74 + 8) = a2;
        }
      }
    }
    result = *v65;
    v67 = a2 | 0x80000000;
    do
    {
      v68 = result;
      if ( (v67 & 0x80000000) != 0 )
      {
        v68 = result ^ (result ^ (v67 << 52)) & 0x7FF0000000000000LL;
      }
      else
      {
        if ( (v67 & 1) != 0 )
          v68 = result | 0x20;
        if ( (v67 & 2) != 0 )
          v68 |= 0x42uLL;
        if ( (v67 & 4) != 0 )
          v68 &= ~0x20uLL;
      }
      v78 = result;
      result = _InterlockedCompareExchange64(v65, v68, result);
    }
    while ( v78 != result );
    if ( *(_DWORD *)(v3 + 64) == 16 )
    {
      v79 = (__int64)(v100 - *(_QWORD *)(v3 + 496)) >> 4;
      if ( v79 >= *(_QWORD *)(v3 + 8) )
      {
        v80 = *(_QWORD *)v100;
        v81 = *(_QWORD *)v100;
        v82 = 2 * ((unsigned int)(*(_QWORD *)v100 >> 9) & 7);
        if ( (*(_QWORD *)v100 & 0x800000000000LL) != 0 )
          v83 = v81 | 0xFFFF000000000000uLL;
        else
          v83 = v81 & 0xFFFFFFFFFFFFLL;
        if ( v83 < 0xFFFFF68000000000uLL
          || ((*(_QWORD *)v100 & 0x800000000000LL) == 0
            ? (v84 = v80 & 0xFFFFFFFFFFFFLL)
            : (v84 = v80 | 0xFFFF000000000000uLL),
              v84 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          v82 = (unsigned int)(v82 + 1);
        }
        v85 = (unsigned int)v82;
        v86 = 2 * (v82 + 15);
        v87 = *(_QWORD *)(v3 + 16 * (v82 + 15) + 8);
        *(_DWORD *)(v100 + 8) = -1;
        *(_DWORD *)(v100 + 12) = v87;
        result = v80 ^ (v80 ^ (v87 << 20)) & 0xF0000000000000LL | 0xF000000000000LL;
        *(_QWORD *)v100 = result;
        if ( v87 == 0xFFFFFFFFFLL )
        {
          *(_QWORD *)(v3 + 8 * v86) = v79;
        }
        else
        {
          v88 = *(_QWORD *)(v3 + 496) + 16 * v87;
          result = (*(_QWORD *)v88 ^ (v79 << 16)) & 0xF000000000000LL;
          *(_DWORD *)(v88 + 8) = v79;
          *(_QWORD *)v88 ^= result;
        }
        *(_QWORD *)(v3 + 8 * v86 + 8) = v79;
        ++*(_QWORD *)(v3 + 8 * v85 + 112);
      }
    }
    if ( *(_DWORD *)(v3 + 64) == 16 )
    {
      v89 = v102;
      v90 = (__int64)(v102 - *(_QWORD *)(v3 + 496)) >> 4;
      if ( v90 >= *(_QWORD *)(v3 + 8) )
      {
        v91 = *(_QWORD *)v102;
        v92 = *(_QWORD *)v102;
        v93 = 2 * ((unsigned int)(*(_QWORD *)v102 >> 9) & 7);
        if ( (*(_QWORD *)v102 & 0x800000000000LL) != 0 )
          v94 = v92 | 0xFFFF000000000000uLL;
        else
          v94 = v92 & 0xFFFFFFFFFFFFLL;
        if ( v94 < 0xFFFFF68000000000uLL
          || ((*(_QWORD *)v102 & 0x800000000000LL) == 0
            ? (v95 = v91 & 0xFFFFFFFFFFFFLL)
            : (v95 = v91 | 0xFFFF000000000000uLL),
              v95 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          v93 = (unsigned int)(v93 + 1);
        }
        v96 = (unsigned int)v93;
        v97 = 2 * (v93 + 15);
        v98 = *(_QWORD *)(v3 + 16 * (v93 + 15) + 8);
        *(_DWORD *)(v102 + 8) = -1;
        *(_DWORD *)(v89 + 12) = v98;
        result = v91 ^ (v91 ^ (v98 << 20)) & 0xF0000000000000LL | 0xF000000000000LL;
        *(_QWORD *)v89 = result;
        if ( v98 == 0xFFFFFFFFFLL )
        {
          *(_QWORD *)(v3 + 8 * v97) = v90;
        }
        else
        {
          v99 = *(_QWORD *)(v3 + 496) + 16 * v98;
          result = (*(_QWORD *)v99 ^ (v90 << 16)) & 0xF000000000000LL;
          *(_DWORD *)(v99 + 8) = v90;
          *(_QWORD *)v99 ^= result;
        }
        *(_QWORD *)(v3 + 8 * v97 + 8) = v90;
        ++*(_QWORD *)(v3 + 8 * v96 + 112);
      }
    }
  }
  else
  {
    MiRemoveWsleFromFreeList(v4, a2, v7, v8);
    MiRemoveEntryWsle(v3, v9);
    MiExchangeWsle(v4);
    MiInsertWsle(v3, v16, 0LL);
    return MiReleaseWsle(a1, v4, 0LL, 0LL);
  }
  return result;
}
