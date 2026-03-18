/*
 * XREFs of ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DC@@@@Z @ 0x18006B140
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004DC00 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?IsOfType@?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DC@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001D960 (-IsOfType@-$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DC@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x180064584 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@C.c)
 *     ?DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x18006979C (-DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4Fl.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18006F210 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?IsOfType@CBitmapResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AE890 (-IsOfType@CBitmapResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x180106698 (Template_qq.c)
 */

__int64 __fastcall CDrawingContext::DrawImage(CDrawingContext *this, __int64 a2, __int128 *a3, _OWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  __int64 v12; // rdi
  CCachedVisualImage *v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  bool (__fastcall *v17)(__int64, int); // rax
  bool v18; // al
  unsigned int v19; // [rsp+20h] [rbp-78h]
  struct IBitmapSource *v20; // [rsp+40h] [rbp-58h] BYREF
  __int128 v21; // [rsp+48h] [rbp-50h] BYREF
  __int128 v22; // [rsp+58h] [rbp-40h] BYREF

  v4 = 0;
  v20 = 0LL;
  if ( !CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v9, &EVTDESC_ETWGUID_DRAWEVENT_Start, 4LL, *(unsigned int *)(v9 + 6480));
  if ( !a2 )
    goto LABEL_14;
  v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL);
  if ( !(v10 == CBitmapResource::IsOfType ? CBitmapResource::IsOfType(a2, 56LL) : (unsigned __int8)v10(a2, 56LL)) )
    goto LABEL_14;
  v12 = a2 - 16;
  v21 = *a3;
  if ( a4 )
  {
    v17 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a4 + 48LL);
    if ( v17 == TValueResource<MilRectF,MILCMD_RECTRESOURCE,50>::IsOfType )
      v18 = TValueResource<MilRectF,MILCMD_RECTRESOURCE,50>::IsOfType((__int64)a4, 50);
    else
      v18 = v17((__int64)a4, 50);
    if ( !v18 )
    {
      v4 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x68u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x5CBu);
      goto LABEL_14;
    }
    v21 = a4[7];
  }
  if ( v12 )
    v13 = (CCachedVisualImage *)(v12 + 8);
  else
    v13 = 0LL;
  v14 = CDrawingContext::ImageSourceToBitmapSource(this, v13, 0LL, &v22, &v20);
  v4 = v14;
  if ( v14 < 0 )
  {
    v19 = 1491;
    goto LABEL_30;
  }
  if ( !v20 )
    goto LABEL_16;
  v14 = CDrawingContext::DrawBitmapSource(
          this,
          (__int64)v20,
          (__int64)&v22,
          (float *)&v21,
          *((_DWORD *)this + 1620),
          0,
          0,
          0LL);
  v4 = v14;
  if ( v14 < 0 )
  {
    v19 = 1501;
LABEL_30:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, v19);
  }
LABEL_14:
  if ( v20 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v20 + 16LL))(v20);
LABEL_16:
  if ( !CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v15, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 4LL, *((unsigned int *)this + 1620));
  return v4;
}
