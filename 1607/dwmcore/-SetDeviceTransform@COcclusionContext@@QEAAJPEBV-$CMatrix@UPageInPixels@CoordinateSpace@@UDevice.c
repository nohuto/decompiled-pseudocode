/*
 * XREFs of ?SetDeviceTransform@COcclusionContext@@QEAAJPEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@@Z @ 0x18005C180
 * Callers:
 *     ?UpdateDeviceTransform@COcclusionContext@@AEAAJAEBVCMILMatrix@@@Z @ 0x18001199C (-UpdateDeviceTransform@COcclusionContext@@AEAAJAEBVCMILMatrix@@@Z.c)
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x18005BE84 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180074CC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180058CF0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18005B440 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 */

__int64 __fastcall COcclusionContext::SetDeviceTransform(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r9
  const struct CMILMatrix *v4; // rdx
  __int64 v6; // r9
  __int64 v7; // r10
  __int128 v8; // xmm0
  int v9; // eax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  int v12; // eax
  __int128 v13; // xmm1
  _OWORD v14[4]; // [rsp+30h] [rbp-58h] BYREF
  int v15; // [rsp+70h] [rbp-18h]

  v2 = 0;
  v3 = a1;
  if ( a2 && !CMILMatrix::IsIdentity<0>(a2) )
  {
    v15 = 0;
    if ( CMILMatrix::SetToInverse((CMILMatrix *)v14, v4) )
    {
      *(_OWORD *)(v6 + 676) = *(_OWORD *)v7;
      *(_OWORD *)(v6 + 692) = *(_OWORD *)(v7 + 16);
      *(_OWORD *)(v6 + 708) = *(_OWORD *)(v7 + 32);
      v8 = v14[0];
      *(_OWORD *)(v6 + 724) = *(_OWORD *)(v7 + 48);
      v9 = *(_DWORD *)(v7 + 64);
      v10 = v14[1];
      *(_OWORD *)(v6 + 744) = v8;
      *(_DWORD *)(v6 + 740) = v9;
      v11 = v14[2];
      v12 = v15;
      *(_OWORD *)(v6 + 760) = v10;
      *(_BYTE *)(v6 + 672) = 1;
      v13 = v14[3];
      *(_OWORD *)(v6 + 776) = v11;
      *(_OWORD *)(v6 + 792) = v13;
      *(_DWORD *)(v6 + 808) = v12;
    }
    else
    {
      v2 = -2003304441;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304441, 0x9Bu);
    }
  }
  else
  {
    *(_OWORD *)(v3 + 676) = CMILMatrix::Identity;
    *(_OWORD *)(v3 + 692) = xmmword_1801EAD20;
    *(_OWORD *)(v3 + 708) = xmmword_1801EAD30;
    *(_OWORD *)(v3 + 724) = xmmword_1801EAD40;
    *(_DWORD *)(v3 + 740) = dword_1801EAD50;
    *(_OWORD *)(v3 + 744) = CMILMatrix::Identity;
    *(_OWORD *)(v3 + 760) = xmmword_1801EAD20;
    *(_OWORD *)(v3 + 776) = xmmword_1801EAD30;
    *(_OWORD *)(v3 + 792) = xmmword_1801EAD40;
    *(_DWORD *)(v3 + 808) = dword_1801EAD50;
    *(_BYTE *)(v3 + 672) = 0;
  }
  return v2;
}
