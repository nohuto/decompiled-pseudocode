/*
 * XREFs of ?EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ @ 0x18015C3BC
 * Callers:
 *     ?GetBitmapShaderResourceViewNoRef@CSectionBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18015C5F0 (-GetBitmapShaderResourceViewNoRef@CSectionBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoCo.c)
 *     ?GetD2DBitmap@CSectionBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x18015C680 (-GetD2DBitmap@CSectionBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV-$TMilRec.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z @ 0x1800A30C8 (-GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800A342C (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?CalcPixelFormatInfo@CSectionBitmapRealization@@AEAAJXZ @ 0x18015C258 (-CalcPixelFormatInfo@CSectionBitmapRealization@@AEAAJXZ.c)
 *     ?MapSection@CSectionBitmapRealization@@AEAAJXZ @ 0x18015C8A4 (-MapSection@CSectionBitmapRealization@@AEAAJXZ.c)
 */

__int64 __fastcall CSectionBitmapRealization::EnsureBitmapCacheSource(struct IUnknown *this)
{
  unsigned int v1; // esi
  struct IUnknown *v2; // r15
  INT lpVtbl; // eax
  INT lpVtbl_high; // ecx
  int v6; // eax
  int v7; // eax
  unsigned int RequiredBufferSize; // eax
  unsigned int v9; // r11d
  int v10; // eax
  struct IBitmapSource *v11; // r14
  int v12; // eax
  struct WICRect v14; // [rsp+40h] [rbp-28h] BYREF
  struct IBitmapSource *v15; // [rsp+70h] [rbp+8h] BYREF

  v1 = 0;
  v2 = this + 65;
  v15 = 0LL;
  if ( !this[65].lpVtbl )
  {
    lpVtbl = (INT)this[58].lpVtbl;
    if ( lpVtbl )
    {
      lpVtbl_high = HIDWORD(this[58].lpVtbl);
      if ( lpVtbl_high )
      {
        v14.X = 0;
        v14.Y = 0;
        v14.Width = lpVtbl;
        v14.Height = lpVtbl_high;
        if ( LOBYTE(this[64].lpVtbl)
          || (v6 = CSectionBitmapRealization::CalcPixelFormatInfo((CSectionBitmapRealization *)this), v1 = v6, v6 >= 0) )
        {
          if ( this[60].lpVtbl
            || (v7 = CSectionBitmapRealization::MapSection((CSectionBitmapRealization *)this), v1 = v7, v7 >= 0) )
          {
            RequiredBufferSize = GetRequiredBufferSize((int)this[61].lpVtbl, LODWORD(this[59].lpVtbl), &v14);
            v10 = HrCreateBitmapFromMemoryEx(
                    (unsigned int)this[58].lpVtbl,
                    HIDWORD(this[58].lpVtbl),
                    (const struct PixelFormatInfo *)&this[61],
                    v9,
                    RequiredBufferSize,
                    (unsigned __int8 *)this[60].lpVtbl,
                    this,
                    &v15);
            v11 = v15;
            v1 = v10;
            if ( v10 >= 0 )
            {
              v12 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, struct IUnknown *))v15)(
                      v15,
                      &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3,
                      v2);
              v1 = v12;
              if ( v12 >= 0 )
                ((void (__fastcall *)(struct IUnknown *, struct IUnknownVtbl *))this[2].lpVtbl[1].QueryInterface)(
                  &this[2],
                  v2->lpVtbl);
              else
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x119u);
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x117u);
            }
            if ( v11 )
              (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v11 + 16LL))(v11);
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x107u);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x102u);
        }
      }
    }
  }
  return v1;
}
