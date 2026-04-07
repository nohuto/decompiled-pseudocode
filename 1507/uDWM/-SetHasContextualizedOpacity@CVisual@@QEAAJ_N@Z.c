/*
 * XREFs of ?SetHasContextualizedOpacity@CVisual@@QEAAJ_N@Z @ 0x180076A44
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002E0BC (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x1800731A4 (-OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z.c)
 *     ?OnParametrizedRenderingChange@CTopLevelWindow@@QEAAJ_N0N@Z @ 0x1800760DC (-OnParametrizedRenderingChange@CTopLevelWindow@@QEAAJ_N0N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall CVisual::SetHasContextualizedOpacity(CVisual *this, unsigned __int8 a2)
{
  CResource *v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  _DWORD v6[4]; // [rsp+30h] [rbp-28h] BYREF

  v2 = (CResource *)*((_QWORD *)this + 2);
  v6[1] = 0;
  v6[2] = a2;
  v6[0] = 57;
  v3 = CResource::Send(v2, v6, 0xCu);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x307u);
  return v4;
}
