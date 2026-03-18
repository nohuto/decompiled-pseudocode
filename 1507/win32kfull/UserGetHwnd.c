/*
 * XREFs of UserGetHwnd @ 0x1C01E7FC8
 * Callers:
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C0269018 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     ?vConstructor@DEVLOCKOBJ_WNDOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0269F48 (-vConstructor@DEVLOCKOBJ_WNDOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     NtGdiSetPixelFormat @ 0x1C02B4C90 (NtGdiSetPixelFormat.c)
 * Callees:
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     ?PwndFromHDC@@YAPEAUtagWND@@QEAUHDC__@@@Z @ 0x1C00E39F4 (-PwndFromHDC@@YAPEAUtagWND@@QEAUHDC__@@@Z.c)
 */

__int64 __fastcall UserGetHwnd(__int64 *a1, _QWORD *a2, __int64 *a3)
{
  unsigned int v6; // edi
  struct tagWND *v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // r8d

  v6 = 0;
  GreLockVisRgnShared(*gpDispInfo);
  v7 = PwndFromHDC(a1);
  if ( v7 )
  {
    v8 = (unsigned __int16)atomWndObj;
    *a2 = *(_QWORD *)v7;
    *a3 = GetProp((__int64)v7, v8, 1LL);
    v6 = v9;
  }
  GreUnlockVisRgn(*gpDispInfo);
  return v6;
}
