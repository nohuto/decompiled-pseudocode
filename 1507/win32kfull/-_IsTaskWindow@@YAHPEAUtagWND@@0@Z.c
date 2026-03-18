/*
 * XREFs of ?_IsTaskWindow@@YAHPEAUtagWND@@0@Z @ 0x1C01FFA14
 * Callers:
 *     ?_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z @ 0x1C01FFA88 (-_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     IsWindowUnderActiveLockScreen @ 0x1C0045D40 (IsWindowUnderActiveLockScreen.c)
 *     GetWindowCloakState @ 0x1C0065D00 (GetWindowCloakState.c)
 */

__int64 __fastcall _IsTaskWindow(struct tagWND *a1, struct tagWND *a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v6; // rax

  v3 = 0;
  if ( ((*((_BYTE *)a1 + 50) & 4) != 0 || *((char *)a1 + 48) >= 0 && (*((_BYTE *)a1 + 51) & 8) == 0)
    && ((*((_BYTE *)a1 + 55) & 0x10) != 0 && !(unsigned int)GetWindowCloakState((__int64)a1) || a1 == a2) )
  {
    v6 = *((_QWORD *)a1 + 30);
    if ( (!v6 || (*(_BYTE *)(v6 + 55) & 8) == 0)
      && !(unsigned int)IsWindowUnderActiveLockScreen((__int64)a1, (__int64)a2, a3) )
    {
      return 1;
    }
  }
  return v3;
}
