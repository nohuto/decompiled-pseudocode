/*
 * XREFs of sub_180019D04 @ 0x180019D04
 * Callers:
 *     sub_180015FC8 @ 0x180015FC8 (sub_180015FC8.c)
 * Callees:
 *     sub_180014944 @ 0x180014944 (sub_180014944.c)
 */

void **__fastcall sub_180019D04(_QWORD *a1, _QWORD *a2, void **a3)
{
  void **v3; // rbx
  _QWORD *v5; // rdi
  void **i; // rbx
  void **v8; // [rsp+60h] [rbp+18h]

  v8 = a3;
  v3 = a3;
  v5 = a1;
  try
  {
    if ( a1 != a2 )
    {
      do
      {
        if ( v3 )
        {
          v3[3] = (void *)7;
          v3[2] = 0LL;
          *(_WORD *)v3 = 0;
          sub_180014944(v3, v5);
        }
        v3 += 4;
        v8 = v3;
        v5 += 4;
      }
      while ( v5 != a2 );
    }
  }
  catch ( ... )
  {
    for ( i = a3; i != v8; i += 4 )
    {
      if ( (unsigned __int64)i[3] >= 8 )
        operator delete(*i);
      i[3] = (void *)7;
      i[2] = 0LL;
      *(_WORD *)i = 0;
    }
    throw;
  }
  return v3;
}
