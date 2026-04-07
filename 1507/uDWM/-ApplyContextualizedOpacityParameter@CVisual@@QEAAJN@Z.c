/*
 * XREFs of ?ApplyContextualizedOpacityParameter@CVisual@@QEAAJN@Z @ 0x18007669C
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002E0BC (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x1800731A4 (-OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z.c)
 *     ?OnParametrizedRenderingChange@CTopLevelWindow@@QEAAJ_N0N@Z @ 0x1800760DC (-OnParametrizedRenderingChange@CTopLevelWindow@@QEAAJ_N0N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall CVisual::ApplyContextualizedOpacityParameter(CVisual *this, double a2)
{
  CResource *v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  _DWORD v6[4]; // [rsp+30h] [rbp-38h] BYREF
  double v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]

  v2 = (CResource *)*((_QWORD *)this + 2);
  v6[0] = 55;
  v6[1] = 0;
  v6[3] = 0;
  v8 = 0;
  v7 = a2;
  v9 = 0;
  v6[2] = 1;
  v3 = CResource::Send(v2, v6, 0x20u);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x2ECu);
  return v4;
}
