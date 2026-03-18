/*
 * XREFs of ?NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z @ 0x1C01F7594
 * Callers:
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F7A6C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F7C6C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 * Callees:
 *     <none>
 */

HWND *__fastcall NextPrevPhwnd(struct tagSwitchWndInfo *a1, HWND *a2, int a3)
{
  HWND *v3; // r9
  HWND *v4; // rdx

  v3 = (HWND *)*((_QWORD *)a1 + 3);
  if ( a3 )
  {
    v4 = a2 + 1;
    if ( v4 == v3 )
      return (HWND *)(*((_QWORD *)a1 + 2) + 32LL);
  }
  else if ( a2 == (HWND *)(*((_QWORD *)a1 + 2) + 32LL) )
  {
    return v3 - 1;
  }
  else
  {
    return a2 - 1;
  }
  return v4;
}
