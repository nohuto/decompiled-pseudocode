/*
 * XREFs of KappxParseString @ 0x1C0169F24
 * Callers:
 *     KappxParsePackageFullNameFromToken @ 0x1C0169E08 (KappxParsePackageFullNameFromToken.c)
 * Callees:
 *     memmove @ 0x1C00120C0 (memmove.c)
 */

__int64 __fastcall KappxParseString(void *Src, unsigned __int16 a2, __int64 a3)
{
  __int16 v3; // si
  void *v6; // rcx
  unsigned __int16 v7; // di
  size_t v9; // rbx

  v3 = 0;
  if ( a3 )
  {
    v6 = *(void **)(a3 + 8);
    v7 = 2 * (a2 + 1);
    if ( v6 )
    {
      if ( *(_WORD *)(a3 + 2) < v7 )
        return 3221225485LL;
      v9 = 2LL * a2;
      memmove(v6, Src, v9);
      *(_WORD *)(v9 + *(_QWORD *)(a3 + 8)) = 0;
      if ( v7 > 2u )
        v3 = v7 - 2;
      *(_WORD *)a3 = v3;
    }
    else
    {
      *(_WORD *)(a3 + 2) = v7;
    }
  }
  return 0LL;
}
