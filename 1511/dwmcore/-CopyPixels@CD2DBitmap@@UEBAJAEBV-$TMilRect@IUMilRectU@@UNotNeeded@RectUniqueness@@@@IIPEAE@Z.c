/*
 * XREFs of ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x18000D8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x18000D4D8 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x180011778 (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18002A9FC (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18002D3B8 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18002D40C (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800A1878 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x1800A1D2C (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800A342C (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 */

__int64 __fastcall CD2DBitmap::CopyPixels(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  int v5; // eax
  struct IBitmapSource *v6; // rsi
  int v11; // eax
  __int64 v12; // rdx
  enum DXGI_FORMAT v13; // eax
  __int64 v14; // r13
  int v15; // eax
  unsigned int v16; // edi
  int v17; // eax
  int v18; // eax
  int v19; // eax
  unsigned __int8 PixelFormatSize; // al
  unsigned int v22; // ecx
  int v23; // eax
  __int64 v24; // [rsp+58h] [rbp-21h] BYREF
  unsigned int v25; // [rsp+60h] [rbp-19h] BYREF
  struct IBitmapSource *v26; // [rsp+68h] [rbp-11h] BYREF
  __int64 v27; // [rsp+70h] [rbp-9h] BYREF
  unsigned __int8 *v28; // [rsp+78h] [rbp-1h] BYREF
  int v29; // [rsp+80h] [rbp+7h]
  int v30; // [rsp+84h] [rbp+Bh]
  struct IUnknown *v31; // [rsp+88h] [rbp+Fh] BYREF
  enum DXGI_FORMAT v32[2]; // [rsp+90h] [rbp+17h] BYREF
  _BYTE v33[8]; // [rsp+98h] [rbp+1Fh] BYREF
  __int64 v34; // [rsp+A0h] [rbp+27h]
  unsigned int v35; // [rsp+D8h] [rbp+5Fh] BYREF

  v5 = *(_DWORD *)(a1 + 56);
  v6 = 0LL;
  v31 = 0LL;
  v24 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = v5;
  v11 = *(_DWORD *)(a1 + 60);
  v26 = 0LL;
  v30 = v11;
  if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(&v28)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v12) )
  {
    v16 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xF6u);
  }
  else
  {
    v13 = *(_DWORD *)(a1 + 108);
    v32[0] = *(enum DXGI_FORMAT *)(a1 + 72);
    v32[1] = v13;
    GetPixelFormatColorSpace(v32[0], (enum ColorSpace *)v33);
    v34 = 0LL;
    if ( CD2DBitmap::TryFastWarpLock((CD2DBitmap *)(a1 - 112), &v28, &v35, &v25, &v31) )
    {
      PixelFormatSize = GetPixelFormatSize(*(enum DXGI_FORMAT *)(a1 + 72));
      v22 = v35 * a2[1] + *a2 * (PixelFormatSize >> 3);
      v23 = CBitmap::CopyPixelsHelper(
              (enum DXGI_FORMAT)*(_DWORD *)(a1 + 72),
              a2[2] - *a2,
              a2[3] - a2[1],
              v35,
              v25 - v22,
              &v28[v22],
              a3,
              a4,
              a5);
      v16 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x11Bu);
    }
    else
    {
      v14 = *(_QWORD *)(*(_QWORD *)(a1 - 88) + 16LL);
      v15 = HrCreateBitmapFromMemoryEx(
              a2[2] - *a2,
              a2[3] - a2[1],
              (const struct PixelFormatInfo *)v32,
              a3,
              a4,
              a5,
              0LL,
              &v26);
      v16 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x12Au);
        v6 = v26;
      }
      else
      {
        v6 = v26;
        v17 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))v26)(
                v26,
                &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
                &v24);
        v16 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x12Du);
        }
        else
        {
          v18 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 24))(
                  *(_QWORD *)(a1 + 24),
                  &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
                  &v27);
          v16 = v18;
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x130u);
          }
          else
          {
            v19 = CD3DDeviceLevel1::CopyTexture(v14, v27, *(_DWORD *)(a1 + 140), (_DWORD)a2, v24);
            v16 = v19;
            if ( v19 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x138u);
          }
        }
      }
    }
    if ( v31 )
      ((void (__fastcall *)(struct IUnknown *))v31->lpVtbl->Release)(v31);
  }
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v6 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v6 + 16LL))(v6);
  return v16;
}
