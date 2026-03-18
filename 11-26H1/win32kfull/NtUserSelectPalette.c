/*
 * XREFs of NtUserSelectPalette @ 0x1401AEB50
 * Callers:
 *     <none>
 * Callees:
 *     GetThreadDesktopWindow @ 0x140009BD0 (GetThreadDesktopWindow.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     GetNonChildAncestor @ 0x14017A1F0 (GetNonChildAncestor.c)
 *     _IsChild @ 0x1401882D0 (_IsChild.c)
 *     WindowFromCacheDC @ 0x1402A4A00 (WindowFromCacheDC.c)
 *     ?IsTopmostRealApp@@YAHPEAUtagWND@@@Z @ 0x1402D8748 (-IsTopmostRealApp@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall NtUserSelectPalette(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // esi
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v12; // rax
  struct tagWND *v13; // rdi
  __int64 v14; // rdx
  struct tagWND *NonChildAncestor; // rbx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx

  EnterCrit(0LL, 0LL);
  v8 = 1;
  if ( !a3
    && (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v7, v6) + 19904) + 7004LL) & 1) != 0
    && a2 != GreGetStockObject(15LL) )
  {
    v12 = WindowFromCacheDC(a1);
    v13 = (struct tagWND *)v12;
    if ( v12 )
    {
      NonChildAncestor = (struct tagWND *)GetNonChildAncestor(v12);
      v16 = *((_QWORD *)NonChildAncestor + 5);
      if ( (*(_BYTE *)(v16 + 18) & 0x20) == 0 )
      {
        if ( NonChildAncestor != (struct tagWND *)GetThreadDesktopWindow(0LL) )
          _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)NonChildAncestor + 2) + 520LL), 0x800u);
        SetOrClrWF(1, NonChildAncestor, 0x220u, 1);
      }
      if ( *(_QWORD *)(W32GetUserSessionState(v16, v14) + 18928) )
        v19 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v18, v17) + 18928) + 128LL);
      else
        v19 = 0LL;
      v20 = *(_QWORD *)(*((_QWORD *)NonChildAncestor + 3) + 8LL);
      if ( NonChildAncestor != *(struct tagWND **)(v20 + 24)
        && NonChildAncestor != *(struct tagWND **)(v20 + 168)
        && v19
        && ((struct tagWND *)v19 == v13
         || (unsigned int)IsChild(v19, (__int64)v13)
         || (unsigned int)IsTopmostRealApp(v13))
        && *(char *)(*((_QWORD *)v13 + 5) + 24LL) >= 0 )
      {
        v8 = 0;
      }
    }
  }
  v9 = GreSelectPalette(a1, a2, v8);
  UserSessionSwitchLeaveCrit(v10);
  return v9;
}
