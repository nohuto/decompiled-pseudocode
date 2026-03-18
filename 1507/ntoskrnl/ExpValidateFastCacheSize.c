/*
 * XREFs of ExpValidateFastCacheSize @ 0x1405A9AF4
 * Callers:
 *     sub_1406EC140 @ 0x1406EC140 (sub_1406EC140.c)
 *     sub_1407DB064 @ 0x1407DB064 (sub_1407DB064.c)
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
  if ( !a1 )
  {
LABEL_6:
    v7 = ExpPackagesTableMaximumSize;
    goto LABEL_7;
  }
  v4 = a1 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
          return (unsigned int)-1073741811;
        goto LABEL_6;
      }
      v7 = 102400;
    }
    else
    {
      v7 = ExpFeatureLicensesTableMaximumSize;
    }
  }
  else
  {
    v7 = ExpProductLicensesTableMaximumSize;
  }
LABEL_7:
  if ( a2 > v7 )
  {
    return (unsigned int)-1073700220;
  }
  else if ( a3 )
  {
    *a3 = v7;
  }
  return v3;
}
