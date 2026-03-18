/*
 * XREFs of DxgkReleaseAdapter @ 0x1C00CCC50
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z @ 0x1C000D6DC (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C0097258 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

void __fastcall DxgkReleaseAdapter(DXGADAPTER *a1)
{
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rax

  if ( a1 )
    DXGADAPTER::ReleaseReference(a1);
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
    DXGSESSIONDATA::SetAdapterLuidInRemoteSession(SessionData, 0LL);
}
