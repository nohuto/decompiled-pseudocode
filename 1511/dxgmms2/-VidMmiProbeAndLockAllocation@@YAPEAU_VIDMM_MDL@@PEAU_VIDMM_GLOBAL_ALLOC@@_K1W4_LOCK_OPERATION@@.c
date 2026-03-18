/*
 * XREFs of ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005E860
 * Callers:
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00438B0 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0066940 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1@Z @ 0x1C007A710 (-EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1@Z.c)
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z @ 0x1C007C1E4 (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0089590 (-ProbeAndLockAllocation@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     ?TrackAndValidatePagesOnLock@VIDMM_SEGMENT@@QEAAEPEAU_VIDMM_MDL@@_KPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0056380 (-TrackAndValidatePagesOnLock@VIDMM_SEGMENT@@QEAAEPEAU_VIDMM_MDL@@_KPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005EA34 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x1C005EAF0 (-VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAPEAXHPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005EB6C (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAPEAXHPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

struct _VIDMM_MDL *__fastcall VidMmiProbeAndLockAllocation(
        struct _VIDMM_GLOBAL_ALLOC *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        LOCK_OPERATION a4,
        struct VIDMM_SEGMENT *a5,
        struct _VIDMM_LOCAL_ALLOC *MappedBase)
{
  unsigned __int64 v6; // rbp
  struct _VIDMM_LOCAL_ALLOC *v10; // rdi
  char v11; // r12
  char v12; // r14
  struct _VIDMM_MDL *v13; // rax
  __int64 v14; // rcx
  struct _VIDMM_MDL *v15; // rbx
  void *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  struct _MDL *Mdl; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // rax
  void *v26; // rcx
  _BYTE v27[80]; // [rsp+90h] [rbp+90h] BYREF

  v6 = (unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL;
  v10 = MappedBase;
  if ( !MappedBase )
    v10 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a1 + 12);
  *(_QWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v10;
  v11 = 0;
  v12 = 0;
  *(_BYTE *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 0;
  v13 = (struct _VIDMM_MDL *)operator new(0x18uLL, 0x35336956u, PagedPool);
  v15 = v13;
  *(_QWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v13;
  if ( !v13 )
  {
    _InterlockedIncrement(&dword_1C002F5B0);
    v25 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v25 + 24) = 1154LL;
LABEL_13:
    WdLogEvent5_WdLowResource(v25);
    goto LABEL_22;
  }
  *((_QWORD *)v13 + 1) = 0LL;
  v16 = VidMmMapViewOfAllocation(a1, a2, a3, (void **)(v6 + 16), 0, v10);
  if ( !v16 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q(v17, &EventPerformanceWarning, v18, 14);
    _InterlockedIncrement(&dword_1C002F5E0);
    v25 = WdLogNewEntry5_WdLowResource(v17);
    *(_QWORD *)(v25 + 24) = 1169LL;
    goto LABEL_13;
  }
  v11 = 1;
  *(_BYTE *)v6 = 1;
  *(_DWORD *)v15 = 0;
  Mdl = VidMmiAllocateMdl(v16, a3);
  *((_QWORD *)v15 + 1) = Mdl;
  if ( !Mdl )
  {
    _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
    v25 = WdLogNewEntry5_WdLowResource(v20);
    *(_QWORD *)(v25 + 24) = 1183LL;
    goto LABEL_13;
  }
  if ( (qword_1C002F070 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v20, &EventProfilerEnter, v21, 8000);
  MmProbeAndLockPages(*((PMDL *)v15 + 1), 0, a4);
  if ( (qword_1C002F070 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v22, &EventProfilerExit, v23, 8000);
  v12 = 1;
  if ( !a5 || VIDMM_SEGMENT::TrackAndValidatePagesOnLock((unsigned __int64)a5, v15, v23, a1) )
  {
    VidMmUnmapViewOfAllocation(a1, *(void **)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10), v10);
    return v15;
  }
LABEL_22:
  if ( v12 )
    MmUnlockPages(*((PMDL *)v15 + 1));
  if ( v15 )
  {
    v26 = (void *)*((_QWORD *)v15 + 1);
    if ( v26 )
      ExFreePoolWithTag(v26, 0);
    operator delete(v15);
  }
  if ( v11 )
    VidMmUnmapViewOfAllocation(a1, *(void **)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10), v10);
  return 0LL;
}
