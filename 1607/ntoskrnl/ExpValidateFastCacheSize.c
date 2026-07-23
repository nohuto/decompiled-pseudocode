/*
 * XREFs of ExpValidateFastCacheSize @ 0x1406AFCE0
 * Callers:
 *     sub_1406AE54C @ 0x1406AE54C (sub_1406AE54C.c)
 *     sub_1407D22C0 @ 0x1407D22C0 (sub_1407D22C0.c)
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
