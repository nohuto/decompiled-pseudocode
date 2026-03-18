/*
 * XREFs of ?ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C005A600
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0011F94 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0012004 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0012028 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C005C044 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N@Z @ 0x1C00828E0 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::ProbeAndLockAllocation(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        enum _LOCK_OPERATION a5,
        struct VIDMM_SEGMENT *a6,
        unsigned __int8 a7)
{
  __int64 v7; // rax
  struct DXGFASTMUTEX *v8; // rdi
  VIDMM_RECYCLE_MULTIRANGE *v12; // r15
  __int64 v13; // rdx
  VIDMM_RECYCLE_HEAP_MGR *v14; // rcx
  int v15; // ebx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  enum _LOCK_OPERATION v28; // [rsp+20h] [rbp-58h]
  enum _LOCK_OPERATION v29; // [rsp+20h] [rbp-58h]
  char *v30; // [rsp+40h] [rbp-38h] BYREF
  char v31; // [rsp+48h] [rbp-30h]

  v7 = *((_QWORD *)a2 + 12);
  v8 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 416);
  v30 = (char *)this + 416;
  v31 = 0;
  v12 = *(VIDMM_RECYCLE_MULTIRANGE **)(v7 + 24);
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-416LL )
  {
    v19 = WdLogNewEntry5_WdAssertion(-416LL, a2, a3, a4);
    *(_QWORD *)(v19 + 24) = 451LL;
    WdLogEvent5_WdAssertion(v19);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v30, (__int64)a2, a3, a4);
  v15 = VIDMM_RECYCLE_MULTIRANGE::Lock(v12, a2, a3, a4, v28, a6, a7);
  if ( v31 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v30, v13, v16, v17);
  if ( v15 < 0 )
  {
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(v14, 0);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v30, v8, v20, v21);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v30, v22, v23, v24);
    v15 = VIDMM_RECYCLE_MULTIRANGE::Lock(v12, a2, a3, a4, v29, a6, a7);
    if ( v31 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v30, v25, v26, v27);
  }
  return (unsigned int)v15;
}
