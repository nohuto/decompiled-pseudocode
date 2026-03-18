/*
 * XREFs of ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x180075580
 * Callers:
 *     ?NotifyInvalidDisplaySet@CDesktopRenderTarget@@UEAAJXZ @ 0x180075250 (-NotifyInvalidDisplaySet@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18007575C (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180075A2C (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x1800B63F0 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x1801068E0 (--1CDesktopRenderTarget@@EEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x180075610 (-RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x18007AF38 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x18010751C (-Remove@-$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 */

void __fastcall CDesktopRenderTarget::ReleaseRenderTargets(CDesktopRenderTarget *this)
{
  __int64 i; // rbp
  int v3; // eax
  __int64 j; // rbx
  CMILRefCountBase *v5; // rbx
  CMILRefCountBase *v6; // [rsp+40h] [rbp+8h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 40); i = (unsigned int)(i + 1) )
  {
    v5 = *(CMILRefCountBase **)(*(_QWORD *)(*((_QWORD *)this + 17) + 8 * i) + 56LL);
    v6 = v5;
    if ( (unsigned int)DynArray<CBaseExpression *,1>::Remove((char *)this + 184, &v6) )
      CMILRefCountBase::Release(v5);
    CRenderTargetManager::RemoveRenderTarget(
      *(CRenderTargetManager **)(*((_QWORD *)this + 2) + 32LL),
      *(struct CRenderTarget **)(*((_QWORD *)this + 17) + 8 * i));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 17) + 8 * i) + 16LL))(*(_QWORD *)(*((_QWORD *)this + 17) + 8 * i));
  }
  *((_DWORD *)this + 52) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 184, 8LL);
  *((_DWORD *)this + 40) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 136, 8LL);
  v3 = *((_DWORD *)this + 28) - 1;
  for ( j = v3;
        j >= 0;
        CDesktopRenderTarget::RemoveRenderTarget(this, *(struct CHwndRenderTarget **)(*((_QWORD *)this + 11) + 8 * j--)) )
  {
    ;
  }
  *((_BYTE *)this + 232) = 0;
}
