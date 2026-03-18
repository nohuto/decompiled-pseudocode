/*
 * XREFs of ?ConvertPackedAttributesToDDI2@@YAXAEBU_VIDSCH_LAYER_ATTRIBUTE@@PEAU_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2@@@Z @ 0x1C0160BF0
 * Callers:
 *     ?CheckMultiPlaneOverlaySupportFromCachedData2@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C01605D4 (-CheckMultiPlaneOverlaySupportFromCachedData2@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTH.c)
 * Callees:
 *     <none>
 */

void __fastcall ConvertPackedAttributesToDDI2(
        const struct _VIDSCH_LAYER_ATTRIBUTE *a1,
        struct _DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2 *a2)
{
  D3DDDI_COLOR_SPACE_TYPE v2; // eax

  a2->SrcRect.left = (unsigned __int16)*(_DWORD *)a1;
  a2->SrcRect.right = *((unsigned __int16 *)a1 + 1);
  a2->SrcRect.top = (unsigned __int16)*((_DWORD *)a1 + 1);
  a2->SrcRect.bottom = *((unsigned __int16 *)a1 + 3);
  a2->DstRect.left = *((__int16 *)a1 + 4);
  a2->DstRect.right = *((unsigned __int16 *)a1 + 5);
  a2->DstRect.top = *((__int16 *)a1 + 6);
  a2->DstRect.bottom = *((unsigned __int16 *)a1 + 7);
  a2->ClipRect.left = (unsigned __int16)*((_DWORD *)a1 + 4);
  a2->ClipRect.right = *((unsigned __int16 *)a1 + 9);
  a2->ClipRect.top = (unsigned __int16)*((_DWORD *)a1 + 5);
  a2->ClipRect.bottom = *((unsigned __int16 *)a1 + 11);
  a2->Flags.Value ^= (a2->Flags.Value ^ *((_BYTE *)a1 + 28) & 1) & 1;
  a2->Flags.Value ^= (a2->Flags.Value ^ (2 * ((*((unsigned __int8 *)a1 + 28) >> 1) & 1))) & 2;
  a2->Rotation = ((*((_DWORD *)a1 + 7) >> 3) & 3) + 1;
  a2->Blend.Value ^= ((*((unsigned __int8 *)a1 + 28) >> 2) & 1 ^ a2->Blend.Value) & 1;
  a2->VideoFrameFormat = (*((_DWORD *)a1 + 7) >> 5) & 3;
  v2 = *((_DWORD *)a1 + 6);
  a2->Reserved1 = 0;
  a2->ColorSpaceType = v2;
  a2->StereoFormat = (*((_DWORD *)a1 + 7) >> 10) & 7;
  a2->StereoLeftViewFrame0 = (*((_DWORD *)a1 + 7) >> 13) & 1;
  a2->StereoBaseViewFrame0 = (*((_DWORD *)a1 + 7) >> 14) & 1;
  a2->StereoFlipMode = (*((_DWORD *)a1 + 7) >> 15) & 3;
  a2->StretchQuality = ((*((_DWORD *)a1 + 7) & 0x400000) != 0) + 1;
}
