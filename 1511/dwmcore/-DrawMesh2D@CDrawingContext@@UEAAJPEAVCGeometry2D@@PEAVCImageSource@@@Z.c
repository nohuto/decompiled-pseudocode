/*
 * XREFs of ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x18010CCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180037068 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x18003770C (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@C.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180046830 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     Template_qq @ 0x180100238 (Template_qq.c)
 */

__int64 __fastcall CDrawingContext::DrawMesh2D(
        CDrawingContext *this,
        struct CGeometry2D *a2,
        int (__fastcall ***a3)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **))
{
  unsigned int v3; // esi
  __int64 v7; // rcx
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  char *v12; // r14
  int v13; // eax
  __int64 v14; // rcx
  struct IBitmapSource *v16; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v17[16]; // [rsp+38h] [rbp-40h] BYREF

  v3 = 0;
  v16 = 0LL;
  if ( !(unsigned __int8)CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v7, &EVTDESC_ETWGUID_DRAWEVENT_Start, 7, *(_DWORD *)(v7 + 5784));
  if ( a2 )
  {
    if ( a3 )
    {
      v8 = (*(__int64 (__fastcall **)(struct CGeometry2D *))(*(_QWORD *)a2 + 104LL))(a2);
      v9 = (*(__int64 (__fastcall **)(struct CGeometry2D *))(*(_QWORD *)a2 + 112LL))(a2);
      if ( v8 )
      {
        if ( v9 )
        {
          v10 = CDrawingContext::ImageSourceToBitmapSource(this, a3 + 1, 0LL, (struct MilRectF *)v17, &v16);
          v3 = v10;
          if ( v10 >= 0 )
          {
            if ( !v16 )
              goto LABEL_20;
            v11 = CDrawingContext::ApplyRenderStateInternal(this, 0);
            v3 = v11;
            if ( v11 >= 0 )
            {
              if ( this )
                v12 = (char *)this + 56;
              else
                v12 = 0LL;
              v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, char *, struct CGeometry2D *, struct IBitmapSource *))(**((_QWORD **)this + 44) + 88LL))(
                      *((_QWORD *)this + 44),
                      *((_QWORD *)this + 47),
                      v12,
                      (char *)this + 72,
                      a2,
                      v16);
              v3 = v13;
              if ( v13 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1277u);
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1271u);
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x126Du);
          }
        }
      }
    }
  }
  if ( v16 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v16 + 16LL))(v16);
LABEL_20:
  if ( !(unsigned __int8)CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v14, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 7, *((_DWORD *)this + 1446));
  return v3;
}
