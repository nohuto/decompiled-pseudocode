/*
 * XREFs of ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x1800F21D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180022D18 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x180023350 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@C.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180030950 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_qq @ 0x1800E1F4C (Template_qq.c)
 */

__int64 __fastcall CDrawingContext::DrawMesh2D(CDrawingContext *this, struct CGeometry2D *a2, struct CImageSource *a3)
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
  __int128 v17; // [rsp+38h] [rbp-40h] BYREF

  v3 = 0;
  v16 = 0LL;
  if ( !(unsigned __int8)CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v7, &EVTDESC_ETWGUID_DRAWEVENT_Start, 7, *(_DWORD *)(v7 + 5752));
  if ( a2 )
  {
    if ( a3 )
    {
      v8 = (*(__int64 (__fastcall **)(struct CGeometry2D *))(*(_QWORD *)a2 + 96LL))(a2);
      v9 = (*(__int64 (__fastcall **)(struct CGeometry2D *))(*(_QWORD *)a2 + 104LL))(a2);
      if ( v8 )
      {
        if ( v9 )
        {
          v10 = CDrawingContext::ImageSourceToBitmapSource(
                  this,
                  (struct CImageSource *)((char *)a3 + 8),
                  0LL,
                  &v17,
                  &v16);
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
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1260u);
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x125Au);
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1256u);
          }
        }
      }
    }
  }
  if ( v16 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v16 + 16LL))(v16);
LABEL_20:
  if ( !(unsigned __int8)CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v14, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 7, *((_DWORD *)this + 1438));
  return v3;
}
