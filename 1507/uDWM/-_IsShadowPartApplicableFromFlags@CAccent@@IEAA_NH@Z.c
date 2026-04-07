/*
 * XREFs of ?_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z @ 0x1800361DC
 * Callers:
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180035DD0 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CAccent::_IsShadowPartApplicableFromFlags(CAccent *this, int a2)
{
  char v2; // r8
  int v3; // r8d
  int v5; // edx
  int v6; // edx
  int v7; // edx

  v2 = 0;
  if ( a2 > 17 )
  {
    v5 = a2 - 18;
    if ( !v5 )
      goto LABEL_14;
    v6 = v5 - 1;
    if ( !v6 )
      return *((_BYTE *)this + 268) >> 7;
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return v2;
      goto LABEL_6;
    }
    goto LABEL_12;
  }
  if ( (unsigned int)a2 < 8 )
  {
    if ( a2 > 2 )
    {
      if ( a2 != 3 )
      {
        if ( a2 != 4 )
        {
LABEL_6:
          v3 = *((_DWORD *)this + 67) >> 8;
          return v3 & 1;
        }
        return *((_BYTE *)this + 268) >> 7;
      }
LABEL_14:
      LOBYTE(v3) = *((_BYTE *)this + 268) >> 5;
      return v3 & 1;
    }
LABEL_12:
    LOBYTE(v3) = *((_BYTE *)this + 268) >> 6;
    return v3 & 1;
  }
  return v2;
}
