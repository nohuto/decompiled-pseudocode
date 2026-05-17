/*
 * XREFs of RtlFindUnicodeSubstring @ 0x1800D2020
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180035820 (RtlCompareUnicodeStrings.c)
 */

unsigned __int16 *__fastcall RtlFindUnicodeSubstring(__int16 *a1, unsigned __int16 *a2, char a3)
{
  unsigned __int16 v3; // ax
  __int64 v4; // rbx
  unsigned __int16 *v6; // rdi
  unsigned __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // r13
  unsigned __int64 v11; // r15

  v3 = *a1;
  v4 = 0LL;
  v6 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  if ( (unsigned __int16)*a1 >= *a2 )
  {
    v7 = *a2;
    v8 = v3;
    if ( v3 >= v7 )
    {
      v9 = 0LL;
      v10 = *((_QWORD *)a2 + 1);
      v11 = (unsigned __int64)*a2 >> 1;
      while ( (unsigned int)RtlCompareUnicodeStrings(v6, v11, v10, v11, a3) )
      {
        v9 += 2LL;
        ++v6;
        if ( v8 - v9 < v7 )
          return (unsigned __int16 *)v4;
      }
      return v6;
    }
  }
  return (unsigned __int16 *)v4;
}
