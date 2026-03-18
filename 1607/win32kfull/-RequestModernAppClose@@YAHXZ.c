/*
 * XREFs of ?RequestModernAppClose@@YAHXZ @ 0x1C01E0A50
 * Callers:
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01E09E0 (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0008F08 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C000DAB8 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0075DF0 (_GetTopLevelWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C00A4BF0 (PostIAMShellHookMessageEx.c)
 */

__int64 RequestModernAppClose(void)
{
  __int64 v0; // rbx
  struct tagWND *v1; // rsi
  _QWORD *v2; // rdi
  struct tagWND *CompositionInputWindowUIOwner; // rax
  struct tagWND *TopLevelHost; // rax
  __int64 TopLevelWindow; // rax
  __int64 v6; // rcx

  v0 = 0LL;
  if ( !gpqForeground )
    return 0LL;
  v1 = *(struct tagWND **)(gpqForeground + 88LL);
  if ( !v1 )
    return 0LL;
  v2 = 0LL;
  CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v1);
  if ( CompositionInputWindowUIOwner )
    v1 = CompositionInputWindowUIOwner;
  TopLevelHost = CoreWindowProp::GetTopLevelHost(v1);
  if ( TopLevelHost )
    v1 = TopLevelHost;
  TopLevelWindow = GetTopLevelWindow((__int64)v1);
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
  PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 0x20u, *v2);
  v6 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 320LL);
  if ( v6 )
    v0 = *(_QWORD *)(v6 + 16);
  SetLastInputWoken(v0, 0LL);
  return 1LL;
}
