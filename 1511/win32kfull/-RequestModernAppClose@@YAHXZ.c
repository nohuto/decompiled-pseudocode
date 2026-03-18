/*
 * XREFs of ?RequestModernAppClose@@YAHXZ @ 0x1C01EA1D0
 * Callers:
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01EA160 (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0006A84 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _GetTopLevelWindow @ 0x1C004FBD0 (_GetTopLevelWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C00783D0 (PostIAMShellHookMessageEx.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C008F830 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C022651C (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 */

__int64 RequestModernAppClose(void)
{
  __int64 v0; // rbx
  struct tagWND *v1; // r11
  __int64 *v2; // rdi
  struct tagWND *v3; // r11
  struct tagWND *Host; // rax
  __int64 TopLevelWindow; // r11
  __int64 v6; // rcx

  v0 = 0LL;
  if ( !gpqForeground )
    return 0LL;
  v1 = *(struct tagWND **)(gpqForeground + 80LL);
  if ( !v1 )
    return 0LL;
  v2 = 0LL;
  if ( (unsigned int)CoreWindowProp::IsComponent(v1) )
    Host = CoreWindowProp::GetHost(v3);
  else
    Host = GetCompositionInputWindowUIOwner(v3);
  if ( Host )
    TopLevelWindow = GetTopLevelWindow((__int64)Host);
  if ( !TopLevelWindow )
    return 0LL;
  do
  {
    if ( *(char *)(TopLevelWindow + 290) < 0 )
      v2 = (__int64 *)TopLevelWindow;
    TopLevelWindow = *(_QWORD *)(TopLevelWindow + 104);
  }
  while ( TopLevelWindow );
  if ( !v2 )
    return 0LL;
  PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 0x20u, *v2);
  v6 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 320LL);
  if ( v6 )
    v0 = *(_QWORD *)(v6 + 16);
  SetLastInputWoken(v0, 0LL);
  return 1LL;
}
