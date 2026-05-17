/*
 * XREFs of ResourceEntryBinarySearch @ 0x1800311C0
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180030670 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     LdrpCompareResourceNames_U @ 0x1800312D0 (LdrpCompareResourceNames_U.c)
 */

_QWORD *__fastcall ResourceEntryBinarySearch(
        unsigned __int16 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v6; // rbx
  unsigned __int16 v7; // di
  unsigned __int64 v8; // r14
  __int64 v10; // rsi
  unsigned __int64 v11; // r12
  unsigned __int16 v12; // bp
  char v13; // di
  __int64 v14; // rax
  unsigned __int64 v15; // r13
  int v16; // eax
  bool v17; // zf
  __int64 v18; // rax
  _QWORD *result; // rax
  __int64 v20; // [rsp+68h] [rbp+20h]

  v20 = a4;
  v6 = 0LL;
  v7 = a1;
  v8 = a3;
  v10 = 0LL;
  v11 = a3 - 8 + 8LL * a1;
  if ( a3 <= v11 )
  {
    while ( 1 )
    {
      v12 = v7 >> 1;
      if ( !(v7 >> 1) )
        break;
      v13 = v7 & 1;
      if ( v13 )
        v14 = v12;
      else
        v14 = v12 - 1;
      v15 = v8 + 8 * v14;
      v16 = LdrpCompareResourceNames_U(a4, a2, v15);
      if ( !v16 )
      {
        v18 = *(unsigned int *)(v15 + 4);
LABEL_12:
        if ( (int)v18 >= 0 )
          v10 = a2 + v18;
        else
          v6 = a2 + (v18 & 0xFFFFFFFF7FFFFFFFuLL);
        goto LABEL_14;
      }
      if ( v16 >= 0 )
      {
        v8 = v15 + 8;
        v7 = v12;
      }
      else
      {
        v17 = v13 == 0;
        v11 = v15 - 8;
        v7 = v12;
        if ( v17 )
          v7 = v12 - 1;
      }
      a4 = v20;
      if ( v8 > v11 )
        goto LABEL_14;
    }
    if ( v7 && !(unsigned int)LdrpCompareResourceNames_U(a4, a2, v8) )
    {
      v18 = *(unsigned int *)(v8 + 4);
      goto LABEL_12;
    }
  }
LABEL_14:
  *a5 = v6;
  result = a6;
  *a6 = v10;
  return result;
}
