/*
 * XREFs of xxxCleanupMotherDesktopWindow @ 0x1C0130A74
 * Callers:
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C007C798 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0130508 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxCreateWindowStation @ 0x1C0138EEC (xxxCreateWindowStation.c)
 *     xxxDesktopThread @ 0x1C0142CC0 (xxxDesktopThread.c)
 * Callees:
 *     SetVisible @ 0x1C0081FA0 (SetVisible.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 */

__int64 __fastcall xxxCleanupMotherDesktopWindow(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 result; // rax

  v1 = a1 + 8;
  v2 = *(_QWORD *)(a1 + 8);
  SetVisible(v2, 0);
  result = HMAssignmentUnlock(v1);
  if ( result )
    return xxxDestroyWindow(v2);
  return result;
}
