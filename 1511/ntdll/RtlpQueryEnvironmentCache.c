/*
 * XREFs of RtlpQueryEnvironmentCache @ 0x18002EE74
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x18002EB50 (RtlQueryEnvironmentVariable.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x18002F010 (RtlCompareUnicodeStrings.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

__int64 __fastcall RtlpQueryEnvironmentCache(
        _QWORD *a1,
        const WCHAR *a2,
        SIZE_T a3,
        _WORD *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  __int64 v9; // r12
  unsigned int v10; // edi
  char *v11; // rbx
  int v12; // r13d
  char *v13; // rbp
  void *Environment; // rax
  const void *v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rbx
  const WCHAR *v19; // [rsp+68h] [rbp+10h]

  v19 = a2;
  if ( a3 - 1 <= 0x13 )
  {
    v9 = 14 * a3;
    v10 = 0;
    v11 = (char *)&RtlpEnvironLookupTable[14 * a3 - 12];
    v12 = RtlpEnvironLookupTable[14 * a3 - 14];
    v13 = &v11[16 * v12];
    if ( v11 < v13 )
    {
      while ( RtlCompareUnicodeStrings(*(PCWCH *)v11, a3, a2, a3, 1u) )
      {
        a2 = v19;
        v11 += 16;
        if ( v11 >= v13 )
          goto LABEL_5;
      }
      v15 = (const void *)(*(_QWORD *)v11 + 2 * (a3 + 1));
      v16 = ((__int64)(*((_QWORD *)v11 + 1) - (_QWORD)v15) >> 1) - 1;
      if ( a4 )
      {
        if ( v16 < a5 )
        {
          v17 = v16;
          *a6 = v16;
          memmove(a4, v15, 2 * v16);
          a4[v17] = 0;
          return v10;
        }
        if ( a5 )
          *a4 = 0;
      }
      v10 = -1073741789;
      *a6 = v16 + 1;
      return v10;
    }
LABEL_5:
    if ( v12 == 3 )
    {
      Environment = *(void **)&RtlpEnvironLookupTable[v9 - 2];
    }
    else
    {
      Environment = (void *)qword_180145EA0;
      if ( !qword_180145EA0 )
        Environment = NtCurrentPeb()->ProcessParameters->Environment;
    }
    *a1 = Environment;
  }
  return 3221225728LL;
}
