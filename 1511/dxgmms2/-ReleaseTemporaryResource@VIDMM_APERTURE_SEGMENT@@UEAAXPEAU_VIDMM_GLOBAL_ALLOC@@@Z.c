/*
 * XREFs of ?ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0083830
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011E30 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00472F0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004C8A8 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0059558 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C005FBA8 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::ReleaseTemporaryResource(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  VIDMM_GLOBAL *v9; // rbx
  struct _MDL *MDLForRange; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  if ( *((_OWORD *)a2 + 14) != 0LL )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3, a4);
    v6[7] = 0LL;
    v6[3] = 270LL;
    v6[4] = 27LL;
    v6[5] = a2;
    v6[6] = this;
    WdLogEvent5_WdCriticalError(v6);
  }
  VIDMM_GLOBAL::WaitForAllPagingEngines(this[1], a2);
  DXGFASTMUTEX::Acquire(*((union _LARGE_INTEGER **)a2 + 39));
  (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 8))(this, a2);
  if ( *((_BYTE *)a2 + 281) )
  {
    v9 = *this;
    MDLForRange = VidMmGetMDLForRange(a2, *((_QWORD *)a2 + 33), *((_QWORD *)a2 + 34));
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *))v9 + 15))(
      this,
      a2,
      *((_QWORD *)a2 + 33),
      *((_QWORD *)a2 + 34),
      MDLForRange);
    LOBYTE(v11) = 1;
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, __int64))*this + 13))(this, a2, v11);
  }
  VIDMM_LINEAR_POOL::Free(this[18], *((struct _VIDMM_POOL_BLOCK **)a2 + 30), v7, v8);
  *((_QWORD *)a2 + 30) = 0LL;
  *((_QWORD *)a2 + 32) = 0LL;
  VIDMM_GLOBAL::ResetBackingStore(this[1], a2);
  DXGFASTMUTEX::Release(*((DXGFASTMUTEX **)a2 + 39), v12, v13, v14);
}
