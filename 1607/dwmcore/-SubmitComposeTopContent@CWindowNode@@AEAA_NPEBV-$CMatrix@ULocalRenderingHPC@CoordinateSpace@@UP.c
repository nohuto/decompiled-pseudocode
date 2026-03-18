/*
 * XREFs of ?SubmitComposeTopContent@CWindowNode@@AEAA_NPEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@@Z @ 0x180140D24
 * Callers:
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180029590 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@ULocalRenderingH.c)
 * Callees:
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18002CBC0 (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x18003AE80 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CWindowNode::SubmitComposeTopContent(__int64 a1, __int64 a2)
{
  char v4; // bl
  struct IRenderTargetDesktop *PrimaryDesktopRenderTargetNoRef; // rax
  struct IRenderTargetDesktop *v6; // rsi
  CGeometry *v7; // rcx
  int ShapeDataNoRef; // eax
  int v9; // eax
  struct CShape *v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef(*(CComposition **)(a1 + 16));
  v6 = PrimaryDesktopRenderTargetNoRef;
  if ( !*(_BYTE *)(a1 + 1005) )
  {
    if ( *(_QWORD *)(a1 + 800) )
    {
      v7 = *(CGeometry **)(a1 + 840);
      if ( v7 )
      {
        if ( PrimaryDesktopRenderTargetNoRef )
        {
          v11 = 0LL;
          ShapeDataNoRef = CGeometry::GetShapeDataNoRef(v7, (const struct D2D_SIZE_F *)(a1 + 192), &v11);
          if ( ShapeDataNoRef < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataNoRef, 0x12E7u);
          }
          else
          {
            v9 = (*(__int64 (__fastcall **)(struct IRenderTargetDesktop *, _QWORD, struct CShape *, __int64))(*(_QWORD *)v6 + 192LL))(
                   v6,
                   *(_QWORD *)(a1 + 800),
                   v11,
                   a2);
            if ( v9 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x12F2u);
            }
            else
            {
              v4 = 1;
              *(_BYTE *)(a1 + 1005) = 1;
            }
          }
        }
      }
    }
  }
  return v4;
}
