/*
 * XREFs of ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0057B10
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0011B78 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011E30 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011EF0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0013530 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00138FC (-MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x1C0013B5C (-BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00168C0 (memmove.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C001C48C (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     Template_qqqxx @ 0x1C001E644 (Template_qqqxx.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C0042E38 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C0043820 (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00461E4 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004710C (-ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004713C (-AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00472BC (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00472F0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0048454 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C004858C (-FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0049524 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004C8A8 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0052668 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005EA34 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAPEAXHPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005EB6C (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAPEAXHPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005F5FC (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C005FBA8 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 *     ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x1C0080F38 (-VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z.c)
 *     ?Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C00846D8 (-Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z.c)
 *     ?MakeRangeNonPageable@VIDMM_SEGMENT@@QEAAJ_K0PEAPEAX@Z @ 0x1C0084C6C (-MakeRangeNonPageable@VIDMM_SEGMENT@@QEAAJ_K0PEAPEAX@Z.c)
 *     ?MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z @ 0x1C0084D6C (-MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::CommitResource(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3)
{
  unsigned __int64 v3; // rbp
  VIDMM_GLOBAL *v7; // r9
  bool v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 result; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r12
  __int64 v18; // rbx
  VIDMM_CPU_HOST_APERTURE *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
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
  SIZE_T v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // rbx
  unsigned int v46; // r13d
  char *v47; // r13
  __int64 v48; // r12
  __int64 v49; // rcx
  unsigned __int64 v50; // rbx
  bool v51; // zf
  int v52; // eax
  struct _MDL *v53; // rax
  char v54; // bl
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rax
  __int64 v57; // rbx
  unsigned int v58; // ecx
  const void *v59; // rax
  struct VIDMM_SEGMENT *v60; // rbx
  __int64 v61; // r8
  __int64 v62; // rcx
  union _LARGE_INTEGER *v63; // rdx
  struct VIDMM_SEGMENT *v64; // r8
  unsigned __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  void *v69; // rcx
  VIDMM_MEMORY_SEGMENT *v70; // rax
  VIDMM_MEMORY_SEGMENT **v71; // rdx
  unsigned int v72; // ecx
  int v73; // r8d
  int v74; // eax
  int v75; // eax
  struct _VIDMM_GLOBAL_ALLOC *v76; // r8
  __int64 v77; // rcx
  __int64 v78; // rdx
  unsigned __int64 v79; // rax
  __int64 v80; // rcx
  int v81; // edx
  __int64 v82; // rax
  signed __int32 v83[8]; // [rsp+0h] [rbp-A0h] BYREF
  struct VIDMM_SEGMENT *v84; // [rsp+20h] [rbp-80h]
  PVOID MappedBase; // [rsp+28h] [rbp-78h]
  union _LARGE_INTEGER *v86; // [rsp+30h] [rbp-70h]
  struct VIDMM_SEGMENT *v87; // [rsp+38h] [rbp-68h]
  union _LARGE_INTEGER *v88; // [rsp+40h] [rbp-60h]
  struct _MDL *v89; // [rsp+48h] [rbp-58h]
  struct _DXGK_TRANSFERFLAGS v90; // [rsp+50h] [rbp-50h]
  char v91; // [rsp+A0h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(v3 + 64) = this;
  *(_QWORD *)(v3 + 80) = a2;
  *(_BYTE *)(v3 + 1) = 0;
  *(_BYTE *)v3 = 0;
  *(_QWORD *)(v3 + 136) = 0LL;
  memset((void *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 144), 0, 0x28uLL);
  *(_QWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0LL;
  v7 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  v8 = (*(_BYTE *)(456LL * *((unsigned int *)this + 93) + *((_QWORD *)v7 + 5006) + 420) & 4) != 0;
  *(_BYTE *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 2) = v8;
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(v7, a2, 1);
  v10 = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL);
  if ( *(_BYTE *)(v10 + 1951) )
  {
    v11 = WdLogNewEntry5_WdEvent(v10, v9);
    *(_QWORD *)(v11 + 24) = a2;
    WdLogEvent5_WdEvent(v11);
    return 3221226166LL;
  }
  if ( a3 != 1
    || ((*((_DWORD *)this + 14) & 0x20) == 0 ? (v13 = *((_QWORD *)a2 + 2)) : (v13 = *((_QWORD *)a2 + 3)),
        result = VIDMM_SEGMENT::MakeRangeNonPageable(this, *((_QWORD *)a2 + 26), v13, (void **)a2 + 46),
        (int)result >= 0) )
  {
    DXGFASTMUTEX::Acquire(*((union _LARGE_INTEGER **)a2 + 39));
    *(_DWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0;
    LODWORD(v17) = -1073741823;
    *(_DWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = -1073741823;
    if ( (*((_DWORD *)a2 + 21) & 0x20) != 0 )
    {
      if ( *((int *)a2 + 85) > 0 )
      {
        VIDMM_GLOBAL::UnlockAllocation(
          *((VIDMM_GLOBAL **)this + 1),
          *((struct _VIDMM_LOCAL_ALLOC **)a2 + 12),
          0LL,
          *((_QWORD *)a2 + 1),
          0,
          0);
        VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
        *((_DWORD *)a2 + 21) &= ~2u;
        --*((_DWORD *)a2 + 85);
      }
      v18 = *((_QWORD *)a2 + 12);
      v19 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 55);
      if ( v19 )
      {
        LODWORD(v17) = VIDMM_CPU_HOST_APERTURE::MapRange(v19, a2, v15, v16);
        if ( (int)v17 < 0 )
        {
          v24 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
          *(_QWORD *)(v24 + 24) = 558LL;
          WdLogEvent5_WdAssertion(v24);
          return (unsigned int)v17;
        }
        v25 = VIDMM_CPU_HOST_APERTURE::BuildMdlFromRange(
                *((VIDMM_CPU_HOST_APERTURE **)this + 55),
                *(void **)(v18 + 16),
                (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 456),
                *((_QWORD *)a2 + 26),
                *((_QWORD *)a2 + 2));
      }
      else
      {
        v25 = VidMmiBuildMdlForContiguousMmIo(
                *(PVOID *)(v18 + 16),
                *((_QWORD *)a2 + 2),
                (union _LARGE_INTEGER)(*((_QWORD *)a2 + 26) + *(_QWORD *)(*((_QWORD *)a2 + 27) + 32LL)));
      }
      v30 = (struct VIDMM_SEGMENT *)v25;
      *(_QWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v25;
      if ( !v25 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
        *(_QWORD *)(v31 + 24) = 594LL;
        WdLogEvent5_WdAssertion(v31);
        return 3221225495LL;
      }
      memset((void *)(v3 + 96), 0, 0x28uLL);
      *(_QWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = this;
      *(_QWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = *((_QWORD *)a2 + 26);
      *(_QWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = a2;
      *(_DWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = 0;
      KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a2 + 12) + 8LL), (PRKAPC_STATE)(v3 + 136));
      v89 = (struct _MDL *)a2;
      LODWORD(v88) = 0;
      v87 = (struct VIDMM_SEGMENT *)(v3 + 96);
      v86 = (union _LARGE_INTEGER *)VIDMM_MEMORY_SEGMENT::RotateFrameBufferCopyCallback;
      MappedBase = (PVOID)*((_QWORD *)a2 + 2);
      v84 = v30;
      v17 = (int)_guard_dispatch_icall_fptr();
      KeUnstackDetachProcess((PRKAPC_STATE)(v3 + 136));
      v15 = *((_QWORD *)a2 + 32);
      if ( v15 )
        _guard_dispatch_icall_fptr();
      if ( (int)v17 < 0 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v14, v32, v15, v16);
        *(_QWORD *)(v33 + 24) = v17;
LABEL_108:
        WdLogEvent5_WdAssertion(v33);
        if ( *((_QWORD *)a2 + 54) )
          VIDMM_CPU_HOST_APERTURE::UnmapRange(*((VIDMM_CPU_HOST_APERTURE **)this + 55), a2, 0);
        DXGFASTMUTEX::Release(*((DXGFASTMUTEX **)a2 + 39), v66, v67, v68);
        v69 = *(void **)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
        if ( v69 )
          ExFreePoolWithTag(v69, 0);
        return (unsigned int)v17;
      }
      *(_BYTE *)(v18 + 32) |= 1u;
      *((_BYTE *)a2 + 95) = 1;
    }
    else
    {
      if ( *((_BYTE *)a2 + 94) )
      {
LABEL_28:
        if ( (int)v17 >= 0 || !*((_DWORD *)a2 + 16) )
        {
LABEL_74:
          v46 = 0x10000;
          v54 = *(_BYTE *)v3;
LABEL_75:
          if ( (int)v17 < 0 )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
              Template_q(v14, &EventPerformanceWarning, v15, 2);
            if ( (**((_DWORD **)a2 + 59) & 8) == 0 )
              KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a2 + 12) + 8LL), (PRKAPC_STATE)(v3 + 136));
            v51 = Use64KbPagesForTransfer(a2, *((struct VIDMM_SEGMENT **)a2 + 27)) == 0;
            v55 = *((_QWORD *)a2 + 1);
            if ( v51 )
            {
              v46 = 4096;
              v56 = v55 >> 12;
            }
            else
            {
              v56 = v55 >> 16;
            }
            *(_DWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = v56;
            *(_QWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v56;
            *(_DWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v46;
            v57 = *((_QWORD *)a2 + 26);
            v58 = 0;
            while ( 1 )
            {
              *(_DWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v58;
              *(_QWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v57;
              if ( v58 >= (unsigned int)v56 )
                break;
              v59 = VidMmMapViewOfAllocation(a2, v46 * v58, v46, (void **)(v3 + 72), 0, 0LL);
              if ( v59 )
              {
                memmove(*((void **)this + 31), v59, v46);
                VidMmUnmapViewOfAllocation(a2, *(void **)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48), 0LL);
              }
              else
              {
                *((_DWORD *)a2 + 19) |= 0x100000u;
              }
              VIDMM_GLOBAL::MemoryTransfer(
                *((VIDMM_GLOBAL **)this + 1),
                a2,
                v46,
                (char *)(v46 * *(_DWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 4)),
                0LL,
                0LL,
                *(struct _MDL **)(*((_QWORD *)this + 32) + 8LL),
                this,
                (union _LARGE_INTEGER *)(v3 + 32),
                0LL,
                0);
              VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
              v57 += v46;
              v58 = *(_DWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 4) + 1;
              v56 = *(_QWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
            }
            v54 = 1;
            *(_BYTE *)v3 = 1;
            if ( (**((_DWORD **)a2 + 59) & 8) == 0 )
              KeUnstackDetachProcess((PRKAPC_STATE)(v3 + 136));
          }
          if ( (**((_DWORD **)a2 + 59) & 0x20000) == 0 )
          {
LABEL_113:
            *((_DWORD *)a2 + 30) = 2;
            *((_QWORD *)a2 + 16) = *((_QWORD *)a2 + 27);
            *((_QWORD *)a2 + 17) = *((_QWORD *)a2 + 26);
            *((_QWORD *)a2 + 18) = *((_QWORD *)a2 + 25);
            *((_QWORD *)a2 + 27) = 0LL;
            *((_QWORD *)a2 + 25) = 0LL;
            *((_BYTE *)a2 + 94) = 1;
            v70 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384);
            v71 = (VIDMM_MEMORY_SEGMENT **)*((_QWORD *)this + 20);
            *((_QWORD *)a2 + 48) = (char *)this + 152;
            *((_QWORD *)a2 + 49) = v71;
            if ( *v71 != (VIDMM_MEMORY_SEGMENT *)((char *)this + 152) )
              __fastfail(3u);
            *v71 = v70;
            *((_QWORD *)this + 20) = v70;
            v72 = *((_DWORD *)a2 + 18);
            if ( !v72
              || (((*((_DWORD *)this + 14) >> 12) & 1) == 0 ? (v73 = *((_DWORD *)this + 4) + 1) : (v73 = 0),
                  (*((_DWORD *)a2 + 18) & 0x1F) == v73
               || (((*((_DWORD *)this + 14) >> 12) & 1) == 0 ? (v74 = *((_DWORD *)this + 4) + 1) : (v74 = 0),
                   v51 = ((v72 >> 6) & 0x1F) == v74,
                   v75 = 0,
                   v51)) )
            {
              v75 = 1;
            }
            *((_DWORD *)a2 + 19) ^= (*((_DWORD *)a2 + 19) ^ (v75 << 23)) & 0x800000;
            v76 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 12);
            if ( v76 && *((_QWORD *)v76 + 1) )
              VidMmRecordAlloc(
                *((VIDMM_GLOBAL **)this + 1),
                (__int64)a2,
                (__int64)v76,
                (__int64)this,
                *((_QWORD *)a2 + 2),
                0);
            *(_QWORD *)(*((_QWORD *)this + 1) + 40040LL) += *((_QWORD *)a2 + 2) >> 12;
            v77 = *((_QWORD *)this + 1);
            v78 = *(_QWORD *)(*(_QWORD *)(v77 + 24) + 3152LL);
            v79 = *(_QWORD *)(v77 + 40040);
            if ( *(_QWORD *)(v78 + 320) < v79 )
              *(_QWORD *)(v78 + 320) = v79;
            if ( (*((_DWORD *)a2 + 21) & 2) != 0 )
            {
              VIDMM_SEGMENT::UnlockAllocationBackingStore(*((struct VIDMM_GLOBAL **)this + 1), a2, 0LL);
              VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
              *((_DWORD *)a2 + 21) &= ~2u;
            }
            if ( v54 && (*((_DWORD *)a2 + 21) & 8) == 0 )
              VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), a2);
            if ( (*(_BYTE *)(*((_QWORD *)a2 + 59) + 2LL) & 1) != 0 )
            {
              LOBYTE(v76) = 1;
              VIDMM_GLOBAL::NotifyResidency(*((ADAPTER_RENDER ***)this + 1), a2, v76);
            }
            v80 = *((_QWORD *)this + 1);
            if ( *(_QWORD *)(v80 + 40688) )
            {
              if ( (*((_DWORD *)this + 14) & 0x1000) != 0 )
                v81 = 0;
              else
                v81 = *((_DWORD *)this + 4) + 1;
              VIDMM_GLOBAL::RecordPageMappingHistory(
                v80,
                v81,
                *((__int64 *)a2 + 17) >> 12,
                *((_QWORD *)a2 + 2) >> 12,
                3,
                (__int64)a2);
            }
            DXGFASTMUTEX::Release(*((DXGFASTMUTEX **)a2 + 39), v78, (__int64)v76, v16);
            v82 = *((_QWORD *)this + 1);
            _InterlockedOr(v83, 0);
            ++*(_QWORD *)(v82 + 40);
            return 0LL;
          }
          v60 = (struct VIDMM_SEGMENT *)(~*((_QWORD *)this + 49) & (*((_QWORD *)this + 49) + *((_QWORD *)a2 + 2)));
          memset((void *)(v3 + 184), 0, 0x30uLL);
          v16 = *((unsigned int *)this + 93);
          *(_DWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = v16;
          if ( (*((_DWORD *)this + 14) & 0x1000) != 0 )
            v62 = 0LL;
          else
            v62 = (unsigned int)(*((_DWORD *)this + 4) + 1);
          *(_DWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0xBC) = v62;
          if ( *((_DWORD *)this + 101) )
          {
            v63 = (union _LARGE_INTEGER *)*((_QWORD *)a2 + 26);
            v65 = *((_QWORD *)this + 51);
            if ( (unsigned __int64)v63 >= v65 )
            {
LABEL_106:
              if ( (int)v17 < 0 )
              {
                v33 = WdLogNewEntry5_WdAssertion(v62, v63, v61, v16);
                *(_QWORD *)(v33 + 24) = 1140LL;
                goto LABEL_108;
              }
              v54 = *(_BYTE *)v3;
              goto LABEL_113;
            }
            *(_QWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = v65;
            *(_QWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = *((_QWORD *)this + 53);
            *(_QWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = v63;
            v64 = (struct VIDMM_SEGMENT *)(*((_QWORD *)this + 52) - (_QWORD)v63);
            *(_QWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = v64;
            *((_QWORD *)this + 53) = v64;
            *((_QWORD *)this + 51) = v63;
            if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0 )
            {
LABEL_105:
              LODWORD(v17) = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                               *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 1992LL),
                               (const struct _DXGKARG_SETVIDEOPROTECTEDREGION *)(v3 + 184));
              goto LABEL_106;
            }
            v87 = v64;
            v86 = v63;
            LODWORD(MappedBase) = *(_DWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0);
            LODWORD(v84) = v62;
          }
          else
          {
            VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), v16);
            v62 = *((_QWORD *)a2 + 26);
            *(_QWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = v62;
            *(_QWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = v60;
            if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0 )
              goto LABEL_105;
            v87 = v60;
            v86 = (union _LARGE_INTEGER *)v62;
            LODWORD(MappedBase) = *(_DWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0);
            LODWORD(v84) = *(_DWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0xBC);
            LODWORD(v16) = *(_DWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8);
          }
          Template_qqqxx(v62, (__int64)v63, (__int64)v64, v16, (char)v84, (char)MappedBase, (char)v86, (char)v87);
          goto LABEL_105;
        }
        LODWORD(v17) = VIDMM_GLOBAL::AllocateTemporaryResourcesForAllocation(*((VIDMM_GLOBAL **)this + 1), a2, v15, v16);
        *(_DWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v17;
        *(_DWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v17;
        if ( (int)v17 < 0 )
        {
          DXGFASTMUTEX::Release(*((DXGFASTMUTEX **)a2 + 39), v34, v35, v36);
          v37 = (void *)*((_QWORD *)a2 + 46);
          if ( v37 )
          {
            VIDMM_SEGMENT::MakeRangePageable(this, v37);
            *((_QWORD *)a2 + 46) = 0LL;
          }
          return (unsigned int)v17;
        }
        *(_QWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
        if ( (VIDMM_GLOBAL::_Config & 0x30) == 0 )
        {
          v86 = (union _LARGE_INTEGER *)(v3 + 8);
          MappedBase = (PVOID)(v3 + 1);
          LOBYTE(v84) = 0;
          v38 = _guard_dispatch_icall_fptr();
          if ( v38 < 0 )
            goto LABEL_38;
          MDLForRange = VidMmGetMDLForRange(a2, 0LL, *((_QWORD *)a2 + 1));
          *(_QWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = MDLForRange;
          if ( MDLForRange )
            goto LABEL_38;
          _guard_dispatch_icall_fptr();
        }
        v38 = -1071775487;
LABEL_38:
        if ( v38 >= 0 )
        {
          if ( !*(_BYTE *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 1) )
          {
            v84 = *(struct VIDMM_SEGMENT **)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
            _guard_dispatch_icall_fptr();
          }
          v90.0 = 0;
          v40 = *((_QWORD *)a2 + 1);
          v89 = 0LL;
          v88 = (union _LARGE_INTEGER *)((char *)a2 + 208);
          v87 = this;
          if ( v8 )
          {
            v86 = *(union _LARGE_INTEGER **)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
            MappedBase = 0LL;
            v84 = 0LL;
          }
          else
          {
            v86 = 0LL;
            MappedBase = (char *)a2 + 248;
            v84 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 32);
          }
          VIDMM_GLOBAL::MemoryTransfer(
            *((VIDMM_GLOBAL **)this + 1),
            a2,
            v40,
            0LL,
            v84,
            (union _LARGE_INTEGER *)MappedBase,
            (struct _MDL *)v86,
            v87,
            v88,
            v89,
            v90);
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
          goto LABEL_74;
        }
        v44 = *((_QWORD *)a2 + 1);
        v45 = v44 >> 1;
        if ( v8 && Use64KbPagesForTransfer(a2, this) )
        {
          v46 = 0x10000;
          *(_DWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0x10000;
        }
        else
        {
          *(_DWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 4096;
          v46 = 0x10000;
        }
        if ( !v44 )
        {
LABEL_73:
          _guard_dispatch_icall_fptr();
          v54 = 1;
          *(_BYTE *)v3 = 1;
          goto LABEL_75;
        }
        v47 = 0LL;
        v48 = *(unsigned int *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
        while ( 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 1951LL) )
          {
LABEL_72:
            LODWORD(v17) = *(_DWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
            v46 = 0x10000;
            goto LABEL_73;
          }
          *(_QWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
          v49 = (v45 + v48 - 1) & (unsigned int)~(v48 - 1);
          v50 = v49;
          if ( (VIDMM_GLOBAL::_Config & 0x20) != 0 )
          {
            v51 = v48 == v49;
            if ( v48 != v49 )
              goto LABEL_56;
          }
          else
          {
            v51 = v48 == v49;
          }
          v86 = (union _LARGE_INTEGER *)(v3 + 8);
          MappedBase = (PVOID)(v3 + 1);
          LOBYTE(v84) = v51;
          v52 = _guard_dispatch_icall_fptr();
          *(_DWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = v52;
          if ( v52 < 0 )
            goto LABEL_64;
          if ( !*(_QWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
          {
            v53 = VidMmGetMDLForRange(a2, (unsigned __int64)v47, v50);
            *(_QWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v53;
            if ( !v53 )
            {
              _guard_dispatch_icall_fptr();
LABEL_56:
              v52 = -1071775487;
              goto LABEL_63;
            }
            v52 = *(_DWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
          }
LABEL_63:
          if ( v52 >= 0 )
          {
            if ( !*(_BYTE *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 1) )
            {
              v84 = *(struct VIDMM_SEGMENT **)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
              _guard_dispatch_icall_fptr();
            }
            v90.0 = 0;
            v89 = 0LL;
            if ( *(_BYTE *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 2) )
            {
              *(_QWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = &v47[*((_QWORD *)a2 + 26)];
              v88 = (union _LARGE_INTEGER *)(v3 + 88);
              v87 = this;
              v86 = *(union _LARGE_INTEGER **)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
              MappedBase = 0LL;
              v84 = 0LL;
            }
            else
            {
              v88 = (union _LARGE_INTEGER *)((char *)a2 + 208);
              v87 = this;
              v86 = 0LL;
              MappedBase = (char *)a2 + 248;
              v84 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 32);
            }
            VIDMM_GLOBAL::MemoryTransfer(
              *((VIDMM_GLOBAL **)this + 1),
              a2,
              v50,
              v47,
              v84,
              (union _LARGE_INTEGER *)MappedBase,
              (struct _MDL *)v86,
              v87,
              v88,
              v89,
              v90);
            VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
            v84 = *(struct VIDMM_SEGMENT **)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
            _guard_dispatch_icall_fptr();
            _guard_dispatch_icall_fptr();
            v47 += v50;
            v45 = *((_QWORD *)a2 + 1) - (_QWORD)v47;
            goto LABEL_71;
          }
LABEL_64:
          v45 = v50 >> 1;
LABEL_71:
          if ( v47 == *((char **)a2 + 1) )
            goto LABEL_72;
        }
      }
      if ( (*((_DWORD *)a2 + 19) & 0x100) == 0 )
        VIDMM_GLOBAL::FillAllocationInternal(
          *((ADAPTER_RENDER ***)this + 1),
          *((_DWORD *)a2 + 19) & 0x3F,
          (D3DGPU_VIRTUAL_ADDRESS *)a2,
          *((_QWORD *)a2 + 1),
          (unsigned int)v84,
          this,
          (union _LARGE_INTEGER *)a2 + 26);
    }
    LODWORD(v17) = 0;
    *(_BYTE *)v3 = 1;
    *(_DWORD *)(((unsigned __int64)&v91 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0;
    goto LABEL_28;
  }
  return result;
}
