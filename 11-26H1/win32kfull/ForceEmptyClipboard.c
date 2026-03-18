/*
 * XREFs of ForceEmptyClipboard @ 0x1401B18B0
 * Callers:
 *     FreeWindowStation @ 0x1401B1640 (FreeWindowStation.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxCloseClipboard @ 0x1401B02A0 (xxxCloseClipboard.c)
 *     ?CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1401B1920 (-CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     xxxEmptyClipboard @ 0x1401B2154 (xxxEmptyClipboard.c)
 */

void __fastcall ForceEmptyClipboard(struct tagWINDOWSTATION *a1)
{
  *((_QWORD *)a1 + 6) = PtiCurrent((__int64)a1);
  HMAssignmentUnlock((char *)a1 + 80);
  HMAssignmentUnlock((char *)a1 + 72);
  HMAssignmentUnlock((char *)a1 + 64);
  xxxEmptyClipboard((ULONG_PTR)a1);
  if ( (*((_DWORD *)a1 + 8) & 0x10) == 0 )
    xxxCloseClipboard(a1);
  CloseClipboardToken(a1);
}
