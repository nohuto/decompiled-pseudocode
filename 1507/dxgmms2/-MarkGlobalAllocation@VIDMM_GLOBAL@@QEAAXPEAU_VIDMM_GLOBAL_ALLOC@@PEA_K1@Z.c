/*
 * XREFs of ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C004F7AC
 * Callers:
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0033130 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C007059C (-OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1C0071698 (-TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005BE8 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C00506B0 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 */

void __fastcall VIDMM_GLOBAL::MarkGlobalAllocation(
        VIDMM_GLOBAL *this,
        DXGFASTMUTEX **a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  struct VIDMM_ALLOC *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _VIDMM_GLOBAL_ALLOC *v11; // rdi
  _QWORD **v12; // rsi
  _QWORD *v13; // rbx

  DXGFASTMUTEX::Acquire(a2[39]);
  v11 = a2[36];
  while ( v11 != (struct _VIDMM_GLOBAL_ALLOC *)(a2 + 36) )
  {
    v12 = (_QWORD **)((char *)v11 - 16);
    v11 = *(struct _VIDMM_GLOBAL_ALLOC **)v11;
    v13 = *v12;
    while ( v13 != v12 )
    {
      v8 = (struct VIDMM_ALLOC *)(v13 - 5);
      v13 = (_QWORD *)*v13;
      if ( (*((_BYTE *)v8 + 28) & 3) == 2 )
        VIDMM_GLOBAL::NotifyAllocationEviction(this, v8, 0, a3, a4);
    }
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2[39], (__int64)v8, v9, v10);
}
