/*
 * XREFs of ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0056880
 * Callers:
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00418A8 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C004B450 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@KPEAVDXGADAPTERALLOCATION@@PEAXPEAPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0057500 (-CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXG.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0058CD8 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001390 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000F76C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C000FC70 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1C0010524 (--_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     Template_pppqxqqqqqqqpppqqqqqqqqqqtph @ 0x1C0013778 (Template_pppqxqqqqqqqpppqqqqqqqqqqtph.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x1C001CEF0 (-ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z.c)
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C001CF54 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C0052898 (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     ?VerifySupportedSegmentSet@VIDMM_GLOBAL@@IEAAEKKU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1C0052A10 (-VerifySupportedSegmentSet@VIDMM_GLOBAL@@IEAAEKKU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VI.c)
 *     ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C0052CBC (-VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005AADC (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005AE3C (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C00878CC (-VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreateOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        struct _D3DDDI_SEGMENTPREFERENCE a9,
        struct _DXGK_ALLOCATIONINFOFLAGS a10,
        struct DXGADAPTERALLOCATION *a11,
        void *a12,
        void *a13,
        unsigned int a14,
        unsigned __int8 a15,
        void *a16,
        struct _VIDMM_GLOBAL_ALLOC **a17)
{
  int Value; // ebx
  unsigned __int64 v18; // rdi
  unsigned int v19; // r14d
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rax
  unsigned int v27; // esi
  unsigned int v28; // r12d
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rax
  __int64 CurrentProcess; // rax
  void *v34; // r9
  unsigned int i; // r8d
  __int64 v36; // rcx
  __int64 v37; // rdx
  int v38; // r13d
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  _DWORD *v42; // rax
  int v43; // r14d
  unsigned int v44; // r9d
  unsigned int v45; // r10d
  __int64 v46; // rdx
  unsigned int v47; // r9d
  __int64 v48; // rdi
  int v49; // r15d
  __int64 v50; // rcx
  struct _D3DDDI_SEGMENTPREFERENCE *v51; // rax
  __int64 v52; // rcx
  struct _D3DDDI_SEGMENTPREFERENCE *v53; // rsi
  _QWORD *v54; // rax
  __int64 v55; // rcx
  PVOID v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rcx
  int v59; // edx
  __int64 v60; // rcx
  unsigned __int64 v61; // r14
  unsigned __int64 v62; // r15
  unsigned __int64 v63; // rdi
  __int64 v64; // r12
  int *v65; // rax
  char v66; // di
  unsigned int v67; // ecx
  int v68; // ecx
  int v69; // ecx
  _DWORD *v70; // rdx
  unsigned __int64 v71; // rcx
  __int16 v72; // ax
  __int64 v73; // rdx
  VIDMM_GLOBAL *v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  int v77; // r15d
  __int64 v78; // rax
  struct VIDMM_SEGMENT *v79; // r9
  int v80; // r13d
  unsigned __int8 v81; // dl
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rcx
  __int64 v87; // rax
  int v88; // edx
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rcx
  unsigned int v93; // eax
  __int64 v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rax
  int v97; // eax
  unsigned __int8 v98; // al
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  _QWORD *v126; // rax
  UINT v127; // r11d
  __int64 v128; // r15
  unsigned int *v129; // rbx
  __int64 v130; // r13
  unsigned int v131; // r10d
  unsigned int v132; // r11d
  unsigned int v133; // eax
  unsigned int v134; // ebx
  __int64 v135; // rax
  VIDMM_FLIP_QUEUE_REFERENCES *v136; // rcx
  DXGFASTMUTEX *v137; // rcx
  __int64 v138; // rax
  int v139; // [rsp+48h] [rbp-130h]
  int v140; // [rsp+60h] [rbp-118h]
  unsigned int v141; // [rsp+100h] [rbp-78h] BYREF
  unsigned int v142; // [rsp+104h] [rbp-74h] BYREF
  unsigned int v143[2]; // [rsp+108h] [rbp-70h] BYREF
  HANDLE CurrentProcessId; // [rsp+110h] [rbp-68h]
  __int64 v145; // [rsp+118h] [rbp-60h]
  __int64 v146; // [rsp+120h] [rbp-58h]
  bool v147; // [rsp+180h] [rbp+8h]
  char v148; // [rsp+180h] [rbp+8h]
  unsigned int v150; // [rsp+190h] [rbp+18h]
  __int16 v151; // [rsp+190h] [rbp+18h]

  v150 = a3;
  Value = a10.Value;
  v18 = a4;
  v19 = a3;
  if ( *((_DWORD *)this + 1604) == 1 )
  {
    v19 = 0;
    v150 = 0;
  }
  v21 = 456LL * v19;
  v146 = v21 + *((_QWORD *)this + 5017);
  v145 = v21;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, a2, a3, a4) + 24) = a2;
    v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v22, v24, v25);
    v27 = a7;
    v28 = a8;
    v26[3] = v18;
    v26[4] = a6;
    v26[5] = 0LL;
    v26[6] = a7;
    v26[7] = a8;
    v32 = (_QWORD *)WdLogNewEntry5_WdTrace(a6, v29, v30, v31);
    v32[3] = a9.Value;
    v21 = (__int64)a11;
    v32[5] = a11;
    v32[4] = a10.Value;
  }
  else
  {
    v27 = a7;
    v28 = a8;
  }
  *a17 = 0LL;
  if ( *((_DWORD *)this + 8) < 0x5023u && (a10.Value & 0x40000) != 0 )
  {
    v95 = WdLogNewEntry5_WdAssertion(v21, a2);
    *(_QWORD *)(v95 + 24) = 2112LL;
    WdLogEvent5_WdAssertion(v95);
    return 3221225485LL;
  }
  v147 = (a10.Value & 0x40001) == 1;
  if ( !*((_BYTE *)this + 40096)
    && (CurrentProcess = PsGetCurrentProcess(v21), PsGetProcessWow64Process(CurrentProcess)) )
  {
    v34 = a16;
  }
  else
  {
    v34 = a16;
    if ( (a10.Value & 0x60000000) == 0 && (a10.Value & 0x80000000) == 0 && (a10.Value & 0x10400008) == 0 && !a16 )
    {
      v147 = 1;
      Value = a10.Value & 0xFFFBFFFF;
    }
  }
  for ( i = 0; i < 0x1E; i += 6 )
  {
    v36 = i;
    v37 = (a9.Value >> i) & 0x1F;
    if ( ((a9.Value >> i) & 0x1F) != 0 )
    {
      v37 = (unsigned __int8)(((a9.Value >> i) & 0x1F) - 1);
      v36 = ~v27;
      if ( _bittest((const int *)&v36, v37) )
      {
        v96 = WdLogNewEntry5_WdAssertion(v36, v37);
        *(_QWORD *)(v96 + 24) = 2161LL;
        WdLogEvent5_WdAssertion(v96);
        return 3221225485LL;
      }
    }
  }
  v38 = 1;
  if ( !dword_1C0035400 || (Value & 1) != 0 )
    goto LABEL_18;
  v97 = *(_BYTE *)&a9.0 & 0x1F;
  if ( (*(_BYTE *)&a9.0 & 0x1F) != 0 )
  {
    v36 = (unsigned int)(v97 - 1);
    v27 = 1 << (v97 - 1);
    goto LABEL_151;
  }
  v98 = VIDMM_GLOBAL::VerifySegmentSetAtLeastOneInMask(this, v19, v27, 0x1001u, v143);
  v34 = a16;
  if ( !v98 )
  {
    v27 = v143[0];
LABEL_151:
    a7 = v27;
  }
LABEL_18:
  if ( !v18 )
  {
    v99 = WdLogNewEntry5_WdAssertion(v36, v37);
    *(_QWORD *)(v99 + 24) = 2201LL;
    WdLogEvent5_WdAssertion(v99);
    return 3221225485LL;
  }
  if ( ((Value | ((Value | ((Value | ((unsigned int)Value >> 1)) >> 1)) >> 1)) & 0x400) != 0 )
  {
    v100 = WdLogNewEntry5_WdAssertion(v36, v37);
    *(_QWORD *)(v100 + 24) = 2209LL;
    WdLogEvent5_WdAssertion(v100);
    return 3221225485LL;
  }
  v142 = 0;
  v141 = 0;
  if ( !VIDMM_GLOBAL::VerifySupportedSegmentSet(
          this,
          v19,
          v27,
          (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0)Value,
          v18,
          a5,
          v34 != 0LL,
          (struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *)&v141) )
  {
    v101 = WdLogNewEntry5_WdAssertion(v40, v39);
    *(_QWORD *)(v101 + 24) = 2220LL;
    WdLogEvent5_WdAssertion(v101);
    return 3221225485LL;
  }
  v143[1] = 1;
  if ( (Value & 0x40000) != 0 )
  {
    if ( (Value & 1) == 0 )
    {
      v102 = WdLogNewEntry5_WdAssertion(v40, v39);
      *(_QWORD *)(v102 + 24) = 2235LL;
      WdLogEvent5_WdAssertion(v102);
      return 3221225485LL;
    }
    if ( (Value & 0x32) != 0 )
    {
      v103 = WdLogNewEntry5_WdAssertion(v40, v39);
      *(_QWORD *)(v103 + 24) = 2247LL;
      WdLogEvent5_WdAssertion(v103);
      return 3221225485LL;
    }
  }
  if ( (Value & 0x20000) != 0 )
  {
    if ( (Value & 2) != 0
      || (Value & 4) != 0 && (v40 = *(unsigned int *)(*((_QWORD *)this + 3) + 300LL), (v40 & 8) == 0)
      || (Value & 0x180038) != 0 )
    {
      v104 = WdLogNewEntry5_WdAssertion(v40, v39);
      *(_QWORD *)(v104 + 24) = 2266LL;
      WdLogEvent5_WdAssertion(v104);
      return 3221225485LL;
    }
  }
  if ( (v141 & 4) == 0 )
    a5 = 0LL;
  if ( !v28 )
    goto LABEL_41;
  v42 = (_DWORD *)*((_QWORD *)this + 5017);
  LODWORD(CurrentProcessId) = 32;
  v43 = 0;
  v44 = v28;
  v45 = *(_DWORD *)((char *)v42 + v145 + 4);
  if ( (~*v42 & v28) != 0 )
    goto LABEL_165;
  LODWORD(v39) = 1;
  do
  {
    if ( (v44 & 1) != 0 )
    {
      v40 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v45);
      if ( (*(_DWORD *)(v40 + 56) & 1) != 1 )
        v43 |= v39;
    }
    v39 = (unsigned int)__ROL4__(v39, 1);
    ++v45;
    v44 >>= 1;
  }
  while ( v44 );
  if ( v43 )
  {
LABEL_165:
    v107 = WdLogNewEntry5_WdAssertion(v40, v39);
    *(_QWORD *)(v107 + 24) = 2298LL;
    WdLogEvent5_WdAssertion(v107);
    return 3221225485LL;
  }
  v46 = v28;
  v47 = *(_DWORD *)((char *)v42 + v145 + 4);
  if ( (~*(_DWORD *)((char *)v42 + v145) & v28) != 0 )
  {
LABEL_37:
    v39 = 0LL;
    v41 = *(unsigned int *)(v146 + 8);
    if ( (_DWORD)v41 )
    {
      while ( 1 )
      {
        v48 = (unsigned int)(*(_DWORD *)((char *)v42 + v145 + 4) + v39);
        if ( _bittest((const int *)&v28, v39) )
        {
          v40 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v48);
          if ( a4 > *(_QWORD *)(v40 + 72) )
            break;
        }
        v39 = (unsigned int)(v39 + 1);
        if ( (unsigned int)v39 >= (unsigned int)v41 )
          goto LABEL_40;
      }
      v106 = WdLogNewEntry5_WdWarning(v40);
      *(_QWORD *)(v106 + 24) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8 * v48) + 72LL);
      *(_QWORD *)(v106 + 32) = a4;
      WdLogEvent5_WdWarning(v106);
      return 3223191808LL;
    }
LABEL_40:
    v19 = v150;
    v18 = a4;
LABEL_41:
    v49 = ((unsigned int)Value >> 1) & 1;
    if ( v49 )
    {
      if ( (Value & 1) == 0 )
      {
        v108 = WdLogNewEntry5_WdAssertion(v40, v39);
        *(_QWORD *)(v108 + 24) = 2350LL;
        WdLogEvent5_WdAssertion(v108);
        return 3221225485LL;
      }
      if ( (Value & 0x20000000) != 0 || Value < 0 || (Value & 0x40000000) != 0 )
      {
        v109 = WdLogNewEntry5_WdAssertion(v40, v39);
        *(_QWORD *)(v109 + 24) = 2363LL;
        WdLogEvent5_WdAssertion(v109);
        return 3221225485LL;
      }
    }
    if ( (Value & 0x800004) == 4 )
    {
      if ( *((_BYTE *)this + 6497) )
      {
        if ( !VIDMM_GLOBAL::VerifySegmentSet(this, v19, v28, 16, 0LL) )
        {
          v110 = WdLogNewEntry5_WdAssertion(v40, v39);
          *(_QWORD *)(v110 + 24) = 2396LL;
          WdLogEvent5_WdAssertion(v110);
          return 3221225485LL;
        }
      }
      else
      {
        v40 = *(unsigned int *)(*((_QWORD *)this + 3) + 300LL);
        if ( (v40 & 8) == 0 && !VIDMM_GLOBAL::VerifySegmentSet(this, v19, v28, 1, 0LL) )
        {
          v111 = WdLogNewEntry5_WdAssertion(v40, v39);
          *(_QWORD *)(v111 + 24) = 2403LL;
          WdLogEvent5_WdAssertion(v111);
          return 3221225485LL;
        }
      }
    }
    if ( (Value & 0x20000000) != 0 && (Value & 0x4000003A) != 0 )
    {
      v87 = WdLogNewEntry5_WdAssertion(v40, v39);
      *(_QWORD *)(v87 + 24) = 2424LL;
      WdLogEvent5_WdAssertion(v87);
      return 3221225485LL;
    }
    if ( (Value & 0x20100000) == 0x100000 )
    {
      v112 = WdLogNewEntry5_WdAssertion(v40, v39);
      *(_QWORD *)(v112 + 24) = 2436LL;
      WdLogEvent5_WdAssertion(v112);
      return 3221225485LL;
    }
    if ( a16 && (Value & 0x40000302) != 0 )
    {
      v89 = WdLogNewEntry5_WdAssertion(a16, v39);
      *(_QWORD *)(v89 + 24) = 2456LL;
      WdLogEvent5_WdAssertion(v89);
      return 3221225485LL;
    }
    if ( (Value & 0x4000008) == 0x4000000 )
    {
      v90 = WdLogNewEntry5_WdAssertion(a16, v39);
      *(_QWORD *)(v90 + 24) = 2472LL;
      WdLogEvent5_WdAssertion(v90);
      return 3221225485LL;
    }
    if ( (Value & 8) != 0
      && ((Value & 0x4000001) == 1 && !a16 || (Value & 0x20000032) != 0 || Value < 0 || (Value & 0x40000000) != 0) )
    {
      v113 = WdLogNewEntry5_WdAssertion(a16, v39);
      *(_QWORD *)(v113 + 24) = 2505LL;
      WdLogEvent5_WdAssertion(v113);
      return 3221225485LL;
    }
    if ( (Value & 0x10) != 0 && ((Value & 0x20000022) != 0 || Value < 0 || (Value & 0x40000000) != 0) )
    {
      v114 = WdLogNewEntry5_WdAssertion(a16, v39);
      *(_QWORD *)(v114 + 24) = 2529LL;
      WdLogEvent5_WdAssertion(v114);
      return 3221225485LL;
    }
    if ( (Value & 0x20) != 0 && ((Value & 0x20000012) != 0 || Value < 0 || (Value & 0x40000000) != 0) )
    {
      v115 = WdLogNewEntry5_WdAssertion(a16, v39);
      *(_QWORD *)(v115 + 24) = 2553LL;
      WdLogEvent5_WdAssertion(v115);
      return 3221225485LL;
    }
    v50 = (unsigned int)Value >> 31;
    if ( Value < 0 )
    {
      if ( v49
        || (Value & 4) != 0
        && (v39 = *(unsigned int *)(*((_QWORD *)this + 3) + 300LL), (v39 & 0x10) == 0)
        && (v39 & 8) == 0
        || (Value & 0x40000030) != 0 )
      {
        v91 = WdLogNewEntry5_WdAssertion(v50, v39);
        *(_QWORD *)(v91 + 24) = 2577LL;
        WdLogEvent5_WdAssertion(v91);
        return 3221225485LL;
      }
    }
    if ( (Value & 0x40000000) != 0 )
    {
      if ( v49
        || (Value & 4) != 0
        && (v39 = *(unsigned int *)(*((_QWORD *)this + 3) + 300LL), (v39 & 0x10) == 0)
        && (v39 & 8) == 0
        || (Value & 0x30) != 0
        || Value < 0 )
      {
        v116 = WdLogNewEntry5_WdAssertion(v50, v39);
        *(_QWORD *)(v116 + 24) = 2601LL;
        WdLogEvent5_WdAssertion(v116);
        return 3221225485LL;
      }
      if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 1524LL) & 0x200) == 0 )
        Value |= 1u;
      if ( (Value & 1) != 0 )
        v147 = 1;
      Value |= 0x20000000u;
    }
    if ( (Value & 0x10000000) != 0 )
    {
      v92 = *((_QWORD *)this + 3);
      v93 = Value & 0xEFFF7FBF;
      v94 = *(unsigned int *)(v92 + 300);
      if ( (v94 & 8) != 0 || (v94 & 0x10) != 0 )
        v93 = Value & 0xEFFF7FBB;
      if ( v93 )
      {
        v117 = WdLogNewEntry5_WdAssertion(v92, v94);
        *(_QWORD *)(v117 + 24) = 2643LL;
        WdLogEvent5_WdAssertion(v117);
        return 3221225485LL;
      }
      if ( !VIDMM_GLOBAL::VerifySegmentSet(this, v19, v28, 1, 0LL) )
      {
        v118 = WdLogNewEntry5_WdAssertion(v50, v39);
        *(_QWORD *)(v118 + 24) = 2653LL;
        WdLogEvent5_WdAssertion(v118);
        return 3221225485LL;
      }
    }
    if ( (Value & 0x400000) != 0 )
    {
      if ( (Value & 0x20000000) == 0 )
      {
        v119 = WdLogNewEntry5_WdAssertion(v50, v39);
        *(_QWORD *)(v119 + 24) = 2669LL;
        WdLogEvent5_WdAssertion(v119);
        return 3221225485LL;
      }
      if ( !a12 )
      {
        v120 = WdLogNewEntry5_WdAssertion(v50, v39);
        *(_QWORD *)(v120 + 24) = 2679LL;
        WdLogEvent5_WdAssertion(v120);
        return 3221225485LL;
      }
    }
    if ( (Value & 0x4000) != 0 )
    {
      if ( (Value & 1) == 0 )
      {
        v121 = WdLogNewEntry5_WdAssertion(v50, v39);
        *(_QWORD *)(v121 + 24) = 2691LL;
        WdLogEvent5_WdAssertion(v121);
        return 3221225485LL;
      }
      if ( (Value & 0x4037A) != 0 )
      {
        v122 = WdLogNewEntry5_WdAssertion(v50, v39);
        *(_QWORD *)(v122 + 24) = (unsigned int)Value;
        WdLogEvent5_WdAssertion(v122);
        return 3221225485LL;
      }
    }
    if ( (VIDMM_GLOBAL::_Config & 2) != 0
      && DXGPROCESS::GetCurrent()
      && *((_BYTE *)DXGPROCESS::GetCurrent() + 290)
      && (Value & 0x50000000) == 0 )
    {
      Value |= 0x8000000u;
    }
    v51 = (struct _D3DDDI_SEGMENTPREFERENCE *)operator new(0x200uLL, 0x31306956u, v41, PagedPool);
    v53 = v51;
    if ( !v51 )
    {
      _InterlockedIncrement(&dword_1C0035564);
      v138 = WdLogNewEntry5_WdLowResource(v52);
      *(_QWORD *)(v138 + 24) = 2735LL;
      WdLogEvent5_WdLowResource(v138);
      return 3221225495LL;
    }
    *(_QWORD *)&v51[90].0 = 0LL;
    *(_QWORD *)&v51[88].0 = 0LL;
    *(_QWORD *)&v51[124].0 = 0LL;
    *(_QWORD *)&v51[50].0 = v51 + 48;
    *(_QWORD *)&v51[48].0 = v51 + 48;
    v54 = operator new(0x28uLL, 0x38326956u, (POOL_TYPE)512);
    if ( v54 )
    {
      *v54 = 0LL;
      v54[1] = 0LL;
      *((_DWORD *)v54 + 6) = 0;
      *((_DWORD *)v54 + 7) = 13;
      *((_DWORD *)v54 + 8) = 32;
      v54[2] = 0LL;
    }
    else
    {
      v54 = 0LL;
    }
    *(_QWORD *)&v53[80].0 = v54;
    if ( !v54 )
    {
      _InterlockedIncrement(&dword_1C0035610);
      v123 = WdLogNewEntry5_WdLowResource(v55);
      *(_QWORD *)(v123 + 24) = 2747LL;
      WdLogEvent5_WdLowResource(v123);
      v77 = -1073741801;
      goto LABEL_228;
    }
    v56 = operator new(0x20uLL, 0x32346956u, (POOL_TYPE)512);
    *(_QWORD *)&v53[126].0 = v56;
    if ( !v56 )
    {
      _InterlockedIncrement(&dword_1C003566C);
      v124 = WdLogNewEntry5_WdLowResource(v57);
      *(_QWORD *)(v124 + 24) = 2760LL;
      WdLogEvent5_WdLowResource(v124);
      v77 = -1073741801;
      goto LABEL_228;
    }
    memset(v56, 0, 0x20uLL);
    *(_QWORD *)(*(_QWORD *)&v53[126].0 + 16LL) = operator new[](0xCuLL, 0x33306956u, (POOL_TYPE)512);
    v58 = *(_QWORD *)(*(_QWORD *)&v53[126].0 + 16LL);
    if ( !v58 )
    {
      _InterlockedIncrement(&dword_1C003555C);
      v125 = WdLogNewEntry5_WdLowResource(0LL);
      *(_QWORD *)(v125 + 24) = 2771LL;
      WdLogEvent5_WdLowResource(v125);
      v77 = -1073741801;
      goto LABEL_228;
    }
    *(_QWORD *)v58 = 0LL;
    *(_DWORD *)(v58 + 8) = 0;
    _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)&v53[126].0 + 16LL));
    if ( (Value & 0x100000) != 0 )
      v59 = 0;
    else
      v59 = -1;
    v60 = *(_QWORD *)(*(_QWORD *)&v53[126].0 + 16LL);
    *(_DWORD *)(v60 + 4) = v59;
    if ( a11 && (*((_DWORD *)a11 + 1) & 0x8000) != 0 )
      v53[19].Value |= 0x800u;
    *(_QWORD *)&v53->0 = v18;
    v61 = (v18 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( v18 > v61 )
    {
      v126 = (_QWORD *)WdLogNewEntry5_WdAssertion(v60, a11);
      v126[3] = v18;
    }
    else
    {
      v62 = a5;
      v63 = (a5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( a5 > v63 )
        goto LABEL_208;
      if ( v61 > 0xFFFF0000 )
      {
        v126 = (_QWORD *)WdLogNewEntry5_WdAssertion(v60, a11);
        v126[3] = 2826LL;
        goto LABEL_227;
      }
      v62 = a6;
      v64 = (a6 + 4095) & 0xFFFFF000;
      if ( a6 > (unsigned int)v64 )
      {
LABEL_208:
        v126 = (_QWORD *)WdLogNewEntry5_WdAssertion(v60, a11);
        v126[3] = v62;
      }
      else
      {
        if ( v61 + v64 >= v61 && v63 + v64 >= v63 )
        {
          if ( (Value & 0x10000000) != 0 )
            Value |= 8u;
          *(_QWORD *)&v53[92].0 = a12;
          v65 = *(int **)&v53[126].0;
          *(_QWORD *)&v53[6].0 = v63;
          v66 = v141;
          v67 = v141 << 7;
          v53[40].Value = 0;
          *(_QWORD *)&v53[4].0 = v61;
          *(_QWORD *)&v53[2].0 = v61;
          v53[8].Value = v64;
          *v65 = Value;
          v68 = v53[19].Value ^ (v53[19].Value ^ v67) & 0x80;
          v53[17].Value = a7;
          v53[16].Value = a8;
          v53[18].0 = a9.0;
          v53[32].Value = 0;
          v53[78].Value = 0;
          v69 = ((unsigned __int8)v68 ^ (unsigned __int8)(32 * v66)) & 0x40 ^ v68;
          *(_QWORD *)&v53[10].0 = a11;
          v53[19].Value = v69;
          v53[20].Value ^= (v53[20].Value ^ (v147 << 7)) & 0x80;
          v70 = *(_DWORD **)(456LL * (v69 & 0x3F) + *((_QWORD *)this + 5017) + 424);
          v71 = (unsigned int)dword_1C0035404;
          v72 = 0;
          if ( (_DWORD)dword_1C0035404 && (v66 & 2) != 0 && v70 && ((*v70 & 0x200) != 0 || (_DWORD)dword_1C0035404 == 2) )
          {
            v71 = *(_QWORD *)&v53[2].0;
            if ( !(_WORD)v71 || v71 > (unsigned int)dword_1C0035408 )
              v72 = 1;
          }
          v53[20].Value ^= ((unsigned __int16)*(_DWORD *)&v53[20].0 ^ (unsigned __int16)(v72 << 8)) & 0x100;
          v77 = VIDMM_GLOBAL::CommitGlobalBackingStore((VIDMM_GLOBAL *)v71, (struct _VIDMM_GLOBAL_ALLOC *)v53);
          if ( v77 >= 0 )
          {
            if ( (Value & 0x4000) != 0 )
              v53[20].Value |= 0x20u;
            if ( (*(_BYTE *)(v146 + 420) & 3) != 0 )
            {
              v88 = 1 << (*(_WORD *)(v146 + 12) - *(_BYTE *)(v146 + 4));
              v53[16].Value |= v88;
              if ( (v66 & 2) != 0 && (Value & 0x8000) == 0 )
                v53[17].Value |= v88;
            }
            v78 = *(_QWORD *)&v53[126].0;
            if ( a11 )
              *(_DWORD *)(v78 + 12) = (*((_DWORD *)a11 + 1) >> 6) & 0xF;
            else
              *(_DWORD *)(v78 + 12) = 0;
            *(_QWORD *)&v53[12].0 = a13;
            *(_QWORD *)&v53[30].0 = a16;
            if ( !a16 )
              v38 = 0;
            v79 = 0LL;
            v80 = v53[19].Value ^ (v38 << 27);
            v53[98].Value = a14;
            v53[19].Value ^= (v53[19].Value ^ v80 & 0x8000000 ^ (a15 << 28)) & 0x10000000 ^ v80 & 0x8000000 ^ ((unsigned __int8)v150 ^ *(_BYTE *)&v53[19].0) & 0x3F;
            *(_QWORD *)&v53[76].0 = v53 + 74;
            *(_QWORD *)&v53[74].0 = v53 + 74;
            *(_QWORD *)&v53[122].0 = -1LL;
            v81 = (v53[19].Value & 0x80) != 0;
            if ( a9.0 )
            {
              if ( (*(_BYTE *)&a9.0 & 0x1F) != 0 )
              {
                v79 = *(struct VIDMM_SEGMENT **)(*((_QWORD *)this + 464)
                                               + 8LL
                                               * ((*(_BYTE *)&a9.0 & 0x1Fu)
                                                + *(_DWORD *)(v145 + *((_QWORD *)this + 5017) + 4)
                                                - 1));
                v81 = *((_BYTE *)v79 + 56) & 1;
              }
              else
              {
                v127 = (a9.Value >> 6) & 0x1F;
                if ( v127 )
                  v79 = *(struct VIDMM_SEGMENT **)(*((_QWORD *)this + 464)
                                                 + 8LL * (v127 + *(_DWORD *)(v145 + *((_QWORD *)this + 5017) + 4) - 1));
              }
            }
            v53[19].Value ^= ((unsigned __int16)*(_DWORD *)&v53[19].0 ^ (unsigned __int16)(v81 << 10)) & 0x400;
            if ( VIDMM_GLOBAL::VerifyBudgetGroups(this, v150, a7, v79, (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v142) )
            {
              v85 = v53[19].Value ^ (v53[19].Value ^ (v142 << 12)) & 0xF0000;
              v53[19].Value = v85 ^ (*(_WORD *)&v53[19].0 ^ (unsigned __int16)((_WORD)v142 << 12)) & 0xF000;
              if ( (Value & 0x30) != 0 )
                *((_BYTE *)&v53[24].0 + 1) = 1;
              if ( bTracingEnabled )
              {
                v128 = *(_QWORD *)&v53[10].0;
                if ( v128 )
                  v129 = *(unsigned int **)(v128 + 24);
                else
                  v129 = 0LL;
                LOBYTE(v130) = (_BYTE)a2;
                if ( a2 )
                  v130 = *((_QWORD *)a2 + 3);
                v145 = *((_QWORD *)this + 3);
                v151 = *(_WORD *)&v53[19].0 & 0x3F;
                v146 = *(_QWORD *)&v53[92].0;
                CurrentProcessId = PsGetCurrentProcessId();
                v141 = 0;
                v85 = 0LL;
                v142 = 0;
                v82 = 0LL;
                v148 = 0;
                v83 = 0LL;
                v84 = 0LL;
                LOBYTE(v131) = 0;
                LOBYTE(v132) = 0;
                if ( v129 )
                {
                  v85 = *v129;
                  v82 = v129[1];
                  v83 = v129[2];
                  v84 = v129[3];
                  v131 = v129[4];
                  v132 = v129[5];
                  v141 = v129[6];
                  v142 = v129[7];
                  v133 = v129[8];
                  v134 = v129[9];
                  v148 = v133;
                }
                else
                {
                  LOBYTE(v134) = 0;
                }
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
                  Template_pppqxqqqqqqqpppqqqqqqqqqqtph(
                    v85,
                    &EventCreateAdapterAllocation,
                    v83,
                    (__int64)CurrentProcessId,
                    v130,
                    v145,
                    *(_BYTE *)&a10.0,
                    v61,
                    0,
                    v139,
                    a7,
                    *(_BYTE *)&a9.0,
                    v140,
                    a8,
                    a14,
                    (char)v53,
                    v128,
                    0,
                    v85,
                    v82,
                    v83,
                    v84,
                    v131,
                    v132,
                    v141,
                    v142,
                    v148,
                    v134,
                    0,
                    v146,
                    v151);
              }
              ++*((_DWORD *)this + 1898);
              *((_QWORD *)this + 950) += v61;
              *((_QWORD *)this + 5013) += v61;
              if ( g_IsInternalReleaseOrDbg )
                *(_QWORD *)(WdLogNewEntry5_WdTrace(v85, v82, v83, v84) + 24) = v53;
              *a17 = (struct _VIDMM_GLOBAL_ALLOC *)v53;
              return 0LL;
            }
            return 3221225485LL;
          }
LABEL_228:
          if ( (v53[23].Value & 1) != 0 )
            VIDMM_GLOBAL::UncommitGlobalBackingStore(v74, (struct _VIDMM_GLOBAL_ALLOC *)v53, 1);
          v135 = *(_QWORD *)&v53[126].0;
          if ( v135 )
          {
            v136 = *(VIDMM_FLIP_QUEUE_REFERENCES **)(v135 + 16);
            if ( v136 )
              VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(v136, v73, v75, v76);
            operator delete(*(void **)&v53[126].0);
          }
          v137 = *(DXGFASTMUTEX **)&v53[80].0;
          if ( v137 )
            DXGFASTMUTEX::`scalar deleting destructor'(v137, v73);
          _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'((_VIDMM_GLOBAL_ALLOC *)v53);
          return (unsigned int)v77;
        }
        v126 = (_QWORD *)WdLogNewEntry5_WdAssertion(v60, a11);
        v126[3] = v61;
        v126[4] = v63;
        v126[5] = v61;
        v126[6] = (unsigned int)v64;
      }
    }
LABEL_227:
    WdLogEvent5_WdAssertion(v126);
    v77 = -1073741811;
    goto LABEL_228;
  }
  while ( 1 )
  {
    if ( (v46 & 1) != 0 )
    {
      v40 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v47);
      if ( (*(_DWORD *)(v40 + 56) & 0x20) == 0x20 )
        break;
    }
    ++v47;
    v46 = (unsigned int)v46 >> 1;
    if ( !(_DWORD)v46 )
      goto LABEL_37;
  }
  v105 = WdLogNewEntry5_WdAssertion(v40, v46);
  *(_QWORD *)(v105 + 24) = 2313LL;
  WdLogEvent5_WdAssertion(v105);
  return 3221225485LL;
}
