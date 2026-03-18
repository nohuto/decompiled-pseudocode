/*
 * XREFs of ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x18008C6E0
 * Callers:
 *     ?DrawPath@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x1800801D0 (-DrawPath@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@.c)
 *     ?DrawPath@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x18008D4A4 (-DrawPath@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsValid@CHwTextureRenderTarget@@UEBA_NXZ @ 0x18002CBC0 (-IsValid@CHwTextureRenderTarget@@UEBA_NXZ.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18004DC10 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ?GetTightBounds@CRectangleShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180058270 (-GetTightBounds@CRectangleShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x18005D460 (-EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PE.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180074880 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?IsValid@CHwDisplayRenderTarget@@MEBA_NXZ @ 0x180080700 (-IsValid@CHwDisplayRenderTarget@@MEBA_NXZ.c)
 *     ?FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCLegacyMilBrushRealizer@@AEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x18008D1B4 (-FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureRealization@CImmediateBrushRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x1800AC560 (-EnsureRealization@CImmediateBrushRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@P.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::DrawPathInternal(
        CHwDisplayRenderTarget *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct LegacyMilBrushContext *a6,
        CRectangleShape *a7,
        int a8,
        CImmediateBrushRealizer *a9,
        int a10)
{
  __int64 v10; // rdi
  int v11; // ebx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 (__fastcall *v19)(CHwDisplayRenderTarget *); // r12
  char IsValid; // al
  __int64 (__fastcall *v21)(CImmediateBrushRealizer *__hidden, struct LegacyMilBrushContext *, const struct CContextState *, const struct PixelFormatInfo *); // rbx
  int v22; // r12d
  int v23; // eax
  __int64 (__fastcall *v24)(CRegionShape *, __int64, CBaseMatrix *); // rbx
  int TightBounds; // eax
  int v26; // eax
  __int64 *v27; // rdx
  __int64 *v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  _QWORD *v33; // rcx
  _QWORD *v34; // rax
  int v35; // r9d
  unsigned int v36; // [rsp+20h] [rbp-C1h]
  unsigned int v37; // [rsp+50h] [rbp-91h] BYREF
  int v38[2]; // [rsp+58h] [rbp-89h]
  int v39[2]; // [rsp+60h] [rbp-81h]
  __int64 v40; // [rsp+68h] [rbp-79h]
  __int64 v41; // [rsp+70h] [rbp-71h]
  struct CContextState *v42[3]; // [rsp+78h] [rbp-69h] BYREF
  __int64 v43[2]; // [rsp+90h] [rbp-51h] BYREF
  __int128 v44; // [rsp+A0h] [rbp-41h]
  __int128 v45; // [rsp+B0h] [rbp-31h]
  __int128 v46; // [rsp+C0h] [rbp-21h]

  v10 = *((_QWORD *)this + 20);
  v11 = 0;
  ++*(_DWORD *)(v10 + 504);
  v42[0] = (struct CContextState *)a4;
  *(_QWORD *)v38 = a3;
  *(_QWORD *)v39 = a2;
  v40 = a5;
  v37 = 0;
  v41 = v10;
  *(_DWORD *)(v10 + 508) = GetCurrentThreadId();
  v14 = *((_QWORD *)this + 20);
  ++*(_DWORD *)(v14 + 856);
  v15 = *(_QWORD *)this;
  v16 = *(_OWORD *)(a4 + 220);
  *(_OWORD *)v43 = *(_OWORD *)(a4 + 204);
  v17 = *(_OWORD *)(a4 + 236);
  v44 = v16;
  v18 = *(_OWORD *)(a4 + 252);
  v19 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *))(v15 + 192);
  v45 = v17;
  v46 = v18;
  if ( v19 == CHwDisplayRenderTarget::IsValid )
  {
    IsValid = CHwDisplayRenderTarget::IsValid(this);
  }
  else if ( (char *)v19 == (char *)CHwTextureRenderTarget::IsValid )
  {
    IsValid = CHwTextureRenderTarget::IsValid(this);
  }
  else
  {
    IsValid = v19(this);
  }
  if ( !IsValid || !a9 )
    goto LABEL_16;
  v21 = *(__int64 (__fastcall **)(CImmediateBrushRealizer *__hidden, struct LegacyMilBrushContext *, const struct CContextState *, const struct PixelFormatInfo *))(*(_QWORD *)a9 + 24LL);
  if ( v21 == CBrushResourceRealizer::EnsureRealization )
  {
    v22 = (int)v42[0];
    v23 = CBrushResourceRealizer::EnsureRealization(a9, a6, v42[0], 0LL);
  }
  else
  {
    v22 = (int)v42[0];
    if ( v21 == CImmediateBrushRealizer::EnsureRealization )
      v23 = CImmediateBrushRealizer::EnsureRealization(a9, a6, v42[0], 0LL);
    else
      v23 = v21(a9, a6, v42[0], 0LL);
  }
  v37 = v23;
  v11 = v23;
  if ( v23 < 0 )
  {
    v36 = 484;
LABEL_36:
    v35 = v11;
    goto LABEL_38;
  }
  v24 = *(__int64 (__fastcall **)(CRegionShape *, __int64, CBaseMatrix *))(*(_QWORD *)a7 + 24LL);
  if ( v24 == CRectangleShape::GetTightBounds )
  {
    TightBounds = CRectangleShape::GetTightBounds(a7, (__int64)v42, 0LL);
  }
  else if ( v24 == CShape::GetTightBounds )
  {
    TightBounds = CShape::GetTightBounds(a7, (__int64)v42, 0LL);
  }
  else
  {
    TightBounds = v24(a7, (__int64)v42, 0LL);
  }
  v37 = TightBounds;
  v11 = TightBounds;
  if ( TightBounds < 0 )
  {
    v36 = 487;
    goto LABEL_36;
  }
  if ( *((_BYTE *)a6 + 132) )
    D2DMatrixMultiply(
      (struct D2DMatrix *)v43,
      (const struct D2DMatrix *)v43,
      (struct LegacyMilBrushContext *)((char *)a6 + 68));
  v26 = CHwSurfaceRenderTarget::FillPath(
          (int)this,
          v39[0],
          v38[0],
          v22,
          (__int64)a7,
          v40,
          (__int64)v42,
          a9,
          (__int64)v43,
          a10);
  v37 = v26;
  v11 = v26;
  if ( v26 >= 0 )
    goto LABEL_14;
  v36 = 504;
  v35 = v26;
LABEL_38:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, v36);
LABEL_14:
  if ( v11 == -2003304441 || v11 == -2003304438 )
  {
    v11 = 0;
    v37 = 0;
  }
LABEL_16:
  TranslateDXGIorD3DErrorInContext(v11, 0, &v37);
  v27 = *(__int64 **)(v14 + 936);
  v28 = (__int64 *)(v14 + 928);
  while ( v27 != v28 && *((_DWORD *)v27 + 8) == *(_DWORD *)(v14 + 856) )
  {
    *((_DWORD *)v27 + 8) = 0;
    v27 = (__int64 *)v27[1];
  }
  v29 = *v27;
  if ( (__int64 *)*v27 != v28 )
  {
    v33 = *(_QWORD **)(v14 + 936);
    *v27 = (__int64)v28;
    v34 = *(_QWORD **)(v14 + 920);
    *(_QWORD *)(v14 + 936) = v27;
    *v34 = v29;
    *(_QWORD *)(v29 + 8) = v34;
    *(_QWORD *)(v14 + 920) = v33;
    *v33 = v14 + 912;
  }
  v30 = v41;
  --*(_DWORD *)(v14 + 856);
  if ( (*(_DWORD *)(v30 + 504))-- == 1 )
    *(_DWORD *)(v30 + 508) = 0;
  return v37;
}
