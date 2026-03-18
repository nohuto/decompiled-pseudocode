/*
 * XREFs of MiSwapWslEntries @ 0x140097790
 * Callers:
 *     MiRemoveLockedPageFromWorkingSet @ 0x14007CAB4 (MiRemoveLockedPageFromWorkingSet.c)
 *     MiDeleteSystemPagableVm @ 0x1400AFDF0 (MiDeleteSystemPagableVm.c)
 *     MiUpdateWsle @ 0x1400BE660 (MiUpdateWsle.c)
 *     NtLockVirtualMemory @ 0x1400FD8C4 (NtLockVirtualMemory.c)
 * Callees:
 *     MiUpdateWsleHash @ 0x140097290 (MiUpdateWsleHash.c)
 *     MiInsertWsle @ 0x1400AD8A0 (MiInsertWsle.c)
 *     MiReleaseWsle @ 0x1400AE200 (MiReleaseWsle.c)
 *     MiRemoveEntryWsle @ 0x1400AFC70 (MiRemoveEntryWsle.c)
 *     MiRemoveWsleFromFreeList @ 0x1401327D0 (MiRemoveWsleFromFreeList.c)
 *     MiExchangeWsle @ 0x1401329EC (MiExchangeWsle.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWriteValidPteVolatile @ 0x140226110 (MiWriteValidPteVolatile.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiSwapWslEntries(ULONG_PTR a1, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 v3; // r14
  ULONG_PTR v7; // rbp
  __int64 v8; // r11
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r10
  __int64 v11; // r10
  ULONG_PTR PteShadow; // rax
  unsigned __int64 v13; // rcx
  ULONG_PTR v14; // rcx
  ULONG_PTR v15; // r12
  __int64 v16; // r9
  unsigned __int64 v17; // r10
  __int64 v18; // r10
  ULONG_PTR v19; // rax
  __int64 v20; // rcx
  ULONG_PTR v21; // rcx
  __int64 v22; // r8
  unsigned __int64 v23; // rbx
  __int64 result; // rax
  __int64 v25; // rdi
  __int64 v26; // r10
  __int64 v27; // r11
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // r10
  __int64 v38; // r11
  __int64 v39; // rdx
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rsi
  unsigned __int64 v48; // r10
  ULONG_PTR v49; // r9
  ULONG_PTR BugCheckParameter4; // r11
  __int64 v51; // r10
  ULONG_PTR v52; // rax
  unsigned __int64 v53; // rcx
  _QWORD *v54; // rax
  __int64 v55; // rdi
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // r9
  unsigned __int64 v58; // r9
  unsigned __int64 v59; // r9
  __int64 v60; // rdx
  bool v61; // zf
  __int64 v62; // rcx
  unsigned __int64 v63; // rcx
  ULONG_PTR v64; // r8
  unsigned __int64 v65; // r8
  unsigned __int64 v66; // r8
  ULONG_PTR v67; // r11
  __int64 v68; // rdi
  unsigned __int64 v69; // r10
  ULONG_PTR v70; // rsi
  __int64 v71; // r10
  ULONG_PTR v72; // rax
  unsigned __int64 v73; // rcx
  _QWORD *v74; // rax
  __int64 v75; // r9
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // r8
  unsigned __int64 v78; // r8
  unsigned __int64 v79; // r8
  ULONG_PTR v80; // rdx
  bool v81; // zf
  __int64 v82; // rcx
  unsigned __int64 v83; // rcx
  ULONG_PTR v84; // rbx
  unsigned __int64 v85; // rbx
  unsigned __int64 v86; // rbx
  unsigned __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // rdx
  __int64 v90; // rax
  unsigned __int64 v91; // rdx
  unsigned __int64 v92; // rdx
  __int64 v93; // r10
  __int64 v94; // r9
  __int64 v95; // rdx
  __int64 v96; // rdx
  unsigned __int64 v97; // rdx
  unsigned __int64 v98; // r8
  unsigned __int64 v99; // rcx
  __int64 v100; // rax
  unsigned __int64 v101; // rcx
  unsigned __int64 v102; // rcx
  __int64 v103; // r10
  __int64 v104; // r9
  __int64 v105; // rcx
  __int64 v106; // rcx
  ULONG_PTR v107; // [rsp+90h] [rbp+8h] BYREF
  ULONG_PTR v108; // [rsp+98h] [rbp+10h]
  unsigned __int64 v109; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v110; // [rsp+A8h] [rbp+20h]

  v108 = a2;
  v107 = a1;
  v3 = *(_QWORD *)(a3 + 184);
  v7 = *(_QWORD *)(v3 + 496) + a1 * *(unsigned int *)(v3 + 64);
  v8 = 0x200000000000000LL;
  v9 = *(_QWORD *)v7;
  if ( (*(_QWORD *)v7 & 4) == 0 )
  {
    if ( (v9 & 0x800000000000LL) != 0 )
      v10 = v9 | 0xFFFF000000000000uLL;
    else
      v10 = v9 & 0xFFFFFFFFFFFFLL;
    v11 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    PteShadow = *(_QWORD *)v11;
    if ( (*(_QWORD *)v11 & 1) == 0 )
    {
      if ( (unsigned __int64)(v11 + 0x90482413000LL) <= 0x7F8 )
        PteShadow = MiReadPteShadow(v11, *(_QWORD *)v11);
      KeBugCheckEx(0x1Au, 0x61940uLL, v11 << 25 >> 16, PteShadow, 0LL);
    }
    if ( (unsigned __int64)(v11 + 0x90482413000LL) <= 0x7F8 )
      PteShadow = MiReadPteShadow(v11, *(_QWORD *)v11);
    v109 = PteShadow;
    if ( (unsigned __int64)&STACK[0x904824130A0] <= 0x7F8 )
      PteShadow = MiReadPteShadow(&v109, PteShadow);
    if ( (*(_QWORD *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & v8) != 0 )
    {
      if ( (v9 & 8) != 0 )
        *(_QWORD *)v7 = v9 & 0xFFFFFFFFFFFFFFF7uLL;
      v13 = *(_QWORD *)v7;
      if ( (*(_QWORD *)v7 & 0x800000000000LL) != 0 )
        v14 = v13 | 0xFFFF000000000000uLL;
      else
        v14 = v13 & 0xFFFFFFFFFFFFLL;
      MiUpdateWsleHash(v14, a1, a3, 0);
      v8 = 0x200000000000000LL;
    }
  }
  v15 = *(_QWORD *)(v3 + 496) + a2 * *(unsigned int *)(v3 + 64);
  v16 = *(_QWORD *)v15;
  if ( (*(_QWORD *)v15 & 5) == 1 )
  {
    if ( (v16 & 0x800000000000LL) != 0 )
      v17 = v16 | 0xFFFF000000000000uLL;
    else
      v17 = v16 & 0xFFFFFFFFFFFFLL;
    v18 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v19 = *(_QWORD *)v18;
    if ( (*(_QWORD *)v18 & 1) == 0 )
    {
      if ( (unsigned __int64)(v18 + 0x90482413000LL) <= 0x7F8 )
        v19 = MiReadPteShadow(v18, *(_QWORD *)v18);
      KeBugCheckEx(0x1Au, 0x61940uLL, v18 << 25 >> 16, v19, 0LL);
    }
    if ( (unsigned __int64)(v18 + 0x90482413000LL) <= 0x7F8 )
      v19 = MiReadPteShadow(v18, *(_QWORD *)v18);
    v109 = v19;
    if ( (unsigned __int64)&STACK[0x904824130A0] <= 0x7F8 )
      v19 = MiReadPteShadow(&v109, v19);
    if ( (*(_QWORD *)(48 * ((v19 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & v8) != 0 )
    {
      if ( (v16 & 8) != 0 )
        *(_QWORD *)v15 = v16 & 0xFFFFFFFFFFFFFFF7uLL;
      v20 = *(_QWORD *)v15;
      if ( (*(_QWORD *)v15 & 0x800000000000LL) != 0 )
        v21 = v20 | 0xFFFF000000000000uLL;
      else
        v21 = v20 & 0xFFFFFFFFFFFFLL;
      MiUpdateWsleHash(v21, a2, a3, 0);
    }
  }
  v22 = *(_QWORD *)v15;
  v23 = *(_QWORD *)v7;
  if ( (*(_QWORD *)v15 & 1) != 0 )
  {
    v61 = *(_DWORD *)(v3 + 64) == 16;
    v109 = 0xFFFFF68000000000uLL;
    v110 = 0xF000000000000LL;
    if ( v61 )
    {
      v25 = *(_QWORD *)(v3 + 496);
      if ( (unsigned __int64)((__int64)(v7 - v25) >> 4) >= *(_QWORD *)(v3 + 8) )
      {
        v26 = *(unsigned int *)(v7 + 8) | (v23 >> 16) & 0xF00000000LL;
        v27 = *(unsigned int *)(v7 + 12) | (v23 >> 20) & 0xF00000000LL;
        v28 = 2 * ((unsigned int)(v23 >> 9) & 7);
        if ( (v23 & 0x800000000000LL) != 0 )
          v29 = v23 | 0xFFFF000000000000uLL;
        else
          v29 = v23 & 0xFFFFFFFFFFFFLL;
        if ( v29 < v109
          || ((v23 & 0x800000000000LL) == 0 ? (v30 = v23 & 0xFFFFFFFFFFFFLL) : (v30 = v23 | 0xFFFF000000000000uLL),
              v30 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          v28 = (unsigned int)(v28 + 1);
        }
        v31 = (unsigned int)v28;
        v32 = 2 * (v28 + 15);
        v33 = v25 + 16 * v26;
        v34 = v25 + 16 * v27;
        if ( v27 == 0xFFFFFFFFFLL )
        {
          *(_QWORD *)(v3 + 8 * v32) = v26;
        }
        else
        {
          *(_DWORD *)(v34 + 8) = *(_DWORD *)(v7 + 8);
          *(_QWORD *)v34 ^= v110 & (*(_QWORD *)v34 ^ (v26 << 16));
        }
        if ( v26 == 0xFFFFFFFFFLL )
        {
          *(_QWORD *)(v3 + 8 * v32 + 8) = v27;
        }
        else
        {
          *(_DWORD *)(v33 + 12) = v27;
          *(_QWORD *)v33 ^= (*(_QWORD *)v33 ^ (v27 << 20)) & 0xF0000000000000LL;
        }
        --*(_QWORD *)(v3 + 8 * v31 + 112);
      }
      if ( *(_DWORD *)(v3 + 64) == 16 )
      {
        v35 = *(_QWORD *)(v3 + 496);
        if ( (unsigned __int64)((__int64)(v15 - v35) >> 4) >= *(_QWORD *)(v3 + 8) )
        {
          v36 = *(_QWORD *)v15;
          v37 = *(unsigned int *)(v15 + 8) | (*(_QWORD *)v15 >> 16) & 0xF00000000LL;
          v38 = *(unsigned int *)(v15 + 12) | (*(_QWORD *)v15 >> 20) & 0xF00000000LL;
          v39 = 2 * ((unsigned int)(*(_QWORD *)v15 >> 9) & 7);
          v40 = *(_QWORD *)v15;
          if ( (*(_QWORD *)v15 & 0x800000000000LL) != 0 )
            v41 = v40 | 0xFFFF000000000000uLL;
          else
            v41 = v40 & 0xFFFFFFFFFFFFLL;
          if ( v41 < v109
            || ((*(_QWORD *)v15 & 0x800000000000LL) == 0
              ? (v42 = v36 & 0xFFFFFFFFFFFFLL)
              : (v42 = v36 | 0xFFFF000000000000uLL),
                v42 > 0xFFFFF6FFFFFFFFFFuLL) )
          {
            v39 = (unsigned int)(v39 + 1);
          }
          v43 = (unsigned int)v39;
          v44 = 2 * (v39 + 15);
          v45 = v35 + 16 * v38;
          v46 = v35 + 16 * v37;
          if ( v38 == 0xFFFFFFFFFLL )
          {
            *(_QWORD *)(v3 + 8 * v44) = v37;
          }
          else
          {
            *(_DWORD *)(v45 + 8) = *(_DWORD *)(v15 + 8);
            *(_QWORD *)v45 ^= v110 & (*(_QWORD *)v45 ^ (v37 << 16));
          }
          if ( v37 == 0xFFFFFFFFFLL )
          {
            *(_QWORD *)(v3 + 8 * v44 + 8) = v38;
          }
          else
          {
            *(_DWORD *)(v46 + 12) = v38;
            *(_QWORD *)v46 ^= (*(_QWORD *)v46 ^ (v38 << 20)) & 0xF0000000000000LL;
          }
          --*(_QWORD *)(v3 + 8 * v43 + 112);
        }
      }
    }
    v47 = v22 & 0x800000000000LL;
    if ( (v22 & 0x800000000000LL) != 0 )
      v48 = v22 | 0xFFFF000000000000uLL;
    else
      v48 = v22 & 0xFFFFFFFFFFFFLL;
    v49 = v107;
    BugCheckParameter4 = 0LL;
    v51 = ((v48 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)(v107 * *(unsigned int *)(*(_QWORD *)(a3 + 184) + 64LL) + *(_QWORD *)(*(_QWORD *)(a3 + 184) + 496LL)) = v22;
    if ( (v22 & 8) != 0 )
    {
      v52 = *(_QWORD *)v51;
      v53 = v51 + 0x90482413000LL;
      if ( (*(_QWORD *)v51 & 1) == 0 )
      {
        if ( v53 <= 0x7F8 )
          v52 = MiReadPteShadow(v51, *(_QWORD *)v51);
        KeBugCheckEx(0x1Au, 0x61940uLL, v51 << 25 >> 16, v52, BugCheckParameter4);
      }
      if ( v53 <= 0x7F8 )
        v52 = MiReadPteShadow(v51, *(_QWORD *)v51);
      v109 = v52;
      if ( (unsigned __int64)&STACK[0x904824130A0] <= 0x7F8 )
        v52 = MiReadPteShadow(&v109, v52);
      *(_QWORD *)(48 * ((v52 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) = v49;
    }
    else
    {
      v54 = *(_QWORD **)(a3 + 184);
      if ( (v22 & 4) != 0 )
      {
        v55 = v54[11];
        if ( !v55 || (v55 & 1) != 0 )
        {
          if ( v47 )
            v65 = v22 | 0xFFFF000000000000uLL;
          else
            v65 = v22 & 0xFFFFFFFFFFFFLL;
          if ( (v65 & 0x800000000000LL) != 0 )
            v66 = v65 | 0xFFFF000000000000uLL;
          else
            v66 = v65 & 0xFFFFFFFFFFFFLL;
          *(_QWORD *)(v54[12] + 8 * ((v66 - v54[10]) >> 12)) = v49;
        }
        else
        {
          if ( (v22 & 1) != 0 )
          {
            if ( v47 )
              v56 = v22 | 0xFFFF000000000000uLL;
            else
              v56 = v22 & 0xFFFFFFFFFFFFLL;
            if ( (v56 & 0x800000000000LL) != 0 )
            {
              if ( v47 )
                v57 = v22 | 0xFFFF000000000000uLL;
              else
                v57 = v22 & 0xFFFFFFFFFFFFLL;
              v58 = v57 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL;
            }
            else
            {
              if ( v47 )
                v59 = v22 | 0xFFFF000000000000uLL;
              else
                v59 = v22 & 0xFFFFFFFFFFFFLL;
              v58 = v59 & 0xFFFFFFFFF000LL | 1;
            }
          }
          else
          {
            v58 = 0LL;
          }
          v60 = (unsigned __int8)(v58 >> 12);
          while ( 1 )
          {
            if ( v58 )
            {
              v62 = *(_QWORD *)(v55 + 16 * v60);
              if ( (v62 & 1) != 0 )
                v63 = (v62 & 0x800000000000LL) != 0
                    ? v62 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL
                    : v62 & 0xFFFFFFFFF000LL | 1;
              else
                v63 = 0LL;
              v61 = v63 == v58;
            }
            else
            {
              v61 = *(_QWORD *)(v55 + 16 * v60) == 0LL;
            }
            if ( v61 )
              break;
            if ( (unsigned __int64)++v60 >= 0x100 )
              v60 = 0LL;
            if ( v60 == (unsigned __int8)(v58 >> 12) )
            {
              if ( v47 )
                v64 = v22 | 0xFFFF000000000000uLL;
              else
                v64 = v22 & 0xFFFFFFFFFFFFLL;
              KeBugCheckEx(0x1Au, 0x41282uLL, a3, v64, v108);
            }
          }
          v49 = v107;
          *(_QWORD *)(v55 + 16 * v60 + 8) = v107;
        }
      }
    }
    MiWriteValidPteVolatile(v51, v49 | 0x80000000);
    v68 = v23 & 0x800000000000LL;
    if ( (v23 & 0x800000000000LL) != 0 )
      v69 = v23 | 0xFFFF000000000000uLL;
    else
      v69 = v23 & 0xFFFFFFFFFFFFLL;
    v70 = v108;
    v71 = ((v69 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)(v108 * *(unsigned int *)(*(_QWORD *)(a3 + 184) + 64LL) + *(_QWORD *)(*(_QWORD *)(a3 + 184) + 496LL)) = v23;
    if ( (v23 & 8) != 0 )
    {
      v72 = *(_QWORD *)v71;
      v73 = v71 + 0x90482413000LL;
      if ( (*(_QWORD *)v71 & 1) == 0 )
      {
        if ( v73 <= 0x7F8 )
          v72 = MiReadPteShadow(v71, *(_QWORD *)v71);
        KeBugCheckEx(0x1Au, 0x61940uLL, v71 << 25 >> 16, v72, v67);
      }
      if ( v73 <= 0x7F8 )
        v72 = MiReadPteShadow(v71, *(_QWORD *)v71);
      v107 = v72;
      if ( (unsigned __int64)&STACK[0x90482413090] <= 0x7F8 )
        v72 = MiReadPteShadow(&v107, v72);
      *(_QWORD *)(48 * ((v72 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) = v70;
    }
    else
    {
      v74 = *(_QWORD **)(a3 + 184);
      if ( (v23 & 4) != 0 )
      {
        v75 = v74[11];
        if ( !v75 || (v75 & 1) != 0 )
        {
          if ( v68 )
            v85 = v23 | 0xFFFF000000000000uLL;
          else
            v85 = v23 & 0xFFFFFFFFFFFFLL;
          if ( (v85 & 0x800000000000LL) != 0 )
            v86 = v85 | 0xFFFF000000000000uLL;
          else
            v86 = v85 & 0xFFFFFFFFFFFFLL;
          *(_QWORD *)(v74[12] + 8 * ((v86 - v74[10]) >> 12)) = v70;
        }
        else
        {
          if ( (v23 & 1) != 0 )
          {
            if ( v68 )
              v76 = v23 | 0xFFFF000000000000uLL;
            else
              v76 = v23 & 0xFFFFFFFFFFFFLL;
            if ( (v76 & 0x800000000000LL) != 0 )
            {
              if ( v68 )
                v77 = v23 | 0xFFFF000000000000uLL;
              else
                v77 = v23 & 0xFFFFFFFFFFFFLL;
              v78 = v77 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL;
            }
            else
            {
              if ( v68 )
                v79 = v23 | 0xFFFF000000000000uLL;
              else
                v79 = v23 & 0xFFFFFFFFFFFFLL;
              v78 = v79 & 0xFFFFFFFFF000LL | 1;
            }
          }
          else
          {
            v78 = v67;
          }
          v80 = (unsigned __int8)(v78 >> 12);
          while ( 1 )
          {
            if ( v78 )
            {
              v82 = *(_QWORD *)(v75 + 16 * v80);
              if ( (v82 & 1) != 0 )
                v83 = (v82 & 0x800000000000LL) != 0
                    ? v82 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL
                    : v82 & 0xFFFFFFFFF000LL | 1;
              else
                v83 = v67;
              v81 = v83 == v78;
            }
            else
            {
              v81 = *(_QWORD *)(v75 + 16 * v80) == v67;
            }
            if ( v81 )
              break;
            if ( ++v80 >= 0x100 )
              v80 = v67;
            if ( v80 == (unsigned __int8)(v78 >> 12) )
              goto LABEL_172;
          }
          if ( v80 == 0xFFFFFFFFFLL )
          {
LABEL_172:
            if ( v68 )
              v84 = v23 | 0xFFFF000000000000uLL;
            else
              v84 = v23 & 0xFFFFFFFFFFFFLL;
            KeBugCheckEx(0x1Au, 0x41282uLL, a3, v84, v107);
          }
          v70 = v108;
          *(_QWORD *)(v75 + 16 * v80 + 8) = v108;
        }
      }
    }
    result = MiWriteValidPteVolatile(v71, v70 | 0x80000000);
    if ( *(_DWORD *)(v3 + 64) == 16 )
    {
      v87 = (__int64)(v15 - *(_QWORD *)(v3 + 496)) >> 4;
      if ( v87 >= *(_QWORD *)(v3 + 8) )
      {
        v88 = *(_QWORD *)v15;
        v89 = *(_QWORD *)v15;
        v90 = 2 * ((unsigned int)(*(_QWORD *)v15 >> 9) & 7);
        if ( (*(_QWORD *)v15 & 0x800000000000LL) != 0 )
          v91 = v89 | 0xFFFF000000000000uLL;
        else
          v91 = v89 & 0xFFFFFFFFFFFFLL;
        if ( v91 < 0xFFFFF68000000000uLL
          || ((*(_QWORD *)v15 & 0x800000000000LL) == 0
            ? (v92 = v88 & 0xFFFFFFFFFFFFLL)
            : (v92 = v88 | 0xFFFF000000000000uLL),
              v92 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          v90 = (unsigned int)(v90 + 1);
        }
        v93 = (unsigned int)v90;
        v94 = 2 * (v90 + 15);
        v95 = *(_QWORD *)(v3 + 16 * (v90 + 15) + 8);
        *(_DWORD *)(v15 + 8) = -1;
        *(_DWORD *)(v15 + 12) = v95;
        result = v88 ^ (v88 ^ (v95 << 20)) & 0xF0000000000000LL | 0xF000000000000LL;
        *(_QWORD *)v15 = result;
        if ( v95 == 0xFFFFFFFFFLL )
        {
          *(_QWORD *)(v3 + 8 * v94) = v87;
        }
        else
        {
          v96 = *(_QWORD *)(v3 + 496) + 16 * v95;
          result = (*(_QWORD *)v96 ^ (v87 << 16)) & 0xF000000000000LL;
          *(_DWORD *)(v96 + 8) = v87;
          *(_QWORD *)v96 ^= result;
        }
        *(_QWORD *)(v3 + 8 * v94 + 8) = v87;
        ++*(_QWORD *)(v3 + 8 * v93 + 112);
      }
    }
    if ( *(_DWORD *)(v3 + 64) == 16 )
    {
      v97 = (__int64)(v7 - *(_QWORD *)(v3 + 496)) >> 4;
      if ( v97 >= *(_QWORD *)(v3 + 8) )
      {
        v98 = *(_QWORD *)v7;
        v99 = *(_QWORD *)v7;
        v100 = 2 * ((unsigned int)(*(_QWORD *)v7 >> 9) & 7);
        if ( (*(_QWORD *)v7 & 0x800000000000LL) != 0 )
          v101 = v99 | 0xFFFF000000000000uLL;
        else
          v101 = v99 & 0xFFFFFFFFFFFFLL;
        if ( v101 < 0xFFFFF68000000000uLL
          || ((*(_QWORD *)v7 & 0x800000000000LL) == 0
            ? (v102 = v98 & 0xFFFFFFFFFFFFLL)
            : (v102 = v98 | 0xFFFF000000000000uLL),
              v102 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          v100 = (unsigned int)(v100 + 1);
        }
        v103 = (unsigned int)v100;
        v104 = 2 * (v100 + 15);
        v105 = *(_QWORD *)(v3 + 16 * (v100 + 15) + 8);
        *(_DWORD *)(v7 + 8) = -1;
        *(_DWORD *)(v7 + 12) = v105;
        result = v98 ^ (v98 ^ (v105 << 20)) & 0xF0000000000000LL | 0xF000000000000LL;
        *(_QWORD *)v7 = result;
        if ( v105 == 0xFFFFFFFFFLL )
        {
          *(_QWORD *)(v3 + 8 * v104) = v97;
        }
        else
        {
          v106 = *(_QWORD *)(v3 + 496) + 16 * v105;
          result = (*(_QWORD *)v106 ^ (v97 << 16)) & 0xF000000000000LL;
          *(_DWORD *)(v106 + 8) = v97;
          *(_QWORD *)v106 ^= result;
        }
        *(_QWORD *)(v3 + 8 * v104 + 8) = v97;
        ++*(_QWORD *)(v3 + 8 * v103 + 112);
      }
    }
  }
  else
  {
    MiRemoveWsleFromFreeList(a3, a2);
    MiRemoveEntryWsle(v3, v7);
    MiExchangeWsle(a3);
    MiInsertWsle(v3, v15, 0LL);
    return MiReleaseWsle(a1, a3, 0LL, 0LL);
  }
  return result;
}
