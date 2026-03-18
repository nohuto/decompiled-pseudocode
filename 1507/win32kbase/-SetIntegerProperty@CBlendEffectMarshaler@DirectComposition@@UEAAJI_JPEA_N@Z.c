/*
 * XREFs of ?SetIntegerProperty@CBlendEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00DD250
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00D89A0 (-SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CBlendEffectMarshaler::SetIntegerProperty(
        DirectComposition::CBlendEffectMarshaler *this,
        int a2,
        __int64 a3,
        bool *a4)
{
  unsigned int v4; // r10d

  v4 = 0;
  if ( a2 )
  {
    return (unsigned int)DirectComposition::CFilterEffectMarshaler::SetIntegerProperty(this, a2, a3, a4);
  }
  else
  {
    *a4 = *((_DWORD *)this + 24) != (_DWORD)a3;
    *((_DWORD *)this + 24) = a3;
  }
  return v4;
}
