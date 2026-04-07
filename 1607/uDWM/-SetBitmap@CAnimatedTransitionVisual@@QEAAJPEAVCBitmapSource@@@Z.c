/*
 * XREFs of ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z @ 0x18008C1DC
 * Callers:
 *     ?CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008E4A0 (-CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TA.c)
 *     ?_CreateSingleGutterAnimationComponent@CTransitionVisualController@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUFakeGutterInfo@1@PEAPEAVCAnimationComponent@@@Z @ 0x18008F248 (-_CreateSingleGutterAnimationComponent@CTransitionVisualController@@IEAAJPEAUHWND__@@W4DWMTRANSI.c)
 * Callees:
 *     ?_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCResource@@@Z @ 0x180005830 (-_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCResource@@@Z.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180014640 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::SetBitmap(CBaseObject **this, struct CResource **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int updated; // eax
  CBaseObject *v7; // rcx
  struct CResource *v8; // rax

  v4 = CAnimatedTransitionVisual::EnsureResources((CAnimatedTransitionVisual *)this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    updated = CAnimatedTransitionVisual::_UpdateBrush((CAnimatedTransitionVisual *)this, a2[2]);
    v5 = updated;
    if ( updated >= 0 )
    {
      v7 = this[73];
      if ( v7 )
        CBaseObject::Release(v7);
      this[73] = a2[2];
      v8 = a2[2];
      if ( v8 )
        _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x32Au);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x329u);
  }
  return v5;
}
