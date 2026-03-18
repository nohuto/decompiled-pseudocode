/*
 * XREFs of ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004E540
 * Callers:
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C003DBCC (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@KPEAVDXGADAPTERALLOCATION@@PEAXPEAPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C004FB54 (-CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0051730 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C0060494 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00117CC (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1C00120EC (--_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0012DEC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0013374 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     Template_pppqxqqqqqqqpppqqqqqqqqqqtp @ 0x1C0015608 (Template_pppqxqqqqqqqpppqqqqqqqqqqtp.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x1C001C28C (-ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z.c)
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C001C2A8 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C004A8F4 (-VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 *     ?VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C0079B30 (-VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreateOneAllocation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        unsigned __int64 a11,
        PVOID Object,
        unsigned __int64 a13,
        int a14,
        char a15,
        unsigned __int64 a16,
        unsigned __int64 **a17)
{
  int v17; // ebx
  bool v18; // zf
  unsigned int v19; // esi
  __int64 v21; // r15
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 CurrentProcess; // rax
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // eax
  unsigned int v30; // r12d
  __int64 v31; // rax
  __int64 v32; // rax
  _DWORD *v33; // rdi
  _DWORD *v34; // rsi
  unsigned int v35; // r14d
  int v36; // eax
  int v37; // r10d
  unsigned int v38; // r8d
  __int64 v39; // r9
  int v40; // edx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned int v47; // r10d
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // rcx
  unsigned __int64 v53; // r11
  int v54; // r10d
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // rcx
  __int64 v60; // rdi
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rcx
  unsigned int v64; // esi
  char v65; // r14
  __int64 v66; // rcx
  __int64 v67; // rcx
  char v68; // di
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  unsigned int v72; // ebx
  __int64 v73; // rcx
  struct DXGPROCESS *Current; // rax
  unsigned __int64 *v75; // rax
  __int64 v76; // rcx
  unsigned __int64 *v77; // rdi
  struct _KEVENT *v78; // rax
  __int64 v79; // rcx
  struct _KEVENT *v80; // rbx
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  NTSTATUS v85; // ebx
  _QWORD *v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // r8
  __int64 v90; // r9
  _QWORD *v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  unsigned __int64 v95; // rbx
  unsigned __int64 v96; // rsi
  unsigned __int64 v97; // r14
  _QWORD *v98; // rax
  __int64 v99; // rbx
  PVOID *v100; // rsi
  _QWORD *v101; // rcx
  int v102; // eax
  PVOID v103; // rcx
  __int64 v104; // rdx
  ULONG_PTR v105; // rax
  unsigned int *v106; // rcx
  _DWORD *v107; // r8
  int v108; // r14d
  int v109; // eax
  __int64 v110; // rcx
  int v111; // eax
  int v112; // eax
  int v113; // edx
  unsigned int v114; // edx
  __int64 v115; // r13
  _DWORD *v116; // rbx
  unsigned int v117; // r8d
  char v118; // r11
  unsigned int v119; // edx
  unsigned int v120; // r8d
  char v121; // r9
  int v122; // edx
  __int64 v123; // r8
  int v124; // r8d
  int v125; // eax
  unsigned int v126; // eax
  unsigned int v127; // eax
  int v128; // eax
  _DWORD *v129; // rax
  __int64 v130; // rdx
  __int64 v131; // r8
  __int64 v132; // rcx
  __int64 v133; // r9
  unsigned __int64 v134; // rsi
  unsigned int *v135; // rbx
  __int64 v136; // r14
  __int64 v137; // rcx
  unsigned int v138; // edx
  __int64 v139; // r8
  unsigned int v140; // r9d
  unsigned int v141; // r10d
  unsigned int v142; // r11d
  unsigned int v143; // r12d
  unsigned int v144; // ebx
  unsigned __int64 v145; // rdx
  __int64 v146; // rcx
  void *v147; // rcx
  void *v148; // rcx
  unsigned __int64 v149; // rax
  VIDMM_FLIP_QUEUE_REFERENCES *v150; // rcx
  DXGFASTMUTEX *v151; // rcx
  __int64 v152; // rax
  int v153; // [rsp+48h] [rbp-128h]
  int v154; // [rsp+60h] [rbp-110h]
  char v155; // [rsp+80h] [rbp-F0h]
  char v156; // [rsp+F0h] [rbp-80h]
  char v157; // [rsp+F1h] [rbp-7Fh]
  unsigned __int8 v158; // [rsp+F2h] [rbp-7Eh]
  unsigned int v159; // [rsp+F4h] [rbp-7Ch] BYREF
  unsigned __int64 v160; // [rsp+F8h] [rbp-78h]
  ULONG_PTR ViewSize; // [rsp+100h] [rbp-70h] BYREF
  __int64 CurrentProcessId; // [rsp+108h] [rbp-68h] BYREF
  __int64 v163; // [rsp+110h] [rbp-60h]
  __int64 v164; // [rsp+118h] [rbp-58h]
  unsigned int v167; // [rsp+180h] [rbp+10h]

  v17 = a10;
  v18 = *(_DWORD *)(a1 + 6416) == 1;
  v19 = a3;
  ViewSize = 0LL;
  if ( v18 )
    v19 = 0;
  v21 = a1;
  v22 = 114LL * v19;
  v167 = v19;
  v163 = v22 * 4 + *(_QWORD *)(a1 + 40048);
  v164 = v22 * 4;
  *a17 = 0LL;
  if ( *(_DWORD *)(a1 + 32) < 0x5023u && (a10 & 0x40000) != 0 )
  {
    v23 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v23 + 24) = 2091LL;
    WdLogEvent5_WdAssertion(v23);
    return 3221225485LL;
  }
  if ( (a10 & 1) == 0 || (v158 = 1, (a10 & 0x40000) != 0) )
    v158 = 0;
  if ( *(_BYTE *)(a1 + 40008)
    || (CurrentProcess = PsGetCurrentProcess(), v17 = a10, !PsGetProcessWow64Process(CurrentProcess)) )
  {
    if ( (v17 & 0x20000000) == 0
      && (v17 & 0x40000000) == 0
      && v17 >= 0
      && (v17 & 0x10000000) == 0
      && (v17 & 8) == 0
      && (v17 & 0x400000) == 0
      && !a16 )
    {
      v17 &= ~0x40000u;
      v158 = 1;
      a10 = v17;
    }
  }
  v26 = 0LL;
  do
  {
    v27 = (unsigned int)v26;
    v28 = (a9 >> v26) & 0x1F;
    if ( ((a9 >> v26) & 0x1F) != 0 )
    {
      v28 = (unsigned __int8)(((a9 >> v26) & 0x1F) - 1);
      v27 = ~a7;
      if ( _bittest((const int *)&v27, v28) )
      {
        v31 = WdLogNewEntry5_WdAssertion(v27, v28, v26, a4);
        *(_QWORD *)(v31 + 24) = 2154LL;
        WdLogEvent5_WdAssertion(v31);
        return 3221225485LL;
      }
    }
    v26 = (unsigned int)(v26 + 6);
  }
  while ( (unsigned int)v26 < 0x1E );
  if ( !dword_1C002F3F8 || (v17 & 1) != 0 )
  {
    v30 = a7;
  }
  else
  {
    v29 = a9 & 0x1F;
    if ( (a9 & 0x1F) != 0 )
    {
      v27 = (unsigned int)(v29 - 1);
      v30 = 1 << (v29 - 1);
      a7 = v30;
    }
    else if ( VIDMM_GLOBAL::VerifySegmentSetAtLeastOneInMask((VIDMM_GLOBAL *)v21, v19, a7, 0x1001u, &v159) )
    {
      v30 = a7;
    }
    else
    {
      v30 = v159;
      a7 = v159;
    }
  }
  if ( !a4 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v27, v28, v26, a4);
    *(_QWORD *)(v32 + 24) = 2195LL;
    goto LABEL_392;
  }
  if ( (v17 & 0x800) != 0 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v27, v28, v26, a4);
    *(_QWORD *)(v32 + 24) = 2203LL;
    goto LABEL_392;
  }
  if ( (v17 & 0x1000) != 0 || (v17 & 0x2000) != 0 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v27, v28, v26, a4);
    *(_QWORD *)(v32 + 24) = 2209LL;
    goto LABEL_392;
  }
  v33 = *(_DWORD **)(v21 + 40048);
  v34 = &v33[v22];
  if ( (~v33[v22] & v30) != 0 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v27, v28, v26, a4);
    *(_QWORD *)(v32 + 24) = 2219LL;
    goto LABEL_392;
  }
  v35 = v34[1];
  v36 = ~*v33;
  LODWORD(v160) = 0x10000;
  v37 = 0;
  v38 = v30;
  v39 = v35;
  if ( (v36 & v30) != 0 )
  {
    LOBYTE(v39) = 0;
  }
  else
  {
    if ( !v30 )
      goto LABEL_50;
    v40 = 1;
    do
    {
      if ( (v38 & 1) != 0 )
      {
        v27 = *(_QWORD *)(*(_QWORD *)(v21 + 3712) + 8LL * (unsigned int)v39);
        if ( (*(_DWORD *)(v27 + 56) & 0x1001) == 0 )
          v37 |= v40;
      }
      v40 = __ROL4__(v40, 1);
      v39 = (unsigned int)(v39 + 1);
      v38 >>= 1;
    }
    while ( v38 );
    if ( v37 )
      LOBYTE(v39) = 0;
    else
LABEL_50:
      v39 = 1LL;
  }
  v41 = v30;
  v156 = v39;
  v42 = v35;
  if ( (~*v34 & v30) != 0 || !v30 )
  {
LABEL_56:
    v157 = 0;
  }
  else
  {
    while ( 1 )
    {
      if ( (v41 & 1) != 0 )
      {
        v27 = *(_QWORD *)(*(_QWORD *)(v21 + 3712) + 8LL * (unsigned int)v42);
        if ( (*(_DWORD *)(v27 + 56) & 0x1001) != 0 )
          break;
      }
      v42 = (unsigned int)(v42 + 1);
      v41 = (unsigned int)v41 >> 1;
      if ( !(_DWORD)v41 )
        goto LABEL_56;
    }
    v157 = 1;
  }
  if ( (v17 & 0x40000) != 0 )
  {
    if ( (v17 & 1) == 0 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v27, v41, v42, v39);
      *(_QWORD *)(v32 + 24) = 2245LL;
      goto LABEL_392;
    }
    if ( (v17 & 2) != 0 || (v17 & 0x20) != 0 || (v17 & 0x10) != 0 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v27, v41, v42, v39);
      *(_QWORD *)(v32 + 24) = 2257LL;
      goto LABEL_392;
    }
    if ( !(_BYTE)v39 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v27, v41, v42, v39);
      *(_QWORD *)(v32 + 24) = 2263LL;
      goto LABEL_392;
    }
  }
  if ( (v17 & 0x20000) != 0 )
  {
    if ( !VIDMM_GLOBAL::VerifySegmentSet((VIDMM_GLOBAL *)v21, v167, v30, 0x10000, 0LL) )
    {
      v32 = WdLogNewEntry5_WdAssertion(v44, v43, v45, v46);
      *(_QWORD *)(v32 + 24) = 2272LL;
      goto LABEL_392;
    }
    if ( v157 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v44, v43, v45, v46);
      *(_QWORD *)(v32 + 24) = 2278LL;
      goto LABEL_392;
    }
    v17 = a10;
    if ( (((unsigned __int8)a10 | (unsigned __int8)((a10 | ((a10 | ((a10 | ((a10 | ((a10 | (a10 >> 1)) >> 14)) >> 1)) >> 1)) >> 1)) >> 1)) & 2) != 0 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v44, v43, v45, v46);
      *(_QWORD *)(v32 + 24) = 2291LL;
      goto LABEL_392;
    }
    v33 = *(_DWORD **)(v21 + 40048);
    v39 = v30;
    v34 = (_DWORD *)((char *)v33 + v164);
    v35 = *(_DWORD *)((char *)v33 + v164 + 4);
    v47 = v35;
    if ( v30 )
    {
      do
      {
        if ( (v39 & 1) != 0 )
        {
          if ( a6 )
          {
            HIDWORD(v48) = 0;
            v45 = *(_QWORD *)(*(_QWORD *)(v21 + 3712) + 8LL * v47);
            LODWORD(v48) = *(_DWORD *)(v45 + 400) % a6;
            if ( (_DWORD)v48 )
            {
              v32 = WdLogNewEntry5_WdAssertion(v47, v48, v45, v39);
              *(_QWORD *)(v32 + 24) = 2307LL;
              goto LABEL_392;
            }
          }
          v49 = *(_QWORD *)(*(_QWORD *)(v21 + 3712) + 8LL * v47);
          if ( a4 > *(_QWORD *)(v49 + 384) )
          {
            v32 = WdLogNewEntry5_WdAssertion(v47, v49, v45, v39);
            *(_QWORD *)(v32 + 24) = 2312LL;
            goto LABEL_392;
          }
          if ( (*(_DWORD *)(v49 + 56) & 0x20) != 0 )
          {
            v32 = WdLogNewEntry5_WdAssertion(v47, v49, v45, v39);
            *(_QWORD *)(v32 + 24) = 2317LL;
            goto LABEL_392;
          }
        }
        ++v47;
        v39 = (unsigned int)v39 >> 1;
      }
      while ( (_DWORD)v39 );
    }
  }
  v50 = v30;
  v51 = (unsigned int)v34[1];
  if ( (~*v34 & v30) != 0 || !v30 )
  {
LABEL_86:
    v53 = a4;
    v54 = 0;
    a5 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      if ( (v50 & 1) != 0 )
      {
        v52 = *(_QWORD *)(*(_QWORD *)(v21 + 3712) + 8LL * (unsigned int)v51);
        if ( (*(_BYTE *)(v52 + 56) & 0x20) != 0 )
          break;
      }
      v51 = (unsigned int)(v51 + 1);
      v50 = (unsigned int)v50 >> 1;
      if ( !(_DWORD)v50 )
        goto LABEL_86;
    }
    if ( !a5 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v52, v50, v51, v39);
      *(_QWORD *)(v32 + 24) = 2335LL;
LABEL_392:
      WdLogEvent5_WdAssertion(v32);
      return 3221225485LL;
    }
    v53 = a4;
    if ( a5 < a4 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v52, v50, v51, v39);
      *(_QWORD *)(v32 + 24) = 2341LL;
      goto LABEL_392;
    }
    v54 = 0;
  }
  v55 = a8;
  if ( a8 )
  {
    v56 = a8;
    v39 = v35;
    if ( (~*v33 & a8) != 0 )
      goto LABEL_118;
    LODWORD(v50) = 1;
    do
    {
      if ( (v56 & 1) != 0 )
      {
        v55 = *(_QWORD *)(*(_QWORD *)(v21 + 3712) + 8LL * (unsigned int)v39);
        if ( (*(_BYTE *)(v55 + 56) & 1) == 0 )
          v54 |= v50;
      }
      v50 = (unsigned int)__ROL4__(v50, 1);
      v39 = (unsigned int)(v39 + 1);
      v56 = (unsigned int)v56 >> 1;
    }
    while ( (_DWORD)v56 );
    if ( v54 )
    {
LABEL_118:
      v32 = WdLogNewEntry5_WdAssertion(v55, v50, v56, v39);
      *(_QWORD *)(v32 + 24) = 2364LL;
      goto LABEL_392;
    }
    v55 = a8;
    v57 = a8;
    v58 = (unsigned int)v34[1];
    if ( (~*v34 & a8) == 0 )
    {
      while ( 1 )
      {
        if ( (v57 & 1) != 0 )
        {
          v59 = *(_QWORD *)(*(_QWORD *)(v21 + 3712) + 8LL * (unsigned int)v58);
          if ( (*(_BYTE *)(v59 + 56) & 0x20) != 0 )
            break;
        }
        v58 = (unsigned int)(v58 + 1);
        v57 = (unsigned int)v57 >> 1;
        if ( !(_DWORD)v57 )
        {
          v55 = a8;
          goto LABEL_108;
        }
      }
      v32 = WdLogNewEntry5_WdAssertion(v59, v57, v58, v39);
      *(_QWORD *)(v32 + 24) = 2379LL;
      goto LABEL_392;
    }
LABEL_108:
    v50 = 0LL;
    v51 = *(unsigned int *)(v163 + 8);
    if ( (_DWORD)v51 )
    {
      do
      {
        v60 = v35 + (unsigned int)v50;
        if ( _bittest((const int *)&v55, v50) )
        {
          v61 = *(_QWORD *)(*(_QWORD *)(v21 + 3712) + 8 * v60);
          if ( v53 > *(_QWORD *)(v61 + 72) )
          {
            v62 = WdLogNewEntry5_WdWarning(v61);
            *(_QWORD *)(v62 + 24) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 3712) + 8 * v60) + 72LL);
            *(_QWORD *)(v62 + 32) = a4;
            WdLogEvent5_WdWarning(v62);
            return 3223191808LL;
          }
          v55 = a8;
        }
        v50 = (unsigned int)(v50 + 1);
      }
      while ( (unsigned int)v50 < (unsigned int)v51 );
    }
  }
  if ( (v17 & 2) != 0 )
  {
    if ( (v17 & 1) == 0 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v55, v50, v51, v39);
      *(_QWORD *)(v32 + 24) = 2416LL;
      goto LABEL_392;
    }
    if ( (v17 & 0x20000000) != 0 || v17 < 0 || (v17 & 0x40000000) != 0 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v55, v50, v51, v39);
      *(_QWORD *)(v32 + 24) = 2429LL;
      goto LABEL_392;
    }
  }
  if ( (v17 & 4) == 0 || (v17 & 0x800000) != 0 )
  {
    v65 = v156;
  }
  else
  {
    if ( *(_BYTE *)(v21 + 6465) )
    {
      if ( !VIDMM_GLOBAL::VerifySegmentSet((VIDMM_GLOBAL *)v21, v167, v30, 16, 0LL)
        || (v64 = a8, !VIDMM_GLOBAL::VerifySegmentSet((VIDMM_GLOBAL *)v21, v167, a8, v39, 0LL)) )
      {
        v32 = WdLogNewEntry5_WdAssertion(v63, v50, v51, v39);
        *(_QWORD *)(v32 + 24) = 2463LL;
        goto LABEL_392;
      }
      v65 = v156;
      goto LABEL_134;
    }
    v65 = v156;
    v66 = *(unsigned int *)(*(_QWORD *)(v21 + 24) + 284LL);
    if ( (v66 & 8) == 0 )
    {
      if ( !v156 || (v64 = a8, !VIDMM_GLOBAL::VerifySegmentSet((VIDMM_GLOBAL *)v21, v167, a8, 1, 0LL)) )
      {
        v32 = WdLogNewEntry5_WdAssertion(v66, v50, v51, v39);
        *(_QWORD *)(v32 + 24) = 2472LL;
        goto LABEL_392;
      }
LABEL_134:
      v17 = a10;
      goto LABEL_137;
    }
  }
  v64 = a8;
LABEL_137:
  v67 = ((unsigned int)v17 >> 29) & 1;
  if ( (((unsigned int)v17 >> 29) & 1) != 0 )
  {
    if ( (v17 & 1) != 0 && !v65 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v67, v50, v51, v39);
      *(_QWORD *)(v32 + 24) = 2494LL;
      goto LABEL_392;
    }
    if ( (v17 & 2) != 0 || (v17 & 8) != 0 || (v17 & 0x10) != 0 || (v17 & 0x20) != 0 || (v17 & 0x40000000) != 0 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v67, v50, v51, v39);
      *(_QWORD *)(v32 + 24) = 2511LL;
      goto LABEL_392;
    }
  }
  if ( (v17 & 0x100000) != 0 )
  {
    if ( !(_DWORD)v67 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v67, v50, v51, v39);
      *(_QWORD *)(v32 + 24) = 2523LL;
      goto LABEL_392;
    }
    v68 = v156;
    if ( !v156 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v67, v50, v51, v39);
      *(_QWORD *)(v32 + 24) = 2528LL;
      goto LABEL_392;
    }
  }
  else
  {
    v68 = v156;
  }
  if ( a16 )
  {
    if ( (v17 & 1) != 0 && !v68 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v67, a16, v51, v39);
      *(_QWORD *)(v32 + 24) = 2549LL;
      goto LABEL_392;
    }
    if ( (v17 & 2) != 0 || (v17 & 0x100) != 0 || (v17 & 0x200) != 0 || (v17 & 0x40000000) != 0 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v67, a16, v51, v39);
      *(_QWORD *)(v32 + 24) = 2562LL;
      goto LABEL_392;
    }
  }
  if ( (((unsigned int)v17 >> 26) & 1) != 0 )
  {
    if ( (v17 & 8) == 0 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v67, a16, v51, v39);
      *(_QWORD *)(v32 + 24) = 2578LL;
      goto LABEL_392;
    }
    goto LABEL_166;
  }
  if ( (v17 & 8) != 0 )
  {
LABEL_166:
    if ( (v17 & 1) != 0 && (((unsigned int)v17 >> 26) & 1) == 0 && !a16
      || (v17 & 2) != 0
      || (_DWORD)v67
      || (v17 & 0x10) != 0
      || (v17 & 0x20) != 0
      || v17 < 0
      || (v17 & 0x40000000) != 0 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v67, a16, v51, v39);
      *(_QWORD *)(v32 + 24) = 2611LL;
      goto LABEL_392;
    }
  }
  v69 = ((unsigned int)v17 >> 4) & 1;
  if ( (((unsigned int)v17 >> 4) & 1) != 0
    && ((v17 & 2) != 0 || (_DWORD)v67 || (v17 & 0x20) != 0 || v17 < 0 || (v17 & 0x40000000) != 0) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v67, v69, v51, v39);
    *(_QWORD *)(v32 + 24) = 2635LL;
    goto LABEL_392;
  }
  v70 = ((unsigned int)v17 >> 5) & 1;
  if ( (((unsigned int)v17 >> 5) & 1) != 0
    && ((v17 & 2) != 0 || (_DWORD)v67 || (_DWORD)v69 || v17 < 0 || (v17 & 0x40000000) != 0) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v67, v69, v70, v39);
    *(_QWORD *)(v32 + 24) = 2659LL;
    goto LABEL_392;
  }
  v71 = (unsigned int)v17 >> 31;
  if ( v17 >= 0 )
  {
    if ( (v17 & 0x40000000) != 0 )
    {
      if ( (v17 & 2) != 0
        || (v17 & 4) != 0
        && (v67 = *(unsigned int *)(*(_QWORD *)(v21 + 24) + 284LL), (v67 & 0x10) == 0)
        && (v67 & 8) == 0
        || (_DWORD)v69
        || (_DWORD)v70 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v67, v69, v70, v71);
        *(_QWORD *)(v32 + 24) = 2707LL;
        goto LABEL_392;
      }
      v17 |= 0x20000001u;
      v158 = 1;
      a10 = v17;
    }
  }
  else if ( (v17 & 2) != 0
         || (v17 & 4) != 0
         && (v67 = *(unsigned int *)(*(_QWORD *)(v21 + 24) + 284LL), (v67 & 0x10) == 0)
         && (v67 & 8) == 0
         || (_DWORD)v69
         || (_DWORD)v70
         || (v17 & 0x40000000) != 0 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v67, v69, v70, v71);
    *(_QWORD *)(v32 + 24) = 2683LL;
    goto LABEL_392;
  }
  if ( (v17 & 0x10000000) != 0 )
  {
    v72 = v17 & 0xEFFF7FBF;
    v73 = *(unsigned int *)(*(_QWORD *)(v21 + 24) + 284LL);
    if ( (v73 & 8) != 0 || (v73 & 0x10) != 0 )
      v72 &= ~4u;
    if ( v72 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v73, v69, v70, v71);
      *(_QWORD *)(v32 + 24) = 2741LL;
      goto LABEL_392;
    }
    if ( !VIDMM_GLOBAL::VerifySegmentSet((VIDMM_GLOBAL *)v21, v167, v64, 1, 0LL) )
    {
      v32 = WdLogNewEntry5_WdAssertion(v67, v69, v70, v71);
      *(_QWORD *)(v32 + 24) = 2751LL;
      goto LABEL_392;
    }
    v17 = a10;
  }
  if ( (v17 & 0x400000) != 0 )
  {
    if ( (v17 & 0x20000000) == 0 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v67, v69, v70, v71);
      *(_QWORD *)(v32 + 24) = 2767LL;
      goto LABEL_392;
    }
    if ( !Object )
    {
      v32 = WdLogNewEntry5_WdAssertion(v67, v69, v70, v71);
      *(_QWORD *)(v32 + 24) = 2777LL;
      goto LABEL_392;
    }
  }
  if ( (v17 & 0x4000) != 0 )
  {
    if ( (v17 & 1) == 0 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v67, v69, v70, v71);
      *(_QWORD *)(v32 + 24) = 2789LL;
      goto LABEL_392;
    }
    if ( (v17 & 2) != 0
      || (v17 & 8) != 0
      || (v17 & 0x10) != 0
      || (v17 & 0x20) != 0
      || (v17 & 0x40) != 0
      || (v17 & 0x100) != 0
      || (v17 & 0x200) != 0
      || (v17 & 0x40000) != 0 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v67, v69, v70, v71);
      *(_QWORD *)(v32 + 24) = a10;
      goto LABEL_392;
    }
    if ( !v68 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v67, v69, v70, v71);
      *(_QWORD *)(v32 + 24) = 2815LL;
      goto LABEL_392;
    }
  }
  if ( (dword_1C002F104 & 2) != 0 )
  {
    if ( DXGPROCESS::GetCurrent() )
    {
      Current = DXGPROCESS::GetCurrent();
      if ( (*(unsigned int (**)(void))(*((_QWORD *)Current + 10) + 216LL))() )
      {
        if ( (a10 & 0x10000000) == 0 && (a10 & 0x40000000) == 0 )
          a10 |= 0x8000000u;
      }
    }
  }
  v75 = (unsigned __int64 *)operator new(0x1E0uLL, 0x31306956u, v70, PagedPool);
  v77 = v75;
  if ( !v75 )
  {
    _InterlockedIncrement(&dword_1C002F4E4);
    v152 = WdLogNewEntry5_WdLowResource(v76);
    *(_QWORD *)(v152 + 24) = 2843LL;
    WdLogEvent5_WdLowResource(v152);
    return 3221225495LL;
  }
  v75[43] = 0LL;
  v75[58] = 0LL;
  v75[24] = (unsigned __int64)(v75 + 23);
  v75[23] = (unsigned __int64)(v75 + 23);
  v78 = (struct _KEVENT *)operator new(0x40uLL, 0x38326956u, (POOL_TYPE)512);
  v80 = v78;
  if ( v78 )
  {
    *(_QWORD *)&v78->Header.Lock = 0LL;
    v78->Header.WaitListHead.Flink = 0LL;
    LODWORD(v78[2].Header.WaitListHead.Flink) = 13;
    HIDWORD(v78[2].Header.WaitListHead.Flink) = 32;
    v78->Header.WaitListHead.Blink = 0LL;
    KeInitializeEvent(v78 + 1, SynchronizationEvent, 0);
    KeInitializeSpinLock((PKSPIN_LOCK)&v80[2]);
  }
  else
  {
    v80 = 0LL;
  }
  v77[39] = (unsigned __int64)v80;
  if ( !v80 )
  {
    _InterlockedIncrement(&dword_1C002F590);
    v81 = WdLogNewEntry5_WdLowResource(v79);
    *(_QWORD *)(v81 + 24) = 2855LL;
    WdLogEvent5_WdLowResource(v81);
    v85 = -1073741801;
LABEL_378:
    v147 = (void *)v77[45];
    if ( v147 )
      MmUnmapViewInSystemSpace(v147);
    v148 = (void *)v77[44];
    if ( v148 )
    {
      ObfDereferenceObject(v148);
      if ( (v77[11] & 1) != 0 )
      {
        ObfDereferenceObject((PVOID)v77[44]);
        *((_BYTE *)v77 + 88) &= ~1u;
      }
    }
    v149 = v77[59];
    if ( v149 )
    {
      v150 = *(VIDMM_FLIP_QUEUE_REFERENCES **)(v149 + 16);
      if ( v150 )
        VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(v150);
      operator delete((void *)v77[59]);
    }
    v151 = (DXGFASTMUTEX *)v77[39];
    if ( v151 )
      DXGFASTMUTEX::`scalar deleting destructor'(v151, v82, v83, v84);
    _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'((_VIDMM_GLOBAL_ALLOC *)v77);
    return (unsigned int)v85;
  }
  v86 = operator new(0x20uLL, 0x32346956u, (POOL_TYPE)512);
  v77[59] = (unsigned __int64)v86;
  if ( !v86 )
  {
    _InterlockedIncrement(&dword_1C002F5EC);
    v88 = WdLogNewEntry5_WdLowResource(v87);
    *(_QWORD *)(v88 + 24) = 2868LL;
    WdLogEvent5_WdLowResource(v88);
    v85 = -1073741801;
    goto LABEL_378;
  }
  *v86 = 0LL;
  v86[1] = 0LL;
  v86[2] = 0LL;
  v86[3] = 0LL;
  *(_QWORD *)(v77[59] + 16) = operator new[](0x10uLL, 0x33306956u, (POOL_TYPE)512);
  v91 = *(_QWORD **)(v77[59] + 16);
  if ( !v91 )
  {
    _InterlockedIncrement(&dword_1C002F4DC);
    v92 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v92 + 24) = 2879LL;
    WdLogEvent5_WdLowResource(v92);
    v85 = -1073741801;
    goto LABEL_378;
  }
  *v91 = 0LL;
  v91[1] = 0LL;
  _InterlockedIncrement(*(volatile signed __int32 **)(v77[59] + 16));
  v93 = 0xFFFFFFFFLL;
  if ( (a10 & 0x100000) != 0 )
    v93 = 0LL;
  v94 = *(_QWORD *)(v77[59] + 16);
  *(_DWORD *)(v94 + 4) = v93;
  if ( a11 && (*(_DWORD *)(a11 + 4) & 0x8000) != 0 )
    *((_DWORD *)v77 + 19) |= 0x800u;
  v95 = a4;
  *v77 = a4;
  v96 = (a4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v160 = v96;
  if ( a4 > v96 )
    goto LABEL_263;
  v95 = a5;
  v97 = (a5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( a5 > v97 )
    goto LABEL_263;
  ViewSize = (a4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v96 > 0xFFFF0000 )
  {
    v98 = (_QWORD *)WdLogNewEntry5_WdAssertion(v94, v93, v89, v90);
    v98[3] = 2934LL;
LABEL_377:
    WdLogEvent5_WdAssertion(v98);
    v85 = -1073741811;
    goto LABEL_378;
  }
  v95 = a6;
  v94 = (a6 + 4095) & 0xFFFFF000;
  v159 = v94;
  if ( a6 > (unsigned int)v94 )
  {
LABEL_263:
    v98 = (_QWORD *)WdLogNewEntry5_WdAssertion(v94, v93, v89, v90);
    v98[3] = v95;
    goto LABEL_377;
  }
  v99 = (unsigned int)v94;
  if ( v96 + v94 < v96 || v97 + v94 < v97 )
  {
    v98 = (_QWORD *)WdLogNewEntry5_WdAssertion(v94, v93, v89, v90);
    v98[3] = v96;
    v98[4] = v97;
    v98[5] = ViewSize;
    v98[6] = v99;
    goto LABEL_377;
  }
  if ( (a10 & 0x20000000) != 0 || (a10 & 8) != 0 || (a10 & 0x10000000) != 0 )
  {
    if ( (a10 & 0x10000000) != 0 )
      a10 |= 8u;
    if ( (a10 & 0x400000) != 0 )
    {
      ObfReferenceObject(Object);
      v100 = (PVOID *)(v77 + 44);
      v85 = 0;
      v77[44] = (unsigned __int64)Object;
    }
    else
    {
      CurrentProcessId = (a4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v100 = (PVOID *)(v77 + 44);
      v101 = v77 + 44;
      if ( (a10 & 4) != 0 )
        v102 = MmCreateSection(v101, 0LL, 0LL, &CurrentProcessId, 4, 0x8000000, 0LL, 0LL);
      else
        v102 = MmCreateSection(v101, 0LL, 0LL, &CurrentProcessId, 4, 1207959552, 0LL, 0LL);
      v85 = v102;
      if ( v102 < 0 )
        *v100 = 0LL;
      if ( (a10 & 0x20000000) != 0 )
      {
        v103 = *v100;
        if ( *v100 )
        {
          *((_BYTE *)v77 + 88) |= 1u;
          ObfReferenceObject(v103);
        }
      }
      if ( v85 < 0 )
        goto LABEL_378;
    }
    if ( (a10 & 8) != 0 || (a10 & 0x10000000) != 0 )
    {
      v85 = MmMapViewInSystemSpace(*v100, (PVOID *)v77 + 45, &ViewSize);
      if ( v85 >= 0 )
      {
LABEL_301:
        LODWORD(v94) = v159;
        v96 = v160;
        goto LABEL_302;
      }
      if ( ViewSize >= 0x100000 )
      {
        if ( ViewSize >= 0x200000 )
        {
          if ( ViewSize >= 0x400000 )
          {
            if ( ViewSize >= 0x800000 )
            {
              if ( ViewSize >= 0x1000000 )
              {
                if ( ViewSize >= 0x2000000 )
                {
                  if ( ViewSize >= 0x4000000 )
                    goto LABEL_300;
                  v104 = 6603LL;
                }
                else
                {
                  v104 = 6602LL;
                }
              }
              else
              {
                v104 = 6613LL;
              }
            }
            else
            {
              v104 = 6601LL;
            }
          }
          else
          {
            v104 = 6600LL;
          }
        }
        else
        {
          v104 = 6599LL;
        }
      }
      else
      {
        v104 = 6598LL;
      }
      DxgkSqmGenericDword(&Dxgk_SqmIncrementDwordEvt, v104, 1LL);
    }
LABEL_300:
    if ( v85 < 0 )
      goto LABEL_378;
    goto LABEL_301;
  }
LABEL_302:
  if ( (a10 & 0x4000) != 0 )
    *((_DWORD *)v77 + 20) |= 0x20u;
  *((_DWORD *)v77 + 38) = 0;
  v77[2] = v96;
  v77[3] = v97;
  v105 = ViewSize;
  *((_DWORD *)v77 + 8) = v94;
  v106 = (unsigned int *)v77[59];
  v77[1] = v105;
  *v106 = a10;
  v107 = (_DWORD *)v77[59];
  *((_DWORD *)v77 + 17) = a7;
  *((_DWORD *)v77 + 16) = a8;
  *((_DWORD *)v77 + 18) = a9;
  *((_DWORD *)v77 + 30) = 0;
  *((_DWORD *)v77 + 19) = *((_DWORD *)v77 + 19) & 0xFFFFFF3F | ((v157 & 1 | (2 * (v156 & 1))) << 6);
  if ( (*v107 & 0x3A) != 0 || (*v107 & 0x40000000) != 0 )
  {
    v109 = 0;
    v108 = 1;
  }
  else
  {
    v108 = 1;
    v109 = 1;
  }
  v110 = v163;
  v111 = (*((_DWORD *)v77 + 21) ^ (8 * v109)) & 8;
  *((_DWORD *)v77 + 76) = 0;
  *((_DWORD *)v77 + 21) ^= v111;
  v112 = (*((_DWORD *)v77 + 20) ^ (v158 << 7)) & 0x80;
  v77[5] = a11;
  *((_DWORD *)v77 + 20) ^= v112;
  if ( (*(_BYTE *)(v110 + 420) & 3) != 0 )
  {
    v113 = 1 << (*(_WORD *)(v110 + 12) - *(_BYTE *)(v110 + 4));
    *((_DWORD *)v77 + 16) = a8 | v113;
    if ( v157 )
    {
      if ( (a10 & 0x8000) == 0 )
        *((_DWORD *)v77 + 17) = a7 | v113;
    }
  }
  if ( a11 )
    v107[6] = (*(_DWORD *)(a11 + 4) >> 6) & 0xF;
  else
    v107[6] = 0;
  v114 = a7;
  v115 = v164;
  v77[6] = a13;
  v77[14] = a16;
  *((_DWORD *)v77 + 94) = a14;
  *((_DWORD *)v77 + 19) = v167 & 0x3F | *((_DWORD *)v77 + 19) & 0xE7FFFFC0 | (((a16 != 0) | (2 * (a15 & 1))) << 27);
  v77[37] = (unsigned __int64)(v77 + 36);
  v77[36] = (unsigned __int64)(v77 + 36);
  v77[57] = -1LL;
  v116 = (_DWORD *)(v115 + *(_QWORD *)(v21 + 40048));
  v117 = v116[1];
  if ( (~*v116 & a7) != 0 || !a7 )
  {
LABEL_320:
    v118 = 0;
  }
  else
  {
    while ( (v114 & 1) == 0
         || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 3712) + 8LL * v117) + 56LL) & 0x80000) != 0x80000 )
    {
      ++v117;
      v114 >>= 1;
      if ( !v114 )
        goto LABEL_320;
    }
    v118 = 1;
  }
  v119 = a7;
  v120 = v116[1];
  if ( (~*v116 & a7) != 0 || !a7 )
  {
LABEL_326:
    v121 = 0;
  }
  else
  {
    while ( (v119 & 1) == 0
         || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 3712) + 8LL * v120) + 56LL) & 0x100000) != 0x100000 )
    {
      ++v120;
      v119 >>= 1;
      if ( !v119 )
        goto LABEL_326;
    }
    v121 = 1;
  }
  v122 = *((_DWORD *)v77 + 19) ^ ((unsigned __int16)*((_DWORD *)v77 + 19) ^ (unsigned __int16)(8 * *((_DWORD *)v77 + 19))) & 0x400;
  *((_DWORD *)v77 + 19) = v122;
  if ( a9 )
  {
    if ( (a9 & 0x1F) != 0 )
    {
      v123 = *(_QWORD *)(*(_QWORD *)(v21 + 3712)
                       + 8LL * ((a9 & 0x1F) + *(_DWORD *)(v115 + *(_QWORD *)(v21 + 40048) + 4) - 1));
      *((_DWORD *)v77 + 19) = v122 ^ ((unsigned __int16)v122 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v123 + 56) << 10)) & 0x400;
    }
    else
    {
      v124 = (a9 >> 6) & 0x1F;
      if ( !v124 )
        goto LABEL_339;
      v123 = *(_QWORD *)(*(_QWORD *)(v21 + 3712)
                       + 8LL * (unsigned int)(v124 - 1 + *(_DWORD *)(v115 + *(_QWORD *)(v21 + 40048) + 4)));
    }
    if ( v123 )
    {
      v125 = *(_DWORD *)(v123 + 56);
      if ( (v125 & 0x80000) == 0 )
      {
        if ( (v125 & 0x100000) != 0 )
          goto LABEL_337;
        goto LABEL_341;
      }
      goto LABEL_343;
    }
  }
LABEL_339:
  if ( !v118 )
  {
    if ( v121 )
    {
LABEL_337:
      v126 = *((_DWORD *)v77 + 19) & 0xFFFF0FFF | 0x1000;
      *((_DWORD *)v77 + 19) = v126;
      if ( v118 )
        v127 = v126 & 0xFFF0FFFF | 0x20000;
      else
        v127 = v126 & 0xFFF0FFFF | 0x10000;
      goto LABEL_346;
    }
LABEL_341:
    v127 = *((_DWORD *)v77 + 19) & 0xFFF00FFF | 0x32000;
    goto LABEL_346;
  }
LABEL_343:
  *((_DWORD *)v77 + 19) &= 0xFFFF0FFF;
  v128 = *((_DWORD *)v77 + 19);
  if ( v121 )
    v127 = v128 & 0xFFF0FFFF | 0x20000;
  else
    v127 = v128 & 0xFFF0FFFF;
LABEL_346:
  *((_DWORD *)v77 + 19) = v127;
  if ( *(_DWORD *)(v21 + 32) < 0x5013u || (*((_BYTE *)v77 + 78) & 0xF) == 3 )
  {
    LOBYTE(v115) = 0;
  }
  else
  {
    v129 = *(_DWORD **)(v21 + 40048);
    v130 = a7;
    v131 = *(unsigned int *)((char *)v129 + v115 + 4);
    v132 = (unsigned int)~*v129;
    LOBYTE(v115) = 0;
    v133 = 0LL;
    if ( ((unsigned int)v132 & a7) != 0 )
      goto LABEL_355;
    if ( a7 )
    {
      do
      {
        if ( (v130 & 1) != 0 )
        {
          v132 = *(_QWORD *)(*(_QWORD *)(v21 + 3712) + 8LL * (unsigned int)v131);
          if ( (*(_DWORD *)(v132 + 56) & 0x180000) == 0 )
            v133 = v108 | (unsigned int)v133;
        }
        v108 = __ROL4__(v108, 1);
        v131 = (unsigned int)(v131 + 1);
        v130 = (unsigned int)v130 >> 1;
      }
      while ( (_DWORD)v130 );
      if ( (_DWORD)v133 )
      {
LABEL_355:
        v98 = (_QWORD *)WdLogNewEntry5_WdAssertion(v132, v130, v131, v133);
        v98[3] = 3263LL;
        goto LABEL_377;
      }
    }
  }
  if ( (a10 & 0x10) != 0 || (a10 & 0x20) != 0 )
    *((_BYTE *)v77 + 94) = 1;
  if ( bTracingEnabled )
  {
    v134 = v77[5];
    if ( v134 )
      v135 = *(unsigned int **)(v134 + 24);
    else
      v135 = 0LL;
    LOBYTE(v136) = 0;
    if ( a2 )
      v136 = *(_QWORD *)(a2 + 24);
    v163 = *(_QWORD *)(v21 + 24);
    v164 = v77[44];
    CurrentProcessId = (__int64)PsGetCurrentProcessId();
    v137 = 0LL;
    LOBYTE(v138) = 0;
    v139 = 0LL;
    LOBYTE(v140) = 0;
    LOBYTE(v141) = 0;
    LOBYTE(v142) = 0;
    LOBYTE(v21) = 0;
    LOBYTE(v143) = 0;
    if ( v135 )
    {
      v137 = *v135;
      v138 = v135[1];
      v139 = v135[2];
      v140 = v135[3];
      v141 = v135[4];
      v142 = v135[5];
      LODWORD(v21) = v135[6];
      v143 = v135[7];
      LODWORD(v115) = v135[8];
      v144 = v135[9];
    }
    else
    {
      LOBYTE(v144) = 0;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
    {
      v155 = v134;
      v96 = v160;
      Template_pppqxqqqqqqqpppqqqqqqqqqqtp(
        v137,
        &EventCreateAdapterAllocation,
        v139,
        CurrentProcessId,
        v136,
        v163,
        a10,
        v160,
        v159,
        v153,
        a7,
        a9,
        v154,
        a8,
        a14,
        (char)v77,
        v155,
        0,
        v137,
        v138,
        v139,
        v140,
        v141,
        v142,
        v21,
        v143,
        v115,
        v144,
        0,
        v164);
    }
    else
    {
      v96 = v160;
    }
    v21 = a1;
  }
  ++*(_DWORD *)(v21 + 7592);
  *(_QWORD *)(v21 + 7600) += v96;
  *(_QWORD *)(v21 + 40016) += v96;
  v145 = *(_QWORD *)(v21 + 40016);
  v146 = *(_QWORD *)(*(_QWORD *)(v21 + 24) + 3152LL);
  if ( *(_QWORD *)(v146 + 312) < v145 )
    *(_QWORD *)(v146 + 312) = v145;
  *a17 = v77;
  return 0LL;
}
