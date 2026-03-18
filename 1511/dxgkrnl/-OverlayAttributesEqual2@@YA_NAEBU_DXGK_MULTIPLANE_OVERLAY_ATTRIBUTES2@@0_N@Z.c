/*
 * XREFs of ?OverlayAttributesEqual2@@YA_NAEBU_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2@@0_N@Z @ 0x1C01616D8
 * Callers:
 *     ?CheckMultiPlaneOverlaySupportFromCachedData2@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C01605D4 (-CheckMultiPlaneOverlaySupportFromCachedData2@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTH.c)
 * Callees:
 *     <none>
 */

char __fastcall OverlayAttributesEqual2(
        const struct _DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2 *a1,
        const struct _DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2 *a2,
        char a3)
{
  char v3; // r9

  v3 = 0;
  if ( a1->Flags.Value == a2->Flags.Value
    && a1->SrcRect.left == a2->SrcRect.left
    && a1->SrcRect.right == a2->SrcRect.right
    && a1->SrcRect.top == a2->SrcRect.top
    && a1->SrcRect.bottom == a2->SrcRect.bottom
    && a1->DstRect.left == a2->DstRect.left
    && a1->DstRect.right == a2->DstRect.right
    && a1->DstRect.top == a2->DstRect.top
    && a1->DstRect.bottom == a2->DstRect.bottom
    && (a3
     || a1->ClipRect.left == a2->ClipRect.left
     && a1->ClipRect.right == a2->ClipRect.right
     && a1->ClipRect.top == a2->ClipRect.top
     && a1->ClipRect.bottom == a2->ClipRect.bottom)
    && a1->Rotation == a2->Rotation
    && a1->Blend.Value == a2->Blend.Value
    && a1->VideoFrameFormat == a2->VideoFrameFormat
    && a1->ColorSpaceType == a2->ColorSpaceType
    && a1->Reserved1 == a2->Reserved1
    && a1->StereoFormat == a2->StereoFormat
    && a1->StereoLeftViewFrame0 == a2->StereoLeftViewFrame0
    && a1->StereoBaseViewFrame0 == a2->StereoBaseViewFrame0
    && a1->StereoFlipMode == a2->StereoFlipMode
    && a1->StretchQuality == a2->StretchQuality )
  {
    return 1;
  }
  return v3;
}
