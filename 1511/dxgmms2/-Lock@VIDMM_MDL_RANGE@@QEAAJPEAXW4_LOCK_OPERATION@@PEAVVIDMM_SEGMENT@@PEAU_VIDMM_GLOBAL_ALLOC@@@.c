/*
 * XREFs of ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005E4B0
 * Callers:
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C005DD30 (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 *     ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C005E180 (-LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PE.c)
 * Callees:
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     ?TrackAndValidatePagesOnLock@VIDMM_SEGMENT@@QEAAEPEAU_VIDMM_MDL@@_KPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0056380 (-TrackAndValidatePagesOnLock@VIDMM_SEGMENT@@QEAAEPEAU_VIDMM_MDL@@_KPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_MDL_RANGE::Lock(
        VIDMM_MDL_RANGE *this,
        void *a2,
        enum _LOCK_OPERATION a3,
        struct VIDMM_SEGMENT *a4,
        struct _VIDMM_GLOBAL_ALLOC *a5)
{
  char v7; // di
  struct _MDL *Mdl; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rax
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF

  v7 = 0;
  Mdl = IoAllocateMdl(a2, *((_DWORD *)this + 4) - *((_DWORD *)this + 2), 0, 0, 0LL);
  *(_QWORD *)this = Mdl;
  if ( Mdl )
  {
    MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
    v7 = 1;
    if ( !a4 )
      return 0LL;
    v13[0] = 0LL;
    v13[2] = 0LL;
    v13[1] = *(_QWORD *)this;
    if ( VIDMM_SEGMENT::TrackAndValidatePagesOnLock((unsigned __int64)a4, (struct _VIDMM_MDL *)v13, v10, a5) )
      return 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
    v12 = WdLogNewEntry5_WdLowResource(v9);
    *(_QWORD *)(v12 + 24) = 5051LL;
    WdLogEvent5_WdLowResource(v12);
  }
  if ( *(_QWORD *)this )
  {
    if ( v7 )
      MmUnlockPages(*(PMDL *)this);
    IoFreeMdl(*(PMDL *)this);
    *(_QWORD *)this = 0LL;
  }
  return 3223191809LL;
}
