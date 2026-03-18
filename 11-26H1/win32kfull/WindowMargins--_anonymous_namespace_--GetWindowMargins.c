/*
 * XREFs of WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x1401620BC
 * Callers:
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x14016111C (_anonymous_namespace_--xxxNormalizeRect.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x140161F20 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     ?OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z @ 0x140161F90 (-OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z.c)
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14016320C (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 * Callees:
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     WindowMargins::CWindowMarginProp::CalculateWindowMargins @ 0x1400A7100 (WindowMargins--CWindowMarginProp--CalculateWindowMargins.c)
 */

__int64 __fastcall WindowMargins::_anonymous_namespace_::GetWindowMargins(const struct tagWND *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 Prop; // r10
  __int64 v9; // rdx
  unsigned int v10; // ecx
  unsigned int WindowDpiLastNotify; // r9d
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  if ( !IsTopLevelWindow((__int64)a1) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v5, v4);
  Prop = GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 42276), 1u);
  if ( !Prop )
    return 0LL;
  v9 = *((_QWORD *)a1 + 5);
  v10 = *(_DWORD *)(v9 + 288);
  WindowDpiLastNotify = (v10 >> 8) & 0x1FF;
  if ( !WindowDpiLastNotify )
  {
    if ( (*(_BYTE *)(v9 + 233) & 4) == 0 )
      goto LABEL_11;
    if ( a2 )
    {
      WindowDpiLastNotify = a2;
      return *WindowMargins::CWindowMarginProp::CalculateWindowMargins(Prop, &v14, a1, WindowDpiLastNotify, 0);
    }
    v12 = v10 & 0xF;
    if ( v12 != 3 )
    {
      if ( (*(_DWORD *)(v9 + 232) & 0x400) != 0 )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
        return *WindowMargins::CWindowMarginProp::CalculateWindowMargins(Prop, &v14, a1, WindowDpiLastNotify, 0);
      }
      if ( !v12 )
      {
        v13 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 488LL);
        if ( v13 )
        {
          if ( (*(_DWORD *)(**(_QWORD **)(v13 + 8) + 64LL) & 1) != 0 )
          {
            WindowDpiLastNotify = 96;
            return *WindowMargins::CWindowMarginProp::CalculateWindowMargins(Prop, &v14, a1, WindowDpiLastNotify, 0);
          }
        }
      }
LABEL_11:
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) + 272LL);
    }
  }
  return *WindowMargins::CWindowMarginProp::CalculateWindowMargins(Prop, &v14, a1, WindowDpiLastNotify, 0);
}
