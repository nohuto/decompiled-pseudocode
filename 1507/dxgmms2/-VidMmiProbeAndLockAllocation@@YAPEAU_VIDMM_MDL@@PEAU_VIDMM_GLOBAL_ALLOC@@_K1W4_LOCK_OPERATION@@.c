/*
 * XREFs of ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C005BE6C
 * Callers:
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C003EF20 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00512F8 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z @ 0x1C00539E8 (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00752E0 (-ProbeAndLockAllocation@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     Template_q @ 0x1C0007190 (Template_q.c)
 *     ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x1C0038190 (-VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1H@Z @ 0x1C005B500 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1H@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005BB44 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TrackAndValidatePagesOnLock@VIDMM_SEGMENT@@QEAAEPEAU_VIDMM_MDL@@_KPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00715CC (-TrackAndValidatePagesOnLock@VIDMM_SEGMENT@@QEAAEPEAU_VIDMM_MDL@@_KPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

struct _VIDMM_MDL *__fastcall VidMmiProbeAndLockAllocation(
        struct _VIDMM_GLOBAL_ALLOC *a1,
        __int64 a2,
        SIZE_T a3,
        LOCK_OPERATION Operation,
        struct VIDMM_SEGMENT *a5)
{
  char v9; // r14
  char v10; // si
  struct _VIDMM_MDL *v11; // rax
  __int64 v12; // rcx
  struct _VIDMM_MDL *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  __int64 v17; // r9
  char *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  PMDL Mdl; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  void *v26; // rcx
  _BYTE v27[16]; // [rsp+70h] [rbp+70h] BYREF

  v9 = 0;
  v10 = 0;
  *(_BYTE *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 0;
  v11 = (struct _VIDMM_MDL *)operator new(0x18uLL, 0x35336956u, PagedPool);
  v13 = v11;
  *(_QWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v11;
  if ( !v11 )
  {
    _InterlockedIncrement(&dword_1C00275A0);
    v14 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v14 + 24) = 1138LL;
LABEL_3:
    WdLogEvent5_WdLowResource(v14);
    goto LABEL_20;
  }
  *((_QWORD *)v11 + 1) = 0LL;
  v18 = VidMmMapViewOfAllocation(a1, a2, a3, 0);
  if ( !v18 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q(v19, &EventPerformanceWarning, v20, 14);
    _InterlockedIncrement(&dword_1C00275D0);
    v14 = WdLogNewEntry5_WdLowResource(v19);
    *(_QWORD *)(v14 + 24) = 1153LL;
    goto LABEL_3;
  }
  v9 = 1;
  *(_BYTE *)((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) = 1;
  *(_DWORD *)v13 = 0;
  Mdl = VidMmiAllocateMdl((unsigned __int64)v18, a3);
  *((_QWORD *)v13 + 1) = Mdl;
  if ( !Mdl )
  {
    _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
    v14 = WdLogNewEntry5_WdLowResource(v22);
    *(_QWORD *)(v14 + 24) = 1167LL;
    goto LABEL_3;
  }
  if ( (qword_1C0027060 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v22, &EventProfilerEnter, v23, 8000);
  MmProbeAndLockPages(*((PMDL *)v13 + 1), 0, Operation);
  if ( (qword_1C0027060 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v24, &EventProfilerExit, v16, 8000);
  v10 = 1;
  if ( !a5 || VIDMM_SEGMENT::TrackAndValidatePagesOnLock(a5, v13, v16, a1) )
  {
    VidMmUnmapViewOfAllocation(a1, v15, v16, v17);
    return v13;
  }
LABEL_20:
  if ( v10 )
    MmUnlockPages(*((PMDL *)v13 + 1));
  if ( v13 )
  {
    v26 = (void *)*((_QWORD *)v13 + 1);
    if ( v26 )
      ExFreePoolWithTag(v26, 0);
    operator delete(v13);
  }
  if ( v9 )
    VidMmUnmapViewOfAllocation(a1, v15, v16, v17);
  return 0LL;
}
