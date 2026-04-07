/*
 * XREFs of ?SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@_N@Z @ 0x18002A3AC
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800313BC (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::SendTopLevelWindowCommand(CTopLevelWindow *this, HWND a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r8
  int v4; // eax
  int v5; // eax
  int v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+34h] [rbp-24h]
  HWND v9; // [rsp+38h] [rbp-20h]
  int v10; // [rsp+40h] [rbp-18h]

  v2 = 0;
  if ( a2 )
  {
    v8 = 0;
    v9 = 0LL;
    v10 = 0;
    v3 = *((_QWORD *)this + 2);
    v7 = 58;
    if ( v3 )
      v4 = *(_DWORD *)(v3 + 24);
    else
      v4 = 0;
    v9 = a2;
    v8 = v4;
    v10 = 1;
    v5 = MilResource_SendCommand(&v7, 0x14u, *(struct MIL_CHANNEL__ **)(v3 + 16));
    v2 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x100u);
  }
  return v2;
}
