/*
 * XREFs of ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0CN@@@@Z @ 0x18002D600
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004E7A0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180022D18 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x180023350 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@C.c)
 *     ?DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x18002AFC4 (-DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4Fl.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_qq @ 0x1800E1F4C (Template_qq.c)
 */

__int64 __fastcall CDrawingContext::DrawImage(CDrawingContext *this, __int64 a2, __int128 *a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v9; // rcx
  __int64 v10; // r15
  CBitmapResource *v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-88h]
  struct IBitmapSource *v16; // [rsp+40h] [rbp-68h] BYREF
  __int128 v17; // [rsp+48h] [rbp-60h] BYREF
  __int128 v18; // [rsp+58h] [rbp-50h] BYREF

  v4 = 0;
  v16 = 0LL;
  if ( !(unsigned __int8)CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v9, &EVTDESC_ETWGUID_DRAWEVENT_Start, 4LL, *(unsigned int *)(v9 + 5752));
  if ( !a2 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL))(a2, 51LL) )
    goto LABEL_12;
  v10 = a2 - 16;
  v17 = *a3;
  if ( a4 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 48LL))(a4, 45LL) )
    {
      v4 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x68u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x5C2u);
      goto LABEL_12;
    }
    v17 = *(_OWORD *)(a4 + 40);
  }
  if ( v10 )
    v11 = (CBitmapResource *)(v10 + 8);
  else
    v11 = 0LL;
  v12 = CDrawingContext::ImageSourceToBitmapSource(this, v11, 0LL, &v18, &v16);
  v4 = v12;
  if ( v12 < 0 )
  {
    v15 = 1482;
LABEL_24:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v15);
    goto LABEL_12;
  }
  if ( !v16 )
    goto LABEL_14;
  v12 = CDrawingContext::DrawBitmapSource(
          this,
          (__int64)v16,
          (__int64)&v18,
          (float *)&v17,
          *((_DWORD *)this + 1438),
          0,
          0,
          0LL);
  v4 = v12;
  if ( v12 < 0 )
  {
    v15 = 1492;
    goto LABEL_24;
  }
LABEL_12:
  if ( v16 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v16 + 16LL))(v16);
LABEL_14:
  if ( !(unsigned __int8)CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v13, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 4LL, *((unsigned int *)this + 1438));
  return v4;
}
