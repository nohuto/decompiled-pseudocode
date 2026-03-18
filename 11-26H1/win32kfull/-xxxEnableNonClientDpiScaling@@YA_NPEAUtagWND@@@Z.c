/*
 * XREFs of ?xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z @ 0x14021643C
 * Callers:
 *     NtUserEnableNonClientDpiScaling @ 0x1402163B0 (NtUserEnableNonClientDpiScaling.c)
 * Callees:
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     UpdateWindowSpriteMonitor @ 0x1400A6748 (UpdateWindowSpriteMonitor.c)
 */

char __fastcall xxxEnableNonClientDpiScaling(struct tagWND *a1)
{
  __int64 v2; // r9
  int v3; // eax
  __int64 v4; // rax

  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2 || !IsTopLevelWindow((__int64)a1) || *(int *)(v2 + 20) < 0 )
    return 0;
  v3 = *((_DWORD *)a1 + 95);
  if ( (v3 & 0x80000) == 0 )
  {
    *((_DWORD *)a1 + 95) = v3 | 0x80000;
    *(_DWORD *)(v2 + 232) |= 0x400u;
    v4 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    UpdateWindowSpriteMonitor((__int64 *)a1, v4);
    xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  }
  return 1;
}
