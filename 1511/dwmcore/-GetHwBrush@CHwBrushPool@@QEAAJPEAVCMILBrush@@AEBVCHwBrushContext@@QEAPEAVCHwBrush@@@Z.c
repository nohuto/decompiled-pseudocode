/*
 * XREFs of ?GetHwBrush@CHwBrushPool@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x18002BE18
 * Callers:
 *     ?DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEAVCHwBrush@@@Z @ 0x18002BBB8 (-DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEA.c)
 * Callees:
 *     ?AllocateHwBrush@CHwBrushPoolManager@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x180012B40 (-AllocateHwBrush@CHwBrushPoolManager@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x180089D00 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwBrushPool::GetHwBrush(
        CHwBrushPoolManager **this,
        struct CMILBrush *a2,
        const struct CHwBrushContext *a3,
        struct CHwBrush **const a4)
{
  unsigned int v8; // edi
  int v9; // eax
  int v10; // eax
  struct CHwBrush *v11; // rax
  int HwBrush; // eax
  int v14; // r9d
  unsigned int v15; // [rsp+20h] [rbp-28h]

  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(struct CMILBrush *))(*(_QWORD *)a2 + 24LL))(a2);
  if ( v9 == 1 )
  {
    *((_OWORD *)*this + 3) = *(_OWORD *)((char *)a2 + 40);
    v11 = *this;
    goto LABEL_8;
  }
  if ( v9 == 2 )
  {
    HwBrush = CHwBrushPoolManager::AllocateHwBrush(this[1], a2, a3, a4);
    v8 = HwBrush;
    if ( HwBrush >= 0 )
      return v8;
    v15 = 133;
    v14 = HwBrush;
LABEL_16:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, v15);
    return v8;
  }
  if ( v9 != 3 )
  {
    *a4 = 0LL;
    v8 = -2147467263;
    v15 = 148;
LABEL_15:
    v14 = v8;
    goto LABEL_16;
  }
  v10 = CHwBitmapColorSource::DeriveFromBrushAndContext(
          *((struct CD3DDeviceLevel1 **)this[2] + 1),
          (struct CMILBrush *)((char *)a2 - 24),
          a3,
          (struct CHwTexturedColorSource **)this[2] + 2);
  v8 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x163u);
  if ( (v8 & 0x80000000) != 0 )
  {
    v15 = 141;
    goto LABEL_15;
  }
  v11 = this[2];
LABEL_8:
  *a4 = v11;
  return v8;
}
