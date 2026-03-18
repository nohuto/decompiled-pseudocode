/*
 * XREFs of ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180001C90
 * Callers:
 *     ?ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800FC020 (-ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180001DAC (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x180010418 (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CExternalLayer::ApplyState(CExternalLayer *this, struct CDrawingContext *a2)
{
  __int64 v2; // rax
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // eax
  bool v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  v10 = 0;
  v5 = (*(__int64 (__fastcall **)(CExternalLayer *, struct CDrawingContext *, char *))(v2 + 32))(
         this,
         a2,
         (char *)this + 40);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xC3u);
  }
  else
  {
    v7 = CDrawingContext::PushDeviceTransform(a2, (CExternalLayer *)((char *)this + 40), &v10);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xC9u);
    }
    else
    {
      *((_BYTE *)this + 32) = 1;
      v8 = CExternalLayer::ApplyRenderTarget(this, a2);
      v6 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xCFu);
      }
      else
      {
        *((_BYTE *)this + 36) = *((_BYTE *)a2 + 5931);
        *((_BYTE *)a2 + 5931) = v10;
        *((_BYTE *)this + 35) = 1;
      }
    }
  }
  if ( v6 < 0 )
    (*(void (__fastcall **)(CExternalLayer *, struct CDrawingContext *))(*(_QWORD *)this + 24LL))(this, a2);
  return (unsigned int)v6;
}
