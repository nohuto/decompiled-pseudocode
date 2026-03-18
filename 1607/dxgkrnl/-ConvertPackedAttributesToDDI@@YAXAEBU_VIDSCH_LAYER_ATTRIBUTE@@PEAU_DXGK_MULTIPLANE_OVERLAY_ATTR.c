/*
 * XREFs of ?ConvertPackedAttributesToDDI@@YAXAEBU_VIDSCH_LAYER_ATTRIBUTE@@PEAU_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x1C01866E0
 * Callers:
 *     ?UpdateCheckPlaneWithIndependentFlip2@DXGDEVICE@@QEAAJIIPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE@@@Z @ 0x1C018B7B0 (-UpdateCheckPlaneWithIndependentFlip2@DXGDEVICE@@QEAAJIIPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_.c)
 *     ?UpdateCheckPlaneWithIndependentFlip@DXGDEVICE@@QEAAJIIPEAU_DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE@@@Z @ 0x1C018B9F8 (-UpdateCheckPlaneWithIndependentFlip@DXGDEVICE@@QEAAJIIPEAU_DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPOR.c)
 * Callees:
 *     <none>
 */

void __fastcall ConvertPackedAttributesToDDI(
        const struct _VIDSCH_LAYER_ATTRIBUTE *a1,
        struct _DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES *a2)
{
  LONG v3; // r8d
  int v5; // eax
  LONG v6; // r8d
  LONG v7; // ecx
  int v8; // eax
  unsigned int v9; // r8d
  UINT v10; // edx

  v3 = (unsigned __int16)*(_DWORD *)a1;
  a2->SrcRect.right = *((unsigned __int16 *)a1 + 1);
  v5 = *((_DWORD *)a1 + 1);
  a2->SrcRect.left = v3;
  v6 = (unsigned __int16)v5;
  a2->SrcRect.bottom = *((unsigned __int16 *)a1 + 3);
  a2->DstRect.left = *((__int16 *)a1 + 4);
  a2->DstRect.right = *((unsigned __int16 *)a1 + 5);
  a2->DstRect.top = *((__int16 *)a1 + 6);
  a2->DstRect.bottom = *((unsigned __int16 *)a1 + 7);
  v7 = (unsigned __int16)*((_DWORD *)a1 + 4);
  a2->ClipRect.right = *((unsigned __int16 *)a1 + 9);
  v8 = *((_DWORD *)a1 + 5);
  a2->ClipRect.left = v7;
  a2->ClipRect.bottom = *((unsigned __int16 *)a1 + 11);
  a2->ClipRect.top = (unsigned __int16)v8;
  a2->SrcRect.top = v6;
  v9 = *((_DWORD *)a1 + 7);
  a2->Flags.Value ^= (a2->Flags.Value ^ v9 & 1) & 1;
  a2->Flags.Value ^= (a2->Flags.Value ^ (2 * (((unsigned __int8)v9 >> 1) & 1))) & 2;
  a2->Rotation = ((v9 >> 3) & 3) + 1;
  a2->Blend.Value ^= (((unsigned __int8)v9 >> 2) & 1 ^ a2->Blend.Value) & 1;
  a2->VideoFrameFormat = (v9 >> 5) & 3;
  a2->YCbCrFlags.Value ^= (((unsigned __int8)v9 >> 7) ^ a2->YCbCrFlags.Value) & 1;
  v10 = a2->YCbCrFlags.Value ^ (a2->YCbCrFlags.Value ^ (2 * ((v9 >> 8) & 1))) & 2;
  a2->YCbCrFlags.Value = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(4 * ((v9 & 0x200) != 0))) & 4;
  a2->StereoFormat = (v9 >> 10) & 7;
  a2->StereoLeftViewFrame0 = (v9 >> 13) & 1;
  a2->StereoBaseViewFrame0 = (v9 >> 14) & 1;
  a2->StereoFlipMode = (v9 >> 15) & 3;
  a2->StretchQuality = ((v9 & 0x400000) != 0) + 1;
}
