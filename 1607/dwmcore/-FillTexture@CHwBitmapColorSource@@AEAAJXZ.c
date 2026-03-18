/*
 * XREFs of ?FillTexture@CHwBitmapColorSource@@AEAAJXZ @ 0x1800827C8
 * Callers:
 *     ?Realize@CHwBitmapColorSource@@UEAAJXZ @ 0x180081F30 (-Realize@CHwBitmapColorSource@@UEAAJXZ.c)
 * Callees:
 *     ?IsNoAlphaFormOf@@YAHW4DXGI_FORMAT@@0@Z @ 0x180016F8C (-IsNoAlphaFormOf@@YAHW4DXGI_FORMAT@@0@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x180082504 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x1800851F0 (-GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x1800AEC84 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CBitmapColorKey@@SAJPEAVIBitmapSource@@PEBVCColorKey@@PEAPEAV1@@Z @ 0x180180C34 (-Create@CBitmapColorKey@@SAJPEAVIBitmapSource@@PEBVCColorKey@@PEAPEAV1@@Z.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x180184D28 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::FillTexture(CHwBitmapColorSource *this)
{
  struct IBitmapSource *v1; // rsi
  struct CBitmapColorKey *v2; // r15
  struct IBitmapSource *v3; // r14
  struct IBitmapSource *v4; // r12
  __int64 (__fastcall *v6)(CBitmap *__hidden, enum DXGI_FORMAT *); // rax
  int PixelFormat; // eax
  unsigned int v8; // ebx
  enum DXGI_FORMAT v9; // edx
  int v10; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int v18; // eax
  unsigned int v19; // [rsp+20h] [rbp-40h]
  struct IBitmapSource *v20; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+38h] [rbp-28h] BYREF
  __int64 v22; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v23[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v24; // [rsp+50h] [rbp-10h]
  __int64 v25; // [rsp+58h] [rbp-8h]
  DXGI_FORMAT v26; // [rsp+A0h] [rbp+40h] BYREF
  struct IWICBitmapSource *v27; // [rsp+A8h] [rbp+48h] BYREF
  struct CBitmapColorKey *v28; // [rsp+B0h] [rbp+50h] BYREF
  struct IBitmapSource *v29; // [rsp+B8h] [rbp+58h] BYREF

  v1 = (struct IBitmapSource *)*((_QWORD *)this + 14);
  v2 = 0LL;
  v22 = 0LL;
  v3 = 0LL;
  v21 = 0LL;
  v4 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v20 = 0LL;
  v29 = 0LL;
  if ( *((_BYTE *)this + 280) )
  {
    v16 = CBitmapColorKey::Create(v1, (CHwBitmapColorSource *)((char *)this + 284), &v28);
    v8 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xB64u);
      v2 = v28;
      goto LABEL_15;
    }
    v2 = v28;
    if ( v28 )
      v1 = (struct CBitmapColorKey *)((char *)v28 + 16);
    else
      v1 = 0LL;
  }
  if ( *((_DWORD *)this + 34) != *((_DWORD *)this + 36) || *((_DWORD *)this + 35) != *((_DWORD *)this + 37) )
  {
    v10 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))v1)(v1, &IID_IWICBitmapSource, &v22);
    v8 = v10;
    if ( v10 < 0 )
    {
      v19 = 2940;
      goto LABEL_48;
    }
    v12 = WICCreateImagingFactory_Proxy(567LL, &v21);
    v8 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xB82u);
      goto LABEL_15;
    }
    v13 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource **))(*(_QWORD *)v21 + 88LL))(v21, &v27);
    v8 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xB84u);
      goto LABEL_15;
    }
    v14 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, __int64, _QWORD, _QWORD, int))v27->lpVtbl[1].QueryInterface)(
            v27,
            v22,
            *((unsigned int *)this + 36),
            *((unsigned int *)this + 37),
            3);
    v8 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xB89u);
      goto LABEL_15;
    }
    v15 = HrCreateBitmapFromWICBitmapSource(v27, &v20);
    v8 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xB8Bu);
      v3 = v20;
      goto LABEL_13;
    }
    v3 = v20;
    v1 = v20;
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
    if ( v9 != v26 && !IsNoAlphaFormOf(v26, v9) )
    {
      v23[1] = *((_DWORD *)this + 24);
      v23[0] = v17;
      v24 = 0LL;
      v25 = 0LL;
      LODWORD(v24) = *((_DWORD *)this + 25);
      v18 = CFormatConverter::HrConvertBitmap(v1, (const struct PixelFormatInfo *)v23, &v29);
      v8 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xBACu);
        v4 = v29;
        goto LABEL_11;
      }
      v4 = v29;
      v1 = v29;
    }
    if ( *((_DWORD *)this + 54) < (unsigned int)(*((_DWORD *)this + 32) - *((_DWORD *)this + 30))
      || *((_DWORD *)this + 55) < (unsigned int)(*((_DWORD *)this + 33) - *((_DWORD *)this + 31)) )
    {
      v8 = -2003304320;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304320, 0xBC3u);
      goto LABEL_11;
    }
    v10 = CHwBitmapColorSource::FillTextureWithTransformedSource(this, (struct IUnknown *)v1);
    v8 = v10;
    if ( v10 >= 0 )
      goto LABEL_11;
    v19 = 3014;
LABEL_48:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v19);
LABEL_11:
    if ( v4 )
      (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v4 + 16LL))(v4);
    goto LABEL_13;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormat, 0xB94u);
LABEL_13:
  if ( v3 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v3 + 16LL))(v3);
LABEL_15:
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
