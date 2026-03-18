/*
 * XREFs of ?AddCompSurfInfoModeUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x180005BBC
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180008100 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x180012F6C (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 *     ?SetCompositionMode@CCompositionSurfaceBitmap@@UEAAXW4BufferCompositionMode@@_N@Z @ 0x1800DC5A0 (-SetCompositionMode@CCompositionSurfaceBitmap@@UEAAXW4BufferCompositionMode@@_N@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComposition::AddCompSurfInfoModeUpdate(CComposition *this, struct CCompositionSurfaceInfo *a2)
{
  char *v2; // r10
  unsigned int v3; // edi
  struct CCompositionSurfaceInfo **v4; // rax
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v9; // ebx
  int v10; // eax
  CBitmapOfDeviceBitmaps *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v2 = (char *)this + 656;
  v3 = 0;
  v4 = (struct CCompositionSurfaceInfo **)*((_QWORD *)this + 82);
  v5 = 0;
  if ( !*((_DWORD *)v2 + 6) )
  {
LABEL_2:
    v6 = *((_DWORD *)v2 + 6);
    v7 = v6 + 1;
    if ( v6 + 1 < v6 )
    {
      v9 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v3 = -2147024362;
    }
    else
    {
      if ( v7 <= *((_DWORD *)v2 + 5) )
      {
        *(_QWORD *)(*(_QWORD *)v2 + 8LL * v6) = v11;
        *((_DWORD *)v2 + 6) = v7;
LABEL_5:
        CBitmapOfDeviceBitmaps::AddRef(v11);
        return v3;
      }
      v10 = DynArrayImpl<0>::AddMultipleAndSet(v2, 8LL, 1LL, &v11);
      v9 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
      v3 = v9;
      if ( v9 >= 0 )
        goto LABEL_5;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x548u);
    return v3;
  }
  while ( a2 != *v4 )
  {
    ++v5;
    ++v4;
    if ( v5 >= *((_DWORD *)v2 + 6) )
      goto LABEL_2;
  }
  return v3;
}
