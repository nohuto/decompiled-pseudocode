/*
 * XREFs of ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z @ 0x18008D16C
 * Callers:
 *     ?CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008F920 (-CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TA.c)
 *     ?_CreateSingleGutterAnimationComponent@CTransitionVisualController@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUFakeGutterInfo@1@PEAPEAVCAnimationComponent@@@Z @ 0x180090788 (-_CreateSingleGutterAnimationComponent@CTransitionVisualController@@IEAAJPEAUHWND__@@W4DWMTRANSI.c)
 * Callees:
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000D4CC (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCResource@@@Z @ 0x18000D7D0 (-_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x326u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x325u);
  }
  return v5;
}
