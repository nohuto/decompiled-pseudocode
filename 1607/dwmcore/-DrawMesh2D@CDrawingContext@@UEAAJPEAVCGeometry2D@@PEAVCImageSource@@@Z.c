/*
 * XREFs of ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x1801227D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x180064584 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@C.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E9A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18006F210 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x180106698 (Template_qq.c)
 */

__int64 __fastcall CDrawingContext::DrawMesh2D(CDrawingContext *this, struct CGeometry2D *a2, struct CImageSource *a3)
{
  unsigned int v3; // esi
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  char *v12; // r8
  int v13; // eax
  __int64 v14; // rcx
  struct IBitmapSource *v16; // [rsp+40h] [rbp-48h] BYREF
  __int128 v17; // [rsp+48h] [rbp-40h] BYREF

  v3 = 0;
  v16 = 0LL;
  if ( !(unsigned __int8)CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v7, &EVTDESC_ETWGUID_DRAWEVENT_Start, 7, *(_DWORD *)(v7 + 6480));
  if ( a2 )
  {
    if ( a3 )
    {
      v8 = (*(__int64 (__fastcall **)(struct CGeometry2D *))(*(_QWORD *)a2 + 112LL))(a2);
      v9 = (*(__int64 (__fastcall **)(struct CGeometry2D *))(*(_QWORD *)a2 + 120LL))(a2);
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
          if ( v10 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1225u);
          }
          else
          {
            if ( !v16 )
              goto LABEL_20;
            v11 = CDrawingContext::ApplyRenderStateInternal(this, 0);
            v3 = v11;
            if ( v11 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1229u);
            }
            else
            {
              if ( this )
                v12 = (char *)this + 128;
              else
                v12 = 0LL;
              v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, char *, struct CGeometry2D *, struct IBitmapSource *))(**((_QWORD **)this + 54) + 88LL))(
                      *((_QWORD *)this + 54),
                      *((_QWORD *)this + 57),
                      v12,
                      (char *)this + 144,
                      a2,
                      v16);
              v3 = v13;
              if ( v13 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x122Fu);
            }
          }
        }
      }
    }
  }
  if ( v16 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v16 + 16LL))(v16);
LABEL_20:
  if ( !(unsigned __int8)CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v14, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 7, *((_DWORD *)this + 1620));
  return v3;
}
