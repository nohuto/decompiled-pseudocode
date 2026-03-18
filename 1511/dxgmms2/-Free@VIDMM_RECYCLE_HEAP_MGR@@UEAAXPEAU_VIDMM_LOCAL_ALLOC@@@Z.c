/*
 * XREFs of ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005A6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ @ 0x1C0011F5C (-IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0011F94 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0012028 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C005C204 (-Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::Free(
        VIDMM_RECYCLE_HEAP_MGR *this,
        VIDMM_RECYCLE_MULTIRANGE **a2,
        __int64 a3,
        __int64 a4)
{
  bool v4; // zf
  char *v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  VIDMM_RECYCLE_HEAP_MGR *v10; // rcx
  __int64 v11; // rax
  char *v12; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+28h] [rbp-10h]

  v4 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 416) == 0LL;
  v5 = (char *)this + 416;
  v13 = 0;
  v12 = v5;
  if ( v4 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v5, a2, a3, a4);
    *(_QWORD *)(v11 + 24) = 451LL;
    WdLogEvent5_WdAssertion(v11);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v12, (__int64)a2, a3, a4);
  VIDMM_RECYCLE_MULTIRANGE::Decommit(a2[3]);
  if ( v13 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v12, v7, v8, v9);
  if ( VIDMM_RECYCLE_HEAP_MGR::IsOverLimits() )
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(v10, 1);
}
