/*
 * XREFs of KappxSafeSearch @ 0x1C0169FB0
 * Callers:
 *     KappxParsePackageFullNameFromToken @ 0x1C0169E08 (KappxParsePackageFullNameFromToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KappxSafeSearch(__int64 a1, unsigned __int16 a2, __int16 a3)
{
  unsigned __int16 v3; // r9

  v3 = 0;
  if ( a2 )
  {
    while ( *(_WORD *)(a1 + 2LL * v3) != a3 )
    {
      if ( ++v3 >= a2 )
        return v3;
    }
    *(_WORD *)(a1 + 2LL * v3) = 0;
  }
  return v3;
}
