/*
 * XREFs of ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01EE434
 * Callers:
 *     xxxRegisterSiblingFrostWindow @ 0x1C01EE750 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0065CC0 (IsWindowBeingDestroyed.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 */

__int64 __fastcall _ShouldFrostSiblingWindow(struct tagWND *a1)
{
  __int64 v1; // rsi
  unsigned int v2; // ebx
  __int64 v4; // rcx
  unsigned __int16 v5; // cx
  __int64 v6; // r8
  __int64 v7; // r10
  __int64 v8; // r11
  int v9; // eax
  __int64 v10; // rax

  v1 = *((_QWORD *)a1 + 2);
  v2 = 0;
  if ( (*((_BYTE *)a1 + 54) & 0xC0) == 0xC0
    && !(unsigned int)IsWindowBeingDestroyed((__int64)a1)
    && (*(_BYTE *)(v4 + 55) & 0x10) != 0
    && *(_QWORD *)(v1 + 408) == grpdeskRitInput )
  {
    v5 = *(_WORD *)(gpsi + 884LL);
    if ( *(_WORD *)(*((_QWORD *)a1 + 19) + 8LL) != v5
      && !GetProp((__int64)a1, v5, 1LL)
      && !GetProp((__int64)a1, *(unsigned __int16 *)(v7 + 1362), v6)
      && (*(_DWORD *)(v8 + 12) & 0x8000000) == 0
      && *(_QWORD *)v8 != gpepCSRSS
      && !(unsigned int)IsProcessDwm(*(_QWORD *)v8) )
    {
      v9 = 0;
      if ( *(_DWORD *)(v1 + 552) <= 0x9900u )
        v9 = *(_DWORD *)(v1 + 568);
      if ( (v9 & 0x80000) == 0 && a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
      {
        v10 = *(_QWORD *)(v1 + 416);
        if ( a1 != *(struct tagWND **)(v10 + 160) && a1 != *(struct tagWND **)(v10 + 176) )
          return 1;
      }
    }
  }
  return v2;
}
