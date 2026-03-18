/*
 * XREFs of DxgkGetUseHWGPUInRemoteSession @ 0x1C00E3050
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00A3E48 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

char __fastcall DxgkGetUseHWGPUInRemoteSession(__int64 a1)
{
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax

  Global = DXGGLOBAL::GetGlobal(a1);
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
    LOBYTE(SessionData) = *((_BYTE *)SessionData + 18489);
  return (char)SessionData;
}
