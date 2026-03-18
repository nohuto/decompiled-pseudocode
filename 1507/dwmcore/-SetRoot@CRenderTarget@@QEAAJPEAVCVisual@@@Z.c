/*
 * XREFs of ?SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1800927AC
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x1800494B0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?ProcessSetRoot@CRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_TARGET_SETROOT@@@Z @ 0x180092840 (-ProcessSetRoot@CRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_TARGET_SETROOT@@@Z.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1800EE6EC (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180035B14 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CRenderTarget::SetRoot(CRenderTarget *this, struct CVisual *a2)
{
  CMILRefCountBase *v2; // rdi
  int VisualTree; // eax
  unsigned int v5; // ebx
  int v6; // eax
  struct CVisualTree *v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  v8 = 0LL;
  if ( a2 )
  {
    VisualTree = CVisual::GetVisualTree(a2, &v8);
    v5 = VisualTree;
    if ( VisualTree < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, VisualTree, 0x9Eu);
      v2 = v8;
      goto LABEL_6;
    }
    v2 = v8;
  }
  v6 = (*(__int64 (__fastcall **)(CRenderTarget *, CMILRefCountBase *))(*(_QWORD *)this + 176LL))(this, v2);
  v5 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xA1u);
LABEL_6:
  if ( v2 )
    CMILRefCountBase::Release(v2);
  return v5;
}
