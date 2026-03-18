/*
 * XREFs of ?GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileLegacyMilBrush@@PEBULegacyMilBrushContext@@PEBVCMILMatrix@@2PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIBitmapSource@@PEAV4@PEAHPEAW4XSpaceDefinition@@@Z @ 0x180136FD8
 * Callers:
 *     ?GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18005CEA0 (-GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBru.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180044090 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180044630 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180044FA0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?CreateTileBrushIntermediate@CTileBrushUtils@@SAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@1PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAV3@PEAHPEAW4XSpaceDefinition@@@Z @ 0x180136EF8 (-CreateTileBrushIntermediate@CTileBrushUtils@@SAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@1PEB.c)
 */

__int64 __fastcall CTileBrushUtils::GetIntermediateBaseTile(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int128 *a5,
        int a6,
        _QWORD *a7,
        struct CMILMatrix *a8,
        int *a9,
        _DWORD *a10)
{
  int v12; // eax
  __int64 v13; // rsi
  unsigned int v14; // edi
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  struct IRenderTargetBitmap *v21; // [rsp+50h] [rbp-30h] BYREF
  __int64 v22; // [rsp+58h] [rbp-28h] BYREF
  struct _D3DCOLORVALUE v23; // [rsp+60h] [rbp-20h] BYREF

  v21 = 0LL;
  *(_QWORD *)&v23.r = 0LL;
  v22 = 0LL;
  v12 = CTileBrushUtils::CreateTileBrushIntermediate(
          a2,
          a3,
          a4,
          a5,
          a6,
          &v21,
          (struct CDrawingContext **)&v23,
          a8,
          a9,
          a10);
  v13 = *(_QWORD *)&v23.r;
  v14 = v12;
  if ( v12 >= 0 )
  {
    if ( !*a9 )
    {
      v15 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *, __int64 *))(*(_QWORD *)v21 + 176LL))(v21, &v22);
      v14 = v15;
      if ( v15 >= 0 )
      {
        v16 = CDrawingContext::BeginFrame((CDrawingContext *)v13, v21, 0LL, 0, 0LL, 0LL, 0, 0LL);
        v14 = v16;
        if ( v16 >= 0 )
        {
          *(_QWORD *)&v23.r = 0LL;
          *(_QWORD *)&v23.b = 0LL;
          v17 = CDrawingContext::Clear((struct ID2D1PrivateCompositorRenderer ***)v13, &v23);
          v14 = v17;
          if ( v17 >= 0 )
          {
            v18 = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 200LL))(a1, a2, v13);
            v14 = v18;
            if ( v18 >= 0 )
            {
              CDrawingContext::EndFrame((CDrawingContext *)v13);
              v19 = v22;
              v22 = 0LL;
              *a7 = v19;
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x195u);
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x191u);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x186u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x17Du);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x172u);
  }
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v21 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v13 )
    CMILCOMBase::InternalRelease((CMILCOMBase *)(v13 + 8));
  return v14;
}
