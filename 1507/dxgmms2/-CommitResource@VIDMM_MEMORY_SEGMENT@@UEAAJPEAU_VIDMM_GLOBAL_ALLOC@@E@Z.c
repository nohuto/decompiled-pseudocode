/*
 * XREFs of ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006D5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005B60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005BE8 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C00069D0 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     Template_q @ 0x1C0007190 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00081C0 (memmove.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C000E134 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     Template_qqqxx @ 0x1C0010F34 (Template_qqqxx.c)
 *     ?BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x1C0011524 (-BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@.c)
 *     ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00117DC (-MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0011C90 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C002F414 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C003D168 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004B844 (-AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C004D1D8 (-FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C004F850 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0050870 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C0052098 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0052E88 (-ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0053080 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00534AC (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1E@Z @ 0x1C0053D3C (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1E@Z.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C005B4BC (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1H@Z @ 0x1C005B500 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1H@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005BB44 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x1C005BC7C (-VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z.c)
 *     ?Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C006F868 (-Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z.c)
 *     ?MakeRangeNonPageable@VIDMM_SEGMENT@@QEAAJ_K0PEAPEAX@Z @ 0x1C007016C (-MakeRangeNonPageable@VIDMM_SEGMENT@@QEAAJ_K0PEAPEAX@Z.c)
 *     ?MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z @ 0x1C007026C (-MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00718AC (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::CommitResource(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3)
{
  unsigned __int64 v3; // rbp
  VIDMM_GLOBAL *v7; // r9
  char v8; // r13
  unsigned __int64 v9; // r8
  __int64 result; // rax
  VIDMM_GLOBAL *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r12
  __int64 v15; // r13
  VIDMM_CPU_HOST_APERTURE *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  VIDMM_CPU_HOST_APERTURE *v23; // r10
  union _LARGE_INTEGER v24; // rbx
  PMDL v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  struct VIDMM_SEGMENT *v30; // r12
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  void *v37; // rdx
  int v38; // ebx
  struct _MDL *MDLForRange; // rax
  unsigned __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // rbx
  unsigned int v46; // r13d
  unsigned int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rax
  unsigned __int64 v50; // r13
  char v51; // r12
  unsigned __int64 v52; // rbx
  bool v53; // zf
  int v54; // eax
  struct _MDL *v55; // rax
  char v56; // bl
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rax
  __int64 v59; // rbx
  unsigned int v60; // ecx
  char *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  struct VIDMM_SEGMENT *v65; // rbx
  struct VIDMM_SEGMENT *v66; // r8
  __int64 v67; // rcx
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  void *v73; // rcx
  VIDMM_MEMORY_SEGMENT *v74; // rax
  VIDMM_MEMORY_SEGMENT **v75; // rdx
  unsigned int v76; // ecx
  int v77; // r8d
  int v78; // eax
  int v79; // eax
  struct _VIDMM_GLOBAL_ALLOC *v80; // r8
  __int64 v81; // rcx
  __int64 v82; // rdx
  unsigned __int64 v83; // rax
  __int64 v84; // rcx
  int v85; // edx
  __int64 v86; // rax
  signed __int32 v87[8]; // [rsp+0h] [rbp-A0h] BYREF
  struct VIDMM_SEGMENT *v88; // [rsp+20h] [rbp-80h]
  union _LARGE_INTEGER *v89; // [rsp+28h] [rbp-78h]
  union _LARGE_INTEGER *v90; // [rsp+30h] [rbp-70h]
  struct VIDMM_SEGMENT *v91; // [rsp+38h] [rbp-68h]
  union _LARGE_INTEGER *v92; // [rsp+40h] [rbp-60h]
  struct _MDL *v93; // [rsp+48h] [rbp-58h]
  struct _DXGK_TRANSFERFLAGS v94; // [rsp+50h] [rbp-50h]
  char v95; // [rsp+A0h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(v3 + 64) = this;
  *(_QWORD *)(v3 + 80) = a2;
  *(_BYTE *)(v3 + 1) = 0;
  *(_BYTE *)v3 = 0;
  *(_QWORD *)(v3 + 128) = 0LL;
  memset((void *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 136), 0, 0x28uLL);
  *(_QWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0LL;
  v7 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  v8 = (*(_BYTE *)(456LL * *((unsigned int *)this + 93) + *((_QWORD *)v7 + 4999) + 420) & 4) != 0;
  *(_BYTE *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 2) = v8;
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(v7, a2, 1);
  if ( a3 == 1 )
  {
    v9 = (*((_DWORD *)this + 14) & 0x20) != 0 ? *((_QWORD *)a2 + 3) : *((_QWORD *)a2 + 2);
    result = VIDMM_SEGMENT::MakeRangeNonPageable(this, *((_QWORD *)a2 + 26), v9, (void **)a2 + 46);
    if ( (int)result < 0 )
      return result;
  }
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 39));
  *(_DWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0;
  LODWORD(v14) = -1073741823;
  *(_DWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = -1073741823;
  if ( (*((_DWORD *)a2 + 21) & 0x20) != 0 )
  {
    if ( *((int *)a2 + 85) > 0 )
    {
      VIDMM_GLOBAL::UnlockAllocation(v11, *((struct _VIDMM_LOCAL_ALLOC **)a2 + 12), 0LL, *((_QWORD *)a2 + 1), 0);
      VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
      *((_DWORD *)a2 + 21) &= ~2u;
      --*((_DWORD *)a2 + 85);
    }
    v15 = *((_QWORD *)a2 + 12);
    v16 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 55);
    if ( v16 )
    {
      v19 = VIDMM_CPU_HOST_APERTURE::MapRange(v16, a2);
      if ( v19 < 0 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v18, v17, v20, v21);
        *(_QWORD *)(v22 + 24) = 560LL;
        WdLogEvent5_WdAssertion(v22);
        return (unsigned int)v19;
      }
      v23 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 55);
      v24.QuadPart = *(_QWORD *)(*((_QWORD *)a2 + 27) + 32LL)
                   + (unsigned int)(*(_DWORD *)(*((_QWORD *)v23 + 6) + 368LL) * *((_DWORD *)a2 + 114));
      v25 = VIDMM_CPU_HOST_APERTURE::BuildMdlFromRange(
              v23,
              *(void **)(v15 + 16),
              (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 456),
              *((_QWORD *)a2 + 26),
              *((_QWORD *)a2 + 2));
    }
    else
    {
      v24.QuadPart = *((_QWORD *)a2 + 26) + *(_QWORD *)(*((_QWORD *)a2 + 27) + 32LL);
      v25 = VidMmiBuildMdlForContiguousMmIo(*(_QWORD *)(v15 + 16), *((_QWORD *)a2 + 2), v24);
    }
    v30 = (struct VIDMM_SEGMENT *)v25;
    *(_QWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v25;
    if ( !v25 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
      *(_QWORD *)(v31 + 24) = 596LL;
      WdLogEvent5_WdAssertion(v31);
      return 3221225495LL;
    }
    memset((void *)(v3 + 88), 0, 0x28uLL);
    *(_QWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = this;
    *(_QWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = *((_QWORD *)a2 + 26);
    *(_QWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = a2;
    *(_DWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 0;
    KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a2 + 12) + 8LL), (PRKAPC_STATE)(v3 + 128));
    v93 = (struct _MDL *)a2;
    LODWORD(v92) = 0;
    v91 = (struct VIDMM_SEGMENT *)(v3 + 88);
    v90 = (union _LARGE_INTEGER *)VIDMM_MEMORY_SEGMENT::RotateFrameBufferCopyCallback;
    v89 = (union _LARGE_INTEGER *)*((_QWORD *)a2 + 2);
    v88 = v30;
    v14 = (int)_guard_dispatch_icall_fptr();
    KeUnstackDetachProcess((PRKAPC_STATE)(v3 + 128));
    v12 = *((_QWORD *)a2 + 32);
    if ( v12 )
      _guard_dispatch_icall_fptr();
    if ( (int)v14 < 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v11, v32, v12, v13);
      *(_QWORD *)(v33 + 24) = v14;
LABEL_105:
      WdLogEvent5_WdAssertion(v33);
      if ( *((_QWORD *)a2 + 54) )
        VIDMM_CPU_HOST_APERTURE::UnmapRange(*((VIDMM_CPU_HOST_APERTURE **)this + 55), a2);
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 39), v70, v71, v72);
      v73 = *(void **)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
      if ( v73 )
        ExFreePoolWithTag(v73, 0);
      return (unsigned int)v14;
    }
    *(_BYTE *)(v15 + 32) |= 1u;
    *(union _LARGE_INTEGER *)(v15 + 80) = v24;
    *((_BYTE *)a2 + 95) = 1;
    v8 = *(_BYTE *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 2);
    goto LABEL_24;
  }
  if ( !*((_BYTE *)a2 + 94) )
  {
    if ( (*((_DWORD *)a2 + 19) & 0x100) == 0 )
      VIDMM_GLOBAL::FillAllocationInternal(
        *((ADAPTER_RENDER ***)this + 1),
        *((_DWORD *)a2 + 19) & 0x3F,
        (D3DGPU_VIRTUAL_ADDRESS *)a2,
        *((_QWORD *)a2 + 1),
        (unsigned int)v88,
        this,
        (union _LARGE_INTEGER *)a2 + 26);
LABEL_24:
    LODWORD(v14) = 0;
    *(_BYTE *)v3 = 1;
    *(_DWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0;
  }
  if ( (int)v14 < 0 && *((_DWORD *)a2 + 16) )
  {
    LODWORD(v14) = VIDMM_GLOBAL::AllocateTemporaryResourcesForAllocation(*((VIDMM_GLOBAL **)this + 1), a2);
    *(_DWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v14;
    *(_DWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v14;
    if ( (int)v14 < 0 )
    {
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 39), v34, v35, v36);
      v37 = (void *)*((_QWORD *)a2 + 46);
      if ( v37 )
      {
        VIDMM_SEGMENT::MakeRangePageable(this, v37);
        *((_QWORD *)a2 + 46) = 0LL;
      }
      return (unsigned int)v14;
    }
    *(_QWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
    if ( (VIDMM_GLOBAL::_Config & 0x30) == 0 )
    {
      v90 = (union _LARGE_INTEGER *)(v3 + 8);
      v89 = (union _LARGE_INTEGER *)(v3 + 1);
      LOBYTE(v88) = 0;
      v38 = _guard_dispatch_icall_fptr();
      if ( v38 < 0 )
        goto LABEL_36;
      MDLForRange = VidMmGetMDLForRange(a2, 0LL, *((_QWORD *)a2 + 1));
      *(_QWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = MDLForRange;
      if ( MDLForRange )
        goto LABEL_36;
      _guard_dispatch_icall_fptr();
    }
    v38 = -1071775487;
LABEL_36:
    if ( v38 >= 0 )
    {
      if ( !*(_BYTE *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 1) )
      {
        v88 = *(struct VIDMM_SEGMENT **)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        _guard_dispatch_icall_fptr();
      }
      v94.0 = 0;
      v40 = *((_QWORD *)a2 + 1);
      v93 = 0LL;
      v92 = (union _LARGE_INTEGER *)((char *)a2 + 208);
      v91 = this;
      if ( v8 )
      {
        v90 = *(union _LARGE_INTEGER **)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        v89 = 0LL;
        v88 = 0LL;
      }
      else
      {
        v90 = 0LL;
        v89 = (union _LARGE_INTEGER *)((char *)a2 + 248);
        v88 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 32);
      }
      VIDMM_GLOBAL::MemoryTransfer(
        *((VIDMM_GLOBAL **)this + 1),
        a2,
        v40,
        0LL,
        v88,
        v89,
        (struct _MDL *)v90,
        v91,
        v92,
        v93,
        v94);
      if ( (*((_DWORD *)a2 + 21) & 4) != 0 )
      {
        v43 = WdLogNewEntry5_WdEvent(v42, v41);
        *(_QWORD *)(v43 + 24) = a2;
        WdLogEvent5_WdEvent(v43);
        _guard_dispatch_icall_fptr();
      }
      else
      {
        VIDMM_GLOBAL::ReleaseTemporaryResourcesForAllocation(*((VIDMM_GLOBAL **)this + 1), a2);
      }
      goto LABEL_71;
    }
    v44 = *((_QWORD *)a2 + 1);
    v45 = v44 >> 1;
    if ( v8 && Use64KbPagesForTransfer(a2, this) )
    {
      v46 = 0x10000;
      v47 = 0x10000;
    }
    else
    {
      v47 = 4096;
      v46 = 0x10000;
    }
    if ( !v44 )
    {
LABEL_70:
      _guard_dispatch_icall_fptr();
      v56 = 1;
      *(_BYTE *)v3 = 1;
      goto LABEL_72;
    }
    v48 = v47;
    *(_QWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v47;
    v49 = ~(v47 - 1);
    *(_QWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v49;
    v50 = 0LL;
    v51 = *(_BYTE *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 2);
    while ( 1 )
    {
      *(_QWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
      v52 = v49 & (v48 + v45 - 1);
      if ( (VIDMM_GLOBAL::_Config & 0x20) != 0 )
      {
        v53 = v48 == v52;
        if ( v48 != v52 )
          goto LABEL_53;
      }
      else
      {
        v53 = v48 == v52;
      }
      v90 = (union _LARGE_INTEGER *)(v3 + 8);
      v89 = (union _LARGE_INTEGER *)(v3 + 1);
      LOBYTE(v88) = v53;
      v54 = _guard_dispatch_icall_fptr();
      *(_DWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = v54;
      if ( v54 < 0 )
        goto LABEL_61;
      if ( !*(_QWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
      {
        v55 = VidMmGetMDLForRange(a2, v50, v52);
        *(_QWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v55;
        if ( !v55 )
        {
          _guard_dispatch_icall_fptr();
LABEL_53:
          v54 = -1071775487;
          goto LABEL_60;
        }
        v54 = *(_DWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
      }
LABEL_60:
      if ( v54 >= 0 )
      {
        if ( !*(_BYTE *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 1) )
        {
          v88 = *(struct VIDMM_SEGMENT **)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
          _guard_dispatch_icall_fptr();
        }
        v94.0 = 0;
        v93 = 0LL;
        if ( v51 )
        {
          *(_QWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v50 + *((_QWORD *)a2 + 26);
          v92 = (union _LARGE_INTEGER *)(v3 + 72);
          v91 = this;
          v90 = *(union _LARGE_INTEGER **)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
          v89 = 0LL;
          v88 = 0LL;
        }
        else
        {
          v92 = (union _LARGE_INTEGER *)((char *)a2 + 208);
          v91 = this;
          v90 = 0LL;
          v89 = (union _LARGE_INTEGER *)((char *)a2 + 248);
          v88 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 32);
        }
        VIDMM_GLOBAL::MemoryTransfer(
          *((VIDMM_GLOBAL **)this + 1),
          a2,
          v52,
          v50,
          v88,
          v89,
          (struct _MDL *)v90,
          v91,
          v92,
          v93,
          v94);
        VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
        v88 = *(struct VIDMM_SEGMENT **)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        _guard_dispatch_icall_fptr();
        _guard_dispatch_icall_fptr();
        v50 += v52;
        v45 = *((_QWORD *)a2 + 1) - v50;
        goto LABEL_68;
      }
LABEL_61:
      v45 = v52 >> 1;
LABEL_68:
      v48 = *(_QWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      v49 = *(_QWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
      if ( v50 == *((_QWORD *)a2 + 1) )
      {
        LODWORD(v14) = *(_DWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        v46 = 0x10000;
        goto LABEL_70;
      }
    }
  }
LABEL_71:
  v46 = 0x10000;
  v56 = *(_BYTE *)v3;
LABEL_72:
  if ( (int)v14 < 0 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q((__int64)v11, &EventPerformanceWarning, v12, 2);
    if ( (**((_DWORD **)a2 + 59) & 8) == 0 )
      KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a2 + 12) + 8LL), (PRKAPC_STATE)(v3 + 128));
    v53 = Use64KbPagesForTransfer(a2, *((struct VIDMM_SEGMENT **)a2 + 27)) == 0;
    v57 = *((_QWORD *)a2 + 1);
    if ( v53 )
    {
      v46 = 4096;
      v58 = v57 >> 12;
    }
    else
    {
      v58 = v57 >> 16;
    }
    *(_DWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = v58;
    *(_QWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v58;
    *(_DWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v46;
    v59 = *((_QWORD *)a2 + 26);
    v60 = 0;
    while ( 1 )
    {
      *(_DWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = v60;
      *(_QWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v59;
      if ( v60 >= (unsigned int)v58 )
        break;
      v61 = VidMmMapViewOfAllocation(a2, v46 * v60, v46, 0);
      if ( v61 )
      {
        memmove(*((void **)this + 31), v61, v46);
        VidMmUnmapViewOfAllocation(a2, v62, v63, v64);
      }
      else
      {
        *((_DWORD *)a2 + 19) |= 0x80000u;
      }
      VIDMM_GLOBAL::MemoryTransfer(
        *((VIDMM_GLOBAL **)this + 1),
        a2,
        v46,
        v46 * *(_DWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C),
        0LL,
        0LL,
        *(struct _MDL **)(*((_QWORD *)this + 32) + 8LL),
        this,
        (union _LARGE_INTEGER *)(v3 + 40),
        0LL,
        0);
      VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
      v59 += v46;
      v60 = *(_DWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) + 1;
      v58 = *(_QWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    }
    v56 = 1;
    *(_BYTE *)v3 = 1;
    if ( (**((_DWORD **)a2 + 59) & 8) == 0 )
      KeUnstackDetachProcess((PRKAPC_STATE)(v3 + 128));
  }
  if ( (**((_DWORD **)a2 + 59) & 0x20000) != 0 )
  {
    v65 = (struct VIDMM_SEGMENT *)(~*((_QWORD *)this + 49) & (*((_QWORD *)this + 49) + *((_QWORD *)a2 + 2)));
    memset((void *)(v3 + 176), 0, 0x30uLL);
    v13 = *((unsigned int *)this + 93);
    *(_DWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v13;
    if ( (*((_DWORD *)this + 14) & 0x1000) != 0 )
      v67 = 0LL;
    else
      v67 = (unsigned int)(*((_DWORD *)this + 4) + 1);
    *(_DWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB4) = v67;
    if ( *((_DWORD *)this + 101) )
    {
      v68 = *((_QWORD *)a2 + 26);
      v69 = *((_QWORD *)this + 51);
      if ( v68 >= v69 )
      {
LABEL_103:
        if ( (int)v14 < 0 )
        {
          v33 = WdLogNewEntry5_WdAssertion(v67, v68, v66, v13);
          *(_QWORD *)(v33 + 24) = 1137LL;
          goto LABEL_105;
        }
        v56 = *(_BYTE *)v3;
        goto LABEL_110;
      }
      *(_QWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = v69;
      *(_QWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = *((_QWORD *)this + 53);
      *(_QWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = v68;
      v66 = (struct VIDMM_SEGMENT *)(*((_QWORD *)this + 52) - v68);
      *(_QWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = v66;
      *((_QWORD *)this + 53) = v66;
      *((_QWORD *)this + 51) = v68;
      if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0 )
      {
LABEL_102:
        LODWORD(v14) = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                         *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 1984LL),
                         (struct _DXGKARG_SETVIDEOPROTECTEDREGION *)(v3 + 176));
        goto LABEL_103;
      }
      v91 = v66;
    }
    else
    {
      v68 = *((_QWORD *)a2 + 17);
      *(_QWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = v68;
      *(_QWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = v65;
      if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0 )
        goto LABEL_102;
      v91 = v65;
    }
    Template_qqqxx(
      v67,
      v68,
      (__int64)v66,
      v13,
      v67,
      *(_DWORD *)(((unsigned __int64)&v95 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8),
      v68,
      (char)v91);
    goto LABEL_102;
  }
LABEL_110:
  *((_DWORD *)a2 + 30) = 2;
  *((_QWORD *)a2 + 16) = *((_QWORD *)a2 + 27);
  *((_QWORD *)a2 + 17) = *((_QWORD *)a2 + 26);
  *((_QWORD *)a2 + 18) = *((_QWORD *)a2 + 25);
  *((_QWORD *)a2 + 27) = 0LL;
  *((_QWORD *)a2 + 25) = 0LL;
  *((_BYTE *)a2 + 94) = 1;
  v74 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384);
  v75 = (VIDMM_MEMORY_SEGMENT **)*((_QWORD *)this + 20);
  *((_QWORD *)a2 + 48) = (char *)this + 152;
  *((_QWORD *)a2 + 49) = v75;
  if ( *v75 != (VIDMM_MEMORY_SEGMENT *)((char *)this + 152) )
    __fastfail(3u);
  *v75 = v74;
  *((_QWORD *)this + 20) = v74;
  v76 = *((_DWORD *)a2 + 18);
  if ( !v76
    || (((*((_DWORD *)this + 14) >> 12) & 1) == 0 ? (v77 = *((_DWORD *)this + 4) + 1) : (v77 = 0),
        (*((_DWORD *)a2 + 18) & 0x1F) == v77
     || (((*((_DWORD *)this + 14) >> 12) & 1) == 0 ? (v78 = *((_DWORD *)this + 4) + 1) : (v78 = 0),
         v53 = ((v76 >> 6) & 0x1F) == v78,
         v79 = 0,
         v53)) )
  {
    v79 = 1;
  }
  *((_DWORD *)a2 + 19) ^= (*((_DWORD *)a2 + 19) ^ (v79 << 22)) & 0x400000;
  v80 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 12);
  if ( v80 && *((_QWORD *)v80 + 1) )
    VidMmRecordAlloc(*((VIDMM_GLOBAL **)this + 1), (__int64)a2, (__int64)v80, (__int64)this, *((_QWORD *)a2 + 2), 0);
  *(_QWORD *)(*((_QWORD *)this + 1) + 39984LL) += *((_QWORD *)a2 + 2) >> 12;
  v81 = *((_QWORD *)this + 1);
  v82 = *(_QWORD *)(*(_QWORD *)(v81 + 24) + 3136LL);
  v83 = *(_QWORD *)(v81 + 39984);
  if ( *(_QWORD *)(v82 + 320) < v83 )
    *(_QWORD *)(v82 + 320) = v83;
  if ( (*((_DWORD *)a2 + 21) & 2) != 0 )
  {
    VIDMM_SEGMENT::UnlockAllocationBackingStore(*((struct VIDMM_GLOBAL **)this + 1), a2, 0LL);
    VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
    *((_DWORD *)a2 + 21) &= ~2u;
  }
  if ( v56 && (*((_DWORD *)a2 + 21) & 8) == 0 )
    VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), a2);
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 59) + 2LL) & 1) != 0 )
  {
    LOBYTE(v80) = 1;
    VIDMM_GLOBAL::NotifyResidency(*((ADAPTER_RENDER ***)this + 1), a2, v80);
  }
  v84 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(v84 + 40632) )
  {
    if ( (*((_DWORD *)this + 14) & 0x1000) != 0 )
      v85 = 0;
    else
      v85 = *((_DWORD *)this + 4) + 1;
    VIDMM_GLOBAL::RecordPageMappingHistory(
      v84,
      v85,
      *((__int64 *)a2 + 17) >> 12,
      *((_QWORD *)a2 + 2) >> 12,
      3,
      (__int64)a2);
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 39), v82, (__int64)v80, v13);
  v86 = *((_QWORD *)this + 1);
  _InterlockedOr(v87, 0);
  ++*(_QWORD *)(v86 + 40);
  return 0LL;
}
