/*
 * XREFs of ?Initialize@CAccent@@MEAAJPEAUIDwmChannel@@@Z @ 0x180035B20
 * Callers:
 *     ?Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003828C (-Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Initialize@CCanvas@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001C6D0 (-Initialize@CCanvas@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?_AddOcclusionInstruction@CAccent@@IEAAJXZ @ 0x1800373C0 (-_AddOcclusionInstruction@CAccent@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAccent::Initialize(CAccent *this, struct IDwmChannel *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax

  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 70) = 4;
  *((_BYTE *)this + 296) = 0;
  v3 = CCanvas::Initialize(this, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xD7u);
  }
  else
  {
    v5 = CAccent::_AddOcclusionInstruction(this);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xD8u);
  }
  return v4;
}
