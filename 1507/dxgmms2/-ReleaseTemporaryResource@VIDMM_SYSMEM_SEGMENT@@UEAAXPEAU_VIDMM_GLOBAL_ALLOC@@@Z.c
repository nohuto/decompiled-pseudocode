/*
 * XREFs of ?ReleaseTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006BB20
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005BE8 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C002F414 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C003A67C (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0053080 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::ReleaseTemporaryResource(
        VIDMM_SYSMEM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  if ( *((_OWORD *)a2 + 14) != 0LL )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v4[7] = 0LL;
    v4[3] = 270LL;
    v4[4] = 27LL;
    v4[5] = a2;
    v4[6] = this;
    WdLogEvent5_WdCriticalError(v4);
  }
  VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
  VIDMM_GLOBAL::FlushScratchGpuVaRanges(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 93));
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 39));
  (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)this + 64LL))(this, a2);
  if ( *((_BYTE *)a2 + 281) )
    (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)this + 104LL))(this, a2);
  *((_QWORD *)a2 + 30) = 0LL;
  *((_QWORD *)a2 + 32) = 0LL;
  VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), a2);
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 39), v5, v6, v7);
}
