/*
 * XREFs of ExpValidateFastCacheSize @ 0x14066A5F0
 * Callers:
 *     sub_140668B98 @ 0x140668B98 (sub_140668B98.c)
 *     sub_140785A2C @ 0x140785A2C (sub_140785A2C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpValidateFastCacheSize(int a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // r9d
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  unsigned int v7; // eax

  v3 = 0;
  if ( a1 )
  {
    v4 = a1 - 1;
    if ( !v4 )
    {
      v7 = ExpProductLicensesTableMaximumSize;
      goto LABEL_11;
    }
    v5 = v4 - 1;
    if ( !v5 )
    {
      v7 = ExpFeatureLicensesTableMaximumSize;
      goto LABEL_11;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      v7 = 102400;
      goto LABEL_11;
    }
    if ( v6 != 1 )
      return (unsigned int)-1073741811;
  }
  v7 = ExpPackagesTableMaximumSize;
LABEL_11:
  if ( a2 <= v7 )
  {
    if ( a3 )
      *a3 = v7;
  }
  else
  {
    return (unsigned int)-1073700220;
  }
  return v3;
}
