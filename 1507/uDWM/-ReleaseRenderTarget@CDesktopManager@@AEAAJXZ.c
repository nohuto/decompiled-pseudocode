/*
 * XREFs of ?ReleaseRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18001B894
 * Callers:
 *     ?CreateRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18001C3FC (-CreateRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?ReleaseDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18006D10C (-ReleaseDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800282D0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CDesktopManager::ReleaseRenderTarget(CDesktopManager *this)
{
  __int64 i; // rsi
  __int64 v3; // r14
  __int64 v4; // rsi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 28); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 11) + 8 * i);
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      *(_QWORD *)(*((_QWORD *)this + 11) + 8 * i) = 0LL;
    }
  }
  *((_DWORD *)this + 28) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 88, 8LL);
  v4 = *((_QWORD *)this + 10);
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 10));
    *((_QWORD *)this + 10) = 0LL;
  }
  return 0LL;
}
