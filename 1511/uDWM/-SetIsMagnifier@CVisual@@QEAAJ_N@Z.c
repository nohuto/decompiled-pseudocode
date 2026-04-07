/*
 * XREFs of ?SetIsMagnifier@CVisual@@QEAAJ_N@Z @ 0x18007E8B4
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800313BC (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x18007B384 (-OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall CVisual::SetIsMagnifier(CVisual *this)
{
  CResource *v1; // rcx
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+34h] [rbp-24h]

  v1 = (CResource *)*((_QWORD *)this + 2);
  v5 = 20;
  v6 = 0x100000000LL;
  v2 = CResource::Send(v1, &v5, 0xCu);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x2EDu);
  return v3;
}
