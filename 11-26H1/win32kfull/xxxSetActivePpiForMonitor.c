/*
 * XREFs of xxxSetActivePpiForMonitor @ 0x14023532C
 * Callers:
 *     NtUserSetActiveProcessForMonitor @ 0x1401A10E0 (NtUserSetActiveProcessForMonitor.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxRefreshDisplayOrientation @ 0x140235370 (xxxRefreshDisplayOrientation.c)
 *     ?IsMonitorConnectedToInternalPanel@@YAHPEAUtagMONITOR@@@Z @ 0x140299E58 (-IsMonitorConnectedToInternalPanel@@YAHPEAUtagMONITOR@@@Z.c)
 */

__int64 __fastcall xxxSetActivePpiForMonitor(__int64 a1, struct tagMONITOR *a2)
{
  __int64 result; // rax

  if ( !a2 || (result = IsMonitorConnectedToInternalPanel(a2), (_DWORD)result) )
  {
    *(_QWORD *)(*((_QWORD *)PtiCurrent(a1) + 61) + 256LL) = a1;
    return xxxRefreshDisplayOrientation();
  }
  return result;
}
