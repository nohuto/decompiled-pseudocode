/*
 * XREFs of ?SetFloatProperty@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00DE2F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CColorMatrixEffectMarshaler::SetFloatProperty(
        DirectComposition::CColorMatrixEffectMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  __int64 v5; // rdx
  bool v6; // al

  v4 = 0;
  if ( (unsigned int)(a2 - 3) <= 0x13 )
  {
    v5 = (((_BYTE)a2 + 1) & 3) + 4LL * ((unsigned int)(a2 - 3) >> 2);
    if ( *((float *)this + v5 + 22) == a3 )
    {
      v6 = 0;
    }
    else
    {
      *((float *)this + v5 + 22) = a3;
      v6 = 1;
    }
    *a4 = v6;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
