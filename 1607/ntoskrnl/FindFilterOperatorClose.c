/*
 * XREFs of FindFilterOperatorClose @ 0x1404E54FC
 * Callers:
 *     FilterEvalStrict @ 0x1404E4F24 (FilterEvalStrict.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindFilterOperatorClose(unsigned int a1, __int64 a2, _DWORD *a3)
{
  int v3; // r9d
  int v5; // r10d
  __int64 v6; // rbx
  int v7; // ecx

  v3 = 0;
  *a3 = 0;
  v5 = 0;
  if ( !a1 )
    return 3221225485LL;
  while ( 1 )
  {
    v6 = (unsigned int)*a3;
    v7 = *(_DWORD *)(56 * v6 + a2) & 0xFF00000;
    if ( v7 != 3145728 )
    {
      if ( v7 == 0x400000 )
        goto LABEL_11;
      if ( v7 != 0x100000 )
      {
        if ( v7 == 0x200000 )
          goto LABEL_11;
        if ( v7 != 5242880 )
        {
          if ( v7 != 6291456 )
            goto LABEL_8;
LABEL_11:
          ++v5;
          goto LABEL_8;
        }
      }
    }
    ++v3;
LABEL_8:
    if ( v3 == v5 )
      return 0LL;
    *a3 = v6 + 1;
    if ( (int)v6 + 1 >= a1 )
      return 3221225485LL;
  }
}
