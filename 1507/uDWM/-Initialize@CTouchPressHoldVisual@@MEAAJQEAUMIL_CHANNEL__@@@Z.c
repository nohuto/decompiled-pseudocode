/*
 * XREFs of ?Initialize@CTouchPressHoldVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18009A560
 * Callers:
 *     ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x18007D924 (--$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCTouchPressHoldVis.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18001CF40 (-Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001D130 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 */

__int64 __fastcall CTouchPressHoldVisual::Initialize(CTouchPressHoldVisual *this, struct MIL_CHANNEL__ *const a2)
{
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rax

  v3 = CVisual::Initialize((CBaseObject **)this, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *((_DWORD *)this + 70) = 0;
    *((_DWORD *)this + 92) = 1041865114;
    *((_DWORD *)this + 93) = 1041865114;
    *((_DWORD *)this + 94) = 1041865114;
    *((_DWORD *)this + 95) = 1050253722;
    *((_DWORD *)this + 89) = 1050253722;
    *((_DWORD *)this + 74) = 90;
    *((_DWORD *)this + 73) = 90;
    v5 = *(_QWORD *)((char *)this + 292);
    *((_DWORD *)this + 88) = 0;
    *(_QWORD *)((char *)this + 308) = 0LL;
    *((_QWORD *)this + 40) = 0LL;
    *((_QWORD *)this + 41) = 0LL;
    *((_QWORD *)this + 42) = 0LL;
    *(_QWORD *)((char *)this + 300) = v5;
    *((_DWORD *)this + 91) = 2;
    *((_DWORD *)this + 90) = 1064514355;
    *((_DWORD *)this + 79) = 100;
    CVisual::SetOpacity(this, 0.0);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x1Bu);
  }
  return v4;
}
