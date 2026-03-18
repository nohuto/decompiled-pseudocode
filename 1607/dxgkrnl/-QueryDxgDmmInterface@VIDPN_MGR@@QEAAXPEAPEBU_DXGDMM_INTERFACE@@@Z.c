/*
 * XREFs of ?QueryDxgDmmInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_INTERFACE@@@Z @ 0x1C0084D88
 * Callers:
 *     DxgkQueryDmmInterface @ 0x1C00C5D40 (DxgkQueryDmmInterface.c)
 *     ?DmmIsOnlySingleSourceModeExposed@@YAEPEAVADAPTER_DISPLAY@@I@Z @ 0x1C01A0908 (-DmmIsOnlySingleSourceModeExposed@@YAEPEAVADAPTER_DISPLAY@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDPN_MGR::QueryDxgDmmInterface(VIDPN_MGR *this, const struct _DXGDMM_INTERFACE **a2)
{
  __int64 v4; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  *a2 = (const struct _DXGDMM_INTERFACE *)*((_QWORD *)this + 50);
}
