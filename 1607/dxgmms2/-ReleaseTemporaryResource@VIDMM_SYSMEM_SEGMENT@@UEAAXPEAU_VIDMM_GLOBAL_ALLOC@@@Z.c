/*
 * XREFs of ?ReleaseTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0063C30
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004FC60 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005088C (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0054824 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::ReleaseTemporaryResource(
        VIDMM_SYSMEM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  struct _VIDMM_GLOBAL_ALLOC *v4; // rbx
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax

  v4 = a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v6[3] = *((_QWORD *)v4 + 31);
    a3 = *((int *)v4 + 65);
    v6[4] = a3;
    a2 = (struct _VIDMM_GLOBAL_ALLOC *)*((unsigned int *)v4 + 64);
    v6[5] = a2;
  }
  if ( *((_QWORD *)v4 + 29) || *((_QWORD *)v4 + 30) )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3, a4);
    v11[7] = 0LL;
    v11[3] = 270LL;
    v11[4] = 27LL;
    v11[5] = v4;
    v11[6] = this;
    WdLogEvent5_WdCriticalError(v11);
  }
  VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), v4);
  VIDMM_GLOBAL::FlushScratchGpuVaRanges(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 93));
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v4 + 40));
  (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)this + 64LL))(this, v4);
  if ( *((_BYTE *)v4 + 289) )
  {
    LOBYTE(v7) = 1;
    (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, __int64))(*(_QWORD *)this + 104LL))(
      this,
      v4,
      v7);
  }
  *((_QWORD *)v4 + 31) = 0LL;
  *((_QWORD *)v4 + 33) = 0LL;
  VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), v4);
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v4 + 40), v8, v9, v10);
}
