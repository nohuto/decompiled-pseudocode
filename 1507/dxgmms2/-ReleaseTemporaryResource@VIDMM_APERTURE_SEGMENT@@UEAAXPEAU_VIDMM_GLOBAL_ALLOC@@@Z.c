/*
 * XREFs of ?ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006C7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005BE8 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C002F414 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0053080 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C005B4BC (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0075C98 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::ReleaseTemporaryResource(VIDMM_GLOBAL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  _QWORD *v4; // rax
  VIDMM_GLOBAL *v5; // rbx
  struct _MDL *MDLForRange; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

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
  VIDMM_GLOBAL::WaitForAllPagingEngines(this[1], a2);
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 39));
  (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 8))(this, a2);
  if ( *((_BYTE *)a2 + 281) )
  {
    v5 = *this;
    MDLForRange = VidMmGetMDLForRange(a2, *((_QWORD *)a2 + 33), *((_QWORD *)a2 + 34));
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *))v5 + 15))(
      this,
      a2,
      *((_QWORD *)a2 + 33),
      *((_QWORD *)a2 + 34),
      MDLForRange);
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 13))(this, a2);
  }
  VIDMM_LINEAR_POOL::Free(this[18], *((struct _VIDMM_POOL_BLOCK **)a2 + 30));
  *((_QWORD *)a2 + 30) = 0LL;
  *((_QWORD *)a2 + 32) = 0LL;
  VIDMM_GLOBAL::ResetBackingStore(this[1], a2);
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 39), v7, v8, v9);
}
