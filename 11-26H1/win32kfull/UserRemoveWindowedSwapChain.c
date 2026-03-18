/*
 * XREFs of UserRemoveWindowedSwapChain @ 0x1402249C0
 * Callers:
 *     <none>
 * Callees:
 *     InternalRemoveProp @ 0x14000FD98 (InternalRemoveProp.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     IsWindowBeingDestroyed @ 0x14014D20C (IsWindowBeingDestroyed.c)
 *     RemoveVisRgnTracker @ 0x1401D2208 (RemoveVisRgnTracker.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x14020272C (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x140202888 (-ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UserRemoveWindowedSwapChain(__int64 a1, int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagWND *v8; // rbx
  __int64 v9; // rdx
  __int64 Prop; // rax
  CSwapChainProp *v12; // rax
  CSwapChainProp *v13; // rsi

  v4 = 0;
  EnterCrit(1LL, 0LL);
  v5 = ValidateHwnd(a1);
  v8 = (struct tagWND *)v5;
  if ( v5 )
  {
    v7 = *(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFF;
    if ( (_DWORD)v7 != 669 )
    {
      v9 = *(unsigned __int16 *)(W32GetUserSessionState(v7, v6) + 42286);
      if ( a2 )
      {
        Prop = GetProp((__int64)v8, v9, 1u);
        if ( Prop )
          *(_DWORD *)(Prop + 32) = 1;
      }
      else
      {
        v12 = (CSwapChainProp *)InternalRemoveProp((__int64)v8, v9, 1u);
        v13 = v12;
        if ( v12 )
        {
          *((_QWORD *)v12 + 2) = 0LL;
          CSwapChainProp::ClearCompositionSurfaceObj(v12);
          if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v8) )
            CSwapChainProp::NotifyDwm(v13, v8);
          (**(void (__fastcall ***)(CSwapChainProp *))v13)(v13);
          RemoveVisRgnTracker((__int64)v8, 2u);
        }
      }
      v4 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v7);
  return v4;
}
