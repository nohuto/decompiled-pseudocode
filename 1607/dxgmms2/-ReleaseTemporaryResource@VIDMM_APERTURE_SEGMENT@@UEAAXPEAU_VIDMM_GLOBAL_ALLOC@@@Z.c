/*
 * XREFs of ?ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0096E70
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004FC60 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0054824 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0065BF4 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C0067670 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::ReleaseTemporaryResource(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  struct _VIDMM_GLOBAL_ALLOC *v4; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  VIDMM_GLOBAL *v10; // rbx
  struct _MDL *MDLForRange; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9

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
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3, a4);
    v7[7] = 0LL;
    v7[3] = 270LL;
    v7[4] = 27LL;
    v7[5] = v4;
    v7[6] = this;
    WdLogEvent5_WdCriticalError(v7);
  }
  VIDMM_GLOBAL::WaitForAllPagingEngines(this[1], v4);
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v4 + 40));
  (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 8))(this, v4);
  if ( *((_BYTE *)v4 + 289) )
  {
    v10 = *this;
    MDLForRange = VidMmGetMDLForRange(v4, *((_QWORD *)v4 + 34), *((_QWORD *)v4 + 35));
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *))v10 + 15))(
      this,
      v4,
      *((_QWORD *)v4 + 34),
      *((_QWORD *)v4 + 35),
      MDLForRange);
    LOBYTE(v12) = 1;
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, __int64))*this + 13))(this, v4, v12);
  }
  VIDMM_LINEAR_POOL::Free(this[18], *((struct _VIDMM_POOL_BLOCK **)v4 + 31), v8, v9);
  *((_QWORD *)v4 + 31) = 0LL;
  *((_QWORD *)v4 + 33) = 0LL;
  VIDMM_GLOBAL::ResetBackingStore(this[1], v4);
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v4 + 40), v13, v14, v15);
}
