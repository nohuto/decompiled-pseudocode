/*
 * XREFs of ?_IsTaskWindow@@YAHPEAUtagWND@@0@Z @ 0x1C02000BC
 * Callers:
 *     ?_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z @ 0x1C0200130 (-_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     GetWindowCloakState @ 0x1C0075918 (GetWindowCloakState.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C0090C38 (IsWindowUnderActiveLockScreen.c)
 */

__int64 __fastcall _IsTaskWindow(struct tagWND *a1, struct tagWND *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rax

  v2 = 0;
  if ( ((*((_BYTE *)a1 + 50) & 4) != 0 || *((char *)a1 + 48) >= 0 && (*((_BYTE *)a1 + 51) & 8) == 0)
    && ((*((_BYTE *)a1 + 55) & 0x10) != 0 && !(unsigned int)GetWindowCloakState((__int64)a1) || a1 == a2) )
  {
    v5 = *((_QWORD *)a1 + 30);
    if ( (!v5 || (*(_BYTE *)(v5 + 55) & 8) == 0) && !(unsigned int)IsWindowUnderActiveLockScreen((__int64)a1) )
      return 1;
  }
  return v2;
}
