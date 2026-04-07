/*
 * XREFs of ?Initialize@CTouchPressHoldVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800989C0
 * Callers:
 *     ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x18008598C (--$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTouchPressHoldVisua.c)
 * Callees:
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001F620 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001F7E4 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTouchPressHoldVisual::Initialize(CTouchPressHoldVisual *this, struct IDwmChannel *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rax

  v3 = CVisual::Initialize(this, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *((_DWORD *)this + 70) = 0;
    *((_DWORD *)this + 74) = 90;
    *((_DWORD *)this + 73) = 90;
    v5 = *(_QWORD *)((char *)this + 292);
    *(_QWORD *)((char *)this + 308) = 0LL;
    *((_QWORD *)this + 40) = 0LL;
    *((_QWORD *)this + 41) = 0LL;
    *((_QWORD *)this + 42) = 0LL;
    *(_QWORD *)((char *)this + 300) = v5;
    *((_DWORD *)this + 79) = 100;
    CVisual::SetOpacity(this, 0.0);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x24u);
  }
  return v4;
}
