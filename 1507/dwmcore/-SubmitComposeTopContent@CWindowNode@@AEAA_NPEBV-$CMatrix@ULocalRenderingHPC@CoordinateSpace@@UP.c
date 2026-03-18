/*
 * XREFs of ?SubmitComposeTopContent@CWindowNode@@AEAA_NPEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@@Z @ 0x18010695C
 * Callers:
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18007CB50 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@ULocalRenderingH.c)
 * Callees:
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x180067F00 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetShapeDataCoreNoRef@CRgnGeometry@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18006FA00 (-GetShapeDataCoreNoRef@CRgnGeometry@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
  if ( !*(_BYTE *)(a1 + 1245) )
  {
    if ( *(_QWORD *)(a1 + 1040) )
    {
      v7 = *(CRgnGeometry **)(a1 + 1080);
      if ( v7 )
      {
        if ( PrimaryDesktopRenderTargetNoRef )
        {
          v11 = 0LL;
          ShapeDataCoreNoRef = CRgnGeometry::GetShapeDataCoreNoRef(v7, (const struct D2D_SIZE_F *)(a1 + 148), &v11);
          if ( ShapeDataCoreNoRef >= 0 )
          {
            v9 = (*(__int64 (__fastcall **)(struct IRenderTargetDesktop *, _QWORD, struct CShape *, __int64))(*(_QWORD *)v6 + 208LL))(
                   v6,
                   *(_QWORD *)(a1 + 1040),
                   v11,
                   a2);
            if ( v9 >= 0 )
            {
              v4 = 1;
              *(_BYTE *)(a1 + 1245) = 1;
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1324u);
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataCoreNoRef, 0x1319u);
          }
        }
      }
    }
  }
  return v4;
}
