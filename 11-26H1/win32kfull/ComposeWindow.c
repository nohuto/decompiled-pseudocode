/*
 * XREFs of ComposeWindow @ 0x14012CB68
 * Callers:
 *     UpdateWindowMonitor @ 0x14004BA40 (UpdateWindowMonitor.c)
 *     zzzDecomposeDesktop @ 0x1400F7F10 (zzzDecomposeDesktop.c)
 *     ?ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z @ 0x14012CD74 (-ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z.c)
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 *     ?DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z @ 0x1401FE798 (-DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z.c)
 *     zzzComposeDesktop @ 0x140201D04 (zzzComposeDesktop.c)
 * Callees:
 *     _SetLayeredWindowAttributes @ 0x140012004 (_SetLayeredWindowAttributes.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     xxxInternalInvalidate @ 0x14002CCF0 (xxxInternalInvalidate.c)
 *     UnsetLayeredWindow @ 0x1400A2F94 (UnsetLayeredWindow.c)
 *     UpdateWindowSpriteMonitor @ 0x1400A6748 (UpdateWindowSpriteMonitor.c)
 *     DwmAsyncChildStyleChange @ 0x14012C0D4 (DwmAsyncChildStyleChange.c)
 *     IsDesktopWindow @ 0x14012E9F0 (IsDesktopWindow.c)
 *     xxxSetLayeredWindow @ 0x14014CE10 (xxxSetLayeredWindow.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 __fastcall ComposeWindow(struct tagWND *a1, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  char v7; // dl
  int v8; // esi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  int v15; // ebx
  void *v16; // rax
  __int64 v17; // rax
  _BYTE v18[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v19; // [rsp+28h] [rbp-10h]

  if ( (a2 & 1) != 0 )
  {
    if ( (unsigned int)IsDesktopWindow(a1) && *((_QWORD *)a1 + 3) != *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19176) )
      return 0;
    v6 = *((_QWORD *)a1 + 5);
    v7 = *(_BYTE *)(v6 + 26) & 8;
    if ( (((a2 & 8) == 0) & (unsigned __int8)~(*(_BYTE *)(v6 + 31) >> 4)) != 0 )
    {
      return v7 == 0 ? 0x3E0001u : 0;
    }
    else
    {
      if ( v7 )
      {
        v17 = ValidateHmonitorNoRip(*(_QWORD *)(v6 + 256));
        UpdateWindowSpriteMonitor((__int64 *)a1, v17);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 0x20) == 0 )
        {
          AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v18);
          xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v18);
        }
        return 0;
      }
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v18);
      v10 = xxxSetLayeredWindow(a1);
      v8 = v10;
      if ( v18[0] )
        --*(_DWORD *)(v19 + 28);
      if ( v10 >= 0 )
      {
        v8 = SetLayeredWindowAttributes(a1, 0, 255, 4 * (a2 & 4 | 1u));
        if ( v8 < 0 )
        {
          UnsetLayeredWindow((ULONG_PTR)a1, 3);
        }
        else
        {
          *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 2u;
          v13 = *((_QWORD *)a1 + 5);
          v14 = *(_QWORD *)a1;
          v15 = *(_DWORD *)(v13 + 232);
          v16 = (void *)ReferenceDwmApiPort(v12, v11);
          DwmAsyncChildStyleChange(v16, v14, 4026531840LL, v15);
        }
      }
    }
  }
  else
  {
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 2) != 0 )
      v8 = UnsetLayeredWindow((ULONG_PTR)a1, (a2 & 0x10 | 8u) >> 3);
    else
      v8 = 0;
    *((_DWORD *)a1 + 95) &= ~0x8000u;
  }
  return (unsigned int)v8;
}
