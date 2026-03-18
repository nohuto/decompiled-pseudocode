/*
 * XREFs of ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18018D3EC
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062AD0 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x18000BE6C (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Push@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateType@COcclusionContext@@@Z @ 0x1800A3324 (-Push@-$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateTyp.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x1800A5C6C (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800A5C88 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x1800AD88C (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?ClampAlpha@@YAMM@Z @ 0x1800BF300 (-ClampAlpha@@YAMM@Z.c)
 *     ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x1801122BC (-Push@-$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMode@@@Z @ 0x18018D27C (-Push@-$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMod.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18018D790 (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CBspPreComputeHelper::PushStacksForBspChildVisual(CBspPreComputeHelper *this, struct CVisual *a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  float OpacityInternal; // xmm0_4
  float v11; // xmm3_4
  float v12; // xmm0_4
  float *v13; // rax
  unsigned int *v14; // rcx
  int v15; // eax
  int v16; // eax
  int v18; // [rsp+48h] [rbp+18h] BYREF

  v4 = 0;
  CBspPreComputeHelper::PushTransformForChildVisual(this, a2);
  if ( (*((_BYTE *)a2 + 156) & 0x40) != 0
    && (v18 = *((int *)a2 + 65),
        v5 = CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Push((unsigned int *)this + 32, &v18),
        v4 = v5,
        v5 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x8Fu);
  }
  else
  {
    v6 = *((_DWORD *)a2 + 39);
    if ( (v6 & 2) != 0
      && (v18 = v6 << 18 >> 28,
          v7 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 40, &v18),
          v4 = v7,
          v7 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x95u);
    }
    else if ( (*((_BYTE *)a2 + 156) & 8) != 0
           && (v18 = *((int *)a2 + 62),
               v8 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push(
                      (unsigned int *)this + 48,
                      &v18),
               v4 = v8,
               v8 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x9Bu);
    }
    else if ( (*((_BYTE *)a2 + 156) & 0x10) != 0
           && (v18 = *((int *)a2 + 63),
               v9 = CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push((unsigned int *)this + 56, &v18),
               v4 = v9,
               v9 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xA1u);
    }
    else
    {
      OpacityInternal = CVisual::GetOpacityInternal(a2);
      v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(OpacityInternal - 1.0)) & _xmm);
      if ( v11 < 0.0000011920929
        || (CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((__int64)this + 256),
            v12 = ClampAlpha(OpacityInternal),
            *(float *)&v18 = v12 * *v13,
            v15 = CWatermarkStack<float,64,2,10>::Push(v14, &v18),
            v4 = v15,
            v15 >= 0) )
      {
        if ( (*((_BYTE *)a2 + 154) & 1) != 0 )
        {
          LOBYTE(v18) = 1;
          v16 = CWatermarkStack<bool,64,2,10>::Push((const void **)this + 36, &v18);
          v4 = v16;
          if ( v16 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xB0u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xAAu);
      }
    }
  }
  return v4;
}
