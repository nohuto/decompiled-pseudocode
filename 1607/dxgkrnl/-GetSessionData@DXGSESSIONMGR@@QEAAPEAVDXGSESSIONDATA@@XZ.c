/*
 * XREFs of ?GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C0077A44
 * Callers:
 *     OutputDuplProcessTerminate @ 0x1C0074920 (OutputDuplProcessTerminate.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C0077A64 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 * Callees:
 *     <none>
 */

struct DXGSESSIONDATA *__fastcall DXGSESSIONMGR::GetSessionData(DXGSESSIONMGR *this)
{
  unsigned int CurrentProcessSessionId; // eax

  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  return DXGSESSIONMGR::GetSessionDataForSpecifiedSession(this, CurrentProcessSessionId);
}
