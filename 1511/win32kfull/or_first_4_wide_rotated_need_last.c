/*
 * XREFs of or_first_4_wide_rotated_need_last @ 0x1C02D2770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall or_first_4_wide_rotated_need_last(int a1, char a2, int a3, int *a4, _BYTE *a5)
{
  int *v6; // r10
  __int64 v7; // rbx
  int v8; // ecx
  int v9; // r8d
  unsigned int v10; // eax
  unsigned int v11; // r8d
  __int64 result; // rax

  v6 = &a4[a1];
  v7 = a3;
  do
  {
    v8 = *a4;
    v9 = *a4 & 0xFF0000;
    v10 = HIWORD(*a4++);
    v11 = ((((v8 << 16) | v8 & 0xFF00) << 8) | ((v10 | v9) >> 8)) >> a2;
    a5[3] = v11;
    *a5 |= HIBYTE(v11);
    a5[1] = BYTE2(v11);
    result = v11 >> 8;
    a5[2] = BYTE1(v11);
    a5 += v7;
  }
  while ( a4 != v6 );
  return result;
}
