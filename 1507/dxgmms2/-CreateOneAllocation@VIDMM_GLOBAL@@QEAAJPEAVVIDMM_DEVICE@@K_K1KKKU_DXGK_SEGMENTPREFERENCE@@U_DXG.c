/*
 * XREFs of ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0034880
 * Callers:
 *     ?CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@KPEAVDXGADAPTERALLOCATION@@PEAXPEAPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0030EE8 (-CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00400F4 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C004C4FC (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C005EB98 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 * Callees:
 *     ??_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1C00040C0 (--_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x1C00040D8 (-ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z.c)
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C00040F4 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0005E90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0006100 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00061B0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     Template_pppqxqqqqqqqpppqqqqqqqqqqtp @ 0x1C0006EF8 (Template_pppqxqqqqqqqpppqqqqqqqqqqtp.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?VerifySegmentSetAnyAtLeastOneInMask@VIDMM_GLOBAL@@IEAAEKKK@Z @ 0x1C0034010 (-VerifySegmentSetAnyAtLeastOneInMask@VIDMM_GLOBAL@@IEAAEKKK@Z.c)
 *     ?VerifySegmentSetAny@VIDMM_GLOBAL@@IEAAEKKK@Z @ 0x1C0034064 (-VerifySegmentSetAny@VIDMM_GLOBAL@@IEAAEKKK@Z.c)
 *     ?VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C00340B8 (-VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 *     ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C003413C (-VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
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
        int a10,
        unsigned __int64 a11,
        PVOID Object,
        unsigned __int64 a13,
        int a14,
        char a15,
        unsigned __int64 a16,
        unsigned __int64 **a17)
{
  unsigned int v17; // r15d
  bool v18; // zf
  __int64 CurrentProcess; // rax
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r9
  unsigned int v31; // r10d
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 v38; // r12
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r8
  __int64 v48; // rbx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rax
  __int64 v55; // rcx
  char v56; // r13
  __int64 v57; // rcx
  __int64 v58; // rcx
  char v59; // al
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  unsigned int v63; // ebx
  __int64 v64; // rcx
  struct DXGPROCESS *Current; // rax
  int v66; // eax
  unsigned __int64 *v67; // rax
  __int64 v68; // rcx
  unsigned __int64 *v69; // rdi
  _QWORD *v70; // rax
  __int64 v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  NTSTATUS v75; // ebx
  PVOID v76; // rax
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  _QWORD *v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rcx
  unsigned __int64 v83; // r15
  _QWORD *v84; // rax
  unsigned __int64 v85; // rbx
  unsigned __int64 v86; // r12
  __int64 v87; // rbx
  PVOID *v88; // r14
  _QWORD *v89; // rcx
  int v90; // eax
  PVOID v91; // rcx
  __int64 v92; // rdx
  unsigned __int64 v93; // rdx
  _DWORD *v94; // r9
  __int64 v95; // rcx
  BOOL v96; // eax
  int v97; // eax
  int v98; // edx
  unsigned __int8 v99; // r14
  unsigned __int8 v100; // r10
  int v101; // r9d
  __int64 v102; // rdx
  int v103; // edx
  bool v104; // cl
  bool v105; // al
  unsigned int v106; // eax
  unsigned int v107; // eax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  unsigned __int64 v112; // r14
  unsigned int *v113; // rbx
  __int64 v114; // r12
  __int64 v115; // rcx
  unsigned int v116; // edx
  __int64 v117; // r8
  unsigned int v118; // r9d
  unsigned int v119; // r10d
  unsigned int v120; // r11d
  unsigned int v121; // r13d
  unsigned int v122; // eax
  unsigned int v123; // ebx
  unsigned __int64 v124; // rdx
  __int64 v125; // rcx
  void *v126; // rcx
  void *v127; // rcx
  unsigned __int64 v128; // rax
  VIDMM_FLIP_QUEUE_REFERENCES *v129; // rcx
  DXGFASTMUTEX *v130; // rcx
  int v131; // [rsp+48h] [rbp-128h]
  int v132; // [rsp+60h] [rbp-110h]
  int v133; // [rsp+F0h] [rbp-80h]
  ULONG_PTR ViewSize; // [rsp+F8h] [rbp-78h] BYREF
  __int64 CurrentProcessId; // [rsp+100h] [rbp-70h]
  unsigned __int64 v136; // [rsp+108h] [rbp-68h] BYREF
  unsigned __int64 v137; // [rsp+110h] [rbp-60h]
  char v138; // [rsp+170h] [rbp+0h]
  unsigned int v139; // [rsp+170h] [rbp+0h]
  unsigned int v141; // [rsp+180h] [rbp+10h]
  char v142; // [rsp+180h] [rbp+10h]
  unsigned __int8 v143; // [rsp+188h] [rbp+18h]

  v17 = a3;
  v18 = *(_DWORD *)(a1 + 6416) == 1;
  ViewSize = 0LL;
  if ( v18 )
    v17 = 0;
  v137 = *(_QWORD *)(a1 + 39992);
  CurrentProcessId = 456LL * v17;
  v141 = v17;
  *a17 = 0LL;
  if ( *(_BYTE *)(a1 + 39952) || (CurrentProcess = PsGetCurrentProcess(), !PsGetProcessWow64Process(CurrentProcess)) )
  {
    v22 = a10;
    if ( (a10 & 0x20000000) == 0
      && (a10 & 0x40000000) == 0
      && a10 >= 0
      && (a10 & 0x10000000) == 0
      && (a10 & 8) == 0
      && (a10 & 0x400000) == 0
      && !a16 )
    {
      v22 = a10 | 1;
      a10 |= 1u;
    }
  }
  else
  {
    v22 = a10;
  }
  if ( !a4 )
  {
    v23 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v23 + 24) = 2086LL;
    goto LABEL_313;
  }
  if ( (v22 & 0x40000) != 0 )
  {
    v23 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v23 + 24) = 2098LL;
    goto LABEL_313;
  }
  if ( (v22 & 0x800) != 0 )
  {
    v23 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v23 + 24) = 2104LL;
    goto LABEL_313;
  }
  if ( (v22 & 0x1000) != 0 || (v22 & 0x2000) != 0 )
  {
    v23 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v23 + 24) = 2110LL;
    goto LABEL_313;
  }
  v24 = (unsigned int)~*(_DWORD *)(*(_QWORD *)(a1 + 39992) + 456LL * v17);
  if ( ((unsigned int)v24 & a7) != 0 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v24, a2, a3, a4);
    *(_QWORD *)(v23 + 24) = 2120LL;
    goto LABEL_313;
  }
  v138 = VIDMM_GLOBAL::VerifySegmentSetAtLeastOneInMask((VIDMM_GLOBAL *)a1, v17, a7, 4097);
  v25 = a10;
  v143 = VIDMM_GLOBAL::VerifySegmentSetAnyAtLeastOneInMask((VIDMM_GLOBAL *)a1, v17, a7);
  if ( (a10 & 0x20000) != 0 )
  {
    if ( !VIDMM_GLOBAL::VerifySegmentSet((VIDMM_GLOBAL *)a1, v17, a7, 0x10000, 0LL) )
    {
      v23 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
      *(_QWORD *)(v23 + 24) = 2146LL;
      goto LABEL_313;
    }
    if ( v143 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
      *(_QWORD *)(v23 + 24) = 2152LL;
      goto LABEL_313;
    }
    v25 = a10;
    if ( (((unsigned __int8)a10 | (unsigned __int8)((a10 | ((a10 | ((a10 | ((a10 | ((a10 | ((unsigned int)a10 >> 1)) >> 14)) >> 1)) >> 1)) >> 1)) >> 1)) & 2) != 0 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
      *(_QWORD *)(v23 + 24) = 2165LL;
      goto LABEL_313;
    }
    v30 = a7;
    v31 = *(_DWORD *)(*(_QWORD *)(a1 + 39992) + 456LL * v17 + 4);
    if ( a7 )
    {
      do
      {
        if ( (v30 & 1) != 0 )
        {
          if ( a6 )
          {
            HIDWORD(v32) = 0;
            v28 = *(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8LL * v31);
            LODWORD(v32) = *(_DWORD *)(v28 + 400) % a6;
            if ( (_DWORD)v32 )
            {
              v23 = WdLogNewEntry5_WdAssertion(v31, v32, v28, v30);
              *(_QWORD *)(v23 + 24) = 2181LL;
              goto LABEL_313;
            }
          }
          v33 = *(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8LL * v31);
          if ( a4 > *(_QWORD *)(v33 + 384) )
          {
            v23 = WdLogNewEntry5_WdAssertion(v31, v33, v28, v30);
            *(_QWORD *)(v23 + 24) = 2186LL;
            goto LABEL_313;
          }
          if ( (*(_DWORD *)(v33 + 56) & 0x20) != 0 )
          {
            v23 = WdLogNewEntry5_WdAssertion(v31, v33, v28, v30);
            *(_QWORD *)(v23 + 24) = 2191LL;
            goto LABEL_313;
          }
        }
        ++v31;
        v30 = (unsigned int)v30 >> 1;
      }
      while ( (_DWORD)v30 );
    }
  }
  if ( VIDMM_GLOBAL::VerifySegmentSetAny((VIDMM_GLOBAL *)a1, v17, a7, 32) )
  {
    v38 = a5;
    if ( !a5 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v35, v34, v36, v37);
      *(_QWORD *)(v23 + 24) = 2209LL;
      goto LABEL_313;
    }
    if ( a5 < a4 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v35, v34, v36, v37);
      *(_QWORD *)(v23 + 24) = 2215LL;
LABEL_313:
      WdLogEvent5_WdAssertion(v23);
      return 3221225485LL;
    }
  }
  else
  {
    v38 = 0LL;
    a5 = 0LL;
  }
  if ( !a8 )
  {
LABEL_58:
    v50 = 0LL;
    do
    {
      v51 = (unsigned int)v50;
      if ( ((a9 >> v50) & 0x1F) != 0 )
      {
        v51 = ((a9 >> v50) & 0x1F) - 1;
        v52 = ~a7;
        v34 = (unsigned __int8)(((a9 >> v50) & 0x1F) - 1);
        if ( _bittest(&v52, (unsigned __int8)(((a9 >> v50) & 0x1F) - 1)) )
        {
          v23 = WdLogNewEntry5_WdAssertion(
                  ((a9 >> v50) & 0x1F) - 1,
                  (unsigned __int8)(((a9 >> v50) & 0x1F) - 1),
                  v50,
                  v37);
          *(_QWORD *)(v23 + 24) = 2297LL;
          goto LABEL_313;
        }
      }
      v50 = (unsigned int)(v50 + 6);
    }
    while ( (unsigned int)v50 < 0x1E );
    if ( (v25 & 2) != 0 )
    {
      if ( (v25 & 1) == 0 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v51, v34, v50, v37);
        *(_QWORD *)(v23 + 24) = 2315LL;
        goto LABEL_313;
      }
      if ( (v25 & 0x20000000) != 0 || (v25 & 0x80000000) != 0 || (v25 & 0x40000000) != 0 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v51, v34, v50, v37);
        *(_QWORD *)(v23 + 24) = 2328LL;
        goto LABEL_313;
      }
    }
    if ( (v25 & 4) == 0 || (v25 & 0x800000) != 0 )
    {
      v56 = v138;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 6468) )
      {
        if ( !VIDMM_GLOBAL::VerifySegmentSet((VIDMM_GLOBAL *)a1, v17, a7, 16, 0LL)
          || !VIDMM_GLOBAL::VerifySegmentSet((VIDMM_GLOBAL *)a1, v17, a8, v37, 0LL) )
        {
          v23 = WdLogNewEntry5_WdAssertion(v55, v34, v50, v37);
          *(_QWORD *)(v23 + 24) = 2362LL;
          goto LABEL_313;
        }
        v56 = v138;
      }
      else
      {
        v56 = v138;
        v57 = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 284LL);
        if ( (v57 & 4) != 0 )
          goto LABEL_84;
        if ( !v138 || !VIDMM_GLOBAL::VerifySegmentSet((VIDMM_GLOBAL *)a1, v17, a8, 1, 0LL) )
        {
          v23 = WdLogNewEntry5_WdAssertion(v57, v34, v50, v37);
          *(_QWORD *)(v23 + 24) = 2371LL;
          goto LABEL_313;
        }
      }
      v25 = a10;
    }
LABEL_84:
    v58 = (v25 >> 29) & 1;
    if ( ((v25 >> 29) & 1) != 0 )
    {
      if ( (v25 & 1) != 0 && !v56 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v58, v34, v50, v37);
        *(_QWORD *)(v23 + 24) = 2393LL;
        goto LABEL_313;
      }
      if ( (v25 & 2) != 0 || (v25 & 8) != 0 || (v25 & 0x10) != 0 || (v25 & 0x20) != 0 || (v25 & 0x40000000) != 0 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v58, v34, v50, v37);
        *(_QWORD *)(v23 + 24) = 2410LL;
        goto LABEL_313;
      }
    }
    if ( (v25 & 0x100000) != 0 )
    {
      if ( !(_DWORD)v58 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v58, v34, v50, v37);
        *(_QWORD *)(v23 + 24) = 2422LL;
        goto LABEL_313;
      }
      v59 = v138;
      if ( !v138 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v58, v34, v50, v37);
        *(_QWORD *)(v23 + 24) = 2427LL;
        goto LABEL_313;
      }
    }
    else
    {
      v59 = v138;
    }
    if ( a16 )
    {
      if ( (v25 & 1) != 0 && !v59 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v58, a16, v50, v37);
        *(_QWORD *)(v23 + 24) = 2448LL;
        goto LABEL_313;
      }
      if ( (v25 & 2) != 0 || (v25 & 0x100) != 0 || (v25 & 0x200) != 0 || (v25 & 0x40000000) != 0 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v58, a16, v50, v37);
        *(_QWORD *)(v23 + 24) = 2461LL;
        goto LABEL_313;
      }
    }
    if ( ((v25 >> 26) & 1) != 0 )
    {
      if ( (v25 & 8) == 0 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v58, a16, v50, v37);
        *(_QWORD *)(v23 + 24) = 2477LL;
        goto LABEL_313;
      }
    }
    else if ( (v25 & 8) == 0 )
    {
      goto LABEL_123;
    }
    if ( (v25 & 1) != 0 && ((v25 >> 26) & 1) == 0 && !a16
      || (v25 & 2) != 0
      || (_DWORD)v58
      || (v25 & 0x10) != 0
      || (v25 & 0x20) != 0
      || (v25 & 0x80000000) != 0
      || (v25 & 0x40000000) != 0 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v58, a16, v50, v37);
      *(_QWORD *)(v23 + 24) = 2510LL;
      goto LABEL_313;
    }
LABEL_123:
    v60 = (v25 >> 4) & 1;
    if ( ((v25 >> 4) & 1) != 0
      && ((v25 & 2) != 0 || (_DWORD)v58 || (v25 & 0x20) != 0 || (v25 & 0x80000000) != 0 || (v25 & 0x40000000) != 0) )
    {
      v23 = WdLogNewEntry5_WdAssertion(v58, v60, v50, v37);
      *(_QWORD *)(v23 + 24) = 2534LL;
      goto LABEL_313;
    }
    v61 = (v25 >> 5) & 1;
    if ( ((v25 >> 5) & 1) != 0
      && ((v25 & 2) != 0 || (_DWORD)v58 || (_DWORD)v60 || (v25 & 0x80000000) != 0 || (v25 & 0x40000000) != 0) )
    {
      v23 = WdLogNewEntry5_WdAssertion(v58, v60, v61, v37);
      *(_QWORD *)(v23 + 24) = 2558LL;
      goto LABEL_313;
    }
    v62 = v25 >> 31;
    if ( (v25 & 0x80000000) == 0 )
    {
      if ( (v25 & 0x40000000) != 0 )
      {
        if ( (v25 & 2) != 0
          || (v25 & 4) != 0 && (v58 = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 284LL), (v58 & 8) == 0) && (v58 & 4) == 0
          || (_DWORD)v60
          || (_DWORD)v61 )
        {
          v23 = WdLogNewEntry5_WdAssertion(v58, v60, v61, v62);
          *(_QWORD *)(v23 + 24) = 2606LL;
          goto LABEL_313;
        }
        v25 |= 0x20000001u;
        a10 = v25;
      }
    }
    else if ( (v25 & 2) != 0
           || (v25 & 4) != 0
           && (v58 = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 284LL), (v58 & 8) == 0)
           && (v58 & 4) == 0
           || (_DWORD)v60
           || (_DWORD)v61
           || (v25 & 0x40000000) != 0 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v58, v60, v61, v62);
      *(_QWORD *)(v23 + 24) = 2582LL;
      goto LABEL_313;
    }
    if ( (v25 & 0x10000000) != 0 )
    {
      v63 = v25 & 0xEFFF7FBF;
      v64 = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 284LL);
      if ( (v64 & 4) != 0 || (v64 & 8) != 0 )
        v63 &= ~4u;
      if ( v63 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v64, v60, v61, v62);
        *(_QWORD *)(v23 + 24) = 2639LL;
        goto LABEL_313;
      }
      if ( !VIDMM_GLOBAL::VerifySegmentSet((VIDMM_GLOBAL *)a1, v17, a8, 1, 0LL) )
      {
        v23 = WdLogNewEntry5_WdAssertion(v58, v60, v61, v62);
        *(_QWORD *)(v23 + 24) = 2649LL;
        goto LABEL_313;
      }
      v25 = a10;
    }
    if ( (v25 & 0x400000) != 0 )
    {
      if ( (v25 & 0x20000000) == 0 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v58, v60, v61, v62);
        *(_QWORD *)(v23 + 24) = 2665LL;
        goto LABEL_313;
      }
      if ( !Object )
      {
        v23 = WdLogNewEntry5_WdAssertion(v58, v60, v61, v62);
        *(_QWORD *)(v23 + 24) = 2675LL;
        goto LABEL_313;
      }
    }
    if ( (v25 & 0x4000) != 0 )
    {
      if ( (v25 & 1) == 0 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v58, v60, v61, v62);
        *(_QWORD *)(v23 + 24) = 2687LL;
        goto LABEL_313;
      }
      if ( (v25 & 2) != 0
        || (v25 & 8) != 0
        || (v25 & 0x10) != 0
        || (v25 & 0x20) != 0
        || (v25 & 0x40) != 0
        || (v25 & 0x100) != 0
        || (v25 & 0x200) != 0 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v58, v60, v61, v62);
        *(_QWORD *)(v23 + 24) = (unsigned int)a10;
        goto LABEL_313;
      }
      if ( !v138 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v58, v60, v61, v62);
        *(_QWORD *)(v23 + 24) = 2712LL;
        goto LABEL_313;
      }
    }
    if ( (dword_1C00270E4 & 2) != 0 )
    {
      if ( DXGPROCESS::GetCurrent() )
      {
        Current = DXGPROCESS::GetCurrent();
        v66 = (*(__int64 (**)(void))(*((_QWORD *)Current + 10) + 216LL))();
      }
      else
      {
        v66 = 0;
      }
      if ( v66 && (a10 & 0x10000000) == 0 && (a10 & 0x40000000) == 0 )
        a10 |= 0x8000000u;
    }
    v67 = (unsigned __int64 *)operator new(0x1E0uLL, 0x31306956u, v61, PagedPool);
    v69 = v67;
    if ( v67 )
    {
      v67[43] = 0LL;
      v67[58] = 0LL;
      v70 = v67 + 23;
      v70[1] = v70;
      *v70 = v70;
    }
    else
    {
      v69 = 0LL;
    }
    if ( !v69 )
    {
      _InterlockedIncrement(&dword_1C00274D4);
      v71 = WdLogNewEntry5_WdLowResource(v68);
      *(_QWORD *)(v71 + 24) = 2740LL;
      WdLogEvent5_WdLowResource(v71);
      return 3221225495LL;
    }
    v72 = operator new(0x28uLL, 0x38326956u, (POOL_TYPE)512);
    if ( v72 )
    {
      *v72 = 0LL;
      v72[1] = 0LL;
      *((_DWORD *)v72 + 6) = 0;
      *((_DWORD *)v72 + 7) = 13;
      *((_DWORD *)v72 + 8) = 32;
      v72[2] = 0LL;
    }
    else
    {
      v72 = 0LL;
    }
    v69[39] = (unsigned __int64)v72;
    if ( !v72 )
    {
      _InterlockedIncrement(&dword_1C0027580);
      v74 = WdLogNewEntry5_WdLowResource(v73);
      *(_QWORD *)(v74 + 24) = 2752LL;
LABEL_200:
      WdLogEvent5_WdLowResource(v74);
      v75 = -1073741801;
LABEL_300:
      v126 = (void *)v69[45];
      if ( v126 )
        MmUnmapViewInSystemSpace(v126);
      v127 = (void *)v69[44];
      if ( v127 )
      {
        ObfDereferenceObject(v127);
        if ( (v69[11] & 1) != 0 )
        {
          ObfDereferenceObject((PVOID)v69[44]);
          *((_BYTE *)v69 + 88) &= ~1u;
        }
      }
      v128 = v69[59];
      if ( v128 )
      {
        v129 = *(VIDMM_FLIP_QUEUE_REFERENCES **)(v128 + 16);
        if ( v129 )
          VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(v129);
        operator delete((void *)v69[59]);
      }
      v130 = (DXGFASTMUTEX *)v69[39];
      if ( v130 )
        DXGFASTMUTEX::`scalar deleting destructor'(v130);
      _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'((_VIDMM_GLOBAL_ALLOC *)v69);
      return (unsigned int)v75;
    }
    v76 = operator new(0x20uLL, 0x32346956u, (POOL_TYPE)512);
    v69[59] = (unsigned __int64)v76;
    if ( !v76 )
    {
      _InterlockedIncrement(&dword_1C00275DC);
      v74 = WdLogNewEntry5_WdLowResource(v77);
      *(_QWORD *)(v74 + 24) = 2765LL;
      goto LABEL_200;
    }
    memset(v76, 0, 0x20uLL);
    *(_QWORD *)(v69[59] + 16) = operator new[](0x10uLL, 0x33306956u, (POOL_TYPE)512);
    v80 = *(_QWORD **)(v69[59] + 16);
    if ( !v80 )
    {
      _InterlockedIncrement(&dword_1C00274CC);
      v74 = WdLogNewEntry5_WdLowResource(0LL);
      *(_QWORD *)(v74 + 24) = 2776LL;
      goto LABEL_200;
    }
    *v80 = 0LL;
    v80[1] = 0LL;
    _InterlockedIncrement(*(volatile signed __int32 **)(v69[59] + 16));
    v81 = (unsigned int)-((a10 & 0x100000) == 0);
    v82 = *(_QWORD *)(v69[59] + 16);
    v83 = (a4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(v82 + 4) = v81;
    *v69 = a4;
    if ( a4 > v83 )
    {
      v84 = (_QWORD *)WdLogNewEntry5_WdAssertion(v82, v81, v78, v79);
      v84[3] = a4;
LABEL_299:
      WdLogEvent5_WdAssertion(v84);
      v75 = -1073741811;
      goto LABEL_300;
    }
    v85 = a5;
    v86 = (v38 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( a5 > v86 )
      goto LABEL_208;
    ViewSize = (a4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( v83 > 0xFFFF0000 )
    {
      v84 = (_QWORD *)WdLogNewEntry5_WdAssertion(v82, v81, v78, v79);
      v84[3] = 2826LL;
      goto LABEL_299;
    }
    v85 = a6;
    v82 = (a6 + 4095) & 0xFFFFF000;
    v133 = v82;
    if ( a6 > (unsigned int)v82 )
    {
LABEL_208:
      v84 = (_QWORD *)WdLogNewEntry5_WdAssertion(v82, v81, v78, v79);
      v84[3] = v85;
      goto LABEL_299;
    }
    v87 = (unsigned int)v82;
    if ( v83 + v82 < v83 || v86 + v82 < v86 )
    {
      v84 = (_QWORD *)WdLogNewEntry5_WdAssertion(v82, v81, v78, v79);
      v84[3] = v83;
      v84[4] = v86;
      v84[5] = ViewSize;
      v84[6] = v87;
      goto LABEL_299;
    }
    if ( (a10 & 0x20000000) == 0 && (a10 & 8) == 0 && (a10 & 0x10000000) == 0 )
    {
LABEL_250:
      if ( (a10 & 0x4000) != 0 )
        *((_DWORD *)v69 + 20) |= 0x20u;
      v93 = v137;
      *((_DWORD *)v69 + 38) = 0;
      v69[2] = v83;
      v69[3] = v86;
      v69[1] = ViewSize;
      *((_DWORD *)v69 + 8) = v82;
      *(_DWORD *)v69[59] = a10;
      v94 = (_DWORD *)v69[59];
      *((_DWORD *)v69 + 17) = a7;
      *((_DWORD *)v69 + 16) = a8;
      *((_DWORD *)v69 + 18) = a9;
      *((_DWORD *)v69 + 30) = 0;
      *((_DWORD *)v69 + 19) = *((_DWORD *)v69 + 19) & 0xFFFFFF3F | ((v143 & 1 | (2 * (v138 & 1))) << 6);
      v95 = CurrentProcessId;
      v96 = (*v94 & 0x4000003A) == 0;
      *((_DWORD *)v69 + 76) = 0;
      v97 = (*((_DWORD *)v69 + 21) ^ (8 * v96)) & 8;
      v69[5] = a11;
      *((_DWORD *)v69 + 21) ^= v97;
      if ( (*(_BYTE *)(v95 + v93 + 420) & 3) != 0 )
      {
        v98 = 1 << (*(_WORD *)(v95 + v93 + 12) - *(_BYTE *)(v95 + v93 + 4));
        *((_DWORD *)v69 + 16) = a8 | v98;
        if ( v143 )
        {
          if ( (a10 & 0x8000) == 0 )
            *((_DWORD *)v69 + 17) = a7 | v98;
        }
      }
      if ( a11 )
        v94[6] = (*(_DWORD *)(a11 + 4) >> 6) & 0xF;
      else
        v94[6] = 0;
      v69[6] = a13;
      v69[14] = a16;
      *((_DWORD *)v69 + 94) = a14;
      *((_DWORD *)v69 + 19) = v141 & 0x3F | *((_DWORD *)v69 + 19) & 0xF3FFFFC0 | (((a16 != 0) | (2 * (a15 & 1))) << 26);
      v69[37] = (unsigned __int64)(v69 + 36);
      v69[36] = (unsigned __int64)(v69 + 36);
      *((_DWORD *)v69 + 114) = -1;
      *((_DWORD *)v69 + 115) = -1;
      v99 = VIDMM_GLOBAL::VerifySegmentSetAny((VIDMM_GLOBAL *)a1, v141, a7, 0x80000);
      v100 = VIDMM_GLOBAL::VerifySegmentSetAny((VIDMM_GLOBAL *)a1, v141, a7, 0x100000);
      v101 = *((_DWORD *)v69 + 19) ^ (*((_DWORD *)v69 + 19) ^ (8 * *((_DWORD *)v69 + 19))) & 0x400;
      *((_DWORD *)v69 + 19) = v101;
      if ( !a9 )
        goto LABEL_266;
      if ( (a9 & 0x1F) != 0 )
      {
        v102 = *(_QWORD *)(*(_QWORD *)(a1 + 3712)
                         + 8LL * ((a9 & 0x1F) + *(_DWORD *)(*(_QWORD *)(a1 + 39992) + CurrentProcessId + 4) - 1));
        *((_DWORD *)v69 + 19) = v101 ^ (v101 ^ (*(_DWORD *)(v102 + 56) << 10)) & 0x400;
      }
      else
      {
        v103 = (a9 >> 6) & 0x1F;
        if ( !v103 )
          goto LABEL_266;
        v102 = *(_QWORD *)(*(_QWORD *)(a1 + 3712)
                         + 8LL * (unsigned int)(v103 - 1 + *(_DWORD *)(*(_QWORD *)(a1 + 39992) + CurrentProcessId + 4)));
      }
      if ( v102 )
      {
        v104 = (*(_DWORD *)(v102 + 56) & 0x80000) != 0;
        v105 = (*(_DWORD *)(v102 + 56) & 0x100000) != 0;
        goto LABEL_269;
      }
LABEL_266:
      if ( v99 )
        goto LABEL_275;
      if ( v100 )
      {
LABEL_272:
        v107 = *((_DWORD *)v69 + 19) & 0xFFFF87FF | 0x800;
        *((_DWORD *)v69 + 19) = v107;
        if ( v99 )
        {
LABEL_273:
          v106 = v107 & 0xFFF87FFF | 0x10000;
          goto LABEL_277;
        }
        v106 = v107 & 0xFFF87FFF | 0x8000;
LABEL_277:
        *((_DWORD *)v69 + 19) = v106;
        if ( *(_DWORD *)(a1 + 32) < 0x5013u
          || (v106 & 0x78000) == 0x18000
          || VIDMM_GLOBAL::VerifySegmentSetAtLeastOneInMask((VIDMM_GLOBAL *)a1, v141, a7, 1572864) )
        {
          if ( (a10 & 0x10) != 0 || (a10 & 0x20) != 0 )
            *((_BYTE *)v69 + 94) = 1;
          if ( bTracingEnabled )
          {
            v112 = v69[5];
            if ( v112 )
              v113 = *(unsigned int **)(v112 + 24);
            else
              v113 = 0LL;
            LOBYTE(v114) = 0;
            if ( a2 )
              v114 = *(_QWORD *)(a2 + 24);
            v136 = *(_QWORD *)(a1 + 24);
            v137 = v69[44];
            CurrentProcessId = (__int64)PsGetCurrentProcessId();
            LOBYTE(v139) = 0;
            v115 = 0LL;
            v142 = 0;
            LOBYTE(v116) = 0;
            v117 = 0LL;
            LOBYTE(v118) = 0;
            LOBYTE(v119) = 0;
            LOBYTE(v120) = 0;
            LOBYTE(v121) = 0;
            if ( v113 )
            {
              v115 = *v113;
              v116 = v113[1];
              v117 = v113[2];
              v118 = v113[3];
              v119 = v113[4];
              v120 = v113[5];
              v121 = v113[6];
              v139 = v113[7];
              v122 = v113[8];
              v123 = v113[9];
              v142 = v122;
            }
            else
            {
              LOBYTE(v123) = 0;
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
              Template_pppqxqqqqqqqpppqqqqqqqqqqtp(
                v115,
                &EventCreateAdapterAllocation,
                v117,
                CurrentProcessId,
                v114,
                v136,
                a10,
                v83,
                v133,
                v131,
                a7,
                a9,
                v132,
                a8,
                a14,
                (char)v69,
                v112,
                0,
                v115,
                v116,
                v117,
                v118,
                v119,
                v120,
                v121,
                v139,
                v142,
                v123,
                0,
                v137);
          }
          ++*(_DWORD *)(a1 + 7592);
          *(_QWORD *)(a1 + 7600) += v83;
          *(_QWORD *)(a1 + 39960) += v83;
          v124 = *(_QWORD *)(a1 + 39960);
          v125 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 3136LL);
          if ( *(_QWORD *)(v125 + 312) < v124 )
            *(_QWORD *)(v125 + 312) = v124;
          *a17 = v69;
          return 0LL;
        }
        v84 = (_QWORD *)WdLogNewEntry5_WdAssertion(v109, v108, v110, v111);
        v84[3] = 3154LL;
        goto LABEL_299;
      }
      v104 = 0;
      v105 = 0;
LABEL_269:
      if ( !v104 )
      {
        if ( !v105 )
        {
          v106 = *((_DWORD *)v69 + 19) & 0xFFF807FF | 0x19000;
          goto LABEL_277;
        }
        goto LABEL_272;
      }
LABEL_275:
      *((_DWORD *)v69 + 19) &= 0xFFFF87FF;
      v107 = *((_DWORD *)v69 + 19);
      if ( v100 )
        goto LABEL_273;
      v106 = v107 & 0xFFF87FFF;
      goto LABEL_277;
    }
    if ( (a10 & 0x10000000) != 0 )
      a10 |= 8u;
    if ( (a10 & 0x400000) != 0 )
    {
      ObfReferenceObject(Object);
      v88 = (PVOID *)(v69 + 44);
      v75 = 0;
      v69[44] = (unsigned __int64)Object;
    }
    else
    {
      v88 = (PVOID *)(v69 + 44);
      v136 = v83;
      v89 = v69 + 44;
      if ( (a10 & 4) != 0 )
        v90 = MmCreateSection(v89, 0LL, 0LL, &v136, 4, 0x8000000, 0LL, 0LL);
      else
        v90 = MmCreateSection(v89, 0LL, 0LL, &v136, 4, 1207959552, 0LL, 0LL);
      v75 = v90;
      if ( v90 < 0 )
        *v88 = 0LL;
      if ( (a10 & 0x20000000) != 0 )
      {
        v91 = *v88;
        if ( *v88 )
        {
          *((_BYTE *)v69 + 88) |= 1u;
          ObfReferenceObject(v91);
        }
      }
      if ( v75 < 0 )
        goto LABEL_300;
    }
    if ( (a10 & 8) == 0 && (a10 & 0x10000000) == 0 )
      goto LABEL_248;
    v75 = MmMapViewInSystemSpace(*v88, (PVOID *)v69 + 45, &ViewSize);
    if ( v75 >= 0 )
    {
LABEL_249:
      LODWORD(v82) = v133;
      goto LABEL_250;
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
                  goto LABEL_248;
                v92 = 6603LL;
              }
              else
              {
                v92 = 6602LL;
              }
            }
            else
            {
              v92 = 6613LL;
            }
          }
          else
          {
            v92 = 6601LL;
          }
        }
        else
        {
          v92 = 6600LL;
        }
      }
      else
      {
        v92 = 6599LL;
      }
    }
    else
    {
      v92 = 6598LL;
    }
    DxgkSqmGenericDword(&Dxgk_SqmIncrementDwordEvt, v92, 1LL);
LABEL_248:
    if ( v75 < 0 )
      goto LABEL_300;
    goto LABEL_249;
  }
  if ( !VIDMM_GLOBAL::VerifySegmentSet((VIDMM_GLOBAL *)a1, v17, a8, 1, 0LL) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v41, v40, v42, v43);
    *(_QWORD *)(v23 + 24) = 2238LL;
    goto LABEL_313;
  }
  if ( VIDMM_GLOBAL::VerifySegmentSetAny((VIDMM_GLOBAL *)a1, v17, a8, 32) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v45, v44, v46, v37);
    *(_QWORD *)(v23 + 24) = 2253LL;
    goto LABEL_313;
  }
  v34 = 0LL;
  v47 = *(unsigned int *)(CurrentProcessId + v137 + 8);
  if ( !(_DWORD)v47 )
  {
LABEL_57:
    v25 = a10;
    goto LABEL_58;
  }
  v37 = *(unsigned int *)(*(_QWORD *)(a1 + 39992) + CurrentProcessId + 4);
  while ( 1 )
  {
    v48 = (unsigned int)(v37 + v34);
    if ( _bittest((const int *)&a8, v34) )
    {
      v49 = *(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8 * v48);
      if ( a4 > *(_QWORD *)(v49 + 72) )
        break;
    }
    v34 = (unsigned int)(v34 + 1);
    if ( (unsigned int)v34 >= (unsigned int)v47 )
      goto LABEL_57;
  }
  v53 = WdLogNewEntry5_WdWarning(v49, v34, v47);
  *(_QWORD *)(v53 + 24) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8 * v48) + 72LL);
  *(_QWORD *)(v53 + 32) = a4;
  WdLogEvent5_WdWarning(v53);
  return 3223191808LL;
}
