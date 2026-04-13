/*
 * XREFs of sub_180004DFC @ 0x180004DFC
 * Callers:
 *     sub_180001AB4 @ 0x180001AB4 (sub_180001AB4.c)
 * Callees:
 *     memcpy @ 0x180026528 (memcpy.c)
 */

char *__fastcall sub_180004DFC(char *a1, __int64 a2, __int16 *a3, _QWORD *a4)
{
  __int16 *v5; // rdx
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  __int64 v12; // r14
  char *v13; // rax
  __int16 v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = 0;
  v5 = &v15;
  if ( a3 )
    v5 = a3;
  if ( v5 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v5[v9] );
    v8 = 2 * v9 + 2;
  }
  else
  {
    v8 = 2LL;
  }
  v10 = v8 >> 1;
  v11 = (unsigned __int64)(a2 - (_QWORD)a1) >> 1;
  if ( v10 < v11 )
    v11 = v10;
  v12 = 2 * v11;
  memcpy(a1, v5, 2 * v11);
  if ( a4 )
  {
    v13 = 0LL;
    if ( v11 > 1 )
      v13 = a1;
    *a4 = v13;
  }
  if ( v11 < v10 && v11 )
    *(_WORD *)&a1[v12 - 2] = 0;
  return &a1[v12];
}
