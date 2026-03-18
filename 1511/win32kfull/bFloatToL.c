/*
 * XREFs of bFloatToL @ 0x1C0119024
 * Callers:
 *     bNewXform @ 0x1C0118F04 (bNewXform.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bFloatToL(float a1, int *a2)
{
  int v2; // ecx
  char v3; // cl
  int v4; // r8d
  int v6; // r8d
  char v7; // cl

  v2 = (unsigned __int8)(SLODWORD(a1) >> 23) - 111;
  if ( v2 < 0 )
  {
    *a2 = 0;
    return 1LL;
  }
  if ( v2 < 23 )
  {
    v3 = 22 - v2;
    if ( a1 >= 0.0 )
    {
      v4 = (((LODWORD(a1) & 0x7FFFFF | 0x800000) >> v3) + 1) >> 1;
LABEL_5:
      *a2 = v4;
      return 1LL;
    }
    v6 = (((LODWORD(a1) & 0x7FFFFF | 0x800000) >> v3) + 1) >> 1;
LABEL_9:
    v4 = -v6;
    goto LABEL_5;
  }
  if ( v2 <= 30 )
  {
    v7 = (SLODWORD(a1) >> 23) + 122;
    if ( a1 >= 0.0 )
    {
      v4 = (LODWORD(a1) & 0x7FFFFF | 0x800000) << v7;
      goto LABEL_5;
    }
    v6 = (LODWORD(a1) & 0x7FFFFF | 0x800000) << v7;
    goto LABEL_9;
  }
  return 0LL;
}
