/*
 * XREFs of ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x180076C20
 * Callers:
 *     ?NotifyInvalidDisplaySet@CDesktopRenderTarget@@UEAAJXZ @ 0x180076760 (-NotifyInvalidDisplaySet@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x180076E7C (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180077178 (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x18011CD64 (--1CDesktopRenderTarget@@EEAA@XZ.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18011D3C8 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x18011E000 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x180072E9C (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x180076D08 (-RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCCursorVisual@@$0A@@@QEAAJI@Z @ 0x1800B70B0 (-RemoveAt@-$DynArray@PEAVCCursorVisual@@$0A@@@QEAAJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x180137900 (-Remove@-$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 */

void __fastcall CDesktopRenderTarget::ReleaseRenderTargets(CDesktopRenderTarget *this)
{
  __int64 i; // rbx
  int v3; // eax
  __int64 j; // rbx
  int v5; // esi
  __int64 v6; // r14
  __int64 v7; // rbx
  CMILRefCountBase *v8; // rsi
  __int64 v9; // rcx
  CMILRefCountBase *v10; // [rsp+40h] [rbp+8h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 58); i = (unsigned int)(i + 1) )
  {
    v8 = *(CMILRefCountBase **)(*(_QWORD *)(*((_QWORD *)this + 26) + 8 * i) + 128LL);
    v10 = v8;
    if ( (unsigned int)DynArray<CBaseExpression *,1>::Remove((char *)this + 304, &v10) )
      CMILRefCountBase::Release(v8);
    CRenderTargetManager::RemoveRenderTarget(
      *(CRenderTargetManager **)(*((_QWORD *)this + 2) + 32LL),
      *(struct CRenderTarget **)(*((_QWORD *)this + 26) + 8 * i));
    v9 = *(_QWORD *)(*((_QWORD *)this + 26) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  *((_DWORD *)this + 82) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 304, 8LL);
  *((_DWORD *)this + 58) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 208, 8LL);
  v3 = *((_DWORD *)this + 46) - 1;
  for ( j = v3;
        j >= 0;
        CDesktopRenderTarget::RemoveRenderTarget(this, *(struct CHwndRenderTarget **)(*((_QWORD *)this + 20) + 8 * j--)) )
  {
    ;
  }
  v5 = *((_DWORD *)this + 70) - 1;
  if ( v5 >= 0 )
  {
    v6 = 8LL * v5;
    do
    {
      v7 = *(_QWORD *)(v6 + *((_QWORD *)this + 32));
      DynArray<CCursorVisual *,0>::RemoveAt((char *)this + 256, (unsigned int)v5);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      --v5;
      v6 -= 8LL;
    }
    while ( v5 >= 0 );
  }
  *((_BYTE *)this + 352) = 0;
}
