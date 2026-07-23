/*
 * XREFs of MiUpdateWsle @ 0x1400BE660
 * Callers:
 *     MiAllocateWsle @ 0x1400BE0E0 (MiAllocateWsle.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiUpdateWsleHash @ 0x140097290 (MiUpdateWsleHash.c)
 *     MiSwapWslEntries @ 0x140097790 (MiSwapWslEntries.c)
 *     MI_WSLE_HASH_VA @ 0x140108EB4 (MI_WSLE_HASH_VA.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiUpdateWsle(ULONG_PTR BugCheckParameter4, ULONG_PTR a2, ULONG_PTR a3, __int64 a4, __int64 a5)
{
  ULONG_PTR v5; // r15
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v11; // rbx
  unsigned int Queue_high; // edi
  unsigned int v13; // edi
  unsigned int v14; // ecx
  char v15; // al
  unsigned __int64 v16; // rbx
  __int64 v17; // rdx
  ULONG_PTR v18; // rcx
  unsigned __int64 v19; // rbx
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned __int64 v23; // r8
  __int64 v24; // rdi
  __int64 v25; // r11
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rax
  ULONG_PTR v29; // rcx
  __int16 *v31; // rcx
  unsigned __int16 v32; // ax
  __int64 v33; // rdi
  ULONG_PTR v34; // r13
  __int64 v35; // rcx
  _QWORD *v36; // rax
  ULONG_PTR v37; // rcx
  __int64 Next; // rax
  __int64 v39; // rbx
  ULONG_PTR v40; // rcx
  ULONG_PTR v41; // rdi
  ULONG_PTR v42; // rax
  __int64 v43; // r8
  __int64 v44; // rbp
  unsigned __int64 *v45; // rcx
  unsigned __int64 *v46; // rcx
  _QWORD *v47; // rdx
  unsigned __int64 v48; // r14
  unsigned __int64 v49; // rcx
  ULONG_PTR v50; // rdx
  ULONG_PTR v51; // r14
  __int64 v52; // r8
  _QWORD *v53; // r14
  unsigned __int64 v54; // r14
  ULONG_PTR v55; // r8
  unsigned __int64 v56; // rax
  __int64 v57; // r8
  __int64 *v58; // rcx
  _QWORD *v59; // rdx
  ULONG_PTR v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rcx
  unsigned __int64 v63; // r8
  __int64 v64; // r10
  __int64 v65; // rax
  __int64 v66; // r9
  unsigned __int64 v67; // r9
  __int64 v68; // rbx
  __int64 v69; // r11
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rax
  unsigned int v73; // r13d
  int v74; // eax
  unsigned int v75; // edx
  unsigned __int64 v76; // r8
  bool v77; // cf
  __int64 v78; // r8
  unsigned __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rax
  unsigned __int64 *v82; // rax
  unsigned int v83; // ecx
  unsigned __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 *v87; // rcx
  unsigned __int64 v88; // rbx
  __int64 v89; // r14
  __int64 v90; // rcx
  unsigned __int64 v91; // rax
  __int64 v92; // r11
  __int64 v93; // rcx
  __int64 v94; // rcx
  __int64 v95; // rax
  unsigned __int64 v96; // r9
  unsigned __int64 v97; // r8
  unsigned __int64 v98; // r11
  __int64 v99; // r14
  __int64 v100; // rbx
  unsigned __int64 v101; // rax
  unsigned __int64 v102; // r8
  unsigned __int64 v103; // r8
  unsigned __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // r11
  unsigned __int64 v107; // r11
  ULONG_PTR v108; // rdx
  unsigned __int64 v109; // rdx
  __int64 v110; // [rsp+30h] [rbp-68h]
  __int64 v111; // [rsp+38h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  ULONG_PTR *v114; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v115; // [rsp+A8h] [rbp+10h]
  unsigned __int64 *v116; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v117; // [rsp+A8h] [rbp+10h]
  __int64 *v118; // [rsp+A8h] [rbp+10h]
  __int64 v119; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v120; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v121; // [rsp+A8h] [rbp+10h]
  __int64 v122; // [rsp+B0h] [rbp+18h]
  __int64 v123; // [rsp+B0h] [rbp+18h]
  __int64 v124; // [rsp+B0h] [rbp+18h]
  __int64 v125; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v126; // [rsp+B8h] [rbp+20h]
  __int64 v127; // [rsp+B8h] [rbp+20h]

  v5 = *(_QWORD *)(a3 + 184);
  if ( (signed __int32 *)a3 == dword_14034FF40 )
  {
    if ( PsNtosImageBase
      && (a2 >= (unsigned __int64)PsNtosImageBase && a2 < PsNtosImageEnd
       || a2 >= (unsigned __int64)PsHalImageBase && a2 < PsHalImageEnd) )
    {
      LODWORD(xmmword_14034EA58) = xmmword_14034EA58 + 1;
    }
    else if ( a2 + 0x80000000000LL <= 0x7FFFFFFFFFLL )
    {
      ++DWORD1(xmmword_14034EA58);
    }
  }
  CurrentThread = KeGetCurrentThread();
  v11 = a2 & 0xFFFFFFFFFFFFF000uLL | 1;
  Queue_high = HIDWORD(CurrentThread[1].Queue);
  if ( (Queue_high & 0x100) != 0 )
  {
    v13 = (Queue_high >> 9) & 7;
  }
  else
  {
    v13 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 12) & 7;
    if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    {
      v74 = 2;
      if ( v13 < 2 )
        v74 = v13;
      v13 = v74;
    }
  }
  v14 = 5;
  if ( a2 + 0x98000000000LL <= 0x7FFFFFFFFFLL && v13 <= 5 )
    v13 = 5;
  v15 = *(_BYTE *)(a4 + 35);
  if ( (v15 & 8) == 0 )
    v14 = v15 & 7;
  if ( v14 < v13 )
  {
    v73 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v73 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v73);
      }
      while ( (*(_QWORD *)(a4 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) );
    }
    *(_BYTE *)(a4 + 35) ^= (*(_BYTE *)(a4 + 35) ^ v13) & 7;
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( v13 < 5 )
    v16 = v11 | 0xE00;
  else
    v16 = ((unsigned __int16)a5 ^ (unsigned __int16)v11) & 0xE00 ^ v11;
  v17 = (v16 >> 9) & 7;
  if ( ((v16 >> 9) & 7) != 0 )
  {
    ++*(_QWORD *)(a3 + 8LL * (unsigned int)(v17 - 1) + 40);
    if ( (_DWORD)v17 == 7 )
    {
      v31 = MiSystemPartition;
      if ( (*(_BYTE *)(a3 + 216) & 7) == 0 )
      {
        v32 = *(_WORD *)(a3 + 180);
        if ( v32 != 1023 )
          v31 = *(__int16 **)(qword_14034F0E8 + 8LL * v32);
      }
      v33 = *((_QWORD *)v31 + 657);
      if ( *(_QWORD *)(a3 + 88) >= *(_QWORD *)(v33 + 64) )
      {
        v34 = a3 + 24;
        if ( *(_QWORD *)(a3 + 24) )
        {
          v114 = (ULONG_PTR *)(v31 + 2632);
          if ( *((_QWORD *)v31 + 658) != v34 )
          {
            KeAcquireInStackQueuedSpinLockAtDpcLevel(&SpinLock, &LockHandle);
            if ( *(_BYTE *)(v33 + 53) || !*(_QWORD *)v34 )
            {
              *(_BYTE *)(v33 + 54) = 1;
            }
            else
            {
              v35 = *(_QWORD *)v34;
              v36 = *(_QWORD **)(a3 + 32);
              if ( *(_QWORD *)(*(_QWORD *)v34 + 8LL) != v34 || *v36 != v34 )
                __fastfail(3u);
              *v36 = v35;
              *(_QWORD *)(v35 + 8) = v36;
              v37 = *v114;
              *(_QWORD *)v34 = *v114;
              *(_QWORD *)(a3 + 32) = v114;
              if ( *(ULONG_PTR **)(v37 + 8) != v114 )
                __fastfail(3u);
              *(_QWORD *)(v37 + 8) = v34;
              *v114 = v34;
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
              goto LABEL_11;
            }
            _m_prefetchw(&LockHandle);
            Next = (__int64)LockHandle.LockQueue.Next;
            if ( !LockHandle.LockQueue.Next )
            {
              if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                   (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                   0LL,
                                                   (signed __int64)&LockHandle) == &LockHandle )
                goto LABEL_11;
              Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
            }
            LockHandle.LockQueue.Next = 0LL;
            _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
          }
        }
      }
    }
  }
LABEL_11:
  if ( (*(_QWORD *)(a4 + 40) & 0x200000000000000LL) == 0 )
  {
    *(_QWORD *)a4 = BugCheckParameter4;
    ++*(_QWORD *)(a3 + 128);
    if ( a2 + 0x98000000000LL > 0x7FFFFFFFFFLL )
      ++*(_QWORD *)(a3 + 112);
    *(_QWORD *)(BugCheckParameter4 * *(unsigned int *)(v5 + 64) + *(_QWORD *)(v5 + 496)) = a5 | v16 | 8;
    v29 = *(_QWORD *)(v5 + 496) + BugCheckParameter4 * *(unsigned int *)(v5 + 64);
    if ( *(_DWORD *)(v5 + 64) == 16 )
    {
      v63 = (__int64)(BugCheckParameter4 * *(unsigned int *)(v5 + 64)) >> 4;
      if ( v63 >= *(_QWORD *)(v5 + 8) )
      {
        v64 = *(_QWORD *)v29;
        v65 = 2 * ((unsigned int)(*(_QWORD *)v29 >> 9) & 7);
        v66 = *(_QWORD *)v29;
        if ( (*(_QWORD *)v29 & 0x800000000000LL) != 0 )
          v67 = v66 | 0xFFFF000000000000uLL;
        else
          v67 = v66 & 0xFFFFFFFFFFFFLL;
        if ( v67 < 0xFFFFF68000000000uLL
          || ((*(_QWORD *)v29 & 0x800000000000LL) == 0
            ? (v96 = v64 & 0xFFFFFFFFFFFFLL)
            : (v96 = v64 | 0xFFFF000000000000uLL),
              v96 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          v65 = (unsigned int)(v65 + 1);
        }
        v68 = (unsigned int)v65;
        v69 = 2 * (v65 + 15);
        v70 = *(_QWORD *)(v5 + 16 * (v65 + 15) + 8);
        *(_DWORD *)(v29 + 8) = -1;
        *(_DWORD *)(v29 + 12) = v70;
        *(_QWORD *)v29 = v64 ^ (v64 ^ (v70 << 20)) & 0xF0000000000000LL | 0xF000000000000LL;
        if ( v70 == 0xFFFFFFFFFLL )
        {
          *(_QWORD *)(v5 + 16 * (v65 + 15)) = v63;
        }
        else
        {
          v71 = *(_QWORD *)(v5 + 496) + 16 * v70;
          v72 = (*(_QWORD *)v71 ^ (v63 << 16)) & 0xF000000000000LL;
          *(_DWORD *)(v71 + 8) = v63;
          *(_QWORD *)v71 ^= v72;
        }
        *(_QWORD *)(v5 + 8 * v69 + 8) = v63;
        ++*(_QWORD *)(v5 + 8 * v68 + 112);
      }
    }
    return BugCheckParameter4;
  }
  if ( !*(_QWORD *)a4 && !_InterlockedCompareExchange64((volatile signed __int64 *)a4, BugCheckParameter4, 0LL) )
  {
    *(_QWORD *)(BugCheckParameter4 * *(unsigned int *)(v5 + 64) + *(_QWORD *)(v5 + 496)) = a5 | v16 | 8;
    v18 = *(_QWORD *)(v5 + 496) + BugCheckParameter4 * *(unsigned int *)(v5 + 64);
    if ( *(_DWORD *)(v5 + 64) == 16 )
    {
      v19 = (__int64)(BugCheckParameter4 * *(unsigned int *)(v5 + 64)) >> 4;
      if ( v19 >= *(_QWORD *)(v5 + 8) )
      {
        v20 = *(_QWORD *)v18;
        v21 = 2 * ((unsigned int)(*(_QWORD *)v18 >> 9) & 7);
        v22 = *(_QWORD *)v18;
        if ( (*(_QWORD *)v18 & 0x800000000000LL) != 0 )
          v23 = v22 | 0xFFFF000000000000uLL;
        else
          v23 = v22 & 0xFFFFFFFFFFFFLL;
        if ( v23 < 0xFFFFF68000000000uLL
          || ((*(_QWORD *)v18 & 0x800000000000LL) == 0
            ? (v97 = v20 & 0xFFFFFFFFFFFFLL)
            : (v97 = v20 | 0xFFFF000000000000uLL),
              v97 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          v21 = (unsigned int)(v21 + 1);
        }
        v24 = (unsigned int)v21;
        v25 = 2 * (v21 + 15);
        v26 = *(_QWORD *)(v5 + 16 * (v21 + 15) + 8);
        *(_DWORD *)(v18 + 8) = -1;
        *(_DWORD *)(v18 + 12) = v26;
        *(_QWORD *)v18 = v20 ^ (v20 ^ (v26 << 20)) & 0xF0000000000000LL | 0xF000000000000LL;
        if ( v26 == 0xFFFFFFFFFLL )
        {
          *(_QWORD *)(v5 + 8 * v25) = v19;
        }
        else
        {
          v27 = *(_QWORD *)(v5 + 496) + 16 * v26;
          v28 = (*(_QWORD *)v27 ^ (v19 << 16)) & 0xF000000000000LL;
          *(_DWORD *)(v27 + 8) = v19;
          *(_QWORD *)v27 ^= v28;
        }
        *(_QWORD *)(v5 + 8 * v25 + 8) = v19;
        ++*(_QWORD *)(v5 + 8 * v24 + 112);
      }
    }
    return BugCheckParameter4;
  }
  v39 = a5 | v16;
  *(_QWORD *)(BugCheckParameter4 * *(unsigned int *)(v5 + 64) + *(_QWORD *)(v5 + 496)) = v39;
  v40 = *(_QWORD *)(v5 + 496) + BugCheckParameter4 * *(unsigned int *)(v5 + 64);
  if ( *(_DWORD *)(v5 + 64) == 16 )
  {
    v126 = (__int64)(BugCheckParameter4 * *(unsigned int *)(v5 + 64)) >> 4;
    if ( v126 >= *(_QWORD *)(v5 + 8) )
    {
      v122 = *(_QWORD *)v40;
      v75 = 2 * ((*(_QWORD *)v40 >> 9) & 7);
      if ( (*(_QWORD *)v40 & 0x800000000000LL) != 0 )
        v76 = v122 | 0xFFFF000000000000uLL;
      else
        v76 = v122 & 0xFFFFFFFFFFFFLL;
      v77 = v76 < 0xFFFFF68000000000uLL;
      v78 = *(_QWORD *)v40;
      if ( v77
        || ((*(_QWORD *)v40 & 0x800000000000LL) == 0
          ? (v120 = v122 & 0xFFFFFFFFFFFFLL)
          : (v120 = v122 | 0xFFFF000000000000uLL),
            v120 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        ++v75;
      }
      v123 = v75;
      v116 = (unsigned __int64 *)(v5 + 16 * (v75 + 15LL));
      v79 = v116[1];
      *(_DWORD *)(v40 + 8) = -1;
      *(_DWORD *)(v40 + 12) = v79;
      *(_QWORD *)v40 = v78 ^ (v78 ^ (v79 << 20)) & 0xF0000000000000LL | 0xF000000000000LL;
      if ( v79 == 0xFFFFFFFFFLL )
      {
        v82 = v116;
        *v116 = v126;
      }
      else
      {
        v80 = *(_QWORD *)(v5 + 496) + 16 * v79;
        v81 = (*(_QWORD *)v80 ^ (v126 << 16)) & 0xF000000000000LL;
        *(_DWORD *)(v80 + 8) = v126;
        *(_QWORD *)v80 ^= v81;
        v82 = v116;
      }
      v82[1] = v126;
      ++*(_QWORD *)(v5 + 8 * v123 + 112);
    }
  }
  v41 = *(_QWORD *)a4;
  if ( *(_QWORD *)a4 == BugCheckParameter4 )
    return BugCheckParameter4;
  v42 = *(_QWORD *)(v5 + 32);
  if ( v41 > v42 || v41 < *(_QWORD *)(v5 + 8) )
  {
    MiUpdateWsleHash(a2, BugCheckParameter4, a3, 0);
    return BugCheckParameter4;
  }
  v43 = *(unsigned int *)(v5 + 64);
  v44 = *(_QWORD *)(v5 + 496);
  v45 = (unsigned __int64 *)(v44 + v41 * v43);
  v115 = *v45;
  if ( (*v45 & 1) != 0 )
  {
    MiSwapWslEntries(v41, BugCheckParameter4, a3);
    goto LABEL_50;
  }
  v46 = (unsigned __int64 *)((char *)v45 + v43);
  v47 = (_QWORD *)(v44 + v41 * *(unsigned int *)(v5 + 64) - v43);
  v48 = v115;
  if ( *(_QWORD *)v5 == v41 )
  {
    v50 = 0x7FFFFFFLL;
  }
  else
  {
    if ( v41 && (*v47 & 1) == 0 )
    {
      if ( *v47 >> 28 != v41 )
        goto LABEL_61;
      v50 = v41 - 1;
    }
    else
    {
      if ( v41 == v42 || (v49 = *v46, (v49 & 1) != 0) || v49 >> 28 != v41 )
      {
LABEL_61:
        v50 = (v115 >> 1) & 0x7FFFFFF;
        v51 = v50 * v43;
        v52 = v43 << 27;
        v53 = (_QWORD *)(v44 + v51);
        do
        {
          if ( (*v53 & 1) == 0 && *v53 >> 28 == v41 )
            break;
          v50 += 0x8000000LL;
          v53 = (_QWORD *)((char *)v53 + v52);
        }
        while ( v50 <= v42 );
        v43 = *(unsigned int *)(v5 + 64);
        v48 = v115;
        goto LABEL_65;
      }
      v50 = v41 + 1;
    }
    if ( v50 == 0xFFFFFFFFFLL )
      goto LABEL_61;
  }
LABEL_65:
  v54 = v48 >> 28;
  if ( *(_QWORD *)v5 == v41 )
  {
    *(_QWORD *)v5 = BugCheckParameter4;
  }
  else
  {
    v55 = v50 * v43;
    v56 = *(_QWORD *)(v55 + v44);
    if ( v56 >> 28 != v41 )
      KeBugCheckEx(0x1Au, 0x5005uLL, v5, v50, v41);
    *(_QWORD *)(v55 + v44) = (BugCheckParameter4 << 28) | v56 & 0xFFFFFFF;
  }
  v57 = *(_QWORD *)(v5 + 496);
  v58 = (__int64 *)(v57 + BugCheckParameter4 * *(unsigned int *)(v5 + 64));
  if ( *(_DWORD *)(v5 + 64) == 16
    && (unsigned __int64)((__int64)(BugCheckParameter4 * *(unsigned int *)(v5 + 64)) >> 4) >= *(_QWORD *)(v5 + 8) )
  {
    v117 = *v58;
    v111 = *((unsigned int *)v58 + 2) | ((unsigned __int64)*v58 >> 16) & 0xF00000000LL;
    v110 = *((unsigned int *)v58 + 3) | ((unsigned __int64)*v58 >> 20) & 0xF00000000LL;
    v83 = 2 * (((unsigned __int64)*v58 >> 9) & 7);
    if ( (v117 & 0x800000000000LL) != 0 )
      v84 = v117 | 0xFFFF000000000000uLL;
    else
      v84 = v117 & 0xFFFFFFFFFFFFLL;
    if ( v84 < 0xFFFFF68000000000uLL
      || ((v117 & 0x800000000000LL) == 0 ? (v121 = v117 & 0xFFFFFFFFFFFFLL) : (v121 = v117 | 0xFFFF000000000000uLL),
          v121 > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      ++v83;
    }
    v127 = v83;
    v118 = (__int64 *)(v5 + 16 * (v83 + 15LL));
    v85 = v111;
    v124 = v57 + 16 * v111;
    v86 = v57 + 16 * v110;
    if ( v110 == 0xFFFFFFFFFLL )
    {
      v87 = v118;
      *v118 = v111;
    }
    else
    {
      *(_QWORD *)v86 ^= (*(_QWORD *)v86 ^ (v111 << 16)) & 0xF000000000000LL;
      v85 = v111;
      *(_DWORD *)(v86 + 8) = v111;
      v87 = v118;
    }
    if ( v85 == 0xFFFFFFFFFLL )
    {
      v87[1] = v110;
    }
    else
    {
      *(_QWORD *)v124 ^= (*(_QWORD *)v124 ^ (v110 << 20)) & 0xF0000000000000LL;
      *(_DWORD *)(v124 + 12) = v110;
    }
    --*(_QWORD *)(v5 + 8 * v127 + 112);
  }
  *(_QWORD *)(BugCheckParameter4 * *(unsigned int *)(v5 + 64) + *(_QWORD *)(v5 + 496)) = 2
                                                                                       * ((v54 << 27) | v50 & 0x7FFFFFF);
  if ( v54 != 0xFFFFFFFFFLL )
  {
    v59 = (_QWORD *)(*(_QWORD *)(v5 + 496) + v54 * *(unsigned int *)(v5 + 64));
    *v59 ^= (*(_DWORD *)v59 ^ (2 * (_DWORD)BugCheckParameter4)) & 0xFFFFFFE;
  }
  *(_QWORD *)(v41 * *(unsigned int *)(v5 + 64) + *(_QWORD *)(v5 + 496)) = v39;
  v60 = *(_QWORD *)(v5 + 496) + v41 * *(unsigned int *)(v5 + 64);
  if ( *(_DWORD *)(v5 + 64) == 16 )
  {
    v88 = (__int64)(v41 * *(unsigned int *)(v5 + 64)) >> 4;
    if ( v88 >= *(_QWORD *)(v5 + 8) )
    {
      v89 = *(_QWORD *)v60;
      v90 = 2 * ((unsigned int)(*(_QWORD *)v60 >> 9) & 7);
      v125 = *(_QWORD *)v60 & 0x800000000000LL;
      if ( v125 )
        v91 = v89 | 0xFFFF000000000000uLL;
      else
        v91 = v89 & 0xFFFFFFFFFFFFLL;
      if ( v91 < 0xFFFFF68000000000uLL
        || (!v125 ? (v98 = v89 & 0xFFFFFFFFFFFFLL) : (v98 = *(_QWORD *)v60 | 0xFFFF000000000000uLL),
            v98 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        v90 = (unsigned int)(v90 + 1);
      }
      v119 = (unsigned int)v90;
      v92 = 2 * (v90 + 15);
      v93 = *(_QWORD *)(v5 + 16 * (v90 + 15) + 8);
      *(_DWORD *)(v60 + 8) = -1;
      *(_DWORD *)(v60 + 12) = v93;
      *(_QWORD *)v60 = v89 ^ (v89 ^ (v93 << 20)) & 0xF0000000000000LL | 0xF000000000000LL;
      if ( v93 == 0xFFFFFFFFFLL )
      {
        *(_QWORD *)(v5 + 8 * v92) = v88;
      }
      else
      {
        v94 = *(_QWORD *)(v5 + 496) + 16 * v93;
        v95 = (*(_QWORD *)v94 ^ (v88 << 16)) & 0xF000000000000LL;
        *(_DWORD *)(v94 + 8) = v88;
        *(_QWORD *)v94 ^= v95;
      }
      *(_QWORD *)(v5 + 8 * v92 + 8) = v88;
      ++*(_QWORD *)(v5 + 8 * v119 + 112);
    }
  }
  v61 = *(_QWORD *)v60;
  v62 = *(_QWORD *)(a3 + 184);
  if ( (v61 & 4) != 0 )
  {
    v99 = *(_QWORD *)(v62 + 88);
    if ( v99 && (v99 & 1) == 0 )
    {
      v100 = v61 & 0x800000000000LL;
      if ( (v61 & 1) != 0 )
      {
        if ( v100 )
          v101 = v61 | 0xFFFF000000000000uLL;
        else
          v101 = v61 & 0xFFFFFFFFFFFFLL;
        if ( (v101 & 0x800000000000LL) != 0 )
        {
          if ( v100 )
            v102 = v61 | 0xFFFF000000000000uLL;
          else
            v102 = v61 & 0xFFFFFFFFFFFFLL;
          v103 = v102 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL;
        }
        else
        {
          if ( v100 )
            v104 = v61 | 0xFFFF000000000000uLL;
          else
            v104 = v61 & 0xFFFFFFFFFFFFLL;
          v103 = v104 & 0xFFFFFFFFF000LL | 1;
        }
      }
      else
      {
        v103 = 0LL;
      }
      v105 = (unsigned __int8)(v103 >> 12);
      while ( 1 )
      {
        if ( v103 )
        {
          v106 = *(_QWORD *)(v99 + 16 * v105);
          if ( (v106 & 1) != 0 )
          {
            if ( (v106 & 0x800000000000LL) != 0 )
              v107 = v106 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL;
            else
              v107 = v106 & 0xFFFFFFFFF000LL | 1;
          }
          else
          {
            v107 = 0LL;
          }
          if ( v107 == v103 )
          {
LABEL_216:
            *(_QWORD *)(v99 + 16 * v105 + 8) = v41;
            goto LABEL_50;
          }
        }
        else if ( !*(_QWORD *)(v99 + 16 * v105) )
        {
          goto LABEL_216;
        }
        if ( (unsigned __int64)++v105 >= 0x100 )
          v105 = 0LL;
        if ( v105 == (unsigned __int8)(v103 >> 12) )
        {
          if ( v100 )
            v108 = v61 | 0xFFFF000000000000uLL;
          else
            v108 = v61 & 0xFFFFFFFFFFFFLL;
          KeBugCheckEx(0x1Au, 0x41282uLL, a3, v108, BugCheckParameter4);
        }
      }
    }
    if ( (v61 & 0x800000000000LL) != 0 )
      v109 = v61 | 0xFFFF000000000000uLL;
    else
      v109 = v61 & 0xFFFFFFFFFFFFLL;
    *(_QWORD *)MI_WSLE_HASH_VA(v62, v109, 0xF0000000000000LL, 0xF000000000000LL) = v41;
  }
LABEL_50:
  if ( v41 > *(_QWORD *)(v5 + 16) )
    *(_QWORD *)(v5 + 16) = v41;
  return v41;
}
