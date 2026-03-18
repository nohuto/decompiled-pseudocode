/*
 * XREFs of DxgkReleaseAdapter @ 0x1C00BDE10
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z @ 0x1C000CAD8 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

void __fastcall DxgkReleaseAdapter(DXGADAPTER *a1, __int64 a2, __int64 a3, __int64 a4)
{
  DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  DXGSESSIONDATA *SessionData; // rax

  if ( a1 )
    DXGADAPTER::ReleaseReference(a1);
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2, a3, a4);
  SessionData = DXGGLOBAL::GetSessionData(Global, v5, v6, v7);
  if ( SessionData )
    DXGSESSIONDATA::SetAdapterLuidInRemoteSession(SessionData, 0LL);
}
