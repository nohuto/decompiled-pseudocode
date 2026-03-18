/*
 * XREFs of ?RequestModernAppClose@@YAHXZ @ 0x1C0004690
 * Callers:
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C000462C (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0004758 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0062200 (_GetTopLevelWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C007AFD0 (PostIAMShellHookMessageEx.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0080E4C (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C022615C (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 */

__int64 RequestModernAppClose(void)
{
  __int64 v0; // rbx
  struct tagWND *v1; // rcx
  _QWORD *v2; // rdi
  struct tagWND *v3; // rcx
  struct tagWND *Host; // rax
  __int64 TopLevelWindow; // rcx
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
    TopLevelWindow = GetTopLevelWindow(Host);
  if ( !TopLevelWindow )
    return 0LL;
  do
  {
    if ( *(char *)(TopLevelWindow + 290) < 0 )
      v2 = (_QWORD *)TopLevelWindow;
    TopLevelWindow = *(_QWORD *)(TopLevelWindow + 104);
  }
  while ( TopLevelWindow );
  if ( !v2 )
    return 0LL;
  PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 416LL), 32LL, *v2);
  v6 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 312LL);
  if ( v6 )
    v0 = *(_QWORD *)(v6 + 16);
  SetLastInputWoken(v0, 0LL);
  return 1LL;
}
