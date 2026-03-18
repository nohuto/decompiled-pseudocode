/*
 * XREFs of ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x18005CCD0
 * Callers:
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x180046FB8 (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ?UpdateAnimateValues@CScalar@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180107C10 (-UpdateAnimateValues@CScalar@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x180068410 (-UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBaseAnimation::UnregisterAnimateResource(CComposition **this)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( *((_BYTE *)this + 80) )
  {
    v3 = CComposition::UnregisterAnimateResource(this[2], (struct IAnimationResource *)(this + 5));
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x90u);
    else
      *((_BYTE *)this + 80) = 0;
  }
  return v1;
}
