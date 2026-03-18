/*
 * XREFs of DxgkFinishPnPTransition @ 0x1C00FA90C
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C00EC3D0 (DpiFdoStartAdapterThread.c)
 *     DpiFinishPnPTransitionCallback @ 0x1C00FA8F0 (DpiFinishPnPTransitionCallback.c)
 *     DpiFdoStopAdapter @ 0x1C0195AFC (DpiFdoStopAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkFinishPnPTransition(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // edx
  DXGSESSIONMGR *v3; // rcx
  int v4; // r8d

  v1 = a1;
  v3 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(a1) + 69);
  if ( v1 == -1 )
    DXGSESSIONMGR::FinishPnPTransition(v3, v2);
  else
    DXGSESSIONMGR::FinishPnPTransitionOnSession(v3, v1, v4);
}
