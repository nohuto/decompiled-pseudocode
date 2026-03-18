/*
 * XREFs of UserSetWindowedSwapChain @ 0x1C0145438
 * Callers:
 *     UserSetWindowedSwapChainApiExt @ 0x1C0145430 (UserSetWindowedSwapChainApiExt.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     IsWindowBeingDestroyed @ 0x1C007E090 (IsWindowBeingDestroyed.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C0080330 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?CreateSwapChainProp@CSwapChainProp@@SAHPEAUCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C01453BC (-CreateSwapChainProp@CSwapChainProp@@SAHPEAUCompositionSurfaceObject@@PEAPEAV1@@Z.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C0145554 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?Init@CSwapChainProp@@QEAAHPEAUCompositionSurfaceObject@@@Z @ 0x1C01455D0 (-Init@CSwapChainProp@@QEAAHPEAUCompositionSurfaceObject@@@Z.c)
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C0145630 (-ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UserSetWindowedSwapChain(__int64 a1, int a2, struct CompositionSurfaceObject *a3)
{
  unsigned int v5; // edi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagWND *v10; // rsi
  int v11; // r14d
  __int64 Prop; // rax
  unsigned int v13; // r8d
  CWindowProp *v14; // rbx
  CWindowProp *v16; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0;
  EnterCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  v10 = (struct tagWND *)v7;
  if ( !v7 || (((*(_WORD *)(v7 + 66) & 0x3FFF) - 669) & 0xFFFFFFFD) == 0 || (unsigned int)IsWindowBeingDestroyed(v7) )
    goto LABEL_11;
  v11 = IsWindowDesktopComposed(v9);
  Prop = GetProp((__int64)v10, CSwapChainProp::s_atom, 1LL);
  v16 = (CWindowProp *)Prop;
  v14 = (CWindowProp *)Prop;
  if ( !Prop )
  {
    if ( !(unsigned int)CSwapChainProp::CreateSwapChainProp(a3, &v16) )
      goto LABEL_11;
    v14 = v16;
    v5 = CWindowProp::SetProp(v16, (__int64)v10);
    if ( !v5 )
    {
      (**(void (__fastcall ***)(CWindowProp *))v14)(v14);
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  if ( *(struct CompositionSurfaceObject **)(Prop + 16) == a3 )
  {
    *(_DWORD *)(Prop + 24) = 0;
    v5 = v13;
    goto LABEL_11;
  }
  if ( a2 || *(_DWORD *)(Prop + 24) )
  {
    CSwapChainProp::ClearCompositionSurfaceObj((CSwapChainProp *)Prop);
    v5 = CSwapChainProp::Init(v14, a3);
    if ( v5 )
    {
LABEL_9:
      if ( v11 )
        v5 = CSwapChainProp::NotifyDwm(v14, v10);
    }
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v9, v8);
  return v5;
}
