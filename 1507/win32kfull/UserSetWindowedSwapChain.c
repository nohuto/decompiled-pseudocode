/*
 * XREFs of UserSetWindowedSwapChain @ 0x1C011AAE8
 * Callers:
 *     UserSetWindowedSwapChainApiExt @ 0x1C011AAE0 (UserSetWindowedSwapChainApiExt.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0056CC4 (IsWindowBeingDestroyed.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00E9EA0 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?CreateSwapChainProp@CSwapChainProp@@SAHPEAUCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C011AA6C (-CreateSwapChainProp@CSwapChainProp@@SAHPEAUCompositionSurfaceObject@@PEAPEAV1@@Z.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C011ABEC (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?Init@CSwapChainProp@@QEAAHPEAUCompositionSurfaceObject@@@Z @ 0x1C011AC68 (-Init@CSwapChainProp@@QEAAHPEAUCompositionSurfaceObject@@@Z.c)
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C011ACD0 (-ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UserSetWindowedSwapChain(__int64 a1, struct CompositionSurfaceObject *a2)
{
  unsigned int v3; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagWND *v8; // rsi
  int v9; // r14d
  __int64 Prop; // rax
  unsigned int v11; // r8d
  CWindowProp *v12; // rbx
  CWindowProp *v14; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  EnterCrit(1LL);
  v5 = ValidateHwnd(a1);
  v8 = (struct tagWND *)v5;
  if ( !v5 || (((*(_WORD *)(v5 + 66) & 0x3FFF) - 669) & 0xFFFFFFFD) == 0 || (unsigned int)IsWindowBeingDestroyed(v5) )
    goto LABEL_10;
  v9 = IsWindowDesktopComposed(v7);
  Prop = GetProp((__int64)v8, CSwapChainProp::s_atom, 1LL);
  v14 = (CWindowProp *)Prop;
  v12 = (CWindowProp *)Prop;
  if ( !Prop )
  {
    if ( !(unsigned int)CSwapChainProp::CreateSwapChainProp(a2, &v14) )
      goto LABEL_10;
    v12 = v14;
    v3 = CWindowProp::SetProp(v14, (__int64)v8);
    if ( !v3 )
    {
      (**(void (__fastcall ***)(CWindowProp *))v12)(v12);
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  if ( *(struct CompositionSurfaceObject **)(Prop + 16) == a2 )
  {
    *(_DWORD *)(Prop + 24) = 0;
    v3 = v11;
    goto LABEL_10;
  }
  if ( *(_DWORD *)(Prop + 24) )
  {
    CSwapChainProp::ClearCompositionSurfaceObj((CSwapChainProp *)Prop);
    v3 = CSwapChainProp::Init(v12, a2);
    if ( v3 )
    {
LABEL_8:
      if ( v9 )
        v3 = CSwapChainProp::NotifyDwm(v12, v8);
    }
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v7, v6);
  return v3;
}
