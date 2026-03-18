/*
 * XREFs of ?GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileLegacyMilBrush@@PEBULegacyMilBrushContext@@PEBVCMILMatrix@@2PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIBitmapSource@@PEAV4@PEAHPEAW4XSpaceDefinition@@@Z @ 0x18015CC48
 * Callers:
 *     ?GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x180024750 (-GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBru.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DF@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006C640 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006CC40 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18006D550 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateTileBrushIntermediate@CTileBrushUtils@@SAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@1PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAV3@PEAHPEAW4XSpaceDefinition@@@Z @ 0x18015CB68 (-CreateTileBrushIntermediate@CTileBrushUtils@@SAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@1PEB.c)
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
  __int64 v13; // rdi
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  __int64 v21; // [rsp+50h] [rbp-30h] BYREF
  struct IRenderTargetBitmap *v22; // [rsp+58h] [rbp-28h] BYREF
  struct _D3DCOLORVALUE v23; // [rsp+60h] [rbp-20h] BYREF

  v22 = 0LL;
  *(_QWORD *)&v23.r = 0LL;
  v21 = 0LL;
  v12 = CTileBrushUtils::CreateTileBrushIntermediate(
          a2,
          a3,
          a4,
          a5,
          a6,
          &v22,
          (struct CDrawingContext **)&v23,
          a8,
          a9,
          a10);
  v13 = *(_QWORD *)&v23.r;
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x172u);
  }
  else if ( !*a9 )
  {
    v15 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *, __int64 *))(*(_QWORD *)v22 + 184LL))(v22, &v21);
    v14 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x17Du);
    }
    else
    {
      v16 = CDrawingContext::BeginFrame((CDrawingContext *)v13, v22, 0LL, 0, 0LL, 0LL, 0, 0LL);
      v14 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x186u);
      }
      else
      {
        *(_QWORD *)&v23.r = 0LL;
        *(_QWORD *)&v23.b = 0LL;
        v17 = CDrawingContext::Clear((CD2DContext **)v13, &v23);
        v14 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x191u);
        }
        else
        {
          v18 = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 208LL))(a1, a2, v13);
          v14 = v18;
          if ( v18 >= 0 )
          {
            CDrawingContext::EndFrame((CDrawingContext *)v13);
            v19 = v21;
            v21 = 0LL;
            *a7 = v19;
            goto LABEL_15;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x195u);
        }
      }
    }
  }
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
LABEL_15:
  if ( v22 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v13 )
    CMILCOMBase::InternalRelease((CMILCOMBase *)(v13 + 8));
  return v14;
}
