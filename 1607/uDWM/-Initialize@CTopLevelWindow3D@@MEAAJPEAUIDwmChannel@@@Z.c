/*
 * XREFs of ?Initialize@CTopLevelWindow3D@@MEAAJPEAUIDwmChannel@@@Z @ 0x18002A8E0
 * Callers:
 *     ?Create@CTopLevelWindow3D@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180041030 (-Create@CTopLevelWindow3D@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001F620 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?DisablePrefiltering@CVisual@@QEAAXXZ @ 0x180020B88 (-DisablePrefiltering@CVisual@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::Initialize(CTopLevelWindow3D *this, struct IDwmChannel *a2)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = CVisual::Initialize(this, a2);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x2Du);
  else
    CVisual::DisablePrefiltering(this);
  return v4;
}
