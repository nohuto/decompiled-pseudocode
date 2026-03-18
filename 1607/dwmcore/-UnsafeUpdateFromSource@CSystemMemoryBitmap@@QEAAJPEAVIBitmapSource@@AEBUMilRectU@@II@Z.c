/*
 * XREFs of ?UnsafeUpdateFromSource@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@AEBUMilRectU@@II@Z @ 0x180182798
 * Callers:
 *     ?PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1800822E4 (-PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV-$TMilRect@I.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18009EC4C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemMemoryBitmap::UnsafeUpdateFromSource(
        CSystemMemoryBitmap *this,
        struct IBitmapSource *a2,
        const struct MilRectU *a3,
        int a4)
{
  int v4; // eax
  int v7; // edx
  int v9; // ebx
  int v10; // ecx
  unsigned __int8 PixelFormatSize; // al
  int v12; // r11d
  int v13; // r9d
  int v14; // eax
  unsigned int v15; // ebx
  _DWORD v17[4]; // [rsp+30h] [rbp-48h] BYREF

  v4 = *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 2) - *(_DWORD *)a3;
  v10 = *((_DWORD *)this + 50);
  v17[3] = *((_DWORD *)a3 + 3) - v7;
  v17[0] = v4;
  v17[1] = v7;
  v17[2] = v9;
  PixelFormatSize = GetPixelFormatSize(v10);
  v14 = (*(__int64 (__fastcall **)(struct IBitmapSource *, _DWORD *, _QWORD, _QWORD, unsigned __int64))(*(_QWORD *)a2 + 72LL))(
          a2,
          v17,
          *((unsigned int *)this + 68),
          v9 * (PixelFormatSize >> 3) + *((_DWORD *)this + 68) * (v13 - 1),
          *((_QWORD *)this + 33)
        + (PixelFormatSize >> 3) * a4
        + (unsigned __int64)(unsigned int)(v12 * *((_DWORD *)this + 68)));
  v15 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x11Au);
  return v15;
}
