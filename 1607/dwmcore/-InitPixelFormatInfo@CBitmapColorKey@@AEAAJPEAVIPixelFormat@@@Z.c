/*
 * XREFs of ?InitPixelFormatInfo@CBitmapColorKey@@AEAAJPEAVIPixelFormat@@@Z @ 0x180180F98
 * Callers:
 *     ?Initialize@CBitmapColorKey@@AEAAJPEAVIBitmapSource@@PEBVCColorKey@@@Z @ 0x180181034 (-Initialize@CBitmapColorKey@@AEAAJPEAVIBitmapSource@@PEBVCColorKey@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsSupportedColorKeyFormat@CBitmapColorKey@@CAJW4DXGI_FORMAT@@@Z @ 0x1801818C0 (-IsSupportedColorKeyFormat@CBitmapColorKey@@CAJW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CBitmapColorKey::InitPixelFormatInfo(CBitmapColorKey *this, struct IPixelFormat *a2)
{
  int v4; // eax
  int IsSupportedColorKeyFormat; // eax

  v4 = (*(__int64 (__fastcall **)(struct IPixelFormat *, char *))(*(_QWORD *)a2 + 24LL))(a2, (char *)this + 40);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x181u);
  }
  else
  {
    IsSupportedColorKeyFormat = CBitmapColorKey::IsSupportedColorKeyFormat((enum DXGI_FORMAT)*((_DWORD *)this + 10));
    if ( IsSupportedColorKeyFormat < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, IsSupportedColorKeyFormat, 0x182u);
    }
    else
    {
      *((_DWORD *)this + 11) = (*(__int64 (__fastcall **)(struct IPixelFormat *))(*(_QWORD *)a2 + 32LL))(a2);
      *((_DWORD *)this + 12) = (*(__int64 (__fastcall **)(struct IPixelFormat *))(*(_QWORD *)a2 + 40LL))(a2);
    }
  }
  return 0LL;
}
