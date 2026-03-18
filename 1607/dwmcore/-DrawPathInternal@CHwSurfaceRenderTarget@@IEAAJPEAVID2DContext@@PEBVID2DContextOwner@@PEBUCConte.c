/*
 * XREFs of ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x18002DB00
 * Callers:
 *     ?DrawPath@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x18002D450 (-DrawPath@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@.c)
 *     ?DrawPath@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x18008EB70 (-DrawPath@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180025320 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18002BF80 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?IsValid@CHwTextureRenderTarget@@UEBA_NXZ @ 0x18002D840 (-IsValid@CHwTextureRenderTarget@@UEBA_NXZ.c)
 *     ?FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCLegacyMilBrushRealizer@@AEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x18002E570 (-FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@.c)
 *     ?GetDeviceNoRef@CHwSurfaceRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x18002E6D0 (-GetDeviceNoRef@CHwSurfaceRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x18002ECB0 (-EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PE.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?GetDeviceNoRef@CHwDisplayRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x18008EE10 (-GetDeviceNoRef@CHwDisplayRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?IsValid@CHwDisplayRenderTarget@@MEBA_NXZ @ 0x18008EE30 (-IsValid@CHwDisplayRenderTarget@@MEBA_NXZ.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180097A50 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?EnsureRealization@CImmediateBrushRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x1800AF9C0 (-EnsureRealization@CImmediateBrushRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@P.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::DrawPathInternal(
        CHwSurfaceRenderTarget *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct LegacyMilBrushContext *a6,
        CRectanglesShape *a7,
        int a8,
        CImmediateBrushRealizer *a9,
        int a10)
{
  unsigned int v10; // edi
  __int128 v11; // xmm0
  __int128 v13; // xmm1
  __int64 v15; // rax
  __int128 v16; // xmm0
  bool (__fastcall *v17)(CHwTextureRenderTarget *); // rax
  bool IsValid; // al
  __int64 (__fastcall *v19)(CHwDisplayRenderTarget *__hidden, struct CD3DDeviceLevel1 **); // rax
  int DeviceNoRef; // eax
  struct CD3DDeviceLevel1 *v21; // rbx
  __int64 (__fastcall *v22)(CBrushResourceRealizer *__hidden, struct LegacyMilBrushContext *, const struct CContextState *, const struct PixelFormatInfo *); // rax
  int v23; // eax
  __int64 (__fastcall *v24)(CRegionShape *, _QWORD *); // rax
  int TightBounds; // eax
  int v26; // eax
  char *v27; // rdx
  char *v28; // r8
  __int64 v29; // r9
  _QWORD *v31; // rcx
  _QWORD *v32; // rax
  unsigned int v33; // [rsp+50h] [rbp-A1h] BYREF
  struct CD3DDeviceLevel1 *v34; // [rsp+58h] [rbp-99h] BYREF
  __int64 v35; // [rsp+60h] [rbp-91h]
  __int64 v36; // [rsp+68h] [rbp-89h]
  __int64 v37; // [rsp+70h] [rbp-81h]
  __int64 v38[2]; // [rsp+80h] [rbp-71h] BYREF
  __int128 v39; // [rsp+90h] [rbp-61h]
  __int128 v40; // [rsp+A0h] [rbp-51h]
  __int128 v41; // [rsp+B0h] [rbp-41h]
  int v42; // [rsp+C0h] [rbp-31h]
  __int64 v43[2]; // [rsp+D0h] [rbp-21h] BYREF

  v10 = 0;
  v11 = *(_OWORD *)(a4 + 212);
  v13 = *(_OWORD *)(a4 + 228);
  v35 = a5;
  v42 = *(_DWORD *)(a4 + 276);
  v15 = *(_QWORD *)this;
  *(_OWORD *)v38 = v11;
  v16 = *(_OWORD *)(a4 + 244);
  v36 = a3;
  v17 = *(bool (__fastcall **)(CHwTextureRenderTarget *))(v15 + 208);
  v39 = v13;
  v37 = a2;
  v33 = 0;
  v40 = v16;
  v41 = *(_OWORD *)(a4 + 260);
  if ( v17 == CHwDisplayRenderTarget::IsValid )
  {
    IsValid = CHwDisplayRenderTarget::IsValid(this);
  }
  else if ( v17 == CHwTextureRenderTarget::IsValid )
  {
    IsValid = CHwTextureRenderTarget::IsValid(this);
  }
  else
  {
    IsValid = v17(this);
  }
  if ( IsValid && a9 )
  {
    v19 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *__hidden, struct CD3DDeviceLevel1 **))(*(_QWORD *)this
                                                                                                 + 216LL);
    if ( v19 == CHwDisplayRenderTarget::GetDeviceNoRef )
    {
      DeviceNoRef = CHwDisplayRenderTarget::GetDeviceNoRef(this, &v34);
    }
    else if ( v19 == CHwSurfaceRenderTarget::GetDeviceNoRef )
    {
      DeviceNoRef = CHwSurfaceRenderTarget::GetDeviceNoRef(this, &v34);
    }
    else
    {
      DeviceNoRef = v19(this, &v34);
    }
    v33 = DeviceNoRef;
    v10 = DeviceNoRef;
    if ( DeviceNoRef < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DeviceNoRef, 0x1D5u);
    }
    else
    {
      v21 = v34;
      ++*((_DWORD *)v34 + 222);
      v22 = *(__int64 (__fastcall **)(CBrushResourceRealizer *__hidden, struct LegacyMilBrushContext *, const struct CContextState *, const struct PixelFormatInfo *))(*(_QWORD *)a9 + 24LL);
      if ( v22 == CBrushResourceRealizer::EnsureRealization )
      {
        v23 = CBrushResourceRealizer::EnsureRealization(a9, a6, (const struct CContextState *)a4, 0LL);
      }
      else if ( v22 == CImmediateBrushRealizer::EnsureRealization )
      {
        v23 = CImmediateBrushRealizer::EnsureRealization(a9, a6, (const struct CContextState *)a4, 0LL);
      }
      else
      {
        v23 = v22(a9, a6, (const struct CContextState *)a4, 0LL);
      }
      v33 = v23;
      v10 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x1E7u);
        v27 = (char *)*((_QWORD *)v21 + 121);
        v28 = (char *)v21 + 960;
        while ( v27 != v28 && *((_DWORD *)v27 + 8) == *((_DWORD *)v21 + 222) )
        {
          *((_DWORD *)v27 + 8) = 0;
          v27 = (char *)*((_QWORD *)v27 + 1);
        }
      }
      else
      {
        v24 = *(__int64 (__fastcall **)(CRegionShape *, _QWORD *))(*(_QWORD *)a7 + 24LL);
        if ( v24 == CRegionShape::GetTightBounds )
        {
          TightBounds = CRegionShape::GetTightBounds(a7, v43);
        }
        else if ( (char *)v24 == (char *)CRectanglesShape::GetTightBounds )
        {
          TightBounds = CRectanglesShape::GetTightBounds(a7, v43);
        }
        else
        {
          TightBounds = ((__int64 (__fastcall *)(CRectanglesShape *, __int64 *, _QWORD))v24)(a7, v43, 0LL);
        }
        v33 = TightBounds;
        v10 = TightBounds;
        if ( TightBounds < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0x1EAu);
          v27 = (char *)*((_QWORD *)v21 + 121);
          v28 = (char *)v21 + 960;
          while ( v27 != v28 && *((_DWORD *)v27 + 8) == *((_DWORD *)v21 + 222) )
          {
            *((_DWORD *)v27 + 8) = 0;
            v27 = (char *)*((_QWORD *)v27 + 1);
          }
        }
        else
        {
          if ( *((_BYTE *)a6 + 140) )
            CMILMatrix::Multiply(
              (const struct CMILMatrix *)v38,
              (struct LegacyMilBrushContext *)((char *)a6 + 72),
              (struct CMILMatrix *)v38);
          v26 = CHwSurfaceRenderTarget::FillPath(this, a7, v35, (__int64)v43, a9, (__int64)v38, a10);
          v33 = v26;
          v10 = v26;
          if ( v26 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x1FBu);
            v27 = (char *)*((_QWORD *)v21 + 121);
            v28 = (char *)v21 + 960;
            while ( v27 != v28 && *((_DWORD *)v27 + 8) == *((_DWORD *)v21 + 222) )
            {
              *((_DWORD *)v27 + 8) = 0;
              v27 = (char *)*((_QWORD *)v27 + 1);
            }
          }
          else
          {
            v27 = (char *)*((_QWORD *)v21 + 121);
            v28 = (char *)v21 + 960;
            while ( v27 != v28 && *((_DWORD *)v27 + 8) == *((_DWORD *)v21 + 222) )
            {
              *((_DWORD *)v27 + 8) = 0;
              v27 = (char *)*((_QWORD *)v27 + 1);
            }
          }
        }
      }
      v29 = *(_QWORD *)v27;
      if ( *(char **)v27 != v28 )
      {
        v31 = (_QWORD *)*((_QWORD *)v21 + 121);
        *(_QWORD *)v27 = v28;
        *((_QWORD *)v21 + 121) = v27;
        v32 = (_QWORD *)*((_QWORD *)v21 + 119);
        *v32 = v29;
        *(_QWORD *)(v29 + 8) = v32;
        *((_QWORD *)v21 + 119) = v31;
        *v31 = (char *)v21 + 944;
      }
      --*((_DWORD *)v21 + 222);
    }
    if ( v10 == -2003304441 || v10 == -2003304438 )
    {
      v10 = 0;
      v33 = 0;
    }
  }
  TranslateDXGIorD3DErrorInContext(v10, 0LL, &v33);
  return v33;
}
