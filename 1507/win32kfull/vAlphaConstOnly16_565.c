/*
 * XREFs of vAlphaConstOnly16_565 @ 0x1C02BCF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vAlphaConstOnly16_565(_WORD *a1, unsigned __int64 a2, int a3, unsigned int a4)
{
  __int64 v4; // rbx
  unsigned int v5; // r9d
  __int64 result; // rax
  _WORD *v7; // rdi
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r10
  int v10; // esi
  unsigned __int64 v11; // r11
  unsigned int v12; // r8d
  int v13; // eax
  int v14; // r8d
  unsigned int v15; // r9d

  v4 = 0LL;
  v5 = HIWORD(a4);
  result = a3;
  v7 = a1;
  v8 = a2 + 2LL * a3;
  v9 = (v8 - a2 + 1) >> 1;
  if ( a2 > v8 )
    v9 = 0LL;
  if ( v9 )
  {
    v10 = (unsigned __int8)v5;
    v11 = a2 - (_QWORD)a1;
    do
    {
      ++v4;
      v12 = (unsigned __int16)*v7;
      v13 = v12 & 0xF81F;
      v14 = (v12 >> 5) & 0x3F;
      v15 = v10 * ((*(_WORD *)((char *)v7 + v11) & 0xF81F) - v13) + 32784 + 31 * v13;
      result = (v15 + ((v15 >> 5) & 0xF81F)) >> 5;
      *v7 = result ^ (((63 * v14
                      + 2 * (v10 * (((*(unsigned __int16 *)((char *)v7 + v11) >> 5) & 0x3F) - v14) + 16)
                      + (((63 * v14 + 2 * (v10 * (((*(unsigned __int16 *)((char *)v7 + v11) >> 5) & 0x3Fu) - v14) + 16)) >> 6) & 0x3F)) >> 1) ^ ((v15 + ((v15 >> 5) & 0xF81F)) >> 5)) & 0x7E0;
      ++v7;
    }
    while ( v4 != v9 );
  }
  return result;
}
