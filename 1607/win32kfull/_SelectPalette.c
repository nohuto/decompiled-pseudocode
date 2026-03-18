/*
 * XREFs of _SelectPalette @ 0x1C01045F0
 * Callers:
 *     NtUserSelectPalette @ 0x1C01045A0 (NtUserSelectPalette.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C01506E0 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01E5E1C (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     GetNonChildAncestor @ 0x1C00A8D2C (GetNonChildAncestor.c)
 *     GetThreadDesktopWindow @ 0x1C01066F8 (GetThreadDesktopWindow.c)
 *     _IsChild @ 0x1C012ED7C (_IsChild.c)
 *     WindowFromCacheDC @ 0x1C01DED40 (WindowFromCacheDC.c)
 *     ?IsTopmostRealApp@@YAHPEAUtagWND@@@Z @ 0x1C020E260 (-IsTopmostRealApp@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall SelectPalette(__int64 a1, __int64 a2, int a3)
{
  BOOL v5; // esi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 NonChildAncestor; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx

  v5 = 1;
  if ( !a3 && (*(_DWORD *)(gpsi + 8684LL) & 1) != 0 && a2 != GreGetStockObject(15LL) )
  {
    v7 = WindowFromCacheDC(a1);
    v8 = v7;
    if ( v7 )
    {
      NonChildAncestor = GetNonChildAncestor(v7);
      if ( (*(_BYTE *)(NonChildAncestor + 42) & 0x20) == 0 )
      {
        if ( NonChildAncestor != GetThreadDesktopWindow(0LL) )
          *(_DWORD *)(*(_QWORD *)(NonChildAncestor + 16) + 440LL) |= 0x800u;
        SetOrClrWF(1, (_DWORD *)NonChildAncestor, 0x220u, 1);
      }
      v10 = gpqForeground;
      if ( gpqForeground )
        v10 = *(_QWORD *)(gpqForeground + 88LL);
      v11 = *(_QWORD *)(*(_QWORD *)(NonChildAncestor + 24) + 8LL);
      if ( NonChildAncestor != *(_QWORD *)(v11 + 16)
        && NonChildAncestor != *(_QWORD *)(v11 + 160)
        && v10
        && (v10 == v8 || (unsigned int)IsChild(v10, v8) || (unsigned int)IsTopmostRealApp((struct tagWND *)v8)) )
      {
        v5 = *(char *)(v8 + 48) < 0;
      }
    }
  }
  return GreSelectPalette(a1, a2, v5);
}
