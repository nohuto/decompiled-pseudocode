/*
 * XREFs of ?FillTexture@CHwBitmapColorSource@@AEAAJXZ @ 0x18003193C
 * Callers:
 *     ?Realize@CHwBitmapColorSource@@UEAAJXZ @ 0x180030FA0 (-Realize@CHwBitmapColorSource@@UEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x18003166C (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180088F80 (-GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x1800A365C (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     ?IsNoAlphaFormOf@@YAHW4DXGI_FORMAT@@0@Z @ 0x1800B1868 (-IsNoAlphaFormOf@@YAHW4DXGI_FORMAT@@0@Z.c)
 *     ?Create@CBitmapColorKey@@SAJPEAVIBitmapSource@@PEBVCColorKey@@PEAPEAV1@@Z @ 0x18015081C (-Create@CBitmapColorKey@@SAJPEAVIBitmapSource@@PEBVCColorKey@@PEAPEAV1@@Z.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x180154A28 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::FillTexture(CHwBitmapColorSource *this)
{
  struct IBitmapSource *v1; // r14
  struct CBitmapColorKey *v2; // r13
  struct IBitmapSource *v3; // r15
  struct IBitmapSource *v4; // r12
  __int64 (__fastcall *v6)(CBitmap *__hidden, enum DXGI_FORMAT *); // rbx
  int PixelFormat; // eax
  unsigned int v8; // edi
  enum DXGI_FORMAT v9; // edx
  int v10; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // edx
  int v19; // eax
  struct IBitmapSource *v20; // [rsp+30h] [rbp-38h] BYREF
  __int64 v21; // [rsp+38h] [rbp-30h] BYREF
  __int64 v22; // [rsp+40h] [rbp-28h] BYREF
  _DWORD v23[2]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v24; // [rsp+50h] [rbp-18h]
  __int64 v25; // [rsp+58h] [rbp-10h]
  enum DXGI_FORMAT v26; // [rsp+B0h] [rbp+48h] BYREF
  struct IWICBitmapSource *v27; // [rsp+B8h] [rbp+50h] BYREF
  struct CBitmapColorKey *v28; // [rsp+C0h] [rbp+58h] BYREF
  struct IBitmapSource *v29; // [rsp+C8h] [rbp+60h] BYREF

  v1 = (struct IBitmapSource *)*((_QWORD *)this + 14);
  v2 = 0LL;
  v22 = 0LL;
  v3 = 0LL;
  v21 = 0LL;
  v4 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v20 = 0LL;
  if ( *((_BYTE *)this + 280) )
  {
    v17 = CBitmapColorKey::Create(v1, (CHwBitmapColorSource *)((char *)this + 284), &v28);
    v8 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xB7Bu);
      v2 = v28;
      goto LABEL_16;
    }
    v2 = v28;
    if ( v28 )
      v1 = (struct CBitmapColorKey *)((char *)v28 + 16);
    else
      v1 = 0LL;
  }
  if ( *((_DWORD *)this + 34) != *((_DWORD *)this + 36) || *((_DWORD *)this + 35) != *((_DWORD *)this + 37) )
  {
    v12 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))v1)(v1, &IID_IWICBitmapSource, &v22);
    v8 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xB93u);
      goto LABEL_16;
    }
    v13 = WICCreateImagingFactory_Proxy(567LL, &v21);
    v8 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xB99u);
      goto LABEL_16;
    }
    v14 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource **))(*(_QWORD *)v21 + 88LL))(v21, &v27);
    v8 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xB9Bu);
      goto LABEL_16;
    }
    v15 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, __int64, _QWORD, _QWORD, int))v27->lpVtbl[1].QueryInterface)(
            v27,
            v22,
            *((unsigned int *)this + 36),
            *((unsigned int *)this + 37),
            3);
    v8 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xBA0u);
      goto LABEL_16;
    }
    v16 = HrCreateBitmapFromWICBitmapSource(v27, &v29);
    v8 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xBA2u);
      v3 = v29;
      goto LABEL_14;
    }
    v3 = v29;
    v1 = v29;
  }
  v6 = *(__int64 (__fastcall **)(CBitmap *__hidden, enum DXGI_FORMAT *))(*(_QWORD *)v1 + 24LL);
  if ( v6 == CBitmap::GetPixelFormat )
    PixelFormat = CBitmap::GetPixelFormat(v1, &v26);
  else
    PixelFormat = v6(v1, &v26);
  v8 = PixelFormat;
  if ( PixelFormat >= 0 )
  {
    v9 = *((_DWORD *)this + 58);
    if ( v9 != v26 && !(unsigned int)IsNoAlphaFormOf(v26, v9) )
    {
      v23[1] = *((_DWORD *)this + 24);
      v23[0] = v18;
      v24 = 0LL;
      v25 = 0LL;
      LODWORD(v24) = *((_DWORD *)this + 25);
      v19 = CFormatConverter::HrConvertBitmap(v1, (const struct PixelFormatInfo *)v23, &v20);
      v8 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xBC3u);
        v4 = v20;
LABEL_12:
        if ( v4 )
          (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v4 + 16LL))(v4);
        goto LABEL_14;
      }
      v4 = v20;
      v1 = v20;
    }
    if ( *((_DWORD *)this + 54) < (unsigned int)(*((_DWORD *)this + 32) - *((_DWORD *)this + 30))
      || *((_DWORD *)this + 55) < (unsigned int)(*((_DWORD *)this + 33) - *((_DWORD *)this + 31)) )
    {
      v8 = -2003304320;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304320, 0xBDAu);
    }
    else
    {
      v10 = CHwBitmapColorSource::FillTextureWithTransformedSource(this, (struct IUnknown *)v1);
      v8 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xBDDu);
    }
    goto LABEL_12;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormat, 0xBABu);
LABEL_14:
  if ( v3 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v3 + 16LL))(v3);
LABEL_16:
  if ( v27 )
    ((void (__fastcall *)(struct IWICBitmapSource *))v27->lpVtbl->Release)(v27);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v2 )
    CMILCOMBase::InternalRelease(v2);
  return v8;
}
