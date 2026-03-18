/*
 * XREFs of ?ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00688D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DE9C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DED4 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF24 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0067484 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N@Z @ 0x1C0068AE4 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::ProbeAndLockAllocation(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        struct VIDMM_RECYCLE_RANGE *a4,
        enum _LOCK_OPERATION a5,
        struct VIDMM_SEGMENT *a6,
        unsigned __int8 a7)
{
  struct DXGFASTMUTEX *v7; // r15
  struct VIDMM_RECYCLE_RANGE **v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rdx
  VIDMM_RECYCLE_HEAP_MGR *v14; // rcx
  int v15; // ebx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  enum _LOCK_OPERATION v25; // [rsp+20h] [rbp-58h]
  enum _LOCK_OPERATION v26; // [rsp+20h] [rbp-58h]
  _BYTE v27[8]; // [rsp+40h] [rbp-38h] BYREF
  char v28; // [rsp+48h] [rbp-30h]

  v7 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 416);
  v11 = *(struct VIDMM_RECYCLE_RANGE ***)(*((_QWORD *)a2 + 12) + 24LL);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 416), a3, (__int64)a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27, v12);
  v15 = VIDMM_RECYCLE_MULTIRANGE::Lock(v11, a2, a3, a4, v25, a6, a7);
  if ( v28 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27, v13, v16, v17);
  if ( v15 < 0 )
  {
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(v14, 0);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, v7, v18, v19);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27, v20);
    v15 = VIDMM_RECYCLE_MULTIRANGE::Lock(v11, a2, a3, a4, v26, a6, a7);
    if ( v28 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27, v21, v22, v23);
  }
  return (unsigned int)v15;
}
