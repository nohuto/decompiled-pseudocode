/*
 * XREFs of ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C0145554
 * Callers:
 *     zzzComposeDesktop @ 0x1C00D1AFC (zzzComposeDesktop.c)
 *     UserSetWindowedSwapChain @ 0x1C0145438 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x1C0149650 (UserRemoveWindowedSwapChain.c)
 * Callees:
 *     DwmAsyncDxBindSwapChain @ 0x1C0145664 (DwmAsyncDxBindSwapChain.c)
 */

__int64 __fastcall CSwapChainProp::NotifyDwm(CSwapChainProp *this, struct tagWND *const a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  CompositionObject *v7; // rcx
  void *v8; // rax
  void *v10; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a2) )
  {
    v7 = (CompositionObject *)*((_QWORD *)this + 2);
    v10 = 0LL;
    if ( !v7 || (int)CompositionObject::OpenDwmHandle(v7, &v10) >= 0 )
    {
      v8 = (void *)ReferenceDwmApiPort(v7, v4, v5, v6);
      LOBYTE(v3) = (int)DwmAsyncDxBindSwapChain(v8) >= 0;
    }
  }
  return v3;
}
