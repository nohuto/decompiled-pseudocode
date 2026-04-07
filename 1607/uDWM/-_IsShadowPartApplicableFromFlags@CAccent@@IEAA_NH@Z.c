/*
 * XREFs of ?_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z @ 0x180036D78
 * Callers:
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x1800368D0 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x180036E3C (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAccent::_IsShadowPartApplicableFromFlags(CAccent *this, int a2)
{
  int v2; // eax
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // eax
  int v9; // ecx

  if ( a2 <= 6 )
  {
    if ( a2 == 6 )
      goto LABEL_8;
    if ( !a2 )
      return (*((_BYTE *)this + 268) & 0x60) == 96;
    v4 = a2 - 1;
    if ( !v4 )
      goto LABEL_17;
    v5 = v4 - 1;
    if ( !v5 )
      return (*((_BYTE *)this + 268) & 0xC0) == 0xC0;
    v6 = v5 - 1;
    if ( !v6 )
      goto LABEL_18;
    v7 = v6 - 1;
    if ( !v7 )
      return *((_BYTE *)this + 268) >> 7;
    if ( v7 != 1 )
      return 0;
    v8 = *((_DWORD *)this + 67);
    v9 = 288;
    return (v9 & v8) == v9;
  }
  if ( a2 == 7 )
  {
    v8 = *((_DWORD *)this + 67);
    v9 = 384;
    return (v9 & v8) == v9;
  }
  if ( a2 > 17 )
  {
    if ( a2 != 20 )
    {
      if ( a2 != 18 )
      {
        if ( a2 != 19 )
        {
          if ( a2 == 21 )
          {
LABEL_8:
            v2 = *((_DWORD *)this + 67) >> 8;
            return v2 & 1;
          }
          return 0;
        }
        return *((_BYTE *)this + 268) >> 7;
      }
LABEL_18:
      LOBYTE(v2) = *((_BYTE *)this + 268) >> 5;
      return v2 & 1;
    }
LABEL_17:
    LOBYTE(v2) = *((_BYTE *)this + 268) >> 6;
    return v2 & 1;
  }
  return 0;
}
