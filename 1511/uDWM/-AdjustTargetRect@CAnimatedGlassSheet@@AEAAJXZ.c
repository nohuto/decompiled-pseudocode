/*
 * XREFs of ?AdjustTargetRect@CAnimatedGlassSheet@@AEAAJXZ @ 0x180082D68
 * Callers:
 *     ?StartRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@0M@Z @ 0x18008375C (-StartRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@0M@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 */

__int64 __fastcall CAnimatedGlassSheet::AdjustTargetRect(CAnimatedGlassSheet *this)
{
  const RECT *v2; // rcx
  unsigned int v3; // edi
  HMONITOR v4; // rsi
  signed int LastError; // eax
  int v6; // ecx
  CDesktopManager *v7; // rdx
  int v8; // ecx
  int v9; // ecx
  int v10; // r8d
  struct tagMONITORINFO mi; // [rsp+30h] [rbp-38h] BYREF

  v2 = (const RECT *)((char *)this + 424);
  v3 = 0;
  *(RECT *)((char *)this + 440) = *v2;
  v4 = MonitorFromRect(v2, 0);
  if ( v4 )
  {
    mi.cbSize = 40;
    memset_0(&mi.rcMonitor, 0, 0x24uLL);
    SetLastError(0);
    if ( GetMonitorInfoW(v4, &mi) )
    {
      v6 = *((_DWORD *)this + 110);
      v7 = CDesktopManager::s_pDesktopManagerInstance;
      if ( mi.rcWork.left == v6 )
        *((_DWORD *)this + 110) = v6 - (int)(*((double *)CDesktopManager::s_pDesktopManagerInstance + 165) * -8.0);
      v8 = *((_DWORD *)this + 112);
      if ( mi.rcWork.right == v8 )
        *((_DWORD *)this + 112) = v8 - (int)(*((double *)v7 + 165) * 8.0);
      v9 = *((_DWORD *)this + 111);
      if ( mi.rcWork.top == v9 )
        *((_DWORD *)this + 111) = v9 - (int)(*((double *)v7 + 166) * -8.0);
      v10 = *((_DWORD *)this + 113);
      if ( mi.rcWork.bottom == v10 )
        *((_DWORD *)this + 113) = v10 - (int)(*((double *)v7 + 166) * 8.0);
      *((_DWORD *)this + 110) += *((_DWORD *)this + 124);
      *((_DWORD *)this + 112) -= *((_DWORD *)this + 125);
      *((_DWORD *)this + 111) += *((_DWORD *)this + 126);
      *((_DWORD *)this + 113) -= *((_DWORD *)this + 127);
    }
    else
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      v3 = LastError;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, LastError, 0x232u);
    }
  }
  return v3;
}
