/*
 * XREFs of ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x18013DEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x180014754 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180019B7C (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180019BBC (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180051BD0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800570E4 (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x18005CBB8 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x1801339B0 (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x18013E768 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CD2DBitmap::CopyPixels(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  int v5; // eax
  struct IBitmapSource *v6; // rsi
  int v11; // eax
  _DWORD *v12; // rdx
  int v13; // eax
  unsigned __int8 PixelFormatSize; // al
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // edi
  __int64 v18; // r13
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 *v24; // [rsp+58h] [rbp-21h] BYREF
  unsigned int v25; // [rsp+60h] [rbp-19h] BYREF
  struct IBitmapSource *v26; // [rsp+68h] [rbp-11h] BYREF
  struct IUnknown *v27; // [rsp+70h] [rbp-9h] BYREF
  unsigned __int8 *v28; // [rsp+78h] [rbp-1h] BYREF
  int v29; // [rsp+80h] [rbp+7h]
  int v30; // [rsp+84h] [rbp+Bh]
  struct IUnknown *v31; // [rsp+88h] [rbp+Fh] BYREF
  int v32[2]; // [rsp+90h] [rbp+17h] BYREF
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
  if ( !TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain((unsigned int *)&v28, a2)
    || TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v12) )
  {
    v17 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xF6u);
  }
  else
  {
    v13 = *(_DWORD *)(a1 + 108);
    v32[0] = *(_DWORD *)(a1 + 72);
    v32[1] = v13;
    GetPixelFormatColorSpace(v32[0], (enum ColorSpace *)v33);
    v34 = 0LL;
    if ( CD2DBitmap::TryFastWarpLock((CD2DBitmap *)(a1 - 112), &v28, &v35, &v25, &v31) )
    {
      PixelFormatSize = GetPixelFormatSize(*(_DWORD *)(a1 + 72));
      v15 = v35 * a2[1] + *a2 * (PixelFormatSize >> 3);
      v16 = CBitmap::CopyPixelsHelper(
              *(_DWORD *)(a1 + 72),
              a2[2] - *a2,
              a2[3] - a2[1],
              v35,
              v25 - v15,
              &v28[v15],
              a3,
              a4,
              a5);
      v17 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x11Bu);
    }
    else
    {
      v18 = *(_QWORD *)(*(_QWORD *)(a1 - 88) + 16LL);
      v19 = HrCreateBitmapFromMemoryEx(
              a2[2] - *a2,
              a2[3] - a2[1],
              (const struct PixelFormatInfo *)v32,
              a3,
              a4,
              a5,
              0LL,
              &v26);
      v17 = v19;
      if ( v19 >= 0 )
      {
        v6 = v26;
        v20 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 **))v26)(
                v26,
                &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
                &v24);
        v17 = v20;
        if ( v20 >= 0 )
        {
          v21 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))(a1 + 24))(
                  *(_QWORD *)(a1 + 24),
                  &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
                  &v27);
          v17 = v21;
          if ( v21 >= 0 )
          {
            v22 = CD3DDeviceLevel1::CopyTexture(v18, v27, *(_DWORD *)(a1 + 140), a2, v24);
            v17 = v22;
            if ( v22 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x138u);
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x130u);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x12Du);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x12Au);
        v6 = v26;
      }
    }
    if ( v31 )
      ((void (__fastcall *)(struct IUnknown *))v31->lpVtbl->Release)(v31);
  }
  if ( v27 )
    ((void (__fastcall *)(struct IUnknown *))v27->lpVtbl->Release)(v27);
  if ( v24 )
    (*(void (__fastcall **)(__int64 *))(*v24 + 16))(v24);
  if ( v6 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v6 + 16LL))(v6);
  return v17;
}
