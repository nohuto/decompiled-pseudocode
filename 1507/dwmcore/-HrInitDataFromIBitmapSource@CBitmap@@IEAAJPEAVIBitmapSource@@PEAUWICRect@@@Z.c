/*
 * XREFs of ?HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z @ 0x180144108
 * Callers:
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x180143BC8 (-HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z @ 0x180143D50 (-HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180051BD0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z @ 0x180062A80 (-HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CBitmap::HrInitDataFromIBitmapSource(CBitmap *this, struct IBitmapSource *a2, struct WICRect *a3)
{
  INT *v3; // r12
  unsigned int *v5; // r14
  int v8; // eax
  int *v9; // r15
  int v10; // eax
  int v11; // edi
  unsigned __int8 PixelFormatSize; // al
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  float v16; // xmm1_4
  double v18; // [rsp+70h] [rbp+8h] BYREF
  double v19; // [rsp+78h] [rbp+10h] BYREF

  v3 = (INT *)((char *)this + 188);
  v5 = (unsigned int *)((char *)this + 184);
  v8 = (*(__int64 (__fastcall **)(struct IBitmapSource *, char *, char *))(*(_QWORD *)a2 + 56LL))(
         a2,
         (char *)this + 184,
         (char *)this + 188);
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x36Du);
  if ( a3 )
  {
    *v5 = a3->Width;
    *v3 = a3->Height;
  }
  v9 = (int *)((char *)this + 200);
  v10 = (*(__int64 (__fastcall **)(struct IBitmapSource *, char *))(*(_QWORD *)a2 + 24LL))(a2, (char *)this + 200);
  v11 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x37Cu);
  *((_DWORD *)this + 51) = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 32LL))(a2);
  *((_DWORD *)this + 52) = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 40LL))(a2);
  if ( v11 >= 0 )
  {
    PixelFormatSize = GetPixelFormatSize(*v9);
    if ( PixelFormatSize )
    {
      if ( *v5 >= 0x7FFFFFFFu / PixelFormatSize )
      {
        v11 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x389u);
      }
      if ( v11 >= 0 )
      {
        v13 = HrCalcDWordAlignedScanlineStride(*v5, *v9, (unsigned int *)&v18);
        v11 = v13;
        if ( v13 >= 0 )
        {
          if ( *v3 && LODWORD(v18) >= 0x7FFFFFFFu / *v3 )
          {
            v11 = -2147024362;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x39Cu);
          }
          if ( v11 >= 0 )
          {
            v14 = *(_QWORD *)a2;
            v18 = 0.0;
            v19 = 0.0;
            v15 = (*(__int64 (__fastcall **)(struct IBitmapSource *, double *, double *))(v14 + 64))(a2, &v18, &v19);
            v11 = v15;
            if ( v15 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x3A6u);
            v16 = v19;
            *((float *)this + 48) = v18;
            *((float *)this + 49) = v16;
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x396u);
        }
      }
    }
    else
    {
      v11 = -2003292409;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292409, 0x385u);
    }
  }
  return (unsigned int)v11;
}
