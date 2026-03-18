/*
 * XREFs of ?InitPixelFormatInfo@CBitmapColorKey@@AEAAJPEAVIPixelFormat@@@Z @ 0x180141F5C
 * Callers:
 *     ?Initialize@CBitmapColorKey@@AEAAJPEAVIBitmapSource@@PEBVCColorKey@@@Z @ 0x180142010 (-Initialize@CBitmapColorKey@@AEAAJPEAVIBitmapSource@@PEBVCColorKey@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?IsSupportedColorKeyFormat@CBitmapColorKey@@CAJW4DXGI_FORMAT@@@Z @ 0x180142158 (-IsSupportedColorKeyFormat@CBitmapColorKey@@CAJW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CBitmapColorKey::InitPixelFormatInfo(CBitmapColorKey *this, struct IPixelFormat *a2)
{
  int v4; // eax
  int IsSupportedColorKeyFormat; // eax

  v4 = (*(__int64 (__fastcall **)(struct IPixelFormat *, char *))(*(_QWORD *)a2 + 24LL))(a2, (char *)this + 40);
  if ( v4 >= 0 )
  {
    IsSupportedColorKeyFormat = CBitmapColorKey::IsSupportedColorKeyFormat((enum DXGI_FORMAT)*((_DWORD *)this + 10));
    if ( IsSupportedColorKeyFormat >= 0 )
    {
      *((_DWORD *)this + 11) = (*(__int64 (__fastcall **)(struct IPixelFormat *))(*(_QWORD *)a2 + 32LL))(a2);
      *((_DWORD *)this + 12) = (*(__int64 (__fastcall **)(struct IPixelFormat *))(*(_QWORD *)a2 + 40LL))(a2);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, IsSupportedColorKeyFormat, 0x182u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x181u);
  }
  return 0LL;
}
