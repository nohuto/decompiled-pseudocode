/*
 * XREFs of ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005F530
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ @ 0x1C0010238 (-IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0010388 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0010408 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C005F10C (-Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::Free(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct _SLIST_ENTRY **a2,
        __int64 a3,
        __int64 a4)
{
  bool v4; // zf
  char *v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  char *v11; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]

  v4 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 896) == 0LL;
  v5 = (char *)this + 896;
  v12 = 0;
  v11 = v5;
  if ( v4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v5, a2);
    *(_QWORD *)(v10 + 24) = 428LL;
    WdLogEvent5_WdAssertion(v10);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v11, (__int64)a2, a3, a4);
  VIDMM_RECYCLE_MULTIRANGE::Decommit(a2[3]);
  if ( v12 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v11, v7, v8, v9);
  if ( VIDMM_RECYCLE_HEAP_MGR::IsOverLimits() )
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(1);
}
