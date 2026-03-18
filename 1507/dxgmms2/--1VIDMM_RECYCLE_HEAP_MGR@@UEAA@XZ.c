/*
 * XREFs of ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C0037030
 * Callers:
 *     ??_EVIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXI@Z @ 0x1C0005F80 (--_EVIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     Template_q @ 0x1C0007190 (Template_q.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DED4 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF24 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?UnmapTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z @ 0x1C0044E70 (-UnmapTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0066380 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0066818 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ @ 0x1C00685CC (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0068BDC (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::~VIDMM_RECYCLE_HEAP_MGR(
        VIDMM_RECYCLE_HEAP_MGR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct DXGPUSHLOCK *v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r9d
  char *v10; // rax
  __int64 v11; // rdx
  char **v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  VIDMM_RECYCLE_HEAP_MGR *v23; // rcx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r9
  __int64 v26; // rax
  int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  VIDMM_RECYCLE_HEAP_MGR *v34; // rdi
  struct VIDMM_RECYCLE_RANGE *v35; // rbx
  VIDMM_RECYCLE_HEAP_MGR **v36; // rdi
  VIDMM_RECYCLE_HEAP_MGR *v37; // rax
  VIDMM_RECYCLE_MULTIRANGE **v38; // rbx
  struct _LOOKASIDE_LIST_EX *v39; // rcx
  struct _LOOKASIDE_LIST_EX *v40; // rcx
  void *v41; // rcx
  int *v42; // rbx
  _QWORD *v43; // rax
  __int64 v44; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rcx
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rbx
  unsigned __int64 v52; // rbx
  _QWORD *v53; // rcx
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rbx
  unsigned __int64 v57; // rbx
  _QWORD *v58; // rcx
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rbx
  unsigned __int64 v62; // rbx
  _QWORD *v63; // rcx
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rbx
  unsigned __int64 v67; // rbx
  _QWORD *v68; // rcx
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rbx
  unsigned __int64 v72; // rbx
  _QWORD *v73; // rcx
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  __int64 v76; // rbx
  unsigned __int64 v77; // rbx
  _QWORD *v78; // rcx
  _QWORD *v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // rbx
  unsigned __int64 v82; // rbx
  _QWORD *v83; // rcx
  _QWORD *v84; // rax
  _QWORD *v85; // rax
  __int64 v86; // rbx
  unsigned __int64 v87; // rbx
  _QWORD *v88; // rcx
  _QWORD *v89; // rax
  _QWORD *v90; // rax
  __int64 v91; // rbx
  unsigned __int64 v92; // rbx
  _QWORD *v93; // rcx
  _QWORD *v94; // rax
  _QWORD *v95; // rax
  __int64 v96; // rbx
  unsigned __int64 v97; // rbx
  _QWORD *v98; // rcx
  _QWORD *v99; // rax
  _QWORD *v100; // rax
  __int64 v101; // rbx
  unsigned __int64 v102; // rbx
  _QWORD *v103; // rcx
  _QWORD *v104; // rax
  _QWORD *v105; // rax
  __int64 v106; // rbx
  unsigned __int64 v107; // rbx
  _QWORD *v108; // rcx
  _QWORD *v109; // rax
  _QWORD *v110; // rax
  __int64 v111; // rbx
  unsigned __int64 v112; // rbx
  _QWORD *v113; // rcx
  _QWORD *v114; // rax
  _QWORD *v115; // rax
  __int64 v116; // rbx
  unsigned __int64 v117; // rbx
  _QWORD *v118; // rcx
  _QWORD *v119; // rax
  _QWORD *v120; // rax
  __int64 v121; // rbx
  unsigned __int64 v122; // rbx
  _QWORD *v123; // rcx
  _QWORD *v124; // rax
  _QWORD *v125; // rax
  __int64 v126; // rbx
  unsigned __int64 v127; // rbx
  _QWORD *v128; // rcx
  _QWORD *v129; // rax
  _QWORD *v130; // rax
  __int64 v131; // rbx
  unsigned __int64 v132; // rbx
  _QWORD *v133; // rcx
  _QWORD *v134; // rax
  _QWORD *v135; // rax
  __int64 v136; // rbx
  unsigned __int64 v137; // rbx
  struct _MDL *Timeout; // [rsp+20h] [rbp-48h]
  struct _KTHREAD **v139; // [rsp+30h] [rbp-38h] BYREF
  char v140; // [rsp+38h] [rbp-30h]
  int v141; // [rsp+70h] [rbp+8h] BYREF

  v4 = VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock;
  *(_QWORD *)this = &VIDMM_RECYCLE_HEAP_MGR::`vftable';
  if ( v4 && *((struct _KTHREAD **)v4 + 1) == KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 1135LL;
    WdLogEvent5_WdAssertion(v6);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v4, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v9 = *((_DWORD *)v4 + 4);
      if ( v9 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v7, &EventBlockThread, v8, v9);
    }
    ExAcquirePushLockExclusiveEx(v4, 0LL);
  }
  *((_QWORD *)v4 + 1) = KeGetCurrentThread();
  v10 = (char *)this + 680;
  if ( *((_QWORD *)this + 85) )
  {
    v11 = *(_QWORD *)v10;
    v12 = (char **)*((_QWORD *)this + 86);
    if ( *(char **)(*(_QWORD *)v10 + 8LL) != v10 || *v12 != v10 )
      __fastfail(3u);
    *v12 = (char *)v11;
    *(_QWORD *)(v11 + 8) = v12;
  }
  *((_QWORD *)v4 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
  v140 = 0;
  v17 = (int *)((char *)this + 416);
  v139 = (struct _KTHREAD **)((char *)this + 416);
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-416LL )
  {
    v18 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v18 + 24) = 421LL;
    WdLogEvent5_WdAssertion(v18);
    if ( v140 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19);
      v21[5] = &v139;
      v21[3] = 275LL;
      v21[4] = 4LL;
      v21[6] = 0LL;
      v21[7] = 0LL;
      WdLogEvent5_WdCriticalError(v21);
    }
    v17 = (int *)v139;
  }
  KeEnterCriticalRegion();
  if ( *((struct _KTHREAD **)v17 + 1) == KeGetCurrentThread() )
  {
    if ( v17[6] <= 0 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
      *(_QWORD *)(v26 + 24) = 319LL;
      WdLogEvent5_WdAssertion(v26);
    }
    ++v17[6];
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v17 + 4, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v27 = v17[7];
        if ( v27 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q((__int64)v23, &EventBlockThread, v24, v27);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v17);
      ExAcquirePushLockExclusiveEx(v17 + 4, 0LL);
    }
    if ( *((_QWORD *)v17 + 1) )
    {
      v28 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
      *(_QWORD *)(v28 + 24) = 343LL;
      WdLogEvent5_WdAssertion(v28);
    }
    if ( v17[6] )
    {
      v29 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
      *(_QWORD *)(v29 + 24) = 344LL;
      WdLogEvent5_WdAssertion(v29);
    }
    *((_QWORD *)v17 + 1) = KeGetCurrentThread();
    v17[6] = 1;
  }
  v140 = 1;
  _InterlockedExchange((volatile __int32 *)this + 166, 1);
  if ( *((_DWORD *)this + 154) && !KeCancelTimer((PKTIMER)((char *)this + 456)) )
  {
    KeFlushQueuedDpcs();
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v139, v30, v31, v32);
    KeWaitForSingleObject(*((PVOID *)this + 84), Executive, 0, 0, 0LL);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v139, v33);
  }
  v34 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 78);
  while ( v34 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 624) )
  {
    v35 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)v34 - 104);
    v34 = *(VIDMM_RECYCLE_HEAP_MGR **)v34;
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v23, v35);
    VIDMM_RECYCLE_RANGE::FinalizedUnlock(v35);
    v23 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v35 + 17);
    if ( v23 )
      VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v23);
  }
  v36 = (VIDMM_RECYCLE_HEAP_MGR **)((char *)this + 640);
  v37 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 80);
  if ( v37 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 640) )
  {
    do
    {
      v38 = (VIDMM_RECYCLE_MULTIRANGE **)((char *)v37 - 104);
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v23, (VIDMM_RECYCLE_HEAP_MGR *)((char *)v37 - 104));
      VIDMM_RECYCLE_RANGE::DebouncedDecommit(
        (VIDMM_RECYCLE_RANGE *)v38,
        (enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *)&v141);
      if ( !v141 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v38[17]);
      v37 = *v36;
    }
    while ( *v36 != (VIDMM_RECYCLE_HEAP_MGR *)v36 );
  }
  v39 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 50);
  if ( v39 )
  {
    ExDeleteLookasideListEx(v39);
    operator delete(*((void **)this + 50));
  }
  v40 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 51);
  if ( v40 )
  {
    ExDeleteLookasideListEx(v40);
    operator delete(*((void **)this + 51));
  }
  v41 = (void *)*((_QWORD *)this + 84);
  if ( v41 )
    operator delete(v41);
  if ( v140 )
  {
    v42 = (int *)v139;
    v140 = 0;
    if ( v139[1] != KeGetCurrentThread() )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v41, v22);
      v43[3] = 275LL;
      v43[4] = 4LL;
      v43[5] = v42;
      v43[6] = 0LL;
      v43[7] = 0LL;
      WdLogEvent5_WdCriticalError(v43);
    }
    if ( v42[6] <= 0 )
    {
      v44 = WdLogNewEntry5_WdAssertion(v41, v22, v24, v25);
      *(_QWORD *)(v44 + 24) = 363LL;
      WdLogEvent5_WdAssertion(v44);
    }
    if ( v42[6]-- == 1 )
    {
      *((_QWORD *)v42 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v42 + 4, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  if ( *((_QWORD *)this + 53) )
  {
    v46 = WdLogNewEntry5_WdAssertion(v41, v22, v24, v25);
    *(_QWORD *)(v46 + 24) = 299LL;
    WdLogEvent5_WdAssertion(v46);
  }
  if ( *((_DWORD *)this + 110) )
  {
    v47 = WdLogNewEntry5_WdAssertion(v41, v22, v24, v25);
    *(_QWORD *)(v47 + 24) = 300LL;
    WdLogEvent5_WdAssertion(v47);
  }
  v48 = (_QWORD *)*((_QWORD *)this + 47);
  if ( v48 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v48 )
        {
          v49 = v48;
          v48 = (_QWORD *)*v48;
          *v49 = 0LL;
        }
        if ( !v48[1] )
          break;
        v50 = v48;
        v48 = (_QWORD *)v48[1];
        v50[1] = 0LL;
      }
      v51 = v48[2];
      VIDMM_SYSMEM_SEGMENT::UnmapTemporaryResource((VIDMM_SYSMEM_SEGMENT *)v48, 0LL, v24, v25, Timeout);
      v52 = v51 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v52 )
        break;
      v48 = (_QWORD *)v52;
    }
  }
  *((_QWORD *)this + 47) = 0LL;
  v53 = (_QWORD *)*((_QWORD *)this + 48);
  if ( v53 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v53 )
        {
          v54 = v53;
          v53 = (_QWORD *)*v53;
          *v54 = 0LL;
        }
        if ( !v53[1] )
          break;
        v55 = v53;
        v53 = (_QWORD *)v53[1];
        v55[1] = 0LL;
      }
      v56 = v53[2];
      VIDMM_SYSMEM_SEGMENT::UnmapTemporaryResource((VIDMM_SYSMEM_SEGMENT *)v53, 0LL, v24, v25, Timeout);
      v57 = v56 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v57 )
        break;
      v53 = (_QWORD *)v57;
    }
  }
  *((_QWORD *)this + 48) = 0LL;
  v58 = (_QWORD *)*((_QWORD *)this + 49);
  if ( v58 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v58 )
        {
          v59 = v58;
          v58 = (_QWORD *)*v58;
          *v59 = 0LL;
        }
        if ( !v58[1] )
          break;
        v60 = v58;
        v58 = (_QWORD *)v58[1];
        v60[1] = 0LL;
      }
      v61 = v58[2];
      VIDMM_SYSMEM_SEGMENT::UnmapTemporaryResource((VIDMM_SYSMEM_SEGMENT *)v58, 0LL, v24, v25, Timeout);
      v62 = v61 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v62 )
        break;
      v58 = (_QWORD *)v62;
    }
  }
  *((_QWORD *)this + 49) = 0LL;
  v63 = (_QWORD *)*((_QWORD *)this + 39);
  if ( v63 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v63 )
        {
          v64 = v63;
          v63 = (_QWORD *)*v63;
          *v64 = 0LL;
        }
        if ( !v63[1] )
          break;
        v65 = v63;
        v63 = (_QWORD *)v63[1];
        v65[1] = 0LL;
      }
      v66 = v63[2];
      VIDMM_SYSMEM_SEGMENT::UnmapTemporaryResource((VIDMM_SYSMEM_SEGMENT *)v63, 0LL, v24, v25, Timeout);
      v67 = v66 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v67 )
        break;
      v63 = (_QWORD *)v67;
    }
  }
  *((_QWORD *)this + 39) = 0LL;
  v68 = (_QWORD *)*((_QWORD *)this + 40);
  if ( v68 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v68 )
        {
          v69 = v68;
          v68 = (_QWORD *)*v68;
          *v69 = 0LL;
        }
        if ( !v68[1] )
          break;
        v70 = v68;
        v68 = (_QWORD *)v68[1];
        v70[1] = 0LL;
      }
      v71 = v68[2];
      VIDMM_SYSMEM_SEGMENT::UnmapTemporaryResource((VIDMM_SYSMEM_SEGMENT *)v68, 0LL, v24, v25, Timeout);
      v72 = v71 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v72 )
        break;
      v68 = (_QWORD *)v72;
    }
  }
  *((_QWORD *)this + 40) = 0LL;
  v73 = (_QWORD *)*((_QWORD *)this + 41);
  if ( v73 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v73 )
        {
          v74 = v73;
          v73 = (_QWORD *)*v73;
          *v74 = 0LL;
        }
        if ( !v73[1] )
          break;
        v75 = v73;
        v73 = (_QWORD *)v73[1];
        v75[1] = 0LL;
      }
      v76 = v73[2];
      VIDMM_SYSMEM_SEGMENT::UnmapTemporaryResource((VIDMM_SYSMEM_SEGMENT *)v73, 0LL, v24, v25, Timeout);
      v77 = v76 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v77 )
        break;
      v73 = (_QWORD *)v77;
    }
  }
  *((_QWORD *)this + 41) = 0LL;
  v78 = (_QWORD *)*((_QWORD *)this + 31);
  if ( v78 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v78 )
        {
          v79 = v78;
          v78 = (_QWORD *)*v78;
          *v79 = 0LL;
        }
        if ( !v78[1] )
          break;
        v80 = v78;
        v78 = (_QWORD *)v78[1];
        v80[1] = 0LL;
      }
      v81 = v78[2];
      VIDMM_SYSMEM_SEGMENT::UnmapTemporaryResource((VIDMM_SYSMEM_SEGMENT *)v78, 0LL, v24, v25, Timeout);
      v82 = v81 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v82 )
        break;
      v78 = (_QWORD *)v82;
    }
  }
  *((_QWORD *)this + 31) = 0LL;
  v83 = (_QWORD *)*((_QWORD *)this + 32);
  if ( v83 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v83 )
        {
          v84 = v83;
          v83 = (_QWORD *)*v83;
          *v84 = 0LL;
        }
        if ( !v83[1] )
          break;
        v85 = v83;
        v83 = (_QWORD *)v83[1];
        v85[1] = 0LL;
      }
      v86 = v83[2];
      VIDMM_SYSMEM_SEGMENT::UnmapTemporaryResource((VIDMM_SYSMEM_SEGMENT *)v83, 0LL, v24, v25, Timeout);
      v87 = v86 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v87 )
        break;
      v83 = (_QWORD *)v87;
    }
  }
  *((_QWORD *)this + 32) = 0LL;
  v88 = (_QWORD *)*((_QWORD *)this + 33);
  if ( v88 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v88 )
        {
          v89 = v88;
          v88 = (_QWORD *)*v88;
          *v89 = 0LL;
        }
        if ( !v88[1] )
          break;
        v90 = v88;
        v88 = (_QWORD *)v88[1];
        v90[1] = 0LL;
      }
      v91 = v88[2];
      VIDMM_SYSMEM_SEGMENT::UnmapTemporaryResource((VIDMM_SYSMEM_SEGMENT *)v88, 0LL, v24, v25, Timeout);
      v92 = v91 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v92 )
        break;
      v88 = (_QWORD *)v92;
    }
  }
  *((_QWORD *)this + 33) = 0LL;
  v93 = (_QWORD *)*((_QWORD *)this + 23);
  if ( v93 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v93 )
        {
          v94 = v93;
          v93 = (_QWORD *)*v93;
          *v94 = 0LL;
        }
        if ( !v93[1] )
          break;
        v95 = v93;
        v93 = (_QWORD *)v93[1];
        v95[1] = 0LL;
      }
      v96 = v93[2];
      VIDMM_SYSMEM_SEGMENT::UnmapTemporaryResource((VIDMM_SYSMEM_SEGMENT *)v93, 0LL, v24, v25, Timeout);
      v97 = v96 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v97 )
        break;
      v93 = (_QWORD *)v97;
    }
  }
  *((_QWORD *)this + 23) = 0LL;
  v98 = (_QWORD *)*((_QWORD *)this + 24);
  if ( v98 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v98 )
        {
          v99 = v98;
          v98 = (_QWORD *)*v98;
          *v99 = 0LL;
        }
        if ( !v98[1] )
          break;
        v100 = v98;
        v98 = (_QWORD *)v98[1];
        v100[1] = 0LL;
      }
      v101 = v98[2];
      VIDMM_SYSMEM_SEGMENT::UnmapTemporaryResource((VIDMM_SYSMEM_SEGMENT *)v98, 0LL, v24, v25, Timeout);
      v102 = v101 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v102 )
        break;
      v98 = (_QWORD *)v102;
    }
  }
  *((_QWORD *)this + 24) = 0LL;
  v103 = (_QWORD *)*((_QWORD *)this + 25);
  if ( v103 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v103 )
        {
          v104 = v103;
          v103 = (_QWORD *)*v103;
          *v104 = 0LL;
        }
        if ( !v103[1] )
          break;
        v105 = v103;
        v103 = (_QWORD *)v103[1];
        v105[1] = 0LL;
      }
      v106 = v103[2];
      VIDMM_SYSMEM_SEGMENT::UnmapTemporaryResource((VIDMM_SYSMEM_SEGMENT *)v103, 0LL, v24, v25, Timeout);
      v107 = v106 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v107 )
        break;
      v103 = (_QWORD *)v107;
    }
  }
  *((_QWORD *)this + 25) = 0LL;
  v108 = (_QWORD *)*((_QWORD *)this + 15);
  if ( v108 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v108 )
        {
          v109 = v108;
          v108 = (_QWORD *)*v108;
          *v109 = 0LL;
        }
        if ( !v108[1] )
          break;
        v110 = v108;
        v108 = (_QWORD *)v108[1];
        v110[1] = 0LL;
      }
      v111 = v108[2];
      VIDMM_SYSMEM_SEGMENT::UnmapTemporaryResource((VIDMM_SYSMEM_SEGMENT *)v108, 0LL, v24, v25, Timeout);
      v112 = v111 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v112 )
        break;
      v108 = (_QWORD *)v112;
    }
  }
  *((_QWORD *)this + 15) = 0LL;
  v113 = (_QWORD *)*((_QWORD *)this + 16);
  if ( v113 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v113 )
        {
          v114 = v113;
          v113 = (_QWORD *)*v113;
          *v114 = 0LL;
        }
        if ( !v113[1] )
          break;
        v115 = v113;
        v113 = (_QWORD *)v113[1];
        v115[1] = 0LL;
      }
      v116 = v113[2];
      VIDMM_SYSMEM_SEGMENT::UnmapTemporaryResource((VIDMM_SYSMEM_SEGMENT *)v113, 0LL, v24, v25, Timeout);
      v117 = v116 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v117 )
        break;
      v113 = (_QWORD *)v117;
    }
  }
  *((_QWORD *)this + 16) = 0LL;
  v118 = (_QWORD *)*((_QWORD *)this + 17);
  if ( v118 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v118 )
        {
          v119 = v118;
          v118 = (_QWORD *)*v118;
          *v119 = 0LL;
        }
        if ( !v118[1] )
          break;
        v120 = v118;
        v118 = (_QWORD *)v118[1];
        v120[1] = 0LL;
      }
      v121 = v118[2];
      VIDMM_SYSMEM_SEGMENT::UnmapTemporaryResource((VIDMM_SYSMEM_SEGMENT *)v118, 0LL, v24, v25, Timeout);
      v122 = v121 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v122 )
        break;
      v118 = (_QWORD *)v122;
    }
  }
  *((_QWORD *)this + 17) = 0LL;
  v123 = (_QWORD *)*((_QWORD *)this + 7);
  if ( v123 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v123 )
        {
          v124 = v123;
          v123 = (_QWORD *)*v123;
          *v124 = 0LL;
        }
        if ( !v123[1] )
          break;
        v125 = v123;
        v123 = (_QWORD *)v123[1];
        v125[1] = 0LL;
      }
      v126 = v123[2];
      VIDMM_SYSMEM_SEGMENT::UnmapTemporaryResource((VIDMM_SYSMEM_SEGMENT *)v123, 0LL, v24, v25, Timeout);
      v127 = v126 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v127 )
        break;
      v123 = (_QWORD *)v127;
    }
  }
  *((_QWORD *)this + 7) = 0LL;
  v128 = (_QWORD *)*((_QWORD *)this + 8);
  if ( v128 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v128 )
        {
          v129 = v128;
          v128 = (_QWORD *)*v128;
          *v129 = 0LL;
        }
        if ( !v128[1] )
          break;
        v130 = v128;
        v128 = (_QWORD *)v128[1];
        v130[1] = 0LL;
      }
      v131 = v128[2];
      VIDMM_SYSMEM_SEGMENT::UnmapTemporaryResource((VIDMM_SYSMEM_SEGMENT *)v128, 0LL, v24, v25, Timeout);
      v132 = v131 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v132 )
        break;
      v128 = (_QWORD *)v132;
    }
  }
  *((_QWORD *)this + 8) = 0LL;
  v133 = (_QWORD *)*((_QWORD *)this + 9);
  if ( v133 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v133 )
        {
          v134 = v133;
          v133 = (_QWORD *)*v133;
          *v134 = 0LL;
        }
        if ( !v133[1] )
          break;
        v135 = v133;
        v133 = (_QWORD *)v133[1];
        v135[1] = 0LL;
      }
      v136 = v133[2];
      VIDMM_SYSMEM_SEGMENT::UnmapTemporaryResource((VIDMM_SYSMEM_SEGMENT *)v133, 0LL, v24, v25, Timeout);
      v137 = v136 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v137 )
        break;
      v133 = (_QWORD *)v137;
    }
  }
  *((_QWORD *)this + 9) = 0LL;
  *(_QWORD *)this = &VIDMM_PROCESS_HEAP_INTERFACE::`vftable';
}
