/*
 * XREFs of ResourceEntryBinarySearch @ 0x180030F24
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180030398 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     LdrpCompareResourceNamesWithValidation @ 0x1800DC310 (LdrpCompareResourceNamesWithValidation.c)
 */

char __fastcall ResourceEntryBinarySearch(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        _QWORD *a7,
        _QWORD *a8)
{
  unsigned __int64 v8; // r14
  __int64 v9; // rdi
  unsigned __int16 v11; // si
  __int64 v14; // r15
  unsigned __int16 v15; // bp
  char v16; // si
  __int64 v17; // rax
  unsigned __int64 v18; // r15
  int v19; // eax
  unsigned __int64 v20; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  int v24; // eax
  char v25; // [rsp+80h] [rbp+18h] BYREF

  v8 = a5;
  v9 = 0LL;
  v11 = a3;
  v14 = 0LL;
  *a7 = 0LL;
  *a8 = 0LL;
  a5 = v8 - 8 + 8LL * a3;
  if ( v8 > a5 )
  {
LABEL_15:
    *a7 = v9;
    *a8 = v14;
    return 1;
  }
  while ( 1 )
  {
    v15 = v11 >> 1;
    if ( !(v11 >> 1) )
      break;
    v16 = v11 & 1;
    if ( v16 )
      v17 = v15;
    else
      v17 = v15 - 1;
    v18 = v8 + 8 * v17;
    v19 = LdrpCompareResourceNamesWithValidation(a1, a2, a6, a4, v18, &v25);
    if ( !v25 )
      return 0;
    if ( !v19 )
    {
      v22 = *(unsigned int *)(v18 + 4);
      goto LABEL_17;
    }
    if ( v19 >= 0 )
    {
      v20 = a5;
      v8 = v18 + 8;
LABEL_12:
      v11 = v15;
      goto LABEL_13;
    }
    v20 = v18 - 8;
    a5 = v18 - 8;
    if ( v16 )
      goto LABEL_12;
    v11 = v15 - 1;
LABEL_13:
    if ( v8 > v20 )
      goto LABEL_14;
  }
  if ( !v11 )
    goto LABEL_14;
  v24 = LdrpCompareResourceNamesWithValidation(a1, a2, a6, a4, v8, &v25);
  if ( !v25 )
    return 0;
  if ( v24 )
  {
LABEL_14:
    v14 = 0LL;
    goto LABEL_15;
  }
  v22 = *(unsigned int *)(v8 + 4);
LABEL_17:
  v23 = a2 + (a1 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( (int)v22 >= 0 )
  {
    v14 = v22 + a4;
    if ( v22 + a4 > v23 )
      return 0;
    goto LABEL_15;
  }
  LODWORD(v22) = v22 & 0x7FFFFFFF;
  v9 = v22 + a4;
  if ( v22 + a4 <= v23 )
  {
    v14 = 0LL;
    goto LABEL_15;
  }
  return 0;
}
