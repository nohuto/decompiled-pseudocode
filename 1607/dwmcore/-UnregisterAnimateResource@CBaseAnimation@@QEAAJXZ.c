/*
 * XREFs of ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800B041C
 * Callers:
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x180039BB8 (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ?UpdateAnimateValues@CScalar@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180141760 (-UpdateAnimateValues@CScalar@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x18003B6C0 (-UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBaseAnimation::UnregisterAnimateResource(CComposition **this)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( *((_BYTE *)this + 152) )
  {
    v3 = CComposition::UnregisterAnimateResource(this[2], (unsigned __int64)(this + 14));
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x90u);
    else
      *((_BYTE *)this + 152) = 0;
  }
  return v1;
}
