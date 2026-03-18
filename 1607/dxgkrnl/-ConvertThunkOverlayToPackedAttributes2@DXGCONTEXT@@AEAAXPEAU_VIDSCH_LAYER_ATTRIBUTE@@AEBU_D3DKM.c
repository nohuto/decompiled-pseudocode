/*
 * XREFs of ?ConvertThunkOverlayToPackedAttributes2@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES2@@@Z @ 0x1C01868E4
 * Callers:
 *     ?SubmitPresentMultiPlaneOverlays2@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C0189C14 (-SubmitPresentMultiPlaneOverlays2@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@EEEP.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGCONTEXT::ConvertThunkOverlayToPackedAttributes2(
        DXGCONTEXT *this,
        struct _VIDSCH_LAYER_ATTRIBUTE *a2,
        const struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES2 *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax

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
  v5 = a3->Flags & 1;
  *((_DWORD *)a2 + 7) ^= ((unsigned __int8)v5 ^ (unsigned __int8)*((_DWORD *)a2 + 7)) & 1;
  *((_DWORD *)a2 + 7) ^= (*((_DWORD *)a2 + 7) ^ (2 * ((LOBYTE(a3->Flags) >> 1) & 1))) & 2;
  if ( !a3->Rotation )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v6 + 24) = 3813LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( a3->Rotation > (unsigned int)D3DDDI_ROTATION_270 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v7 + 24) = 3814LL;
    WdLogEvent5_WdAssertion(v7);
  }
  *((_DWORD *)a2 + 7) ^= (*((_DWORD *)a2 + 7) ^ (8 * a3->Rotation - 8)) & 0x18;
  *((_DWORD *)a2 + 7) ^= (*((_DWORD *)a2 + 7) ^ (4 * (a3->Blend & 1))) & 4;
  if ( a3->VideoFrameFormat > (unsigned int)(D3DKMT_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT_INTERLACED_BOTTOM_FIELD_FIRST|D3DKMT_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT_INTERLACED_TOP_FIELD_FIRST) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v8 + 24) = 3821LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *((_DWORD *)a2 + 7) & 0xFFFFFC1F | (32 * (a3->VideoFrameFormat & 3));
  *((_DWORD *)a2 + 7) = v9;
  if ( a3->StereoFormat > (unsigned int)DXGKMT_MULTIPLANE_OVERLAY_STEREO_FORMAT_CHECKERBOARD )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 3829LL;
    WdLogEvent5_WdAssertion(v10);
  }
  *((_DWORD *)a2 + 7) ^= (*((_DWORD *)a2 + 7) ^ (a3->StereoFormat << 10)) & 0x1C00;
  v11 = *((_DWORD *)a2 + 7) ^ (*((_DWORD *)a2 + 7) ^ (a3->StereoLeftViewFrame0 << 13)) & 0x2000u;
  *((_DWORD *)a2 + 7) = v11;
  *((_DWORD *)a2 + 7) = v11 ^ ((unsigned __int16)v11 ^ (a3->StereoBaseViewFrame0 << 14)) & 0x4000;
  if ( a3->StereoFlipMode > (unsigned int)(DXGKMT_MULTIPLANE_OVERLAY_STEREO_FLIP_FRAME1|DXGKMT_MULTIPLANE_OVERLAY_STEREO_FLIP_FRAME0) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v12 + 24) = 3833LL;
    WdLogEvent5_WdAssertion(v12);
  }
  *((_DWORD *)a2 + 7) ^= (*((_DWORD *)a2 + 7) ^ (a3->StereoFlipMode << 15)) & 0x18000;
  *((_DWORD *)a2 + 7) ^= (*((_DWORD *)a2 + 7) ^ ((a3->StretchQuality == DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_HIGH) << 22)) & 0x400000;
  *((_DWORD *)a2 + 6) = a3->ColorSpace;
}
