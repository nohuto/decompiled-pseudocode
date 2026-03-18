/*
 * XREFs of ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00629C0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C000FF80 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C001033C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C00104B8 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00125C0 (-MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x1C00127F8 (-BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00128F8 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0014B00 (memmove.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C001D264 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     Template_qqqxx @ 0x1C0020194 (Template_qqqxx.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C004B970 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C004C454 (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C004E584 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004FA1C (-ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004FAA8 (-AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C004FC2C (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0050D4C (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0050EB8 (-FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0051974 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0054824 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0059120 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00599EC (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0065EF8 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C0066B4C (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C0066C38 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C0067670 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 *     ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x1C00921C4 (-VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z.c)
 *     ?VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z @ 0x1C009226C (-VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z.c)
 *     ?Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C0098184 (-Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z.c)
 *     ?MakeRangeNonPageable@VIDMM_SEGMENT@@QEAAJ_K0PEAPEAX@Z @ 0x1C0098EEC (-MakeRangeNonPageable@VIDMM_SEGMENT@@QEAAJ_K0PEAPEAX@Z.c)
 *     ?MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z @ 0x1C0098FEC (-MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::CommitResource(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3)
{
  unsigned __int64 v3; // rbp
  VIDMM_MEMORY_SEGMENT *v6; // r14
  VIDMM_GLOBAL *v7; // r9
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 result; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct _DXGK_TRANSFERFLAGS::$4D1486DD1E7506599394F0F2A8A65E0A::$302D1026E10F578CC86103988839248E v21; // ebx
  __int64 v22; // r15
  VIDMM_CPU_HOST_APERTURE *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  PMDL v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r9
  void *v31; // rcx
  struct VIDMM_SEGMENT *v32; // r13
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  void *v44; // rdx
  int v45; // r13d
  struct _MDL *MDLForRange; // rax
  SIZE_T v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // r12
  unsigned int v55; // r13d
  unsigned int v56; // r9d
  unsigned __int64 v57; // r13
  char v58; // r15
  __int64 v59; // r8
  __int64 v60; // rcx
  unsigned __int64 v61; // r12
  bool v62; // zf
  int v63; // eax
  struct _MDL *v64; // rax
  VIDMM_GLOBAL *v65; // r10
  __int64 v66; // rax
  VIDMM_GLOBAL *v67; // rbx
  unsigned int v68; // r14d
  unsigned __int8 v69; // al
  unsigned __int64 v70; // rcx
  unsigned __int64 v71; // rcx
  unsigned int i; // r12d
  const void *v73; // rax
  VIDMM_GLOBAL *v74; // r10
  __int64 v75; // rax
  VIDMM_GLOBAL *v76; // rbx
  unsigned int v77; // r14d
  char v78; // r12
  __int64 v79; // rbx
  unsigned int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // r9
  __int64 v83; // r8
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // rcx
  unsigned __int64 v87; // rcx
  unsigned __int64 v88; // rax
  __int64 v89; // rdx
  _QWORD *v90; // rax
  __int64 v91; // rax
  VIDMM_SEGMENT *v92; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v93; // r8
  __int64 v94; // r9
  VIDMM_MEMORY_SEGMENT *v95; // rax
  VIDMM_MEMORY_SEGMENT **v96; // rdx
  __int64 v97; // rdx
  int v98; // eax
  int v99; // eax
  __int64 v100; // rcx
  int v101; // eax
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // r10
  __int64 v105; // rax
  signed __int32 v106[8]; // [rsp+0h] [rbp-A0h] BYREF
  struct VIDMM_SEGMENT *v107; // [rsp+20h] [rbp-80h]
  union _LARGE_INTEGER *v108; // [rsp+28h] [rbp-78h]
  union _LARGE_INTEGER *v109; // [rsp+30h] [rbp-70h]
  struct VIDMM_SEGMENT *v110; // [rsp+38h] [rbp-68h]
  union _LARGE_INTEGER *v111; // [rsp+40h] [rbp-60h]
  struct _MDL *v112; // [rsp+48h] [rbp-58h]
  struct _DXGK_TRANSFERFLAGS v113; // [rsp+50h] [rbp-50h]
  char v114; // [rsp+A0h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL;
  v6 = this;
  *(_QWORD *)(v3 + 72) = this;
  *(_QWORD *)(v3 + 96) = this;
  *(_QWORD *)(v3 + 112) = a2;
  *(_BYTE *)v3 = 0;
  *(_BYTE *)(v3 + 1) = 0;
  memset((void *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 184), 0, 0x30uLL);
  *(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
  v7 = (VIDMM_GLOBAL *)*((_QWORD *)v6 + 1);
  *(_BYTE *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 2) = (*(_BYTE *)(456LL * *((unsigned int *)v6 + 93)
                                                                                + *((_QWORD *)v7 + 5017)
                                                                                + 420) & 4) != 0;
  v8 = *((_QWORD *)a2 + 13);
  *(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v8;
  *(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v8;
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(v7, a2, 1);
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9, v11, v12) + 24) = a2;
  v13 = *(_QWORD *)(*((_QWORD *)v6 + 1) + 24LL);
  if ( *(_BYTE *)(v13 + 2091) )
  {
    v14 = WdLogNewEntry5_WdEvent(v13, v9, v11, v12);
    *(_QWORD *)(v14 + 24) = a2;
    WdLogEvent5_WdEvent(v14);
    return 3221226166LL;
  }
  if ( a3 == 1 )
  {
    v16 = (*((_DWORD *)v6 + 14) & 0x20) != 0 ? *((_QWORD *)a2 + 3) : *((_QWORD *)a2 + 2);
    result = VIDMM_SEGMENT::MakeRangeNonPageable(v6, *((_QWORD *)a2 + 27), v16, (void **)a2 + 48);
    if ( (int)result < 0 )
      return result;
  }
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
  v21 = 0;
  *(_DWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = 0;
  LODWORD(v22) = -1073741823;
  if ( (*((_DWORD *)a2 + 21) & 0x20) != 0 )
  {
    if ( *((int *)a2 + 87) > 0 )
    {
      VIDMM_GLOBAL::UnlockAllocation(
        *((VIDMM_GLOBAL **)v6 + 1),
        (struct _VIDMM_LOCAL_ALLOC *)v8,
        0LL,
        *((_QWORD *)a2 + 1),
        0,
        0);
      VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)v6 + 1), *((_QWORD *)a2 + 1));
      *((_DWORD *)a2 + 21) &= ~2u;
      --*((_DWORD *)a2 + 87);
    }
    v23 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)v6 + 59);
    if ( v23 )
    {
      LODWORD(v22) = VIDMM_CPU_HOST_APERTURE::MapRange(v23, a2, v19, v20);
      if ( (int)v22 < 0 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v25, v24);
        *(_QWORD *)(v26 + 24) = 574LL;
        WdLogEvent5_WdAssertion(v26);
        return (unsigned int)v22;
      }
      v27 = VIDMM_CPU_HOST_APERTURE::BuildMdlFromRange(
              *((VIDMM_CPU_HOST_APERTURE **)v6 + 59),
              *(void **)(v8 + 16),
              (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 488),
              *((_QWORD *)a2 + 27),
              *((_QWORD *)a2 + 2));
    }
    else
    {
      v30 = *((_QWORD *)a2 + 28);
      v31 = *(void **)(v8 + 16);
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 1) + 24LL) + 300LL) & 8) != 0 )
        v27 = VidMmiBuildMdlFromMdl(
                v31,
                *((_QWORD *)a2 + 2),
                *(struct _MDL **)(v30 + 32),
                *((_QWORD *)a2 + 27) / 4096LL);
      else
        v27 = VidMmiBuildMdlForContiguousMmIo(
                v31,
                *((_QWORD *)a2 + 2),
                (union _LARGE_INTEGER)(*((_QWORD *)a2 + 27) + *(_QWORD *)(v30 + 32)));
    }
    v32 = (struct VIDMM_SEGMENT *)v27;
    *(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v27;
    if ( !v27 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v29, v28);
      *(_QWORD *)(v33 + 24) = 631LL;
      WdLogEvent5_WdAssertion(v33);
      return 3221225495LL;
    }
    memset((void *)(v3 + 144), 0, 0x28uLL);
    *(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = v6;
    *(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = *((_QWORD *)a2 + 27);
    *(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = a2;
    *(_DWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = 0;
    KeStackAttachProcess(**(PRKPROCESS **)(v8 + 8), (PRKAPC_STATE)(v3 + 184));
    v112 = (struct _MDL *)a2;
    LODWORD(v111) = 0;
    v110 = (struct VIDMM_SEGMENT *)(v3 + 144);
    v109 = (union _LARGE_INTEGER *)VIDMM_MEMORY_SEGMENT::RotateFrameBufferCopyCallback;
    v108 = (union _LARGE_INTEGER *)*((_QWORD *)a2 + 2);
    v107 = v32;
    v22 = (int)_guard_dispatch_icall_fptr();
    KeUnstackDetachProcess((PRKAPC_STATE)(v3 + 184));
    v19 = *((_QWORD *)a2 + 33);
    if ( v19 )
      _guard_dispatch_icall_fptr();
    if ( (int)v22 < 0 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v18, v17);
      *(_QWORD *)(v34 + 24) = v22;
      WdLogEvent5_WdAssertion(v34);
LABEL_129:
      if ( *((_QWORD *)a2 + 58) )
        VIDMM_CPU_HOST_APERTURE::UnmapRange(*((VIDMM_CPU_HOST_APERTURE **)v6 + 59), a2);
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v35, v36, v37);
      if ( v32 )
        ExFreePoolWithTag(v32, 0);
      return (unsigned int)v22;
    }
    *(_BYTE *)(v8 + 32) |= 1u;
    *((_BYTE *)a2 + 98) = 1;
    goto LABEL_31;
  }
  if ( !*((_BYTE *)a2 + 97) )
  {
    v17 = *((unsigned int *)a2 + 19);
    if ( (v17 & 0x100) == 0 )
      VIDMM_GLOBAL::FillAllocationInternal(
        *((ADAPTER_RENDER ***)v6 + 1),
        v17 & 0x3F,
        (D3DGPU_VIRTUAL_ADDRESS *)a2,
        *((_QWORD *)a2 + 1),
        0,
        v6,
        (union _LARGE_INTEGER *)a2 + 27);
LABEL_31:
    *(_BYTE *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 1;
    LODWORD(v22) = 0;
  }
  if ( (int)v22 >= 0 || !*((_DWORD *)a2 + 16) )
  {
LABEL_87:
    v55 = 0x10000;
    goto LABEL_88;
  }
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
  LODWORD(v22) = VIDMM_GLOBAL::AllocateTemporaryResourcesForAllocation(*((VIDMM_GLOBAL **)v6 + 1), a2, v19, v20);
  *(_DWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v22;
  if ( (int)v22 < 0 )
  {
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v38, v39, v40);
    v44 = (void *)*((_QWORD *)a2 + 48);
    if ( v44 )
    {
      VIDMM_SEGMENT::MakeRangePageable(v6, v44);
      *((_QWORD *)a2 + 48) = 0LL;
    }
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v41, v44, v42, v43);
    return (unsigned int)v22;
  }
  *(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
  if ( (*(_DWORD *)(*((_QWORD *)v6 + 1) + 6464LL) & 0x400) != 0 )
    goto LABEL_45;
  v109 = (union _LARGE_INTEGER *)(v3 + 16);
  v108 = (union _LARGE_INTEGER *)((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL);
  LOBYTE(v107) = 0;
  v45 = _guard_dispatch_icall_fptr();
  if ( v45 >= 0 )
  {
    MDLForRange = VidMmGetMDLForRange(a2, 0LL, *((_QWORD *)a2 + 1));
    *(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = MDLForRange;
    if ( !MDLForRange )
    {
      _guard_dispatch_icall_fptr();
LABEL_45:
      v45 = -1071775487;
    }
  }
  if ( v45 >= 0 )
  {
    if ( !*(_BYTE *)v3 )
    {
      v107 = *(struct VIDMM_SEGMENT **)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      _guard_dispatch_icall_fptr();
    }
    v113.0 = 0;
    v47 = *((_QWORD *)a2 + 1);
    v112 = 0LL;
    v111 = (union _LARGE_INTEGER *)((char *)a2 + 216);
    v110 = v6;
    if ( *(_BYTE *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 2) )
    {
      v109 = *(union _LARGE_INTEGER **)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      v108 = 0LL;
      v107 = 0LL;
    }
    else
    {
      v109 = 0LL;
      v108 = (union _LARGE_INTEGER *)((char *)a2 + 256);
      v107 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 33);
    }
    VIDMM_GLOBAL::MemoryTransfer(
      *((VIDMM_GLOBAL **)v6 + 1),
      a2,
      v47,
      0LL,
      v107,
      v108,
      (struct _MDL *)v109,
      v110,
      v111,
      v112,
      v113);
    if ( (*((_DWORD *)a2 + 21) & 4) != 0 )
    {
      v52 = WdLogNewEntry5_WdEvent(v49, v48, v50, v51);
      *(_QWORD *)(v52 + 24) = a2;
      WdLogEvent5_WdEvent(v52);
      _guard_dispatch_icall_fptr();
    }
    else
    {
      VIDMM_GLOBAL::ReleaseTemporaryResourcesForAllocation(*((VIDMM_GLOBAL ****)v6 + 1), a2, v50, v51);
    }
    goto LABEL_87;
  }
  v53 = *((_QWORD *)a2 + 1);
  v54 = v53 >> 1;
  if ( *(_BYTE *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 2) && Use64KbPagesForTransfer(a2, v6) )
  {
    v55 = 0x10000;
    v56 = 0x10000;
    *(_DWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0x10000;
  }
  else
  {
    v56 = 4096;
    *(_DWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 4096;
    v55 = 0x10000;
  }
  if ( v53 )
  {
    v57 = 0LL;
    v58 = *(_BYTE *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 2);
    while ( 1 )
    {
      v59 = *((_QWORD *)v6 + 1);
      if ( *(_BYTE *)(*(_QWORD *)(v59 + 24) + 2091LL) )
      {
LABEL_85:
        LODWORD(v22) = *(_DWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
        v55 = 0x10000;
        break;
      }
      *(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
      v60 = (v56 + v54 - 1) & ~(v56 - 1);
      v61 = v60;
      if ( (*(_DWORD *)(v59 + 6464) & 0x800) != 0 )
      {
        v62 = v56 == v60;
        if ( v56 != v60 )
          goto LABEL_64;
      }
      else
      {
        v62 = v56 == v60;
      }
      v109 = (union _LARGE_INTEGER *)(v3 + 16);
      v108 = (union _LARGE_INTEGER *)((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL);
      LOBYTE(v107) = v62;
      v63 = _guard_dispatch_icall_fptr();
      *(_DWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v63;
      if ( v63 < 0 )
        goto LABEL_72;
      if ( !*(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
      {
        v64 = VidMmGetMDLForRange(a2, v57, v61);
        *(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v64;
        if ( !v64 )
        {
          _guard_dispatch_icall_fptr();
LABEL_64:
          v63 = -1071775487;
          goto LABEL_71;
        }
        v63 = *(_DWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
      }
LABEL_71:
      if ( v63 >= 0 )
      {
        if ( !*(_BYTE *)v3 )
        {
          v107 = *(struct VIDMM_SEGMENT **)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          _guard_dispatch_icall_fptr();
        }
        v113.0 = v21;
        v112 = 0LL;
        if ( v58 )
        {
          *(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v57 + *((_QWORD *)a2 + 27);
          v111 = (union _LARGE_INTEGER *)(v3 + 88);
          v110 = v6;
          v109 = *(union _LARGE_INTEGER **)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          v108 = 0LL;
          v107 = 0LL;
        }
        else
        {
          v111 = (union _LARGE_INTEGER *)((char *)a2 + 216);
          v110 = v6;
          v109 = 0LL;
          v108 = (union _LARGE_INTEGER *)((char *)a2 + 256);
          v107 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 33);
        }
        VIDMM_GLOBAL::MemoryTransfer(
          *((VIDMM_GLOBAL **)v6 + 1),
          a2,
          v61,
          v57,
          v107,
          v108,
          (struct _MDL *)v109,
          v110,
          v111,
          v112,
          v113);
        v65 = (VIDMM_GLOBAL *)*((_QWORD *)v6 + 1);
        *(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v65;
        v66 = *((_DWORD *)a2 + 19) & 0x3F;
        *(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = (char *)v65 + 8 * v66 + 5392;
        *(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = (char *)v65 + 8 * v66 + 5904;
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)v65 + 8LL) && *((_DWORD *)v65 + 1604) )
        {
          v67 = v65;
          v68 = 0;
          do
            VIDMM_GLOBAL::FlushPagingBufferInternal(v67, v68++, 0LL, 0LL, 0LL, 0, 0);
          while ( v68 < *((_DWORD *)v67 + 1604) );
          v21 = *(struct _DXGK_TRANSFERFLAGS::$4D1486DD1E7506599394F0F2A8A65E0A::$302D1026E10F578CC86103988839248E *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C);
          v6 = *(VIDMM_MEMORY_SEGMENT **)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
          v65 = *(VIDMM_GLOBAL **)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
        }
        VIDMM_GLOBAL::WaitForFences(
          v65,
          *(struct _VIDSCH_SYNC_OBJECT ***)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40),
          (unsigned __int64 *)a2 + 22,
          1u,
          *(char **)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38));
        v107 = *(struct VIDMM_SEGMENT **)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        _guard_dispatch_icall_fptr();
        _guard_dispatch_icall_fptr();
        v57 += v61;
        v54 = *((_QWORD *)a2 + 1) - v57;
        goto LABEL_84;
      }
LABEL_72:
      v54 = v61 >> 1;
LABEL_84:
      v56 = *(_DWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      if ( v57 == *((_QWORD *)a2 + 1) )
        goto LABEL_85;
    }
  }
  _guard_dispatch_icall_fptr();
  *(_BYTE *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 1;
  v8 = *(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
LABEL_88:
  if ( (int)v22 >= 0 )
  {
    v78 = *(_BYTE *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 1);
  }
  else
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
    LODWORD(v22) = 0;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q(v18, &EventPerformanceWarning, v19, 2);
    if ( (**((_DWORD **)a2 + 63) & 8) == 0 )
      KeStackAttachProcess(**(PRKPROCESS **)(v8 + 8), (PRKAPC_STATE)(v3 + 184));
    v69 = Use64KbPagesForTransfer(a2, *((struct VIDMM_SEGMENT **)a2 + 28));
    v70 = *((_QWORD *)a2 + 1);
    if ( v69 )
    {
      v71 = v70 >> 16;
    }
    else
    {
      v55 = 4096;
      v71 = v70 >> 12;
    }
    *(_DWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v71;
    *(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v71;
    *(_DWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v55;
    *(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *((_QWORD *)a2 + 27);
    for ( i = 0; ; ++i )
    {
      *(_DWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = i;
      if ( i >= (unsigned int)v71 )
        break;
      v73 = VidMmMapViewOfAllocation(
              *(struct _VIDMM_LOCAL_ALLOC **)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
              v55 * i,
              v55,
              (void **)(v3 + 120),
              0);
      if ( v73 )
      {
        memmove(*((void **)v6 + 31), v73, v55);
        VidMmUnmapViewOfAllocation(
          *(struct _VIDMM_LOCAL_ALLOC **)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
          *(void **)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78));
      }
      else
      {
        *((_DWORD *)a2 + 19) |= 0x100000u;
      }
      VIDMM_GLOBAL::MemoryTransfer(
        *((VIDMM_GLOBAL **)v6 + 1),
        a2,
        v55,
        v55 * i,
        0LL,
        0LL,
        *(struct _MDL **)(*((_QWORD *)v6 + 32) + 8LL),
        v6,
        (union _LARGE_INTEGER *)(v3 + 80),
        0LL,
        (DXGK_TRANSFERFLAGS)v21);
      v74 = (VIDMM_GLOBAL *)*((_QWORD *)v6 + 1);
      *(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v74;
      v75 = *((_DWORD *)a2 + 19) & 0x3F;
      *(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = (char *)v74 + 8 * v75 + 5392;
      *(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = (char *)v74 + 8 * v75 + 5904;
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)v74 + 8LL) && *((_DWORD *)v74 + 1604) )
      {
        v76 = v74;
        v77 = 0;
        do
          VIDMM_GLOBAL::FlushPagingBufferInternal(v76, v77++, 0LL, 0LL, 0LL, 0, 0);
        while ( v77 < *((_DWORD *)v76 + 1604) );
        v21 = *(struct _DXGK_TRANSFERFLAGS::$4D1486DD1E7506599394F0F2A8A65E0A::$302D1026E10F578CC86103988839248E *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C);
        v6 = *(VIDMM_MEMORY_SEGMENT **)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
        v74 = *(VIDMM_GLOBAL **)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
      }
      VIDMM_GLOBAL::WaitForFences(
        v74,
        *(struct _VIDSCH_SYNC_OBJECT ***)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88),
        (unsigned __int64 *)a2 + 22,
        1u,
        *(char **)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80));
      *(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) += v55;
      v71 = *(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    }
    v78 = 1;
    if ( (**((_DWORD **)a2 + 63) & 8) == 0 )
      KeUnstackDetachProcess((PRKAPC_STATE)(v3 + 184));
  }
  if ( (**((_DWORD **)a2 + 63) & 0x20000) != 0 )
  {
    v79 = *((_QWORD *)a2 + 2);
    memset((void *)(v3 + 232), 0, 0x30uLL);
    *(_DWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8) = *((_DWORD *)v6 + 93);
    v80 = VIDMM_SEGMENT::DriverId(v6);
    v83 = v80;
    *(_DWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0xEC) = v80;
    if ( *((_DWORD *)v6 + 101) )
    {
      v87 = *((_QWORD *)a2 + 27);
      v88 = *((_QWORD *)v6 + 51);
      if ( v87 < v88 )
      {
        *(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF8) = v88;
        *(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100) = *((_QWORD *)v6 + 53);
        *(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108) = v87;
        v89 = *((_QWORD *)v6 + 52) - v87;
        *(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x110) = v89;
        *((_QWORD *)v6 + 53) = v89;
        *((_QWORD *)v6 + 51) = v87;
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_qqqxx(
            v87,
            v89,
            v83,
            v82,
            v83,
            *(_DWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0),
            v87,
            v89);
        LODWORD(v22) = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                         *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)v6 + 1) + 24LL) + 2136LL),
                         (const struct _DXGKARG_SETVIDEOPROTECTEDREGION *)(v3 + 232));
      }
      if ( (int)v22 < 0 )
        goto LABEL_128;
      *((_DWORD *)a2 + 20) |= 0x200u;
      *((_QWORD *)v6 + 54) += v79;
      if ( g_IsInternalReleaseOrDbg )
      {
        v90 = (_QWORD *)WdLogNewEntry5_WdTrace(v87, v81, v83, v82);
        v90[3] = v79;
        v87 = *((_QWORD *)v6 + 54);
        v90[4] = v87;
        v90[5] = a2;
      }
    }
    else
    {
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)v6 + 1), v82);
      v86 = *((_QWORD *)a2 + 27);
      *(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108) = v86;
      *(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x110) = v79;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_qqqxx(
          v86,
          v84,
          v85,
          *(_DWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8),
          *(_DWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0xEC),
          *(_DWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0),
          v86,
          v79);
      LODWORD(v22) = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                       *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)v6 + 1) + 24LL) + 2136LL),
                       (const struct _DXGKARG_SETVIDEOPROTECTEDREGION *)(v3 + 232));
    }
    if ( (int)v22 < 0 )
    {
LABEL_128:
      v91 = WdLogNewEntry5_WdAssertion(v87, v81);
      *(_QWORD *)(v91 + 24) = 1196LL;
      WdLogEvent5_WdAssertion(v91);
      v32 = *(struct VIDMM_SEGMENT **)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
      goto LABEL_129;
    }
  }
  *((_DWORD *)a2 + 32) = 2;
  v92 = (VIDMM_SEGMENT *)*((_QWORD *)a2 + 28);
  *((_QWORD *)a2 + 17) = v92;
  *((_QWORD *)a2 + 18) = *((_QWORD *)a2 + 27);
  *((_QWORD *)a2 + 19) = *((_QWORD *)a2 + 26);
  *(_WORD *)(*((_QWORD *)a2 + 63) + 6LL) = VIDMM_SEGMENT::DriverId(v92);
  *(_QWORD *)(*((_QWORD *)a2 + 63) + 24LL) = *((_QWORD *)a2 + 18) + *(_QWORD *)(*((_QWORD *)a2 + 17) + 24LL);
  *((_QWORD *)a2 + 28) = 0LL;
  *((_QWORD *)a2 + 26) = 0LL;
  *((_BYTE *)a2 + 97) = 1;
  v95 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 400);
  v96 = (VIDMM_MEMORY_SEGMENT **)*((_QWORD *)v6 + 20);
  if ( *v96 != (VIDMM_MEMORY_SEGMENT *)((char *)v6 + 152) )
    __fastfail(3u);
  *(_QWORD *)v95 = (char *)v6 + 152;
  *((_QWORD *)a2 + 51) = v96;
  *v96 = v95;
  *((_QWORD *)v6 + 20) = v95;
  v97 = *((unsigned int *)a2 + 18);
  if ( !(_DWORD)v97
    || (v98 = VIDMM_SEGMENT::DriverId(v6), (v97 & 0x1F) == v98)
    || (v97 = ((unsigned int)v97 >> 6) & 0x1F, v62 = (_DWORD)v97 == v98, v99 = 0, v62) )
  {
    v99 = 1;
  }
  *((_DWORD *)a2 + 19) ^= (*((_DWORD *)a2 + 19) ^ (v99 << 23)) & 0x800000;
  v100 = *(_QWORD *)(((unsigned __int64)&v114 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
  if ( v100 && *(_QWORD *)(v100 + 8) )
    VidMmRecordAlloc(*((VIDMM_GLOBAL **)v6 + 1), (__int64)a2, v100, (__int64)v6, *((_QWORD *)a2 + 2), 0);
  *(_QWORD *)(*((_QWORD *)v6 + 1) + 40128LL) += *((_QWORD *)a2 + 2) >> 12;
  if ( (*((_DWORD *)a2 + 21) & 2) != 0 )
  {
    VIDMM_SEGMENT::UnlockAllocationBackingStore(*((struct VIDMM_GLOBAL **)v6 + 1), a2, 0LL);
    VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)v6 + 1), *((_QWORD *)a2 + 1));
    *((_DWORD *)a2 + 21) &= ~2u;
  }
  if ( v78 && (*((_DWORD *)a2 + 21) & 8) == 0 && !*((_QWORD *)a2 + 33) )
    VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)v6 + 1), a2);
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 63) + 2LL) & 1) != 0 )
  {
    LOBYTE(v93) = 1;
    VIDMM_GLOBAL::NotifyResidency(*((ADAPTER_RENDER ***)v6 + 1), (D3DGPU_VIRTUAL_ADDRESS *)a2, v93, v94);
  }
  if ( *(_QWORD *)(*((_QWORD *)v6 + 1) + 40952LL) )
  {
    v101 = VIDMM_SEGMENT::DriverId(v6);
    VIDMM_GLOBAL::RecordPageMappingHistory(v104, v101, v102, v103, 3, (__int64)a2);
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v97, (__int64)v93, v94);
  v105 = *((_QWORD *)v6 + 1);
  _InterlockedOr(v106, 0);
  ++*(_QWORD *)(v105 + 40);
  return 0LL;
}
