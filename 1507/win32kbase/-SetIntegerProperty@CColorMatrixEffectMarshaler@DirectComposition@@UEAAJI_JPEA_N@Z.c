/*
 * XREFs of ?SetIntegerProperty@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00DC1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CColorMatrixEffectMarshaler::SetIntegerProperty(
        DirectComposition::CFilterEffectMarshaler *this,
        int a2,
        __int64 a3,
        bool *a4)
{
  if ( a2 == 1 )
  {
    *((_DWORD *)this + 44) = a3;
    goto LABEL_5;
  }
  if ( a2 == 2 )
  {
    *((_DWORD *)this + 45) = a3;
LABEL_5:
    *a4 = 1;
    return 0LL;
  }
  return DirectComposition::CFilterEffectMarshaler::SetIntegerProperty(this, a2, a3, a4);
}
