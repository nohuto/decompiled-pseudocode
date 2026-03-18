/*
 * XREFs of ?UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z @ 0x1C005A580
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ @ 0x1C0011F5C (-IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0011F94 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0012028 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0E@Z @ 0x1C005BF4C (-Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0E@Z.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N@Z @ 0x1C00828E0 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::UnlockAllocation(
        VIDMM_RECYCLE_HEAP_MGR *this,
        VIDMM_RECYCLE_MULTIRANGE *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int8 a5)
{
  bool v5; // zf
  char *v6; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  VIDMM_RECYCLE_HEAP_MGR *v13; // rcx
  __int64 v14; // rax
  char *v15; // [rsp+20h] [rbp-18h] BYREF
  char v16; // [rsp+28h] [rbp-10h]

  v5 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 416) == 0LL;
  v6 = (char *)this + 416;
  v16 = 0;
  v15 = v6;
  if ( v5 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v6, a2, a3, a4);
    *(_QWORD *)(v14 + 24) = 451LL;
    WdLogEvent5_WdAssertion(v14);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v15, (__int64)a2, a3, a4);
  VIDMM_RECYCLE_MULTIRANGE::Unlock(a2, a3, a4, a5);
  if ( v16 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v15, v10, v11, v12);
  if ( VIDMM_RECYCLE_HEAP_MGR::IsOverLimits() )
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(v13, 1);
}
