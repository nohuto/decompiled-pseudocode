/*
 * XREFs of ComputeBytesPerScanLine @ 0x1C024A6D8
 * Callers:
 *     SetupAAHeader @ 0x1C00F649C (SetupAAHeader.c)
 *     GetCachedSMP @ 0x1C0249C30 (GetCachedSMP.c)
 *     HT_CreateHalftoneBrush @ 0x1C0249F68 (HT_CreateHalftoneBrush.c)
 *     HT_CreateStandardMonoPattern @ 0x1C024A0C0 (HT_CreateStandardMonoPattern.c)
 *     CreateStandardMonoPattern @ 0x1C024A888 (CreateStandardMonoPattern.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputeBytesPerScanLine(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  int v8; // edx

  if ( !a3 )
    return 0LL;
  if ( a1 > 6 )
  {
    if ( a1 < 0xF5 )
      return 0LL;
    if ( a1 <= 0xFB )
      goto LABEL_19;
    if ( a1 <= 0xFD )
      goto LABEL_18;
    if ( a1 == 254 )
      goto LABEL_19;
    if ( a1 != 255 )
      return 0LL;
LABEL_17:
    a3 = (a3 + 1) >> 1;
    goto LABEL_19;
  }
  if ( a1 == 6 )
  {
    a3 *= 4;
    goto LABEL_19;
  }
  v4 = a1 - 1;
  if ( !v4 )
  {
    a3 = (a3 + 7) >> 3;
    goto LABEL_19;
  }
  v5 = v4 - 1;
  if ( !v5 )
    goto LABEL_17;
  v6 = v5 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        a3 *= 3;
        goto LABEL_19;
      }
      return 0LL;
    }
LABEL_18:
    a3 *= 2;
  }
LABEL_19:
  if ( a2 > 1 && (v8 = a3 % a2) != 0 )
    return a2 + a3 - v8;
  else
    return a3;
}
