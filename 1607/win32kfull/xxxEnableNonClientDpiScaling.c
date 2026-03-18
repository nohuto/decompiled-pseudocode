/*
 * XREFs of xxxEnableNonClientDpiScaling @ 0x1C01DD334
 * Callers:
 *     NtUserEnableNonClientDpiScaling @ 0x1C02121D0 (NtUserEnableNonClientDpiScaling.c)
 * Callees:
 *     UpdateWindowSpriteDPI @ 0x1C0062C8C (UpdateWindowSpriteDPI.c)
 *     _IsTopLevelWindow @ 0x1C00725F0 (_IsTopLevelWindow.c)
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
 */

__int64 __fastcall xxxEnableNonClientDpiScaling(struct tagWND *a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rax

  if ( (*((_DWORD *)a1 + 88) & 0xF) != 2 || !(unsigned int)IsTopLevelWindow((__int64)a1) || *((int *)a1 + 11) < 0 )
    return 0LL;
  v2 = *((_DWORD *)a1 + 72);
  if ( (v2 & 0x40000000) == 0 )
  {
    v3 = *((_QWORD *)a1 + 43);
    *((_DWORD *)a1 + 72) = v2 | 0x50000000;
    v4 = ValidateHmonitorNoRip(v3);
    UpdateWindowSpriteDPI((__int64)a1, v4);
    xxxSetWindowPosAndBand(a1, 0, 0, 0, 0, 0, 55, 0);
  }
  return 1LL;
}
