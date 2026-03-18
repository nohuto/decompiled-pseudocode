/*
 * XREFs of ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEAUBrushContext@@PEAVCShape@@PEAVCBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x180081870
 * Callers:
 *     ?DrawPath@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAUBrushContext@@PEAVCShape@@PEAVCBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x1800448D0 (-DrawPath@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@.c)
 *     ?DrawPath@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAUBrushContext@@PEAVCShape@@PEAVCBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x180082384 (-DrawPath@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180042CF0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?IsValid@CHwDisplayRenderTarget@@MEBA_NXZ @ 0x180044CE0 (-IsValid@CHwDisplayRenderTarget@@MEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180077FF0 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ?GetTightBounds@CRectangleShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180078DC0 (-GetTightBounds@CRectangleShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCBrushRealizer@@AEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x1800820A4 (-FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x180083270 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 *     ?EnsureRealization@CBrushResourceRealizer@@UEAAJPEAUBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x180083520 (-EnsureRealization@CBrushResourceRealizer@@UEAAJPEAUBrushContext@@PEBUCContextState@@PEBUPixelFo.c)
 *     ?EnsureRealization@CImmediateBrushRealizer@@UEAAJPEAUBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x1800842D0 (-EnsureRealization@CImmediateBrushRealizer@@UEAAJPEAUBrushContext@@PEBUCContextState@@PEBUPixelF.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::DrawPathInternal(
        CHwDisplayRenderTarget *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct BrushContext *a6,
        CRectangleShape *a7,
        int a8,
        CImmediateBrushRealizer *a9,
        int a10)
{
  __int64 v10; // rbx
  int v11; // edi
  __int64 v14; // rbx
  __int64 v15; // rax
  __int128 v16; // xmm1
  __int64 (__fastcall *v17)(CHwDisplayRenderTarget *); // rax
  __int128 v18; // xmm1
  char IsValid; // al
  __int64 (__fastcall *v20)(CBrushResourceRealizer *__hidden, struct BrushContext *, const struct CContextState *, const struct PixelFormatInfo *); // rdi
  int v21; // eax
  __int64 (__fastcall *v22)(CRectangleShape *, __int64, const struct D2DMatrix *); // rdi
  int TightBounds; // eax
  int v24; // eax
  __int64 *v25; // rdx
  __int64 *v26; // r8
  __int64 v27; // r9
  _QWORD *v29; // rcx
  _QWORD *v30; // rax
  int v31; // r9d
  unsigned int v32; // [rsp+20h] [rbp-C1h]
  unsigned int v33; // [rsp+50h] [rbp-91h] BYREF
  int v34[2]; // [rsp+58h] [rbp-89h]
  int v35[2]; // [rsp+60h] [rbp-81h]
  __int64 v36; // [rsp+68h] [rbp-79h]
  __int64 v37; // [rsp+70h] [rbp-71h] BYREF
  __int64 v38[3]; // [rsp+78h] [rbp-69h] BYREF
  __int64 v39[2]; // [rsp+90h] [rbp-51h] BYREF
  __int128 v40; // [rsp+A0h] [rbp-41h]
  __int128 v41; // [rsp+B0h] [rbp-31h]
  __int128 v42; // [rsp+C0h] [rbp-21h]

  v10 = *((_QWORD *)this + 20);
  v11 = 0;
  ++*(_DWORD *)(v10 + 512);
  *(_QWORD *)v34 = a3;
  *(_QWORD *)v35 = a2;
  v36 = a5;
  v33 = 0;
  v37 = v10;
  *(_DWORD *)(v10 + 516) = GetCurrentThreadId();
  v14 = *((_QWORD *)this + 20);
  ++*(_DWORD *)(v14 + 904);
  v15 = *(_QWORD *)this;
  v16 = *(_OWORD *)(a4 + 220);
  *(_OWORD *)v39 = *(_OWORD *)(a4 + 204);
  v17 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *))(v15 + 192);
  v40 = v16;
  v38[0] = (__int64)v17;
  v18 = *(_OWORD *)(a4 + 252);
  v41 = *(_OWORD *)(a4 + 236);
  v42 = v18;
  if ( v17 == CHwDisplayRenderTarget::IsValid )
    IsValid = CHwDisplayRenderTarget::IsValid(this);
  else
    IsValid = ((__int64 (__fastcall *)(CHwDisplayRenderTarget *))v38[0])(this);
  if ( !IsValid || !a9 )
    goto LABEL_16;
  v20 = *(__int64 (__fastcall **)(CBrushResourceRealizer *__hidden, struct BrushContext *, const struct CContextState *, const struct PixelFormatInfo *))(*(_QWORD *)a9 + 24LL);
  if ( v20 == CBrushResourceRealizer::EnsureRealization )
  {
    v21 = CBrushResourceRealizer::EnsureRealization(a9, a6, (const struct CContextState *)a4, 0LL);
  }
  else if ( v20 == CImmediateBrushRealizer::EnsureRealization )
  {
    v21 = CImmediateBrushRealizer::EnsureRealization(a9, a6, (const struct CContextState *)a4, 0LL);
  }
  else
  {
    v21 = v20(a9, a6, (const struct CContextState *)a4, 0LL);
  }
  v33 = v21;
  v11 = v21;
  if ( v21 < 0 )
  {
    v32 = 484;
LABEL_31:
    v31 = v11;
    goto LABEL_34;
  }
  v22 = *(__int64 (__fastcall **)(CRectangleShape *, __int64, const struct D2DMatrix *))(*(_QWORD *)a7 + 24LL);
  if ( v22 == CShape::GetTightBounds )
  {
    TightBounds = CShape::GetTightBounds(a7, (__int64)v38, 0LL);
  }
  else if ( v22 == CRectangleShape::GetTightBounds )
  {
    TightBounds = CRectangleShape::GetTightBounds(a7, (__int64)v38, 0LL);
  }
  else
  {
    TightBounds = v22(a7, (__int64)v38, 0LL);
  }
  v33 = TightBounds;
  v11 = TightBounds;
  if ( TightBounds < 0 )
  {
    v32 = 487;
    goto LABEL_31;
  }
  if ( *((_BYTE *)a6 + 132) )
    D2DMatrixMultiply((struct D2DMatrix *)v39, (const struct D2DMatrix *)v39, (struct BrushContext *)((char *)a6 + 68));
  v24 = CHwSurfaceRenderTarget::FillPath(
          (int)this,
          v35[0],
          v34[0],
          a4,
          (__int64)a7,
          v36,
          (__int64)v38,
          a9,
          (__int64)v39,
          a10);
  v33 = v24;
  v11 = v24;
  if ( v24 >= 0 )
    goto LABEL_14;
  v32 = 504;
  v31 = v24;
LABEL_34:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, v32);
LABEL_14:
  if ( v11 == -2003304441 || v11 == -2003304438 )
  {
    v11 = 0;
    v33 = 0;
  }
LABEL_16:
  TranslateDXGIorD3DErrorInContext(v11, 0, &v33);
  v25 = *(__int64 **)(v14 + 984);
  v26 = (__int64 *)(v14 + 976);
  while ( v25 != v26 && *((_DWORD *)v25 + 8) == *(_DWORD *)(v14 + 904) )
  {
    *((_DWORD *)v25 + 8) = 0;
    v25 = (__int64 *)v25[1];
  }
  v27 = *v25;
  if ( (__int64 *)*v25 != v26 )
  {
    v29 = *(_QWORD **)(v14 + 984);
    *v25 = (__int64)v26;
    v30 = *(_QWORD **)(v14 + 968);
    *(_QWORD *)(v14 + 984) = v25;
    *v30 = v27;
    *(_QWORD *)(v27 + 8) = v30;
    *(_QWORD *)(v14 + 968) = v29;
    *v29 = v14 + 960;
  }
  --*(_DWORD *)(v14 + 904);
  CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v37);
  return v33;
}
