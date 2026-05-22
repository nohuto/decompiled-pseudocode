/*
 * XREFs of ?GetScreenDimensions@PointerInfoAdapter@@AEAAXPEAUHMONITOR__@@PEAK111@Z @ 0x18005C4BC
 * Callers:
 *     ?PopulatePointerInfoProperties@PointerInfoAdapter@@AEAAXPEAUInputInfo@@PEAUPointer@@PEAUtagPOINTER_INFO_UNION@@@Z @ 0x18005C6AC (-PopulatePointerInfoProperties@PointerInfoAdapter@@AEAAXPEAUInputInfo@@PEAUPointer@@PEAUtagPOINT.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 */

void __fastcall PointerInfoAdapter::GetScreenDimensions(
        PointerInfoAdapter *this,
        HMONITOR a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6)
{
  __int64 v9; // rcx
  int DeviceCaps; // edi
  int v11; // esi
  int v12; // r15d
  int v13; // r14d
  int v14; // ebx
  HDC DC; // rbx
  struct tagMONITORINFO mi; // [rsp+40h] [rbp-89h] BYREF
  _BYTE v17[12]; // [rsp+70h] [rbp-59h] BYREF
  int v18; // [rsp+7Ch] [rbp-4Dh]
  int v19; // [rsp+88h] [rbp-41h]
  int v20; // [rsp+8Ch] [rbp-3Dh]

  memset(&mi.rcMonitor, 0, 0x24uLL);
  mi.cbSize = 40;
  if ( a2 && GetMonitorInfoW(a2, &mi) )
  {
    if ( !(unsigned int)GetCurrentDpiInfo(a2, v17) )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v9, &MinInput_Warning_CheckResult, 0, 85, 255);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    DeviceCaps = mi.rcMonitor.right - mi.rcMonitor.left;
    v11 = mi.rcMonitor.bottom - mi.rcMonitor.top;
    v12 = v19;
    if ( !v19 || (v13 = v20) == 0 )
    {
      v14 = 100 * ((96 * v18 + 50) / 0x64u);
      v12 = MulDiv(DeviceCaps, 2540, v14);
      v13 = MulDiv(v11, 2540, v14);
    }
  }
  else
  {
    DC = GetDC(0LL);
    DeviceCaps = GetDeviceCaps(DC, 8);
    v11 = GetDeviceCaps(DC, 10);
    v12 = GetDeviceCaps(DC, 4);
    v13 = GetDeviceCaps(DC, 6);
    ReleaseDC(0LL, DC);
  }
  if ( !DeviceCaps || !v11 )
  {
    DeviceCaps = 1024;
    v11 = 768;
  }
  if ( !v12 || !v13 )
  {
    v12 = 20;
    v13 = 15;
  }
  *a3 = DeviceCaps;
  *a4 = v11;
  *a5 = v12;
  *a6 = v13;
}
