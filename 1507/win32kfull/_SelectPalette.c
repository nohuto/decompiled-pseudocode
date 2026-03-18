/*
 * XREFs of _SelectPalette @ 0x1C00E0AA0
 * Callers:
 *     NtUserSelectPalette @ 0x1C00E0A50 (NtUserSelectPalette.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C01214B0 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01F0178 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     GetThreadDesktopWindow @ 0x1C007BD60 (GetThreadDesktopWindow.c)
 *     GetNonChildAncestor @ 0x1C0081140 (GetNonChildAncestor.c)
 *     _IsChild @ 0x1C0100A28 (_IsChild.c)
 *     WindowFromCacheDC @ 0x1C01E8054 (WindowFromCacheDC.c)
 *     ?IsTopmostRealApp@@YAHPEAUtagWND@@@Z @ 0x1C0215698 (-IsTopmostRealApp@@YAHPEAUtagWND@@@Z.c)
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
  if ( !a3 && (*(_DWORD *)(gpsi + 7292LL) & 1) != 0 && a2 != GreGetStockObject(15LL) )
  {
    v7 = WindowFromCacheDC(a1);
    v8 = v7;
    if ( v7 )
    {
      NonChildAncestor = GetNonChildAncestor(v7);
      if ( (*(_BYTE *)(NonChildAncestor + 42) & 0x20) == 0 )
      {
        if ( NonChildAncestor != GetThreadDesktopWindow(0LL) )
          *(_DWORD *)(*(_QWORD *)(NonChildAncestor + 16) + 448LL) |= 0x800u;
        SetOrClrWF(1, (_DWORD *)NonChildAncestor, 0x220u, 1);
      }
      v10 = gpqForeground;
      if ( gpqForeground )
        v10 = *(_QWORD *)(gpqForeground + 80LL);
      v11 = *(_QWORD *)(*(_QWORD *)(NonChildAncestor + 24) + 8LL);
      if ( NonChildAncestor != *(_QWORD *)(v11 + 16)
        && NonChildAncestor != *(_QWORD *)(v11 + 160)
        && v10
        && (v10 == v8 || (unsigned int)IsChild(v10) || (unsigned int)IsTopmostRealApp((struct tagWND *)v8)) )
      {
        v5 = *(char *)(v8 + 48) < 0;
      }
    }
  }
  return GreSelectPalette(a1, a2, v5);
}
