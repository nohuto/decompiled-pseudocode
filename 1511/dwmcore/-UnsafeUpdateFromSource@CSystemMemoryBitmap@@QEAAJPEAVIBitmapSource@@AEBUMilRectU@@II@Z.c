/*
 * XREFs of ?UnsafeUpdateFromSource@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@AEBUMilRectU@@II@Z @ 0x180152144
 * Callers:
 *     ?PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1800313A0 (-PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV-$TMilRect@I.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800A1878 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CSystemMemoryBitmap::UnsafeUpdateFromSource(
        CSystemMemoryBitmap *this,
        struct IBitmapSource *a2,
        const struct MilRectU *a3,
        int a4)
{
  int v4; // eax
  int v7; // edx
  int v8; // edi
  int v9; // ecx
  unsigned __int8 PixelFormatSize; // al
  __int64 v11; // r11
  int v12; // r10d
  int v13; // r9d
  int v14; // eax
  unsigned int v15; // ebx
  _DWORD v17[4]; // [rsp+30h] [rbp-48h] BYREF

  v4 = *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 1);
  v8 = *((_DWORD *)a3 + 3) - v7;
  v9 = *((_DWORD *)this + 50);
  v17[2] = *((_DWORD *)a3 + 2) - *(_DWORD *)a3;
  v17[0] = v4;
  v17[1] = v7;
  v17[3] = v8;
  PixelFormatSize = GetPixelFormatSize(v9);
  v14 = (*(__int64 (__fastcall **)(struct IBitmapSource *, _DWORD *, _QWORD, _QWORD, unsigned __int64))(*(_QWORD *)a2 + 72LL))(
          a2,
          v17,
          *(unsigned int *)(v11 + 272),
          v13 * (PixelFormatSize >> 3) + *(_DWORD *)(v11 + 272) * (v8 - 1),
          *(_QWORD *)(v11 + 264)
        + (PixelFormatSize >> 3) * a4
        + (unsigned __int64)(unsigned int)(v12 * *(_DWORD *)(v11 + 272)));
  v15 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x11Au);
  return v15;
}
