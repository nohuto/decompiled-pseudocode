/*
 * XREFs of ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00668E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DE9C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DED4 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF24 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ @ 0x1C00108DC (-IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C006666C (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0066710 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0066D48 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0066F60 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N@Z @ 0x1C0068AE4 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::Free(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rbx
  VIDMM_RECYCLE_RANGE *i; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  VIDMM_RECYCLE_HEAP_MGR *v12; // rcx
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 416), a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13, v5);
  v7 = *((_QWORD *)a2 + 3);
  for ( i = *(VIDMM_RECYCLE_RANGE **)(v7 + 64); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    VIDMM_RECYCLE_RANGE::Decommit(i, v6);
    if ( i == *(VIDMM_RECYCLE_RANGE **)(v7 + 72) )
      break;
  }
  if ( !VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees(
          *(VIDMM_RECYCLE_HEAP **)(*(_QWORD *)(v7 + 80) + 32LL),
          (struct VIDMM_RECYCLE_MULTIRANGE *)v7) )
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(
      *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*(_QWORD *)(v7 + 80) + 32LL) + 8LL),
      (struct _SLIST_ENTRY *)v7);
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13, v9, v10, v11);
  if ( VIDMM_RECYCLE_HEAP_MGR::IsOverLimits() )
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(v12, 1);
}
