/*
 * XREFs of ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x18009B3C4
 * Callers:
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x18009C070 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?HrCalcRequiredBufferSizeWorker@@YAJIIIIPEAI@Z @ 0x180044998 (-HrCalcRequiredBufferSizeWorker@@YAJIIIIPEAI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180044A10 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall HrCheckBufferSize(int a1, __int64 a2, const struct WICRect *a3, unsigned int a4)
{
  unsigned __int8 PixelFormatSize; // al
  __int64 v6; // r8
  unsigned int v7; // edx
  int v8; // r9d
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v12; // [rsp+20h] [rbp-18h]
  unsigned int v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = 0;
  if ( !a3 || a3->Width < 0 || a3->Height < 0 )
  {
    v10 = -2147024809;
    v12 = 1662;
    goto LABEL_9;
  }
  PixelFormatSize = GetPixelFormatSize(a1);
  v9 = HrCalcRequiredBufferSizeWorker(PixelFormatSize, v7, *(_DWORD *)(v6 + 8), v8, &v13);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( v13 <= a4 )
      return v10;
    v10 = -2003292276;
    v12 = 1673;
LABEL_9:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, v12);
    return v10;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x685u);
  return v10;
}
