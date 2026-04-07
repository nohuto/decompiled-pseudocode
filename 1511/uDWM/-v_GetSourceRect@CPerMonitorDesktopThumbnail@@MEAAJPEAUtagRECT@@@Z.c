/*
 * XREFs of ?v_GetSourceRect@CPerMonitorDesktopThumbnail@@MEAAJPEAUtagRECT@@@Z @ 0x18009B380
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 */

__int64 __fastcall CPerMonitorDesktopThumbnail::v_GetSourceRect(HMONITOR *this, struct tagRECT *a2)
{
  unsigned int v4; // edi
  signed int LastError; // eax
  struct tagMONITORINFO mi; // [rsp+30h] [rbp-38h] BYREF

  mi.cbSize = 40;
  v4 = 0;
  memset_0(&mi.rcMonitor, 0, 0x24uLL);
  SetLastError(0);
  if ( GetMonitorInfoW(this[8], &mi) )
  {
    *a2 = mi.rcMonitor;
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    v4 = LastError;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, LastError, 0x165u);
  }
  return v4;
}
