/*
 * XREFs of ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800939E0
 * Callers:
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004D5F0 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF.c)
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@AEAVCVertexConstantBuffer@@AEBVCLightsMask@@@Z @ 0x180056190 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@A.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180005F0C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
        CCompositionSurfaceBitmap *this,
        struct IBitmapRealization **a2)
{
  unsigned int v2; // edi
  CBitmapOfDeviceBitmaps *v5; // rcx
  void (*v6)(void); // rax
  __int64 v7; // rax
  struct IBitmapRealization *v8; // rax
  __int64 v10; // rcx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  CCompositionSurfaceInfo *v12; // rcx
  struct CBitmapRealization *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  v2 = 0;
  *a2 = 0LL;
  if ( !*((_QWORD *)this + 51) )
  {
    if ( *((_BYTE *)this + 452) )
    {
      --*(_DWORD *)(*((_QWORD *)this - 13) + 212LL);
      *((_BYTE *)this + 452) = 0;
    }
    if ( *((_BYTE *)this + 453) )
    {
      --*(_DWORD *)(*((_QWORD *)this - 13) + 208LL);
      *((_BYTE *)this + 453) = 0;
    }
    v10 = *((_QWORD *)this + 51);
    if ( *((_QWORD *)this + 50) )
    {
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this
                                                                                        + 50));
      v12 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 50);
      *((_QWORD *)this + 51) = RenderingRealizationNoRef;
      if ( CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v12) )
      {
        v13 = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this + 50));
        (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v13 + 8LL))(v13);
      }
    }
    else if ( v10 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      *((_QWORD *)this + 51) = 0LL;
    }
    v14 = *((_QWORD *)this + 51);
    if ( v14 )
    {
      if ( *(_DWORD *)(v14 + 248) == 3 )
      {
        ++*(_DWORD *)(*((_QWORD *)this - 13) + 212LL);
        *((_BYTE *)this + 452) = 1;
      }
      v15 = *((_QWORD *)this + 51);
      if ( (*(_BYTE *)(v15 + 244) & 2) != 0 || (*(_BYTE *)(v15 + 244) & 1) != 0 && *(_QWORD *)(v15 + 136) )
      {
        ++*(_DWORD *)(*((_QWORD *)this - 13) + 208LL);
        *((_BYTE *)this + 453) = 1;
      }
    }
  }
  if ( *((_QWORD *)this + 51) )
  {
    v5 = (CBitmapOfDeviceBitmaps *)*((_QWORD *)this + 51);
    v6 = *(void (**)(void))(*(_QWORD *)v5 + 8LL);
    if ( (char *)v6 == (char *)CBitmapOfDeviceBitmaps::AddRef )
      CBitmapOfDeviceBitmaps::AddRef(v5);
    else
      v6();
    v7 = *((_QWORD *)this + 51);
    if ( v7 )
      v8 = (struct IBitmapRealization *)(v7 + 112);
    else
      v8 = 0LL;
    *a2 = v8;
  }
  else
  {
    v2 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0xE1u);
  }
  return v2;
}
