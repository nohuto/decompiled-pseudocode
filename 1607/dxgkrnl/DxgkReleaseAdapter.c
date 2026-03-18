/*
 * XREFs of DxgkReleaseAdapter @ 0x1C00E2F40
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0009450 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z @ 0x1C000F0E4 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00A3E48 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkReleaseAdapter(DXGADAPTER *a1)
{
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rax

  if ( a1 )
    DXGADAPTER::ReleaseReferenceNoTracking(a1);
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
    DXGSESSIONDATA::SetAdapterLuidInRemoteSession(SessionData, 0LL);
}
