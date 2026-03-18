/*
 * XREFs of ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18015B2F0
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180050490 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x1800062E4 (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBackfaceVisibility@@@Z @ 0x18000631C (-Push@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBackfaceVis.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800A45C0 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x1800A9F70 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x1800FE0F8 (-Push@-$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMode@@@Z @ 0x18015B178 (-Push@-$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMod.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18015B6A4 (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CBspPreComputeHelper::PushStacksForBspChildVisual(CBspPreComputeHelper *this, struct CVisual *a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float *TopByReference; // rax
  unsigned int *v14; // rcx
  int v15; // eax
  int v16; // eax
  int v18; // [rsp+48h] [rbp+18h] BYREF

  v4 = 0;
  CBspPreComputeHelper::PushTransformForChildVisual(this, a2);
  if ( (*((_BYTE *)a2 + 76) & 0x40) != 0
    && (v18 = *((int *)a2 + 50),
        v5 = CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Push((unsigned int *)this + 32, &v18),
        v4 = v5,
        v5 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x96u);
  }
  else
  {
    v6 = *((_DWORD *)a2 + 19);
    if ( (v6 & 2) != 0
      && (v18 = v6 << 17 >> 28,
          v7 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 40, &v18),
          v4 = v7,
          v7 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x9Cu);
    }
    else if ( (*((_BYTE *)a2 + 76) & 8) != 0
           && (v18 = *((int *)a2 + 47),
               v8 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push(
                      (unsigned int *)this + 48,
                      &v18),
               v4 = v8,
               v8 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xA2u);
    }
    else if ( (*((_BYTE *)a2 + 76) & 0x10) != 0
           && (v18 = *((int *)a2 + 48),
               v9 = CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push((unsigned int *)this + 56, &v18),
               v4 = v9,
               v9 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xA8u);
    }
    else
    {
      v10 = *((float *)a2 + 96);
      v11 = FLOAT_1_0;
      v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v10 - 1.0)) & _xmm);
      if ( v12 < 0.0000011920929 )
        goto LABEL_25;
      TopByReference = (float *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((__int64)this + 256);
      if ( v10 <= 1.0 )
      {
        v11 = 0.0;
        if ( v10 >= 0.0 )
          v11 = v10;
      }
      *(float *)&v18 = v11 * *TopByReference;
      v15 = CWatermarkStack<float,64,2,10>::Push(v14, &v18);
      v4 = v15;
      if ( v15 >= 0 )
      {
LABEL_25:
        if ( (*((_BYTE *)a2 + 74) & 1) != 0 )
        {
          LOBYTE(v18) = 1;
          v16 = CWatermarkStack<bool,64,2,10>::Push((const void **)this + 36, &v18);
          v4 = v16;
          if ( v16 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xB6u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xB0u);
      }
    }
  }
  return v4;
}
