/*
 * XREFs of MiUpdateWsle @ 0x140056490
 * Callers:
 *     MiAllocateWsle @ 0x140055ED0 (MiAllocateWsle.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     MiSwapWslEntries @ 0x140057020 (MiSwapWslEntries.c)
 *     MiUpdateWsleHash @ 0x14005A900 (MiUpdateWsleHash.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiLocateIndirectHash @ 0x1400C8250 (MiLocateIndirectHash.c)
 *     MI_WSLE_HASH_VA @ 0x1400E5824 (MI_WSLE_HASH_VA.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiUpdateWsle(
        ULONG_PTR BugCheckParameter4,
        unsigned __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        __int64 a5)
{
  ULONG_PTR v5; // r15
  ULONG_PTR v9; // r12
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v11; // rbx
  unsigned int Queue_high; // edi
  unsigned int v13; // edi
  unsigned int v14; // ecx
  char v15; // al
  unsigned __int64 v16; // r13
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // r8
  ULONG_PTR v20; // rcx
  unsigned __int64 v21; // r9
  __int64 v22; // r11
  __int64 v23; // rdx
  __int64 v24; // r10
  unsigned __int64 v25; // r10
  unsigned __int64 v27; // rbx
  ULONG_PTR v28; // rcx
  ULONG_PTR v29; // rdi
  ULONG_PTR v30; // rax
  __int64 v31; // r8
  __int64 v32; // rbp
  unsigned __int64 *v33; // rcx
  unsigned __int64 v34; // r9
  int *v35; // rdx
  unsigned __int16 v36; // cx
  __int64 v37; // rdi
  _QWORD *v38; // r14
  unsigned __int64 v39; // rcx
  _QWORD *v40; // rdx
  ULONG_PTR v41; // rdx
  _QWORD *v42; // r14
  unsigned __int64 v43; // r9
  ULONG_PTR v44; // r8
  unsigned __int64 v45; // rax
  ULONG_PTR v46; // rcx
  __int64 v47; // r8
  _QWORD *v48; // rdx
  ULONG_PTR v49; // rbx
  unsigned __int64 v50; // rbx
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // r10
  unsigned __int64 v54; // r10
  __int64 v55; // r8
  __int64 v56; // r8
  __int64 v57; // rdx
  unsigned __int64 v58; // rdi
  bool v59; // cf
  __int64 v60; // rdi
  __int64 v61; // r8
  unsigned __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rax
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rbp
  __int64 v67; // rax
  __int64 v68; // r8
  unsigned __int64 v69; // r8
  __int64 v70; // rax
  unsigned int v71; // ecx
  unsigned __int64 v72; // rax
  __int64 v73; // rcx
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rcx
  unsigned __int64 v76; // r9
  unsigned __int64 v77; // rax
  __int64 v78; // rcx
  unsigned __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rax
  ULONG_PTR v85; // rax
  __int64 v86; // rdx
  _QWORD *v87; // rcx
  _QWORD *v88; // rcx
  __int64 v89; // rdx
  unsigned __int64 v90; // r8
  unsigned __int64 v91; // r8
  unsigned __int64 v92; // r8
  unsigned __int64 v93; // rdx
  __int64 v94; // rax
  __int64 v95; // r8
  unsigned __int64 v96; // rdx
  unsigned __int64 v97; // r13
  unsigned __int64 v98; // r13
  __int64 IndirectHash; // rdx
  ULONG_PTR v100; // rbx
  unsigned __int64 v101; // rbx
  __int64 v102; // [rsp+30h] [rbp-78h]
  __int64 v103; // [rsp+38h] [rbp-70h]
  __int64 v104; // [rsp+40h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v107; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v108; // [rsp+C0h] [rbp+18h]
  unsigned __int64 v109; // [rsp+C8h] [rbp+20h]

  v5 = *(_QWORD *)(a3 + 184);
  v9 = BugCheckParameter4;
  if ( (LONG *)a3 == &dword_1402FFA80 )
  {
    if ( PsNtosImageBase
      && (a2 >= (unsigned __int64)PsNtosImageBase && a2 < PsNtosImageEnd
       || a2 >= (unsigned __int64)PsHalImageBase && a2 < PsHalImageEnd) )
    {
      LODWORD(xmmword_1402FE598) = xmmword_1402FE598 + 1;
    }
    else if ( a2 + 0x80000000000LL <= 0x7FFFFFFFFFLL )
    {
      ++DWORD1(xmmword_1402FE598);
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
      v52 = 2;
      if ( v13 < 2 )
        v52 = v13;
      v13 = v52;
    }
  }
  v14 = 5;
  if ( a2 + 0x98000000000LL <= 0x7FFFFFFFFFLL && v13 <= 5 )
    v13 = 5;
  v15 = *(_BYTE *)(a4 + 35);
  if ( (v15 & 8) == 0 )
    v14 = v15 & 7;
  v16 = 0LL;
  if ( v14 < v13 )
  {
    LODWORD(v107) = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v107);
        while ( (*(_QWORD *)(a4 + 24) & 0x8000000000000000uLL) != 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) );
      v9 = BugCheckParameter4;
    }
    *(_BYTE *)(a4 + 35) ^= (*(_BYTE *)(a4 + 35) ^ v13) & 7;
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v17 = a5;
  if ( v13 < 5 )
    v18 = a2 & 0xFFFFFFFFFFFFF000uLL | 0xE01;
  else
    v18 = ((unsigned __int16)a5 ^ (unsigned __int16)v11) & 0xE00 ^ v11;
  v19 = (v18 >> 9) & 7;
  if ( ((v18 >> 9) & 7) != 0 )
  {
    ++*(_QWORD *)(a3 + 8LL * (unsigned int)(v19 - 1) + 40);
    if ( (_DWORD)v19 == 7 )
    {
      v35 = &MiSystemPartition;
      if ( (*(_BYTE *)(a3 + 216) & 7) == 0 )
      {
        v36 = *(_WORD *)(a3 + 180);
        if ( v36 != 1023 )
          v35 = *(int **)(qword_1402FEC28 + 8LL * v36);
      }
      v37 = *((_QWORD *)v35 + 702);
      if ( *(_QWORD *)(a3 + 88) >= *(_QWORD *)(v37 + 64) )
      {
        if ( *(_QWORD *)(a3 + 24) )
        {
          v108 = (__int64)(v35 + 1406);
          if ( *((_QWORD *)v35 + 703) != a3 + 24 )
          {
            KeAcquireInStackQueuedSpinLockAtDpcLevel(&SpinLock, &LockHandle);
            if ( *(_BYTE *)(v37 + 53) || (v85 = a3 + 24, !*(_QWORD *)(a3 + 24)) )
            {
              *(_BYTE *)(v37 + 54) = 1;
              KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
              v17 = a5;
            }
            else
            {
              v86 = *(_QWORD *)v85;
              v87 = *(_QWORD **)(a3 + 32);
              if ( *(_QWORD *)(*(_QWORD *)v85 + 8LL) != v85 || *v87 != v85 )
                __fastfail(3u);
              *v87 = v86;
              *(_QWORD *)(v86 + 8) = v87;
              v88 = (_QWORD *)v108;
              v89 = *(_QWORD *)v108;
              *(_QWORD *)v85 = *(_QWORD *)v108;
              *(_QWORD *)(a3 + 32) = v88;
              if ( *(_QWORD **)(v89 + 8) != v88 )
                __fastfail(3u);
              *(_QWORD *)(v89 + 8) = v85;
              *v88 = v85;
              KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
              v17 = a5;
            }
          }
        }
      }
    }
  }
  if ( (*(_QWORD *)(a4 + 40) & 0x200000000000000LL) == 0 )
  {
    *(_QWORD *)a4 = v9;
    ++*(_QWORD *)(a3 + 128);
    if ( a2 + 0x98000000000LL > 0x7FFFFFFFFFLL )
      ++*(_QWORD *)(a3 + 112);
    *(_QWORD *)(v9 * *(unsigned int *)(v5 + 64) + *(_QWORD *)(v5 + 496)) = v17 | v18 | 8;
    v20 = *(_QWORD *)(v5 + 496) + v9 * *(unsigned int *)(v5 + 64);
    if ( *(_DWORD *)(v5 + 64) != 16 )
      return v9;
    v21 = (__int64)(v9 * *(unsigned int *)(v5 + 64)) >> 4;
    if ( v21 < *(_QWORD *)(v5 + 8) )
      return v9;
    v22 = *(_QWORD *)v20;
    v23 = 2 * ((unsigned int)(*(_QWORD *)v20 >> 9) & 7);
    v53 = *(_QWORD *)v20;
    if ( (*(_QWORD *)v20 & 0x800000000000LL) != 0 )
      v54 = v53 | 0xFFFF000000000000uLL;
    else
      v54 = v53 & 0xFFFFFFFFFFFFLL;
    if ( v54 >= 0xFFFFF68000000000uLL )
    {
      v90 = (*(_QWORD *)v20 & 0x800000000000LL) != 0 ? v22 | 0xFFFF000000000000uLL : v22 & 0xFFFFFFFFFFFFLL;
      if ( v90 <= 0xFFFFF6FFFFFFFFFFuLL )
        goto LABEL_88;
    }
LABEL_87:
    v23 = (unsigned int)(v23 + 1);
LABEL_88:
    v55 = *(_QWORD *)(v5 + 16 * (v23 + 15) + 8);
    *(_DWORD *)(v20 + 8) = -1;
    *(_QWORD *)v20 = v22 ^ (v22 ^ (v55 << 20)) & 0xF0000000000000LL | 0xF000000000000LL;
    *(_DWORD *)(v20 + 12) = v55;
    if ( v55 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(v5 + 16 * (v23 + 15)) = v21;
    }
    else
    {
      v56 = *(_QWORD *)(v5 + 496) + 16 * v55;
      *(_QWORD *)v56 ^= (*(_QWORD *)v56 ^ (v21 << 16)) & 0xF000000000000LL;
      *(_DWORD *)(v56 + 8) = v21;
    }
    *(_QWORD *)(v5 + 16 * (v23 + 15) + 8) = v21;
    ++*(_QWORD *)(v5 + 8LL * (unsigned int)v23 + 112);
    return v9;
  }
  if ( !*(_QWORD *)a4 )
  {
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)a4, v9, 0LL) )
    {
      *(_QWORD *)(v9 * *(unsigned int *)(v5 + 64) + *(_QWORD *)(v5 + 496)) = a5 | v18 | 8;
      v20 = *(_QWORD *)(v5 + 496) + v9 * *(unsigned int *)(v5 + 64);
      if ( *(_DWORD *)(v5 + 64) == 16 )
      {
        v21 = (__int64)(v9 * *(unsigned int *)(v5 + 64)) >> 4;
        if ( v21 >= *(_QWORD *)(v5 + 8) )
        {
          v22 = *(_QWORD *)v20;
          v23 = 2 * ((unsigned int)(*(_QWORD *)v20 >> 9) & 7);
          v24 = *(_QWORD *)v20;
          if ( (*(_QWORD *)v20 & 0x800000000000LL) != 0 )
            v25 = v24 | 0xFFFF000000000000uLL;
          else
            v25 = v24 & 0xFFFFFFFFFFFFLL;
          if ( v25 >= 0xFFFFF68000000000uLL )
          {
            v91 = (*(_QWORD *)v20 & 0x800000000000LL) != 0 ? v22 | 0xFFFF000000000000uLL : v22 & 0xFFFFFFFFFFFFLL;
            if ( v91 <= 0xFFFFF6FFFFFFFFFFuLL )
              goto LABEL_88;
          }
          goto LABEL_87;
        }
      }
      return v9;
    }
    v17 = a5;
  }
  v27 = v17 | v18;
  *(_QWORD *)(v9 * *(unsigned int *)(v5 + 64) + *(_QWORD *)(v5 + 496)) = v27;
  v28 = *(_QWORD *)(v5 + 496) + v9 * *(unsigned int *)(v5 + 64);
  if ( *(_DWORD *)(v5 + 64) == 16 )
  {
    v109 = (__int64)(v9 * *(unsigned int *)(v5 + 64)) >> 4;
    if ( v109 >= *(_QWORD *)(v5 + 8) )
    {
      v107 = *(_QWORD *)v28;
      v108 = v107;
      v57 = 2 * ((unsigned int)(v107 >> 9) & 7);
      v107 &= 0x800000000000uLL;
      if ( v107 )
        v58 = v108 | 0xFFFF000000000000uLL;
      else
        v58 = v108 & 0xFFFFFFFFFFFFLL;
      v59 = v58 < 0xFFFFF68000000000uLL;
      v60 = v108;
      if ( v59
        || (!v107 ? (v92 = v108 & 0xFFFFFFFFFFFFLL) : (v92 = v108 | 0xFFFF000000000000uLL), v92 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        v57 = (unsigned int)(v57 + 1);
      }
      v107 = (unsigned int)v57;
      v61 = *(_QWORD *)(v5 + 16 * (v57 + 15) + 8);
      *(_DWORD *)(v28 + 8) = -1;
      *(_DWORD *)(v28 + 12) = v61;
      *(_QWORD *)v28 = v60 ^ (v60 ^ (v61 << 20)) & 0xF0000000000000LL | 0xF000000000000LL;
      v62 = v109;
      if ( v61 == 0xFFFFFFFFFLL )
      {
        *(_QWORD *)(v5 + 16 * (v57 + 15)) = v109;
      }
      else
      {
        v63 = *(_QWORD *)(v5 + 496) + 16 * v61;
        v64 = (*(_QWORD *)v63 ^ (v109 << 16)) & 0xF000000000000LL;
        *(_DWORD *)(v63 + 8) = v109;
        *(_QWORD *)v63 ^= v64;
      }
      v65 = v107;
      *(_QWORD *)(v5 + 16 * (v57 + 15) + 8) = v62;
      ++*(_QWORD *)(v5 + 8 * v65 + 112);
    }
  }
  v29 = *(_QWORD *)a4;
  if ( *(_QWORD *)a4 == v9 )
    return v9;
  v30 = *(_QWORD *)(v5 + 32);
  if ( v29 > v30 || v29 < *(_QWORD *)(v5 + 8) )
  {
    MiUpdateWsleHash(a2, v9, a3, 0LL);
    return v9;
  }
  v31 = *(unsigned int *)(v5 + 64);
  v32 = *(_QWORD *)(v5 + 496);
  v33 = (unsigned __int64 *)(v32 + v29 * v31);
  v34 = *v33;
  v109 = v34;
  if ( (v34 & 1) == 0 )
  {
    v38 = (unsigned __int64 *)((char *)v33 + v31);
    v39 = *(_QWORD *)v5;
    v40 = (_QWORD *)(v32 + v29 * v31 - v31);
    v107 = v39;
    if ( v39 == v29 )
    {
      v41 = 0x7FFFFFFLL;
      goto LABEL_56;
    }
    if ( v29 && (*v40 & 1) == 0 )
    {
      if ( *v40 >> 28 != v29 )
        goto LABEL_51;
      v41 = v29 - 1;
    }
    else
    {
      if ( v29 == v30 || (*v38 & 1) != 0 || *v38 >> 28 != v29 )
        goto LABEL_51;
      v41 = v29 + 1;
    }
    if ( v41 != 0xFFFFFFFFFLL )
    {
LABEL_55:
      v39 = v107;
LABEL_56:
      v43 = v34 >> 28;
      if ( v39 == v29 )
      {
        *(_QWORD *)v5 = v9;
      }
      else
      {
        v44 = v41 * v31;
        v45 = *(_QWORD *)(v44 + v32);
        if ( v45 >> 28 != v29 )
          KeBugCheckEx(0x1Au, 0x5005uLL, v5, v41, v29);
        *(_QWORD *)(v44 + v32) = (v9 << 28) | v45 & 0xFFFFFFF;
      }
      v104 = *(_QWORD *)(v5 + 496);
      v46 = v104 + v9 * *(unsigned int *)(v5 + 64);
      if ( *(_DWORD *)(v5 + 64) == 16
        && (unsigned __int64)((__int64)(v9 * *(unsigned int *)(v5 + 64)) >> 4) >= *(_QWORD *)(v5 + 8) )
      {
        v66 = *(_QWORD *)v46;
        v67 = *(unsigned int *)(v46 + 8);
        v68 = (*(_QWORD *)v46 >> 16) & 0xF00000000LL;
        v107 = v66;
        v69 = v67 | v68;
        v70 = *(unsigned int *)(v46 + 12);
        v109 = v69;
        v71 = 2 * ((v66 >> 9) & 7);
        v108 = v70 | (v66 >> 20) & 0xF00000000LL;
        if ( (v66 & 0x800000000000LL) != 0 )
          v72 = v66 | 0xFFFF000000000000uLL;
        else
          v72 = v66 & 0xFFFFFFFFFFFFLL;
        v47 = 0xFFFFF68000000000uLL;
        if ( v72 < 0xFFFFF68000000000uLL
          || ((v66 & 0x800000000000LL) == 0 ? (v107 &= 0xFFFFFFFFFFFFuLL) : (v107 |= 0xFFFF000000000000uLL),
              v107 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          ++v71;
        }
        v103 = v71;
        v102 = v104 + 16 * v109;
        v73 = v104 + 16 * v108;
        v107 = v5 + 16 * (v103 + 15);
        v74 = v109;
        if ( v108 == 0xFFFFFFFFFLL )
        {
          v75 = v107;
          *(_QWORD *)v107 = v109;
        }
        else
        {
          *(_QWORD *)v73 ^= (*(_QWORD *)v73 ^ (v109 << 16)) & 0xF000000000000LL;
          v74 = v109;
          *(_DWORD *)(v73 + 8) = v109;
          v75 = v107;
        }
        if ( v74 == 0xFFFFFFFFFLL )
        {
          *(_QWORD *)(v75 + 8) = v108;
        }
        else
        {
          *(_QWORD *)v102 ^= (*(_QWORD *)v102 ^ (v108 << 20)) & 0xF0000000000000LL;
          *(_DWORD *)(v102 + 12) = v108;
        }
        --*(_QWORD *)(v5 + 8 * v103 + 112);
      }
      else
      {
        v47 = 0xFFFFF68000000000uLL;
      }
      *(_QWORD *)(v9 * *(unsigned int *)(v5 + 64) + *(_QWORD *)(v5 + 496)) = 2 * ((v43 << 27) | v41 & 0x7FFFFFF);
      if ( v43 != 0xFFFFFFFFFLL )
      {
        v48 = (_QWORD *)(*(_QWORD *)(v5 + 496) + v43 * *(unsigned int *)(v5 + 64));
        *v48 ^= (*(_DWORD *)v48 ^ (2 * (_DWORD)v9)) & 0xFFFFFFE;
      }
      *(_QWORD *)(v29 * *(unsigned int *)(v5 + 64) + *(_QWORD *)(v5 + 496)) = v27;
      v49 = *(_QWORD *)(v5 + 496) + v29 * *(unsigned int *)(v5 + 64);
      if ( *(_DWORD *)(v5 + 64) == 16 )
      {
        v76 = (__int64)(v29 * *(unsigned int *)(v5 + 64)) >> 4;
        if ( v76 >= *(_QWORD *)(v5 + 8) )
        {
          v107 = *(_QWORD *)v49;
          v77 = v107;
          v78 = 2 * ((unsigned int)(v107 >> 9) & 7);
          v108 = v107 & 0x800000000000LL;
          if ( (v107 & 0x800000000000LL) != 0 )
          {
            v79 = v107 | 0xFFFF000000000000uLL;
            v77 = v107;
          }
          else
          {
            v79 = v107 & 0xFFFFFFFFFFFFLL;
          }
          if ( v79 < 0xFFFFF68000000000uLL
            || (!v108 ? (v93 = v77 & 0xFFFFFFFFFFFFLL) : (v93 = v77 | 0xFFFF000000000000uLL), v93 > 0xFFFFF6FFFFFFFFFFuLL) )
          {
            v78 = (unsigned int)(v78 + 1);
          }
          v108 = (unsigned int)v78;
          v47 = 2 * (v78 + 15);
          v80 = *(_QWORD *)(v5 + 16 * (v78 + 15) + 8);
          *(_DWORD *)(v49 + 8) = -1;
          v81 = (v107 ^ (v80 << 20)) & 0xF0000000000000LL;
          *(_DWORD *)(v49 + 12) = v80;
          *(_QWORD *)v49 = v107 ^ v81 | 0xF000000000000LL;
          if ( v80 == 0xFFFFFFFFFLL )
          {
            *(_QWORD *)(v5 + 16 * (v78 + 15)) = v76;
          }
          else
          {
            v82 = *(_QWORD *)(v5 + 496) + 16 * v80;
            v83 = (*(_QWORD *)v82 ^ (v76 << 16)) & 0xF000000000000LL;
            *(_DWORD *)(v82 + 8) = v76;
            *(_QWORD *)v82 ^= v83;
          }
          v84 = v108;
          *(_QWORD *)(v5 + 16 * (v78 + 15) + 8) = v76;
          ++*(_QWORD *)(v5 + 8 * v84 + 112);
        }
      }
      v50 = *(_QWORD *)v49;
      v51 = *(_QWORD *)(a3 + 184);
      if ( (v50 & 4) != 0 )
      {
        v94 = *(_QWORD *)(v51 + 88);
        v108 = v94;
        if ( !v94 || (v94 & 1) != 0 )
        {
          if ( (v50 & 0x800000000000LL) != 0 )
            v101 = v50 | 0xFFFF000000000000uLL;
          else
            v101 = v50 & 0xFFFFFFFFFFFFLL;
          *(_QWORD *)MI_WSLE_HASH_VA(v51, v101, v47) = v29;
        }
        else
        {
          v95 = v50 & 0x800000000000LL;
          v107 = v50 & 0x800000000000LL;
          if ( (v50 & 1) != 0 )
          {
            if ( v95 )
              v96 = v50 | 0xFFFF000000000000uLL;
            else
              v96 = v50 & 0xFFFFFFFFFFFFLL;
            if ( (v96 & 0x800000000000LL) != 0 )
            {
              if ( v95 )
                v97 = v50 | 0xFFFF000000000000uLL;
              else
                v97 = v50 & 0xFFFFFFFFFFFFLL;
              v16 = v97 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL;
            }
            else
            {
              if ( v95 )
                v98 = v50 | 0xFFFF000000000000uLL;
              else
                v98 = v50 & 0xFFFFFFFFFFFFLL;
              v16 = v98 & 0xFFFFFFFFF000LL | 1;
            }
          }
          IndirectHash = MiLocateIndirectHash(v51, v16, (unsigned __int8)(v16 >> 12));
          if ( IndirectHash == 0xFFFFFFFFFLL )
          {
            if ( v107 )
              v100 = v50 | 0xFFFF000000000000uLL;
            else
              v100 = v50 & 0xFFFFFFFFFFFFLL;
            KeBugCheckEx(0x1Au, 0x41282uLL, a3, v100, v9);
          }
          *(_QWORD *)(v108 + 16 * IndirectHash + 8) = v29;
        }
      }
      goto LABEL_31;
    }
LABEL_51:
    v41 = (v34 >> 1) & 0x7FFFFFF;
    v42 = (_QWORD *)(v32 + v41 * v31);
    do
    {
      if ( (*v42 & 1) == 0 && *v42 >> 28 == v29 )
        break;
      v41 += 0x8000000LL;
      v42 += 0x1000000 * v31;
    }
    while ( v41 <= v30 );
    v34 = v109;
    goto LABEL_55;
  }
  MiSwapWslEntries(v29, v9, a3);
LABEL_31:
  if ( v29 > *(_QWORD *)(v5 + 16) )
    *(_QWORD *)(v5 + 16) = v29;
  return v29;
}
