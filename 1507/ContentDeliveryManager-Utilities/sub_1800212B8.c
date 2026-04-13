/*
 * XREFs of sub_1800212B8 @ 0x1800212B8
 * Callers:
 *     sub_180015080 @ 0x180015080 (sub_180015080.c)
 * Callees:
 *     sub_1800225F4 @ 0x1800225F4 (sub_1800225F4.c)
 */

__int64 __fastcall sub_1800212B8(unsigned __int8 *a1, unsigned __int8 **a2, unsigned int a3, _DWORD *a4)
{
  unsigned __int8 **v4; // rsi
  char *v6; // rdi
  int v7; // ecx
  char v10; // bl
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edi
  unsigned int v15; // eax
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v4 = (unsigned __int8 **)&v16;
  v6 = (char *)a1;
  v7 = *a1;
  if ( a2 )
    v4 = a2;
  while ( isspace(v7) )
    v7 = (unsigned __int8)*++v6;
  v10 = *v6;
  if ( ((*v6 - 43) & 0xFD) != 0 )
    v10 = 43;
  else
    ++v6;
  v11 = sub_1800225F4(v6, v4, a3, a4);
  v12 = v11;
  if ( v6 == (char *)*v4 )
    *v4 = a1;
  v13 = 0x7FFFFFFF;
  if ( a1 == *v4 && v11 || v10 == 43 && v11 > 0x7FFFFFFF || v10 == 45 && v11 > 0x80000000 )
  {
    *errno() = 34;
    if ( a4 )
      *a4 = 1;
    if ( v10 == 45 )
      return 0x80000000;
    return v13;
  }
  else
  {
    v15 = -v11;
    if ( v10 == 45 )
      return v15;
    return v12;
  }
}
