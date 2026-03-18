/*
 * XREFs of ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x1800495FC
 * Callers:
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180049850 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180049B1C (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?NotifyInvalidDisplaySet@CDesktopRenderTarget@@UEAAJXZ @ 0x18008DB90 (-NotifyInvalidDisplaySet@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x18008DBD0 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x1800EAEC0 (--1CDesktopRenderTarget@@EEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x18004967C (-RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x180049EC4 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CDesktopRenderTarget::ReleaseRenderTargets(CDesktopRenderTarget *this)
{
  __int64 i; // rbp
  int v3; // eax
  __int64 j; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 40); i = (unsigned int)(i + 1) )
  {
    CRenderTargetManager::RemoveRenderTarget(
      *(CRenderTargetManager **)(*((_QWORD *)this + 2) + 32LL),
      *(struct CRenderTarget **)(*((_QWORD *)this + 17) + 8 * i));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 17) + 8 * i) + 16LL))(*(_QWORD *)(*((_QWORD *)this + 17) + 8 * i));
  }
  *((_DWORD *)this + 40) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 17, 8u);
  v3 = *((_DWORD *)this + 28) - 1;
  for ( j = v3;
        j >= 0;
        CDesktopRenderTarget::RemoveRenderTarget(this, *(struct CHwndRenderTarget **)(*((_QWORD *)this + 11) + 8 * j--)) )
  {
    ;
  }
  *((_BYTE *)this + 184) = 0;
}
