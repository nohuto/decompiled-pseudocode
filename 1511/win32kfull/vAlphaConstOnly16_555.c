/*
 * XREFs of vAlphaConstOnly16_555 @ 0x1C02BC280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int16 __fastcall vAlphaConstOnly16_555(_WORD *a1, unsigned __int64 a2, int a3, unsigned int a4)
{
  __int64 v4; // rdi
  unsigned int v5; // r9d
  __int16 result; // ax
  _WORD *v7; // rbx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r10
  int v10; // esi
  unsigned __int64 v11; // r11
  int v12; // r9d

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
      v12 = ((unsigned __int16)*v7 >> 5) & 0x1F;
      result = (v10 * (((*(_WORD *)((char *)v7 + v11) >> 5) & 0x1F) - v12)
              + 16
              + 31 * v12
              + (((v10 * (((*(unsigned __int16 *)((char *)v7 + v11) >> 5) & 0x1Fu) - v12) + 16 + 31 * v12) >> 5) & 0x1F)) & 0x3E0;
      *v7 = result | ((v10 * ((*(_WORD *)((char *)v7 + v11) & 0x7C1F) - (*v7 & 0x7C1F))
                     + 16400
                     + 31 * (*v7 & 0x7C1F)
                     + (((v10 * ((*(_WORD *)((char *)v7 + v11) & 0x7C1F) - (*v7 & 0x7C1F)) + 16400 + 31 * (*v7 & 0x7C1Fu)) >> 5) & 0x7C1F)) >> 5) & 0x7C1F;
      ++v7;
    }
    while ( v4 != v9 );
  }
  return result;
}
