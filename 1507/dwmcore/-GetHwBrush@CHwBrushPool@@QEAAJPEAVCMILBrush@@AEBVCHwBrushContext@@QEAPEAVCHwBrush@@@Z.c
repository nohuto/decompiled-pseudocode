/*
 * XREFs of ?GetHwBrush@CHwBrushPool@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x18008331C
 * Callers:
 *     ?DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEAVCHwBrush@@@Z @ 0x180083294 (-DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEA.c)
 * Callees:
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800411B0 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?AllocateHwBrush@CHwBrushPoolManager@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x180142290 (-AllocateHwBrush@CHwBrushPoolManager@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@.c)
 */

__int64 __fastcall CHwBrushPool::GetHwBrush(
        CHwBrushPoolManager **this,
        struct CMILBrush *a2,
        const struct CHwBrushContext *a3,
        struct CHwBrush **const a4)
{
  unsigned int v8; // edi
  int v9; // eax
  struct CHwBrush *v10; // rax
  int v12; // eax
  int v13; // r9d
  int HwBrush; // eax
  unsigned int v15; // [rsp+20h] [rbp-28h]

  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(struct CMILBrush *))(*(_QWORD *)a2 + 24LL))(a2);
  if ( v9 != 1 )
  {
    if ( v9 == 2 )
    {
      HwBrush = CHwBrushPoolManager::AllocateHwBrush(this[1], a2, a3, a4);
      v8 = HwBrush;
      if ( HwBrush >= 0 )
        return v8;
      v15 = 133;
      v13 = HwBrush;
    }
    else
    {
      if ( v9 == 3 )
      {
        v12 = CHwBitmapColorSource::DeriveFromBrushAndContext(
                *((struct CD3DDeviceLevel1 **)this[2] + 1),
                (struct CMILBrush *)((char *)a2 - 24),
                (const struct D2DMatrix **)a3,
                (struct CHwTexturedColorSource **)this[2] + 2);
        v8 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x163u);
        if ( (v8 & 0x80000000) == 0 )
        {
          v10 = this[2];
          goto LABEL_3;
        }
        v15 = 141;
      }
      else
      {
        *a4 = 0LL;
        v8 = -2147467263;
        v15 = 148;
      }
      v13 = v8;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v15);
    return v8;
  }
  *((_OWORD *)*this + 3) = *(_OWORD *)((char *)a2 + 40);
  v10 = *this;
LABEL_3:
  *a4 = v10;
  return v8;
}
