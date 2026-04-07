/*
 * XREFs of ?SetIsCursor@CVisual@@QEAAJ_N@Z @ 0x18000E924
 * Callers:
 *     ?IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000B0B0 (-IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800313BC (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall CVisual::SetIsCursor(CVisual *this, unsigned __int8 a2)
{
  CResource *v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  _DWORD v6[4]; // [rsp+30h] [rbp-28h] BYREF

  v2 = (CResource *)*((_QWORD *)this + 2);
  v6[1] = 0;
  v6[2] = a2;
  v6[0] = 19;
  v3 = CResource::Send(v2, v6, 0xCu);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x2D1u);
  return v4;
}
