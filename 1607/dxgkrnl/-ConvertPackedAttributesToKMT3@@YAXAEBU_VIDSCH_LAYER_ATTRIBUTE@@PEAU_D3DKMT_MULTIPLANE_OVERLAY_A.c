/*
 * XREFs of ?ConvertPackedAttributesToKMT3@@YAXAEBU_VIDSCH_LAYER_ATTRIBUTE@@PEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@@Z @ 0x1C018682C
 * Callers:
 *     ?CheckMultiPlaneOverlaySupportFromCachedData@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C01862BC (-CheckMultiPlaneOverlaySupportFromCachedData@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHI.c)
 *     ?UpdateCheckPlaneWithIndependentFlip3@DXGDEVICE@@QEAAJIIPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@@Z @ 0x1C018B8D0 (-UpdateCheckPlaneWithIndependentFlip3@DXGDEVICE@@QEAAJIIPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTE.c)
 * Callees:
 *     <none>
 */

void __fastcall ConvertPackedAttributesToKMT3(
        const struct _VIDSCH_LAYER_ATTRIBUTE *a1,
        struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *a2)
{
  LONG v3; // eax
  UINT v4; // ecx

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
  v3 = *((unsigned __int16 *)a1 + 11);
  a2->Flags = 0;
  a2->ClipRect.bottom = v3;
  v4 = *((_BYTE *)a1 + 28) & 1;
  a2->Flags = v4;
  a2->Flags = *((_BYTE *)a1 + 28) & 2 | v4;
  a2->Rotation = ((*((_DWORD *)a1 + 7) >> 3) & 3) + 1;
  a2->Blend = (*((unsigned __int8 *)a1 + 28) >> 2) & 1;
  a2->ColorSpace = *((_DWORD *)a1 + 6);
  a2->StretchQuality = ((*((_DWORD *)a1 + 7) & 0x400000) != 0) + 1;
}
