/*
 * XREFs of xxxUpdateWindows @ 0x140257EC8
 * Callers:
 *     xxxSetLayeredWindow @ 0x14014CE10 (xxxSetLayeredWindow.c)
 *     NtUserUpdateWindows @ 0x140263670 (NtUserUpdateWindows.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z @ 0x14011E160 (-xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z.c)
 */

__int64 __fastcall xxxUpdateWindows(struct tagWND *a1, HRGN a2)
{
  __int64 v4; // rcx
  struct tagTHREADINFO *v6; // rax

  if ( !*((_QWORD *)PtiCurrent((__int64)a1) + 61)
    || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v4) + 61) + 8LL) + 64LL) & 1) == 0 )
  {
    v6 = PtiCurrent(v4);
    xxxUpdateThreadsWindows(v6, a1, a2);
  }
  return 1LL;
}
