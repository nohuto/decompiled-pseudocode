/*
 * XREFs of ?SetIntegerProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00DD6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00D89A0 (-SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CAffineTransform2DEffectMarshaler::SetIntegerProperty(
        DirectComposition::CAffineTransform2DEffectMarshaler *this,
        int a2,
        __int64 a3,
        bool *a4)
{
  unsigned int v4; // r10d

  v4 = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
      *((_DWORD *)this + 25) = a3;
    else
      return (unsigned int)DirectComposition::CFilterEffectMarshaler::SetIntegerProperty(this, a2, a3, a4);
  }
  else
  {
    *((_DWORD *)this + 24) = a3;
  }
  return v4;
}
