/*
 * XREFs of ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DB@@@@Z @ 0x180042970
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18009ECF0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180037068 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x18003770C (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@C.c)
 *     ?DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x18003FC14 (-DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4Fl.c)
 *     ?IsOfType@CBitmapResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18005C340 (-IsOfType@CBitmapResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DB@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800ABEA0 (-IsOfType@-$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DB@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     Template_qq @ 0x180100238 (Template_qq.c)
 */

__int64 __fastcall CDrawingContext::DrawImage(CDrawingContext *this, __int64 a2, __int128 *a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(__int64, __int64); // r14
  __int64 v12; // rdi
  int (__fastcall ***v13)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **); // rdx
  int v14; // eax
  __int64 v15; // rcx
  __int64 (__fastcall *v17)(__int64, __int64); // rbx
  char v18; // al
  unsigned int v19; // [rsp+20h] [rbp-88h]
  struct IBitmapSource *v20; // [rsp+40h] [rbp-68h] BYREF
  __int128 v21; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v22[16]; // [rsp+58h] [rbp-50h] BYREF

  v4 = 0;
  v20 = 0LL;
  if ( !(unsigned __int8)CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v9, &EVTDESC_ETWGUID_DRAWEVENT_Start, 4LL, *(unsigned int *)(v9 + 5784));
  if ( !a2 )
    goto LABEL_14;
  v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL);
  if ( !(v10 == CBitmapResource::IsOfType ? CBitmapResource::IsOfType(a2, 55LL) : (unsigned __int8)v10(a2, 55LL)) )
    goto LABEL_14;
  v12 = a2 - 16;
  v21 = *a3;
  if ( a4 )
  {
    v17 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 48LL);
    if ( v17 == TValueResource<MilRectF,MILCMD_RECTRESOURCE,49>::IsOfType )
      v18 = TValueResource<MilRectF,MILCMD_RECTRESOURCE,49>::IsOfType(a4, 49LL);
    else
      v18 = v17(a4, 49LL);
    if ( !v18 )
    {
      v4 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x68u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x5C9u);
      goto LABEL_14;
    }
    v21 = *(_OWORD *)(a4 + 40);
  }
  if ( v12 )
    v13 = (int (__fastcall ***)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **))(v12 + 8);
  else
    v13 = 0LL;
  v14 = CDrawingContext::ImageSourceToBitmapSource(this, v13, 0LL, (struct MilRectF *)v22, &v20);
  v4 = v14;
  if ( v14 < 0 )
  {
    v19 = 1489;
LABEL_30:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, v19);
    goto LABEL_14;
  }
  if ( !v20 )
    goto LABEL_16;
  v14 = CDrawingContext::DrawBitmapSource(
          this,
          (__int64)v20,
          (__int64)v22,
          (float *)&v21,
          *((_DWORD *)this + 1446),
          0,
          0,
          0LL);
  v4 = v14;
  if ( v14 < 0 )
  {
    v19 = 1499;
    goto LABEL_30;
  }
LABEL_14:
  if ( v20 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v20 + 16LL))(v20);
LABEL_16:
  if ( !(unsigned __int8)CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v15, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 4LL, *((unsigned int *)this + 1446));
  return v4;
}
