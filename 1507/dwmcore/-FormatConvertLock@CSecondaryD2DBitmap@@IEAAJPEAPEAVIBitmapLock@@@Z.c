/*
 * XREFs of ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z @ 0x180150BC0
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x180151730 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID.c)
 * Callees:
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x180014754 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800570E4 (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x180146848 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 *     ?HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z @ 0x180150FFC (-HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::FormatConvertLock(CSecondaryD2DBitmap *this, struct IBitmapLock **a2)
{
  __int64 *v2; // rdi
  struct IBitmapSource *v3; // rsi
  struct IBitmapSource *v5; // r14
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  __int64 *v11; // rdi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  struct WICRect *v19; // rdx
  int v20; // eax
  int v21; // eax
  struct IBitmapSource *v23; // [rsp+40h] [rbp-29h] BYREF
  struct IBitmapSource *v24; // [rsp+48h] [rbp-21h] BYREF
  struct IBitmapDest *v25; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int8 *v26; // [rsp+58h] [rbp-11h] BYREF
  __int64 v27; // [rsp+60h] [rbp-9h] BYREF
  __int64 v28; // [rsp+68h] [rbp-1h]
  __int64 v29; // [rsp+70h] [rbp+7h]
  int v30; // [rsp+78h] [rbp+Fh] BYREF
  _QWORD v31[2]; // [rsp+7Ch] [rbp+13h] BYREF
  int v32; // [rsp+8Ch] [rbp+23h]
  unsigned int v33; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v34; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned int v35; // [rsp+E0h] [rbp+77h] BYREF
  unsigned int v36; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = (__int64 *)*a2;
  v27 = 0LL;
  v3 = 0LL;
  v25 = 0LL;
  v28 = 0LL;
  v5 = 0LL;
  v29 = 0LL;
  v30 = *((_DWORD *)this + 46);
  v31[0] = 0LL;
  v31[1] = 0LL;
  v32 = 0;
  v7 = *v2;
  v23 = 0LL;
  v24 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v7 + 24))(v2, &v27);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 32LL))(*a2);
    v11 = (__int64 *)*a2;
    HIDWORD(v27) = v10;
    LODWORD(v28) = (*(__int64 (__fastcall **)(__int64 *))(*v11 + 40))(v11);
    v12 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 14) + 40LL))((char *)this + 112);
    v13 = *((_DWORD *)this + 46);
    LODWORD(v31[0]) = v12;
    GetPixelFormatColorSpace(v13, (enum ColorSpace *)((char *)v31 + 4));
    v14 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(*(_QWORD *)*a2 + 56LL))(*a2, &v36, &v35);
    v9 = v14;
    if ( v14 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*a2 + 64LL))(*a2, &v34);
      v9 = v15;
      if ( v15 >= 0 )
      {
        v16 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned __int8 **))(*(_QWORD *)*a2 + 72LL))(
                *a2,
                &v33,
                &v26);
        v9 = v16;
        if ( v16 >= 0 )
        {
          v17 = HrCreateBitmapFromMemoryEx(v36, v35, (const struct PixelFormatInfo *)&v27, v34, v33, v26, 0LL, &v23);
          v9 = v17;
          if ( v17 >= 0 )
          {
            v3 = v23;
            v18 = CFormatConverter::HrConvertBitmap(v23, (const struct PixelFormatInfo *)&v30, &v24);
            v9 = v18;
            if ( v18 >= 0 )
            {
              v5 = v24;
              v20 = HrCreateDestBitmapCopy(v24, v19, &v25);
              v9 = v20;
              if ( v20 >= 0 )
              {
                if ( *a2 )
                {
                  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
                  *a2 = 0LL;
                }
                v21 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _QWORD, __int64, struct IBitmapLock **))(*(_QWORD *)v25 + 24LL))(
                        v25,
                        0LL,
                        1LL,
                        a2);
                v9 = v21;
                if ( v21 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x1B8u);
              }
              else
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x1AFu);
              }
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x1A8u);
              v5 = v24;
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x1A1u);
            v3 = v23;
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x196u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x195u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x193u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x18Au);
  }
  if ( v25 )
    (*(void (__fastcall **)(struct IBitmapDest *))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v5 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v3 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v3 + 16LL))(v3);
  return v9;
}
