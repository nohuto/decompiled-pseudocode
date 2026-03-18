/*
 * XREFs of ?OverlayAttributesEqual@@YA_NAEBU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@0_N@Z @ 0x1C01872B0
 * Callers:
 *     ?CheckMultiPlaneOverlaySupportFromCachedData@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C01862BC (-CheckMultiPlaneOverlaySupportFromCachedData@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHI.c)
 * Callees:
 *     <none>
 */

char __fastcall OverlayAttributesEqual(
        const struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *a1,
        const struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *a2,
        char a3)
{
  char v3; // r9

  v3 = 0;
  if ( a1->Flags == a2->Flags
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
    && a1->Blend == a2->Blend
    && a1->ColorSpace == a2->ColorSpace
    && a1->StretchQuality == a2->StretchQuality )
  {
    return 1;
  }
  return v3;
}
