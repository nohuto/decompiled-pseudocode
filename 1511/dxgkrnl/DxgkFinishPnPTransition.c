/*
 * XREFs of DxgkFinishPnPTransition @ 0x1C00CE73C
 * Callers:
 *     DpiFinishPnPTransitionCallback @ 0x1C00CE720 (DpiFinishPnPTransitionCallback.c)
 *     DpiFdoStartAdapterThread @ 0x1C00D0EB0 (DpiFdoStartAdapterThread.c)
 *     DpiFdoStopAdapter @ 0x1C016CD64 (DpiFdoStopAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkFinishPnPTransition(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // edx
  DXGSESSIONMGR *v3; // rcx
  int v4; // r8d

  v1 = a1;
  v3 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(a1) + 88);
  if ( v1 == -1 )
    DXGSESSIONMGR::FinishPnPTransition(v3, v2);
  else
    DXGSESSIONMGR::FinishPnPTransitionOnSession(v3, v1, v4);
}
