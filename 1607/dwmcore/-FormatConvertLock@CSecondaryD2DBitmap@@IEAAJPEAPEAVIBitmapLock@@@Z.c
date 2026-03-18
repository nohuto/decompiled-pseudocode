/*
 * XREFs of ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z @ 0x180133444
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1800123B0 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18009FF0C (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800B1AE4 (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z @ 0x1801336E4 (-HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x180184D28 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::FormatConvertLock(CSecondaryD2DBitmap *this, struct IBitmapLock **a2)
{
  struct IBitmapSource *v3; // rsi
  struct IBitmapSource *v5; // rdi
  int v6; // eax
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int64 *v12; // rcx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  struct WICRect *v20; // rdx
  int v21; // eax
  int v22; // eax
  struct IBitmapSource *v24; // [rsp+40h] [rbp-29h] BYREF
  struct IBitmapSource *v25; // [rsp+48h] [rbp-21h] BYREF
  struct IBitmapDest *v26; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int8 *v27; // [rsp+58h] [rbp-11h] BYREF
  __int64 v28; // [rsp+60h] [rbp-9h] BYREF
  __int64 v29; // [rsp+68h] [rbp-1h]
  __int64 v30; // [rsp+70h] [rbp+7h]
  int v31; // [rsp+78h] [rbp+Fh] BYREF
  _QWORD v32[2]; // [rsp+7Ch] [rbp+13h] BYREF
  int v33; // [rsp+8Ch] [rbp+23h]
  unsigned int v34; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v35; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned int v36; // [rsp+E0h] [rbp+77h] BYREF
  unsigned int v37; // [rsp+E8h] [rbp+7Fh] BYREF

  v28 = 0LL;
  v3 = 0LL;
  v26 = 0LL;
  v29 = 0LL;
  v5 = 0LL;
  v30 = 0LL;
  v6 = *((_DWORD *)this + 46);
  v7 = (__int64 *)*a2;
  v31 = v6;
  v32[0] = 0LL;
  v32[1] = 0LL;
  v33 = 0;
  v8 = *v7;
  v25 = 0LL;
  v24 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v8 + 24))(v7, &v28);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x18Au);
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 32LL))(*a2);
    v12 = (__int64 *)*a2;
    HIDWORD(v28) = v11;
    LODWORD(v29) = (*(__int64 (__fastcall **)(__int64 *))(*v12 + 40))(v12);
    v13 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 14) + 40LL))((char *)this + 112);
    v14 = *((_DWORD *)this + 46);
    LODWORD(v32[0]) = v13;
    GetPixelFormatColorSpace(v14, (enum ColorSpace *)((char *)v32 + 4));
    v15 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(*(_QWORD *)*a2 + 56LL))(*a2, &v37, &v36);
    v10 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x193u);
    }
    else
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*a2 + 64LL))(*a2, &v35);
      v10 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x195u);
      }
      else
      {
        v17 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned __int8 **))(*(_QWORD *)*a2 + 72LL))(
                *a2,
                &v34,
                &v27);
        v10 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x196u);
        }
        else
        {
          v18 = HrCreateBitmapFromMemoryEx(v37, v36, (const struct PixelFormatInfo *)&v28, v35, v34, v27, 0LL, &v25);
          v10 = v18;
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x1A1u);
            v5 = v25;
          }
          else
          {
            v5 = v25;
            v19 = CFormatConverter::HrConvertBitmap(v25, (const struct PixelFormatInfo *)&v31, &v24);
            v10 = v19;
            if ( v19 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x1A8u);
              v3 = v24;
            }
            else
            {
              v3 = v24;
              v21 = HrCreateDestBitmapCopy(v24, v20, &v26);
              v10 = v21;
              if ( v21 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x1AFu);
              }
              else
              {
                if ( *a2 )
                {
                  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
                  *a2 = 0LL;
                }
                v22 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _QWORD, __int64, struct IBitmapLock **))(*(_QWORD *)v26 + 24LL))(
                        v26,
                        0LL,
                        1LL,
                        a2);
                v10 = v22;
                if ( v22 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x1B8u);
              }
            }
          }
        }
      }
    }
  }
  if ( v26 )
    (*(void (__fastcall **)(struct IBitmapDest *))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v3 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v3 + 16LL))(v3);
  if ( v5 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v5 + 16LL))(v5);
  return v10;
}
