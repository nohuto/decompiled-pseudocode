/*
 * XREFs of _SelectPalette @ 0x1401D49D0
 * Callers:
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x14025E63C (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1402CE7E8 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     GetThreadDesktopWindow @ 0x140009BD0 (GetThreadDesktopWindow.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     GetNonChildAncestor @ 0x14017A1F0 (GetNonChildAncestor.c)
 *     _IsChild @ 0x1401882D0 (_IsChild.c)
 *     WindowFromCacheDC @ 0x1402A4A00 (WindowFromCacheDC.c)
 *     ?IsTopmostRealApp@@YAHPEAUtagWND@@@Z @ 0x1402D8748 (-IsTopmostRealApp@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall SelectPalette(__int64 a1, __int64 a2, int a3)
{
  unsigned int v5; // edi
  __int64 v7; // rax
  struct tagWND *v8; // rsi
  __int64 v9; // rdx
  struct tagWND *NonChildAncestor; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx

  v5 = 1;
  if ( !a3
    && (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904) + 7004LL) & 1) != 0
    && a2 != GreGetStockObject(15LL) )
  {
    v7 = WindowFromCacheDC(a1);
    v8 = (struct tagWND *)v7;
    if ( v7 )
    {
      NonChildAncestor = (struct tagWND *)GetNonChildAncestor(v7);
      v11 = *((_QWORD *)NonChildAncestor + 5);
      if ( (*(_BYTE *)(v11 + 18) & 0x20) == 0 )
      {
        if ( NonChildAncestor != (struct tagWND *)GetThreadDesktopWindow(0LL) )
          _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)NonChildAncestor + 2) + 520LL), 0x800u);
        SetOrClrWF(1, NonChildAncestor, 0x220u, 1);
      }
      if ( *(_QWORD *)(W32GetUserSessionState(v11, v9) + 18928) )
        v14 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v13, v12) + 18928) + 128LL);
      else
        v14 = 0LL;
      v15 = *(_QWORD *)(*((_QWORD *)NonChildAncestor + 3) + 8LL);
      if ( NonChildAncestor != *(struct tagWND **)(v15 + 24)
        && NonChildAncestor != *(struct tagWND **)(v15 + 168)
        && v14
        && ((struct tagWND *)v14 == v8 || (unsigned int)IsChild(v14, (__int64)v8) || (unsigned int)IsTopmostRealApp(v8))
        && *(char *)(*((_QWORD *)v8 + 5) + 24LL) >= 0 )
      {
        v5 = 0;
      }
    }
  }
  return GreSelectPalette(a1, a2, v5);
}
