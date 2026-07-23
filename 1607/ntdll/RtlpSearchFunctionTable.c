/*
 * XREFs of RtlpSearchFunctionTable @ 0x1800809B4
 * Callers:
 *     RtlpLookupDynamicFunctionEntry @ 0x180080810 (RtlpLookupDynamicFunctionEntry.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall RtlpSearchFunctionTable(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // r10d
  unsigned __int64 v6; // r8
  unsigned int *v7; // rdx
  int v9; // r11d
  int v10; // r9d

  v4 = 0;
  if ( !a2 )
    return 0LL;
  v6 = a3 - a4;
  v7 = (unsigned int *)(a1 + 12LL * (unsigned int)(a2 - 1));
  if ( v6 < *v7 )
  {
    v9 = a2 - 2;
    if ( v9 >= 0 )
    {
      do
      {
        v10 = (v9 + v4) >> 1;
        v7 = (unsigned int *)(a1 + 12LL * v10);
        if ( v6 >= *v7 )
        {
          if ( v6 < v7[3] )
            break;
          v4 = v10 + 1;
        }
        else
        {
          v9 = v10 - 1;
        }
      }
      while ( v9 >= v4 );
    }
  }
  if ( v6 >= *v7 && v6 < v7[1] )
    return v7;
  else
    return 0LL;
}
