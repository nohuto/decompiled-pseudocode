/*
 * XREFs of ?SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z @ 0x18003AE80
 * Callers:
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180031AD4 (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CAnimationEngine::CTransitionVisualSet::SetStoryboard(
        CAnimationEngine::CTransitionVisualSet *this,
        struct IUIAnimationStoryboard2 *a2)
{
  __int64 v2; // r14

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    ((void (__fastcall *)(struct IUIAnimationStoryboard2 *))a2->lpVtbl->AddRef)(a2);
  *((_BYTE *)this + 32) = 1;
}
