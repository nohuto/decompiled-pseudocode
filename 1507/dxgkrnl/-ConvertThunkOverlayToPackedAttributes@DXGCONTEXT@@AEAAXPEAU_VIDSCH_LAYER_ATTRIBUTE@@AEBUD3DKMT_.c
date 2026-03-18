/*
 * XREFs of ?ConvertThunkOverlayToPackedAttributes@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBUD3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x1C015CD54
 * Callers:
 *     ?SubmitPresentMultiPlaneOverlays@DXGCONTEXT@@AEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C015F7CC (-SubmitPresentMultiPlaneOverlays@DXGCONTEXT@@AEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@EEEPEBV.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGCONTEXT::ConvertThunkOverlayToPackedAttributes(
        DXGCONTEXT *this,
        struct _VIDSCH_LAYER_ATTRIBUTE *a2,
        const struct D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES *a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax

  *(_WORD *)a2 = a3->SrcRect.left;
  *((_WORD *)a2 + 1) = a3->SrcRect.right;
  *((_WORD *)a2 + 2) = a3->SrcRect.top;
  *((_WORD *)a2 + 3) = a3->SrcRect.bottom;
  *((_WORD *)a2 + 4) = a3->DstRect.left;
  *((_WORD *)a2 + 5) = a3->DstRect.right;
  *((_WORD *)a2 + 6) = a3->DstRect.top;
  *((_WORD *)a2 + 7) = a3->DstRect.bottom;
  *((_WORD *)a2 + 8) = a3->ClipRect.left;
  *((_WORD *)a2 + 9) = a3->ClipRect.right;
  *((_WORD *)a2 + 10) = a3->ClipRect.top;
  *((_WORD *)a2 + 11) = a3->ClipRect.bottom;
  v6 = a3->Flags & 1;
  *((_DWORD *)a2 + 7) ^= ((unsigned __int8)v6 ^ (unsigned __int8)*((_DWORD *)a2 + 7)) & 1;
  *((_DWORD *)a2 + 7) ^= (*((_DWORD *)a2 + 7) ^ (2 * ((LOBYTE(a3->Flags) >> 1) & 1))) & 2;
  if ( !a3->Rotation )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 1245LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( a3->Rotation > (unsigned int)D3DDDI_ROTATION_270 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 1246LL;
    WdLogEvent5_WdAssertion(v8);
  }
  *((_DWORD *)a2 + 7) ^= (*((_DWORD *)a2 + 7) ^ (8 * a3->Rotation - 8)) & 0x18;
  *((_DWORD *)a2 + 7) ^= (*((_DWORD *)a2 + 7) ^ (4 * (a3->Blend & 1))) & 4;
  if ( a3->VideoFrameFormat > (unsigned int)(D3DKMT_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT_INTERLACED_BOTTOM_FIELD_FIRST|D3DKMT_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT_INTERLACED_TOP_FIELD_FIRST) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 1253LL;
    WdLogEvent5_WdAssertion(v9);
  }
  *((_DWORD *)a2 + 7) ^= (*((_DWORD *)a2 + 7) ^ (32 * a3->VideoFrameFormat)) & 0x60;
  v10 = *((_DWORD *)a2 + 7) ^ (*((_DWORD *)a2 + 7) ^ ((a3->YCbCrFlags & 1) << 7)) & 0x80u;
  *((_DWORD *)a2 + 7) = v10;
  v11 = (unsigned int)v10 ^ ((unsigned __int16)v10 ^ (((a3->YCbCrFlags & 2) != 0) << 8)) & 0x100;
  *((_DWORD *)a2 + 7) = v11;
  *((_DWORD *)a2 + 7) = v11 ^ ((unsigned __int16)v11 ^ (((a3->YCbCrFlags & 4) != 0) << 9)) & 0x200;
  if ( a3->StereoFormat > (unsigned int)DXGKMT_MULTIPLANE_OVERLAY_STEREO_FORMAT_CHECKERBOARD )
  {
    v12 = WdLogNewEntry5_WdAssertion(v10, v11, a3, a4);
    *(_QWORD *)(v12 + 24) = 1263LL;
    WdLogEvent5_WdAssertion(v12);
  }
  *((_DWORD *)a2 + 7) ^= (*((_DWORD *)a2 + 7) ^ (a3->StereoFormat << 10)) & 0x1C00;
  v13 = *((_DWORD *)a2 + 7) ^ (*((_DWORD *)a2 + 7) ^ (a3->StereoLeftViewFrame0 << 13)) & 0x2000u;
  *((_DWORD *)a2 + 7) = v13;
  *((_DWORD *)a2 + 7) = v13 ^ ((unsigned __int16)v13 ^ (a3->StereoBaseViewFrame0 << 14)) & 0x4000;
  if ( a3->StereoFlipMode > (unsigned int)(DXGKMT_MULTIPLANE_OVERLAY_STEREO_FLIP_FRAME1|DXGKMT_MULTIPLANE_OVERLAY_STEREO_FLIP_FRAME0) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13, v11, a3, a4);
    *(_QWORD *)(v14 + 24) = 1267LL;
    WdLogEvent5_WdAssertion(v14);
  }
  *((_DWORD *)a2 + 7) ^= (*((_DWORD *)a2 + 7) ^ (a3->StereoFlipMode << 15)) & 0x18000;
  *((_DWORD *)a2 + 7) ^= (*((_DWORD *)a2 + 7) ^ ((a3->StretchQuality == DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_HIGH) << 22)) & 0x400000;
}
