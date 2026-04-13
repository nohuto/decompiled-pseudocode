/*
 * XREFs of sub_180004EB4 @ 0x180004EB4
 * Callers:
 *     sub_180001AB4 @ 0x180001AB4 (sub_180001AB4.c)
 * Callees:
 *     memcpy @ 0x180026528 (memcpy.c)
 */

char *__fastcall sub_180004EB4(char *a1, __int64 a2, char *a3, _QWORD *a4)
{
  char *v5; // rdx
  unsigned __int64 v8; // rdi
  __int64 v9; // rdi
  size_t v10; // rbx
  char *v11; // rax
  char v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = 0;
  v5 = &v13;
  if ( a3 )
    v5 = a3;
  if ( v5 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v5[v9] );
    v8 = v9 + 1;
  }
  else
  {
    v8 = 1LL;
  }
  v10 = a2 - (_QWORD)a1;
  if ( v8 < v10 )
    v10 = v8;
  memcpy(a1, v5, v10);
  if ( a4 )
  {
    v11 = 0LL;
    if ( v10 > 1 )
      v11 = a1;
    *a4 = v11;
  }
  if ( v10 < v8 && v10 )
    a1[v10 - 1] = 0;
  return &a1[v10];
}
