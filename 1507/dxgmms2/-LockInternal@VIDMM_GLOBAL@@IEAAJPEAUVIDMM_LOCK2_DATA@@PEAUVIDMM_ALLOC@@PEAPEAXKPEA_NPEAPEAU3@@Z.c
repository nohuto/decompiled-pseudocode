/*
 * XREFs of ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C004EEA4
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C002F6E0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C004E8E4 (-Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 * Callees:
 *     ?VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z @ 0x1C0003BB4 (-VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z.c)
 *     Template_pqqt @ 0x1C000F884 (Template_pqqt.c)
 *     ?LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z @ 0x1C004EBD8 (-LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z.c)
 *     ?LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C004ECE4 (-LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C004EDF8 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::LockInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_LOCK2_DATA *a2,
        __int64 **a3,
        void **a4,
        unsigned int a5,
        bool *a6,
        struct VIDMM_ALLOC **a7)
{
  __int64 *v7; // r12
  int v8; // r14d
  int v12; // ebp
  __int64 v13; // rdi
  void *v14; // rax
  __int64 v15; // rcx
  int v18; // [rsp+28h] [rbp-40h]
  BOOL v19; // [rsp+30h] [rbp-38h]
  void **v20; // [rsp+88h] [rbp+20h]

  v20 = a4;
  v7 = *a3;
  v8 = 0;
  v12 = 0;
  v13 = **a3;
  switch ( *(_DWORD *)a2 )
  {
    case 2:
      v12 = VIDMM_GLOBAL::LockAllocInCpuHostAperture(
              this,
              a3,
              *(struct VIDMM_CPU_HOST_APERTURE **)(*(_QWORD *)(v13 + 128) + 440LL));
      if ( v12 >= 0 )
      {
LABEL_9:
        a4 = v20;
        break;
      }
      *(_DWORD *)a2 = 4;
      *((_BYTE *)a2 + 4) = 1;
LABEL_8:
      if ( v12 < 0 )
        return (unsigned int)v12;
      goto LABEL_9;
    case 3:
      v12 = VIDMM_GLOBAL::LockAllocInCpuVisibleSegment(this, a3);
      goto LABEL_8;
    case 4:
      ExReleasePushLockExclusiveEx(v13 + 464, 0LL);
      KeLeaveCriticalRegion();
      v12 = VIDMM_GLOBAL::LockInAperture((VIDMM_WORKER_THREAD **)this, a3, a6, a7);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v13 + 464, 0LL);
      goto LABEL_8;
  }
  ++*(_DWORD *)(v13 + 336);
  *(_DWORD *)(v13 + 84) |= 0x20u;
  if ( (**(_DWORD **)(v13 + 472) & 8) != 0 )
    v14 = *(void **)(v13 + 360);
  else
    v14 = (void *)v7[2];
  *a4 = v14;
  *(_BYTE *)(v13 + 94) = 1;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    v15 = *(unsigned int *)a2;
    v19 = v15 == 4;
    v18 = *(_DWORD *)a2;
    Template_pqqt(v15, &EventLock2, (__int64)a3, a3, a5, v18, v19);
  }
  LOBYTE(v8) = *(_DWORD *)a2 == 4;
  VidMmRecordLock((VIDMM_GLOBAL *)((char *)this + 7128), a5, 0, v8);
  return (unsigned int)v12;
}
