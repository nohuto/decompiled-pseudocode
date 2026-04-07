/*
 * XREFs of ?ValidateVisual@CRippleEffect@@UEAAJXZ @ 0x18007C9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x18001E290 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?UpdateTransition@CRippleEffect@@AEAAJXZ @ 0x18007C910 (-UpdateTransition@CRippleEffect@@AEAAJXZ.c)
 */

__int64 __fastcall CRippleEffect::ValidateVisual(CRippleEffect *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  if ( (*((_DWORD *)this + 20) & 0x4000) != 0 )
  {
    CRippleEffect::UpdateTransition(this);
    *((_DWORD *)this + 20) &= ~0x4000u;
  }
  v2 = CVisual::ValidateVisual(this);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0xECu);
  return v3;
}
