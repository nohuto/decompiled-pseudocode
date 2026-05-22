/*
 * XREFs of ?CacheDisplayInformation@DWMInputDisplay@@IEAAJXZ @ 0x18001B460
 * Callers:
 *     ?GetBounds@DWMInputDisplay@@UEAAJPEAJ0@Z @ 0x18001B610 (-GetBounds@DWMInputDisplay@@UEAAJPEAJ0@Z.c)
 *     ?GetSize@DWMInputDisplay@@UEAAJPEAJ0@Z @ 0x18001B6B0 (-GetSize@DWMInputDisplay@@UEAAJPEAJ0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 */

__int64 __fastcall DWMInputDisplay::CacheDisplayInformation(DWMInputDisplay *this)
{
  HMONITOR v1; // rbx
  BOOL v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // ecx
  HDC DC; // rbx
  LPARAM dwData; // [rsp+20h] [rbp-49h] BYREF
  tagMONITORINFO mi; // [rsp+28h] [rbp-41h] BYREF
  _BYTE v15[12]; // [rsp+50h] [rbp-19h] BYREF
  int v16; // [rsp+5Ch] [rbp-Dh]
  int v17; // [rsp+68h] [rbp-1h]
  int v18; // [rsp+6Ch] [rbp+3h]

  v1 = (HMONITOR)*((_QWORD *)this + 3);
  if ( !v1 )
  {
    dwData = 0LL;
    v3 = EnumDisplayMonitors(
           0LL,
           0LL,
           (MONITORENUMPROC)lambda_1862f4448b0c18fc2289e23f0d227847_::_lambda_invoker_cdecl_,
           (LPARAM)&dwData);
    v1 = (HMONITOR)(dwData & -(__int64)v3);
  }
  memset(&mi.rcMonitor, 0, 0x24uLL);
  mi.cbSize = 40;
  if ( v1 && GetMonitorInfoW(v1, &mi) && (unsigned int)GetCurrentDpiInfo(v1, v15) )
  {
    v4 = mi.rcMonitor.right - mi.rcMonitor.left;
    v5 = mi.rcMonitor.bottom - mi.rcMonitor.top;
    v6 = v17;
    *((_DWORD *)this + 8) = mi.rcMonitor.right - mi.rcMonitor.left;
    *((_DWORD *)this + 9) = v5;
    if ( v6 && (v7 = v18) != 0 )
    {
      *((_DWORD *)this + 10) = v6;
    }
    else
    {
      v8 = 100 * ((96 * v16 + 50) / 0x64u);
      v9 = MulDiv(v4, 2540, v8);
      v10 = *((_DWORD *)this + 9);
      *((_DWORD *)this + 10) = v9;
      v7 = MulDiv(v10, 2540, v8);
    }
    *((_DWORD *)this + 11) = v7;
  }
  else
  {
    DC = GetDC(0LL);
    *((_DWORD *)this + 8) = GetDeviceCaps(DC, 8);
    *((_DWORD *)this + 9) = GetDeviceCaps(DC, 10);
    *((_DWORD *)this + 10) = GetDeviceCaps(DC, 4);
    *((_DWORD *)this + 11) = GetDeviceCaps(DC, 6);
    ReleaseDC(0LL, DC);
  }
  if ( !*((_DWORD *)this + 8) || !*((_DWORD *)this + 9) )
  {
    *((_DWORD *)this + 8) = 1024;
    *((_DWORD *)this + 9) = 768;
  }
  if ( !*((_DWORD *)this + 10) || !*((_DWORD *)this + 11) )
  {
    *((_DWORD *)this + 10) = 20;
    *((_DWORD *)this + 11) = 15;
  }
  return 0LL;
}
