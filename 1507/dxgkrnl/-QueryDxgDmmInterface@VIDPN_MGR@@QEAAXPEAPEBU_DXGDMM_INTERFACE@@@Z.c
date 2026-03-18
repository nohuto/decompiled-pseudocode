/*
 * XREFs of ?QueryDxgDmmInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_INTERFACE@@@Z @ 0x1C0097090
 * Callers:
 *     DxgkQueryDmmInterface @ 0x1C00AC588 (DxgkQueryDmmInterface.c)
 *     ?DmmIsOnlySingleSourceModeExposed@@YAEPEAVADAPTER_DISPLAY@@I@Z @ 0x1C017283C (-DmmIsOnlySingleSourceModeExposed@@YAEPEAVADAPTER_DISPLAY@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDPN_MGR::QueryDxgDmmInterface(
        VIDPN_MGR *this,
        const struct _DXGDMM_INTERFACE **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  *a2 = (const struct _DXGDMM_INTERFACE *)*((_QWORD *)this + 50);
}
