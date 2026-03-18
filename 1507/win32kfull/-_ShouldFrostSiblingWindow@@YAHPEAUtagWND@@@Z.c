/*
 * XREFs of ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F6DE8
 * Callers:
 *     xxxRegisterSiblingFrostWindow @ 0x1C01F70C0 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0056CC4 (IsWindowBeingDestroyed.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 */

__int64 __fastcall _ShouldFrostSiblingWindow(struct tagWND *a1)
{
  __int64 v1; // rsi
  unsigned int v2; // ebx
  __int64 v4; // rcx
  unsigned __int16 v5; // cx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r10
  __int64 v9; // r11
  int v10; // eax
  __int64 v11; // rax

  v1 = *((_QWORD *)a1 + 2);
  v2 = 0;
  if ( (*((_BYTE *)a1 + 54) & 0xC0) == 0xC0
    && !(unsigned int)IsWindowBeingDestroyed((__int64)a1)
    && (*(_BYTE *)(v4 + 55) & 0x10) != 0
    && *(_QWORD *)(v1 + 416) == grpdeskRitInput )
  {
    v5 = *(_WORD *)(gpsi + 884LL);
    if ( *(_WORD *)(*((_QWORD *)a1 + 19) + 8LL) != v5
      && !GetProp((__int64)a1, v5, 1LL)
      && !GetProp(v6, *(unsigned __int16 *)(v8 + 1362), v7)
      && (*(_DWORD *)(v9 + 12) & 0x8000000) == 0
      && *(_QWORD *)v9 != gpepCSRSS
      && !(unsigned int)IsProcessDwm(*(_QWORD *)v9) )
    {
      v10 = 0;
      if ( *(_DWORD *)(v1 + 560) <= 0x9900u )
        v10 = *(_DWORD *)(v1 + 576);
      if ( (v10 & 0x80000) == 0 && a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
      {
        v11 = *(_QWORD *)(v1 + 424);
        if ( a1 != *(struct tagWND **)(v11 + 160) && a1 != *(struct tagWND **)(v11 + 176) )
          return 1;
      }
    }
  }
  return v2;
}
