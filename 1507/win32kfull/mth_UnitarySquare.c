/*
 * XREFs of mth_UnitarySquare @ 0x1C01222BC
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C00B5A60 (fsg_ExecuteGlyph.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall mth_UnitarySquare(int *a1)
{
  unsigned int v1; // edx
  int v2; // eax
  int v3; // r9d
  int v4; // r8d

  v1 = 0;
  if ( !a1[1] && !a1[3] )
  {
    v2 = *a1;
    v3 = *a1;
    if ( *a1 < 0 )
      v3 = -v3;
    v4 = a1[4];
    if ( v4 < 0 )
      v4 = -v4;
    if ( v3 == v4 )
    {
      if ( v2 < 0 )
        v2 = -v2;
      if ( v2 == 0x10000 )
        return 1;
    }
  }
  return v1;
}
