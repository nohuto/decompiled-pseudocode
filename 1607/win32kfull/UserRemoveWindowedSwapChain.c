/*
 * XREFs of UserRemoveWindowedSwapChain @ 0x1C014E400
 * Callers:
 *     <none>
 * Callees:
 *     InternalRemoveProp @ 0x1C0054080 (InternalRemoveProp.c)
 *     IsWindowBeingDestroyed @ 0x1C0065CC0 (IsWindowBeingDestroyed.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C014B664 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C014B740 (-ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UserRemoveWindowedSwapChain(__int64 a1, int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagWND *v8; // rsi
  __int64 Prop; // rax
  CSwapChainProp *v11; // rax
  CSwapChainProp *v12; // rbx

  v4 = 0;
  EnterCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  v8 = (struct tagWND *)v5;
  if ( v5 && (*(_WORD *)(v5 + 66) & 0x3FFF) != 0x29D )
  {
    if ( a2 )
    {
      Prop = GetProp(v5, CSwapChainProp::s_atom, 1LL);
      if ( Prop )
        *(_DWORD *)(Prop + 24) = 1;
    }
    else
    {
      v11 = (CSwapChainProp *)InternalRemoveProp();
      v12 = v11;
      if ( v11 )
      {
        *((_QWORD *)v11 + 1) = 0LL;
        CSwapChainProp::ClearCompositionSurfaceObj(v11);
        if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v8) )
          CSwapChainProp::NotifyDwm(v12, v8);
        (**(void (__fastcall ***)(CSwapChainProp *))v12)(v12);
      }
    }
    v4 = 1;
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return v4;
}
