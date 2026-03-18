/*
 * XREFs of ?Initialize@CBitmapColorKey@@AEAAJPEAVIBitmapSource@@PEBVCColorKey@@@Z @ 0x180150C7C
 * Callers:
 *     ?Create@CBitmapColorKey@@SAJPEAVIBitmapSource@@PEBVCColorKey@@PEAPEAV1@@Z @ 0x18015081C (-Create@CBitmapColorKey@@SAJPEAVIBitmapSource@@PEBVCColorKey@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InitColorKey@CBitmapColorKey@@AEAAJPEBVCColorKey@@@Z @ 0x1800B9904 (-InitColorKey@CBitmapColorKey@@AEAAJPEBVCColorKey@@@Z.c)
 *     ?InitPixelFormatInfo@CBitmapColorKey@@AEAAJPEAVIPixelFormat@@@Z @ 0x180150BC8 (-InitPixelFormatInfo@CBitmapColorKey@@AEAAJPEAVIPixelFormat@@@Z.c)
 *     ?IsSupportedColorKeyFormat@CBitmapColorKey@@CAJW4DXGI_FORMAT@@@Z @ 0x180150DC4 (-IsSupportedColorKeyFormat@CBitmapColorKey@@CAJW4DXGI_FORMAT@@@Z.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x180154A28 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CBitmapColorKey::Initialize(CBitmapColorKey *this, struct IBitmapSource *a2, const __m128i *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // ecx
  struct IPixelFormat **v9; // r14
  int v10; // eax
  int inited; // eax
  int v12; // eax
  int v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+34h] [rbp-34h]
  __int64 v16; // [rsp+3Ch] [rbp-2Ch]
  int v17; // [rsp+44h] [rbp-24h]
  enum DXGI_FORMAT v18; // [rsp+78h] [rbp+10h] BYREF

  v6 = (*(__int64 (__fastcall **)(struct IBitmapSource *, enum DXGI_FORMAT *))(*(_QWORD *)a2 + 24LL))(a2, &v18);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( (int)CBitmapColorKey::IsSupportedColorKeyFormat(v18) >= 0 || v8 == 2 )
    {
      v9 = (struct IPixelFormat **)((char *)this + 32);
      *((_QWORD *)this + 4) = a2;
      (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 8LL))(a2);
    }
    else
    {
      v14 = 2;
      v15 = 0LL;
      v16 = 0LL;
      v17 = 0;
      LODWORD(v15) = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 32LL))(a2);
      v9 = (struct IPixelFormat **)((char *)this + 32);
      HIDWORD(v15) = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 40LL))(a2);
      v10 = CFormatConverter::HrConvertBitmap(
              a2,
              (const struct PixelFormatInfo *)&v14,
              (struct IBitmapSource **)this + 4);
      v7 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x155u);
        return v7;
      }
    }
    inited = CBitmapColorKey::InitPixelFormatInfo(this, *v9);
    v7 = inited;
    if ( inited >= 0 )
    {
      v12 = CBitmapColorKey::InitColorKey(this, a3);
      v7 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x165u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, inited, 0x160u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x143u);
  }
  return v7;
}
