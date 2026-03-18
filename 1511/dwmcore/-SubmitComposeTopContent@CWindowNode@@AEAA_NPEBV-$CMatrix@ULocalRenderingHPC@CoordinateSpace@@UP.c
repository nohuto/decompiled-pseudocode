/*
 * XREFs of ?SubmitComposeTopContent@CWindowNode@@AEAA_NPEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@@Z @ 0x180124460
 * Callers:
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x1800632E0 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@ULocalRenderingH.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetShapeDataCoreNoRef@CRgnGeometry@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x180064BB0 (-GetShapeDataCoreNoRef@CRgnGeometry@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x180094744 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 */

char __fastcall CWindowNode::SubmitComposeTopContent(__int64 a1, __int64 a2)
{
  char v4; // di
  struct IRenderTargetDesktop *PrimaryDesktopRenderTargetNoRef; // rax
  struct IRenderTargetDesktop *v6; // r14
  CRgnGeometry *v7; // rcx
  int ShapeDataCoreNoRef; // eax
  int v9; // eax
  struct CShape *v11; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef(*(CComposition **)(a1 + 16));
  v6 = PrimaryDesktopRenderTargetNoRef;
  if ( !*(_BYTE *)(a1 + 1197) )
  {
    if ( *(_QWORD *)(a1 + 992) )
    {
      v7 = *(CRgnGeometry **)(a1 + 1032);
      if ( v7 )
      {
        if ( PrimaryDesktopRenderTargetNoRef )
        {
          v11 = 0LL;
          ShapeDataCoreNoRef = CRgnGeometry::GetShapeDataCoreNoRef(v7, (const struct D2D_SIZE_F *)(a1 + 132), &v11);
          if ( ShapeDataCoreNoRef >= 0 )
          {
            v9 = (*(__int64 (__fastcall **)(struct IRenderTargetDesktop *, _QWORD, struct CShape *, __int64))(*(_QWORD *)v6 + 200LL))(
                   v6,
                   *(_QWORD *)(a1 + 992),
                   v11,
                   a2);
            if ( v9 >= 0 )
            {
              v4 = 1;
              *(_BYTE *)(a1 + 1197) = 1;
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x12FBu);
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataCoreNoRef, 0x12F0u);
          }
        }
      }
    }
  }
  return v4;
}
