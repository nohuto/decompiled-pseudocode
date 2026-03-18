/*
 * XREFs of ?ConvertThunkOverlayToPackedAttributes3@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@@Z @ 0x1C0186AC8
 * Callers:
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C018A568 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGCONTEXT::ConvertThunkOverlayToPackedAttributes3(
        DXGCONTEXT *this,
        struct _VIDSCH_LAYER_ATTRIBUTE *a2,
        const struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // ecx
  D3DDDI_COLOR_SPACE_TYPE ColorSpace; // eax

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
    *(_QWORD *)(v6 + 24) = 3875LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( a3->Rotation > (unsigned int)D3DDDI_ROTATION_270 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v7 + 24) = 3876LL;
    WdLogEvent5_WdAssertion(v7);
  }
  *((_DWORD *)a2 + 7) ^= (*((_DWORD *)a2 + 7) ^ (8 * a3->Rotation - 8)) & 0x18;
  v8 = *((_DWORD *)a2 + 7) & 0xFFFFFF9B | (4 * (a3->Blend & 1));
  *((_DWORD *)a2 + 7) = v8;
  ColorSpace = a3->ColorSpace;
  if ( ColorSpace == D3DDDI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P601
    || ColorSpace == D3DDDI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P709 )
  {
    *((_DWORD *)a2 + 7) = v8 | 0x80;
  }
  if ( (unsigned int)(a3->ColorSpace - 8) <= 1 )
    *((_DWORD *)a2 + 7) |= 0x100u;
  *((_DWORD *)a2 + 7) &= ~0x200u;
  *((_DWORD *)a2 + 7) ^= (*((_DWORD *)a2 + 7) ^ ((a3->StretchQuality == DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_HIGH) << 22)) & 0x400000;
  *((_DWORD *)a2 + 6) = a3->ColorSpace;
}
