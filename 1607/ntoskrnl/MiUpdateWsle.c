/*
 * XREFs of MiUpdateWsle @ 0x14003C310
 * Callers:
 *     MiAllocateWsle @ 0x14003BC70 (MiAllocateWsle.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiUpdateWsleHash @ 0x140048900 (MiUpdateWsleHash.c)
 *     MiSwapWslEntries @ 0x1400499F0 (MiSwapWslEntries.c)
 *     MiLocateIndirectHash @ 0x14004B690 (MiLocateIndirectHash.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     MiGetWsleHashVa @ 0x1400FCF54 (MiGetWsleHashVa.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiUpdateWsle(
        ULONG_PTR BugCheckParameter4,
        unsigned __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        __int64 a5)
{
  ULONG_PTR *v5; // r13
  char v6; // al
  ULONG_PTR v10; // r12
  ULONG_PTR *v11; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v13; // rbx
  unsigned int Queue; // edi
  unsigned int v15; // edi
  unsigned int v16; // ecx
  char v17; // al
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  __int64 v20; // r8
  ULONG_PTR v21; // rcx
  unsigned __int64 v22; // r11
  __int64 v23; // rbx
  __int64 v24; // r9
  __int64 v25; // r10
  unsigned __int64 v26; // r10
  unsigned __int16 v28; // cx
  int *v29; // rcx
  __int64 v30; // rdi
  unsigned __int64 v31; // rbx
  ULONG_PTR v32; // rcx
  ULONG_PTR *v33; // rdx
  ULONG_PTR v34; // rdi
  ULONG_PTR v35; // rax
  unsigned __int64 v36; // r10
  ULONG_PTR v37; // rbp
  unsigned __int64 *v38; // rcx
  int v39; // eax
  unsigned __int64 *v40; // rcx
  _QWORD *v41; // rdx
  unsigned __int64 v42; // r15
  unsigned __int64 v43; // rcx
  ULONG_PTR v44; // rdx
  ULONG_PTR v45; // r15
  unsigned __int64 v46; // r10
  _QWORD *v47; // r15
  unsigned __int64 v48; // r15
  ULONG_PTR v49; // r10
  unsigned __int64 v50; // rax
  ULONG_PTR v51; // rcx
  ULONG_PTR *v52; // r10
  _QWORD *v53; // rdx
  ULONG_PTR v54; // rbx
  ULONG_PTR *v55; // rcx
  unsigned __int64 v56; // rbx
  unsigned __int64 v57; // r9
  unsigned __int64 v58; // r9
  unsigned int v59; // eax
  __int64 v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rdi
  __int64 v63; // rax
  unsigned __int64 v64; // rax
  __int64 v65; // r10
  unsigned __int64 v66; // r10
  __int64 v67; // r10
  __int64 v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // rbp
  unsigned __int64 v71; // rax
  unsigned int v72; // eax
  _QWORD *v73; // rax
  ULONG_PTR v74; // rcx
  unsigned __int64 v75; // r15
  unsigned __int64 v76; // rax
  unsigned int v77; // edx
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rax
  unsigned __int64 v82; // rax
  ULONG_PTR v83; // rax
  __int64 v84; // rdx
  _QWORD *v85; // rcx
  _QWORD *v86; // rcx
  __int64 v87; // rdx
  unsigned __int64 v88; // r10
  unsigned __int64 v89; // r10
  unsigned __int64 v90; // rax
  unsigned __int64 v91; // rax
  __int64 v92; // r15
  unsigned __int64 v93; // rax
  unsigned __int64 v94; // rdx
  unsigned __int64 v95; // rdx
  unsigned __int64 v96; // rdx
  __int64 IndirectHash; // rdx
  ULONG_PTR v98; // rbx
  unsigned __int64 v99; // rbx
  unsigned __int64 v100; // [rsp+30h] [rbp-78h]
  unsigned int v101; // [rsp+30h] [rbp-78h]
  __int64 v102; // [rsp+30h] [rbp-78h]
  ULONG_PTR v103; // [rsp+38h] [rbp-70h]
  __int64 v104; // [rsp+38h] [rbp-70h]
  ULONG_PTR v105; // [rsp+38h] [rbp-70h]
  __int64 v106; // [rsp+40h] [rbp-68h]
  __int64 v107; // [rsp+40h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v110; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v111; // [rsp+C0h] [rbp+18h]
  unsigned __int64 v112; // [rsp+C8h] [rbp+20h]

  v5 = &BugCheckParameter2;
  v6 = *(_BYTE *)(a3 + 184) & 7;
  v10 = BugCheckParameter4;
  if ( v6 == 2 )
    v11 = &BugCheckParameter2;
  else
    v11 = (ULONG_PTR *)(*(_QWORD *)(a3 + 16) + 416LL);
  if ( v6 == 4 )
  {
    if ( PsNtosImageBase
      && (a2 < PsNtosImageEnd && a2 >= (unsigned __int64)PsNtosImageBase
       || a2 < PsHalImageEnd && a2 >= (unsigned __int64)PsHalImageBase) )
    {
      LODWORD(xmmword_1403268A8) = xmmword_1403268A8 + 1;
    }
    else if ( a2 >= qword_140328030 && a2 < qword_140328030 + 0x8000000000LL )
    {
      ++DWORD1(xmmword_1403268A8);
    }
  }
  CurrentThread = KeGetCurrentThread();
  v13 = a2 & 0xFFFFFFFFFFFFF000uLL | 1;
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
  {
    v15 = (Queue >> 9) & 7;
  }
  else
  {
    v15 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    {
      v39 = 2;
      if ( v15 < 2 )
        v39 = v15;
      v15 = v39;
    }
  }
  v16 = 5;
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL && v15 <= 5 )
    v15 = 5;
  v17 = *(_BYTE *)(a4 + 35);
  if ( (v17 & 8) == 0 )
    v16 = v17 & 7;
  if ( v16 < v15 )
  {
    LODWORD(v110) = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v110);
        while ( (*(_QWORD *)(a4 + 24) & 0x8000000000000000uLL) != 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) );
      v10 = BugCheckParameter4;
    }
    *(_BYTE *)(a4 + 35) ^= (v15 ^ *(_BYTE *)(a4 + 35)) & 7;
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v18 = a5;
  if ( v15 < 5 )
    v19 = v13 | 0xE00;
  else
    v19 = ((unsigned __int16)a5 ^ (unsigned __int16)v13) & 0xE00 ^ v13;
  v20 = (v19 >> 9) & 7;
  if ( ((v19 >> 9) & 7) != 0 )
  {
    ++*(_QWORD *)(a3 + 8LL * (unsigned int)(v20 - 1) + 40);
    if ( (_DWORD)v20 == 7 )
    {
      v28 = *(_WORD *)(a3 + 164);
      v29 = v28 == 1023 ? MiSystemPartition : *(int **)(qword_140327038 + 8LL * v28);
      v30 = *((_QWORD *)v29 + 781);
      if ( *(_QWORD *)(a3 + 88) >= *(_QWORD *)(v30 + 64) )
      {
        if ( *(_QWORD *)(a3 + 24) )
        {
          v111 = (__int64)(v29 + 1564);
          if ( *((_QWORD *)v29 + 782) != a3 + 24 )
          {
            KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140327780, &LockHandle);
            if ( *(_BYTE *)(v30 + 53) || (v83 = a3 + 24, !*(_QWORD *)(a3 + 24)) )
            {
              *(_BYTE *)(v30 + 54) = 1;
              KxReleaseQueuedSpinLock(&LockHandle);
              v18 = a5;
            }
            else
            {
              v84 = *(_QWORD *)v83;
              v85 = *(_QWORD **)(a3 + 32);
              if ( *(_QWORD *)(*(_QWORD *)v83 + 8LL) != v83 || *v85 != v83 )
                __fastfail(3u);
              *v85 = v84;
              *(_QWORD *)(v84 + 8) = v85;
              v86 = (_QWORD *)v111;
              v87 = *(_QWORD *)v111;
              if ( *(_QWORD *)(*(_QWORD *)v111 + 8LL) != v111 )
                __fastfail(3u);
              *(_QWORD *)(a3 + 32) = v111;
              *(_QWORD *)v83 = v87;
              *(_QWORD *)(v87 + 8) = v83;
              *v86 = v83;
              KxReleaseQueuedSpinLock(&LockHandle);
              v18 = a5;
            }
          }
        }
      }
    }
  }
  if ( (*(_QWORD *)(a4 + 40) & 0x200000000000000LL) == 0 )
  {
    *(_QWORD *)a4 = v10;
    ++*(_QWORD *)(a3 + 136);
    if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
      ++*(_QWORD *)(a3 + 120);
    *(_QWORD *)(v10 * *((unsigned int *)v11 + 8) + v11[10]) = v18 | v19 | 8;
    v21 = v11[10] + v10 * *((unsigned int *)v11 + 8);
    if ( (*(_BYTE *)(a3 + 184) & 7) != 2 )
      v5 = (ULONG_PTR *)(*(_QWORD *)(a3 + 16) + 416LL);
    if ( *((_DWORD *)v5 + 8) != 16 )
      return v10;
    v22 = (__int64)(v21 - v5[10]) >> 4;
    if ( v22 < v5[1] )
      return v10;
    v23 = *(_QWORD *)v21;
    v24 = 2 * ((unsigned int)(*(_QWORD *)v21 >> 9) & 7);
    v65 = *(_QWORD *)v21;
    if ( (*(_QWORD *)v21 & 0x800000000000LL) != 0 )
      v66 = v65 | 0xFFFF000000000000uLL;
    else
      v66 = v65 & 0xFFFFFFFFFFFFLL;
    if ( v66 >= 0xFFFFF68000000000uLL )
    {
      v88 = (*(_QWORD *)v21 & 0x800000000000LL) != 0 ? v23 | 0xFFFF000000000000uLL : v23 & 0xFFFFFFFFFFFFLL;
      if ( v88 <= 0xFFFFF6FFFFFFFFFFuLL )
        goto LABEL_111;
    }
    goto LABEL_110;
  }
  if ( !*(_QWORD *)a4 )
  {
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)a4, v10, 0LL) )
    {
      *(_QWORD *)(v10 * *((unsigned int *)v11 + 8) + v11[10]) = a5 | v19 | 8;
      v21 = v11[10] + v10 * *((unsigned int *)v11 + 8);
      if ( (*(_BYTE *)(a3 + 184) & 7) != 2 )
        v5 = (ULONG_PTR *)(*(_QWORD *)(a3 + 16) + 416LL);
      if ( *((_DWORD *)v5 + 8) != 16 )
        return v10;
      v22 = (__int64)(v21 - v5[10]) >> 4;
      if ( v22 < v5[1] )
        return v10;
      v23 = *(_QWORD *)v21;
      v24 = 2 * ((unsigned int)(*(_QWORD *)v21 >> 9) & 7);
      v25 = *(_QWORD *)v21;
      if ( (*(_QWORD *)v21 & 0x800000000000LL) != 0 )
        v26 = v25 | 0xFFFF000000000000uLL;
      else
        v26 = v25 & 0xFFFFFFFFFFFFLL;
      if ( v26 >= 0xFFFFF68000000000uLL )
      {
        v89 = (*(_QWORD *)v21 & 0x800000000000LL) != 0 ? v23 | 0xFFFF000000000000uLL : v23 & 0xFFFFFFFFFFFFLL;
        if ( v89 <= 0xFFFFF6FFFFFFFFFFuLL )
          goto LABEL_111;
      }
LABEL_110:
      v24 = (unsigned int)(v24 + 1);
LABEL_111:
      v67 = *(_QWORD *)(a3 + 16);
      v68 = *(_QWORD *)(v67 + 16 * (v24 + 10) + 8);
      *(_DWORD *)(v21 + 8) = -1;
      *(_QWORD *)v21 = v23 ^ (v23 ^ (v68 << 20)) & 0xF0000000000000LL | 0xF000000000000LL;
      *(_DWORD *)(v21 + 12) = v68;
      if ( v68 == 0xFFFFFFFFFLL )
      {
        *(_QWORD *)(v67 + 16 * (v24 + 10)) = v22;
      }
      else
      {
        v69 = v5[10] + 16 * v68;
        *(_QWORD *)v69 ^= (*(_QWORD *)v69 ^ (v22 << 16)) & 0xF000000000000LL;
        *(_DWORD *)(v69 + 8) = v22;
      }
      *(_QWORD *)(v67 + 16 * (v24 + 10) + 8) = v22;
      ++*(_QWORD *)(v67 + 8LL * (unsigned int)v24 + 32);
      return v10;
    }
    v18 = a5;
  }
  v31 = v18 | v19;
  *(_QWORD *)(v10 * *((unsigned int *)v11 + 8) + v11[10]) = v31;
  v32 = v11[10] + v10 * *((unsigned int *)v11 + 8);
  if ( (*(_BYTE *)(a3 + 184) & 7) == 2 )
    v33 = &BugCheckParameter2;
  else
    v33 = (ULONG_PTR *)(*(_QWORD *)(a3 + 16) + 416LL);
  if ( *((_DWORD *)v33 + 8) == 16 )
  {
    v100 = (__int64)(v32 - v33[10]) >> 4;
    if ( v100 >= v33[1] )
    {
      v110 = *(_QWORD *)v32;
      v57 = v110;
      v110 >>= 9;
      LODWORD(v110) = v110 & 7;
      LODWORD(v110) = 2 * v110;
      v111 = v57;
      v112 = v57 & 0x800000000000LL;
      if ( (v57 & 0x800000000000LL) != 0 )
        v58 = v111 | 0xFFFF000000000000uLL;
      else
        v58 = v111 & 0xFFFFFFFFFFFFLL;
      if ( v58 < 0xFFFFF68000000000uLL
        || (!v112 ? (v90 = v111 & 0xFFFFFFFFFFFFLL) : (v90 = v111 | 0xFFFF000000000000uLL),
            v112 = v90,
            v90 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        v59 = v110 + 1;
      }
      else
      {
        v59 = v110;
      }
      v104 = v59;
      v112 = *(_QWORD *)(a3 + 16);
      v110 = v112 + 16 * (v59 + 10LL);
      v60 = *(_QWORD *)(v110 + 8);
      *(_DWORD *)(v32 + 8) = -1;
      v61 = (v111 ^ (v60 << 20)) & 0xF0000000000000LL;
      *(_DWORD *)(v32 + 12) = v60;
      *(_QWORD *)v32 = v111 ^ v61 | 0xF000000000000LL;
      if ( v60 == 0xFFFFFFFFFLL )
      {
        v64 = v110;
        *(_QWORD *)v110 = v100;
      }
      else
      {
        v62 = v33[10] + 16 * v60;
        v63 = (*(_QWORD *)v62 ^ (v100 << 16)) & 0xF000000000000LL;
        *(_DWORD *)(v62 + 8) = v100;
        *(_QWORD *)v62 ^= v63;
        v64 = v110;
      }
      *(_QWORD *)(v64 + 8) = v100;
      ++*(_QWORD *)(v112 + 8 * v104 + 32);
    }
  }
  v34 = *(_QWORD *)a4;
  if ( *(_QWORD *)a4 == v10 )
    return v10;
  v35 = v11[3];
  if ( v34 > v35 || v34 < v11[1] )
  {
    MiUpdateWsleHash(a2, v10, a3, 0LL);
    return v10;
  }
  v36 = *((unsigned int *)v11 + 8);
  v37 = v11[10];
  v112 = v36;
  v38 = (unsigned __int64 *)(v37 + v34 * v36);
  v110 = *v38;
  if ( (v110 & 1) == 0 )
  {
    v40 = (unsigned __int64 *)((char *)v38 + v36);
    v103 = *v11;
    v41 = (_QWORD *)(v37 + v34 * v36 - v36);
    v111 = (__int64)v40;
    v42 = v110;
    if ( v103 == v34 )
    {
      v44 = 0x7FFFFFFLL;
      goto LABEL_71;
    }
    if ( v34 )
    {
      if ( (*v41 & 1) == 0 )
      {
        if ( *v41 >> 28 != v34 )
          goto LABEL_67;
        v44 = v34 - 1;
LABEL_90:
        if ( v44 == 0xFFFFFFFFFLL )
          goto LABEL_67;
LABEL_71:
        v48 = v42 >> 28;
        if ( v103 == v34 )
        {
          *v11 = v10;
        }
        else
        {
          v49 = v44 * v36;
          v50 = *(_QWORD *)(v49 + v37);
          if ( v50 >> 28 != v34 )
            KeBugCheckEx(0x1Au, 0x5005uLL, (ULONG_PTR)v11, v44, v34);
          *(_QWORD *)(v49 + v37) = (v10 << 28) | v50 & 0xFFFFFFF;
        }
        v51 = v11[10] + v10 * *((unsigned int *)v11 + 8);
        if ( (*(_BYTE *)(a3 + 184) & 7) == 2 )
          v52 = &BugCheckParameter2;
        else
          v52 = (ULONG_PTR *)(*(_QWORD *)(a3 + 16) + 416LL);
        if ( *((_DWORD *)v52 + 8) == 16 )
        {
          v105 = v52[10];
          if ( (__int64)(v51 - v105) >> 4 >= v52[1] )
          {
            v110 = *(_QWORD *)v51;
            v70 = *(unsigned int *)(v51 + 8) | (v110 >> 16) & 0xF00000000LL;
            v111 = *(unsigned int *)(v51 + 12) | (v110 >> 20) & 0xF00000000LL;
            v101 = 2 * ((v110 >> 9) & 7);
            if ( (v110 & 0x800000000000LL) != 0 )
              v71 = v110 | 0xFFFF000000000000uLL;
            else
              v71 = v110 & 0xFFFFFFFFFFFFLL;
            v112 = v71;
            if ( v71 < 0xFFFFF68000000000uLL
              || ((v110 & 0x800000000000LL) == 0 ? (v110 &= 0xFFFFFFFFFFFFuLL) : (v110 |= 0xFFFF000000000000uLL),
                  v110 > 0xFFFFF6FFFFFFFFFFuLL) )
            {
              v72 = v101 + 1;
            }
            else
            {
              v72 = v101;
            }
            v106 = *(_QWORD *)(a3 + 16);
            v102 = v72;
            v73 = (_QWORD *)(v106 + 16 * (v72 + 10LL));
            v110 = v105 + 16 * v70;
            v74 = v105 + 16 * v111;
            v112 = (unsigned __int64)v73;
            if ( v111 == 0xFFFFFFFFFLL )
            {
              *v73 = v70;
            }
            else
            {
              *(_DWORD *)(v74 + 8) = v70;
              *(_QWORD *)v74 ^= (*(_QWORD *)v74 ^ (v70 << 16)) & 0xF000000000000LL;
              v73 = (_QWORD *)v112;
            }
            if ( v70 == 0xFFFFFFFFFLL )
            {
              v73[1] = v111;
            }
            else
            {
              *(_QWORD *)v110 ^= (*(_QWORD *)v110 ^ (v111 << 20)) & 0xF0000000000000LL;
              *(_DWORD *)(v110 + 12) = v111;
            }
            --*(_QWORD *)(v106 + 8 * v102 + 32);
          }
        }
        *(_QWORD *)(v10 * *((unsigned int *)v11 + 8) + v11[10]) = 2 * ((v48 << 27) | v44 & 0x7FFFFFF);
        if ( v48 != 0xFFFFFFFFFLL )
        {
          v53 = (_QWORD *)(v11[10] + v48 * *((unsigned int *)v11 + 8));
          *v53 ^= (*(_DWORD *)v53 ^ (2 * (_DWORD)v10)) & 0xFFFFFFE;
        }
        *(_QWORD *)(v34 * *((unsigned int *)v11 + 8) + v11[10]) = v31;
        v54 = v11[10] + v34 * *((unsigned int *)v11 + 8);
        if ( (*(_BYTE *)(a3 + 184) & 7) == 2 )
          v55 = &BugCheckParameter2;
        else
          v55 = (ULONG_PTR *)(*(_QWORD *)(a3 + 16) + 416LL);
        if ( *((_DWORD *)v55 + 8) == 16 )
        {
          v75 = (__int64)(v54 - v55[10]) >> 4;
          if ( v75 >= v55[1] )
          {
            v112 = *(_QWORD *)v54;
            v76 = v112;
            v111 = v112;
            v77 = 2 * ((v112 >> 9) & 7);
            v112 &= 0x800000000000uLL;
            if ( v112 )
              v110 = v76 | 0xFFFF000000000000uLL;
            else
              v110 = v76 & 0xFFFFFFFFFFFFLL;
            if ( v110 < 0xFFFFF68000000000uLL
              || (!v112 ? (v110 = v111 & 0xFFFFFFFFFFFFLL) : (v110 = v111 | 0xFFFF000000000000uLL),
                  v110 > 0xFFFFF6FFFFFFFFFFuLL) )
            {
              ++v77;
            }
            v112 = *(_QWORD *)(a3 + 16);
            v107 = v77;
            v110 = v112 + 16 * (v77 + 10LL);
            v78 = *(_QWORD *)(v110 + 8);
            *(_DWORD *)(v54 + 8) = -1;
            v79 = (v111 ^ (v78 << 20)) & 0xF0000000000000LL;
            *(_DWORD *)(v54 + 12) = v78;
            *(_QWORD *)v54 = v111 ^ v79 | 0xF000000000000LL;
            if ( v78 == 0xFFFFFFFFFLL )
            {
              v82 = v110;
              *(_QWORD *)v110 = v75;
            }
            else
            {
              v80 = v55[10] + 16 * v78;
              v81 = (*(_QWORD *)v80 ^ (v75 << 16)) & 0xF000000000000LL;
              *(_DWORD *)(v80 + 8) = v75;
              *(_QWORD *)v80 ^= v81;
              v82 = v110;
            }
            *(_QWORD *)(v82 + 8) = v75;
            ++*(_QWORD *)(v112 + 8 * v107 + 32);
          }
        }
        v56 = *(_QWORD *)v54;
        if ( (*(_BYTE *)(a3 + 184) & 7) != 2 )
          v5 = (ULONG_PTR *)(*(_QWORD *)(a3 + 16) + 416LL);
        if ( (v56 & 4) != 0 )
        {
          v91 = v5[7];
          v110 = v91;
          if ( !v91 || (v91 & 1) != 0 )
          {
            if ( (v56 & 0x800000000000LL) != 0 )
              v99 = v56 | 0xFFFF000000000000uLL;
            else
              v99 = v56 & 0xFFFFFFFFFFFFLL;
            *(_QWORD *)MiGetWsleHashVa(v5, v99, 0xFFFFFFFFFLL, 0xF000000000000LL) = v34;
          }
          else
          {
            v92 = v56 & 0x800000000000LL;
            if ( (v56 & 1) != 0 )
            {
              if ( v92 )
                v93 = v56 | 0xFFFF000000000000uLL;
              else
                v93 = v56 & 0xFFFFFFFFFFFFLL;
              if ( (v93 & 0x800000000000LL) != 0 )
              {
                if ( v92 )
                  v94 = v56 | 0xFFFF000000000000uLL;
                else
                  v94 = v56 & 0xFFFFFFFFFFFFLL;
                v95 = v94 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL;
              }
              else
              {
                if ( v92 )
                  v96 = v56 | 0xFFFF000000000000uLL;
                else
                  v96 = v56 & 0xFFFFFFFFFFFFLL;
                v95 = v96 & 0xFFFFFFFFF000LL | 1;
              }
            }
            else
            {
              v95 = 0LL;
            }
            IndirectHash = MiLocateIndirectHash(v5, v95, (unsigned __int8)(v95 >> 12), 0xF000000000000LL);
            if ( IndirectHash == 0xFFFFFFFFFLL )
            {
              if ( v92 )
                v98 = v56 | 0xFFFF000000000000uLL;
              else
                v98 = v56 & 0xFFFFFFFFFFFFLL;
              KeBugCheckEx(0x1Au, 0x41282uLL, a3, v98, v10);
            }
            *(_QWORD *)(v110 + 16 * IndirectHash + 8) = v34;
          }
        }
        goto LABEL_46;
      }
      v40 = (unsigned __int64 *)v111;
    }
    if ( v34 == v35 || (v43 = *v40, (v43 & 1) != 0) || v43 >> 28 != v34 )
    {
LABEL_67:
      v44 = (v110 >> 1) & 0x7FFFFFF;
      v45 = v44 * v36;
      v46 = v36 << 27;
      v47 = (_QWORD *)(v37 + v45);
      do
      {
        if ( (*v47 & 1) == 0 && *v47 >> 28 == v34 )
          break;
        v44 += 0x8000000LL;
        v47 = (_QWORD *)((char *)v47 + v46);
      }
      while ( v44 <= v35 );
      v36 = v112;
      v42 = v110;
      goto LABEL_71;
    }
    v44 = v34 + 1;
    goto LABEL_90;
  }
  MiSwapWslEntries(v34, v10, a3, 0xF000000000000LL);
LABEL_46:
  if ( v34 > v11[2] )
    v11[2] = v34;
  return v34;
}
