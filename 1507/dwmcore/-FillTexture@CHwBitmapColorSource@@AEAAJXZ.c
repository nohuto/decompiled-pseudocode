/*
 * XREFs of ?FillTexture@CHwBitmapColorSource@@AEAAJXZ @ 0x18001C764
 * Callers:
 *     ?Realize@CHwBitmapColorSource@@UEAAJXZ @ 0x18001BE60 (-Realize@CHwBitmapColorSource@@UEAAJXZ.c)
 * Callees:
 *     ?IsNoAlphaFormOf@@YAHW4DXGI_FORMAT@@0@Z @ 0x180013774 (-IsNoAlphaFormOf@@YAHW4DXGI_FORMAT@@0@Z.c)
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x18001C494 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x18005EF94 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Create@CBitmapColorKey@@SAJPEAVIBitmapSource@@PEBVCColorKey@@PEAPEAV1@@Z @ 0x18014142C (-Create@CBitmapColorKey@@SAJPEAVIBitmapSource@@PEBVCColorKey@@PEAPEAV1@@Z.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x180146848 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::FillTexture(CHwBitmapColorSource *this)
{
  struct IBitmapSource *v1; // r14
  struct CBitmapColorKey *v2; // r13
  struct IBitmapSource *v3; // r15
  struct IBitmapSource *v4; // r12
  int v6; // eax
  unsigned int v7; // edi
  enum DXGI_FORMAT v8; // edx
  int v9; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int v18; // eax
  struct IBitmapSource *v19; // [rsp+30h] [rbp-38h] BYREF
  __int64 v20; // [rsp+38h] [rbp-30h] BYREF
  __int64 v21; // [rsp+40h] [rbp-28h] BYREF
  _DWORD v22[2]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v23; // [rsp+50h] [rbp-18h]
  __int64 v24; // [rsp+58h] [rbp-10h]
  DXGI_FORMAT v25; // [rsp+B0h] [rbp+48h] BYREF
  struct IWICBitmapSource *v26; // [rsp+B8h] [rbp+50h] BYREF
  struct CBitmapColorKey *v27; // [rsp+C0h] [rbp+58h] BYREF
  struct IBitmapSource *v28; // [rsp+C8h] [rbp+60h] BYREF

  v1 = (struct IBitmapSource *)*((_QWORD *)this + 14);
  v2 = 0LL;
  v21 = 0LL;
  v3 = 0LL;
  v20 = 0LL;
  v4 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v19 = 0LL;
  if ( *((_BYTE *)this + 280) )
  {
    v16 = CBitmapColorKey::Create(v1, (CHwBitmapColorSource *)((char *)this + 284), &v27);
    v7 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xB7Bu);
      v2 = v27;
      goto LABEL_14;
    }
    v2 = v27;
    if ( v27 )
      v1 = (struct CBitmapColorKey *)((char *)v27 + 16);
    else
      v1 = 0LL;
  }
  if ( *((_DWORD *)this + 34) != *((_DWORD *)this + 36) || *((_DWORD *)this + 35) != *((_DWORD *)this + 37) )
  {
    v11 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))v1)(v1, &IID_IWICBitmapSource, &v21);
    v7 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xB93u);
      goto LABEL_14;
    }
    v12 = WICCreateImagingFactory_Proxy(567LL, &v20);
    v7 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xB99u);
      goto LABEL_14;
    }
    v13 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource **))(*(_QWORD *)v20 + 88LL))(v20, &v26);
    v7 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xB9Bu);
      goto LABEL_14;
    }
    v14 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, __int64, _QWORD, _QWORD, int))v26->lpVtbl[1].QueryInterface)(
            v26,
            v21,
            *((unsigned int *)this + 36),
            *((unsigned int *)this + 37),
            3);
    v7 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xBA0u);
      goto LABEL_14;
    }
    v15 = HrCreateBitmapFromWICBitmapSource(v26, &v28);
    v7 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xBA2u);
      v3 = v28;
      goto LABEL_12;
    }
    v3 = v28;
    v1 = v28;
  }
  v6 = (*(__int64 (__fastcall **)(struct IBitmapSource *, DXGI_FORMAT *))(*(_QWORD *)v1 + 24LL))(v1, &v25);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = *((_DWORD *)this + 58);
    if ( v8 != v25 && !IsNoAlphaFormOf(v25, v8) )
    {
      v22[1] = *((_DWORD *)this + 24);
      v22[0] = v17;
      v23 = 0LL;
      v24 = 0LL;
      LODWORD(v23) = *((_DWORD *)this + 25);
      v18 = CFormatConverter::HrConvertBitmap(v1, (const struct PixelFormatInfo *)v22, &v19);
      v7 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xBC3u);
        v4 = v19;
LABEL_10:
        if ( v4 )
          (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v4 + 16LL))(v4);
        goto LABEL_12;
      }
      v4 = v19;
      v1 = v19;
    }
    if ( *((_DWORD *)this + 54) < (unsigned int)(*((_DWORD *)this + 32) - *((_DWORD *)this + 30))
      || *((_DWORD *)this + 55) < (unsigned int)(*((_DWORD *)this + 33) - *((_DWORD *)this + 31)) )
    {
      v7 = -2003304320;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304320, 0xBDAu);
    }
    else
    {
      v9 = CHwBitmapColorSource::FillTextureWithTransformedSource(this, (struct IUnknown *)v1);
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xBDDu);
    }
    goto LABEL_10;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xBABu);
LABEL_12:
  if ( v3 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v3 + 16LL))(v3);
LABEL_14:
  if ( v26 )
    ((void (__fastcall *)(struct IWICBitmapSource *))v26->lpVtbl->Release)(v26);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v2 )
    CMILCOMBase::InternalRelease(v2);
  return v7;
}
