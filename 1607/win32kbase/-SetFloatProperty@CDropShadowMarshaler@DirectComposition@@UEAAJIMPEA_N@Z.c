/*
 * XREFs of ?SetFloatProperty@CDropShadowMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00E9CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDropShadowMarshaler::SetFloatProperty(
        DirectComposition::CDropShadowMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  int v5; // edx

  *a4 = 0;
  if ( a2 )
  {
    if ( a2 != 4 )
      return 3221225485LL;
    if ( *((float *)this + 24) != a3 )
    {
      v5 = 2048;
      *((float *)this + 24) = a3;
      goto LABEL_8;
    }
  }
  else if ( *((float *)this + 20) != a3 )
  {
    v5 = 128;
    *((float *)this + 20) = a3;
LABEL_8:
    *a4 = 1;
    *((_DWORD *)this + 4) |= v5;
  }
  return 0LL;
}
