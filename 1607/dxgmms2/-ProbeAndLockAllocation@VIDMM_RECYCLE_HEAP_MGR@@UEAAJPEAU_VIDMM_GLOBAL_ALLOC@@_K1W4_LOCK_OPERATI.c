/*
 * XREFs of ?ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C005FE80
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0010388 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00103E4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0010408 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C005EF4C (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C006A79C (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
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
  __int64 v7; // rax
  struct DXGFASTMUTEX *v8; // rdi
  struct VIDMM_RECYCLE_RANGE **v12; // r15
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  enum _LOCK_OPERATION v25; // [rsp+20h] [rbp-58h]
  enum _LOCK_OPERATION v26; // [rsp+20h] [rbp-58h]
  char *v27; // [rsp+40h] [rbp-38h] BYREF
  char v28; // [rsp+48h] [rbp-30h]

  v7 = *((_QWORD *)a2 + 13);
  v8 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 896);
  v27 = (char *)this + 896;
  v28 = 0;
  v12 = *(struct VIDMM_RECYCLE_RANGE ***)(v7 + 24);
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-896LL )
  {
    v18 = WdLogNewEntry5_WdAssertion(-896LL, a2);
    *(_QWORD *)(v18 + 24) = 428LL;
    WdLogEvent5_WdAssertion(v18);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v27, (__int64)a2, a3, (__int64)a4);
  v14 = VIDMM_RECYCLE_MULTIRANGE::Lock(v12, a2, a3, a4, v25, a6, a7);
  if ( v28 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v27, v13, v15, v16);
  if ( v14 < 0 )
  {
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(0);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v27, v8);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v27, v19, v20, v21);
    v14 = VIDMM_RECYCLE_MULTIRANGE::Lock(v12, a2, a3, a4, v26, a6, a7);
    if ( v28 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v27, v22, v23, v24);
  }
  return (unsigned int)v14;
}
