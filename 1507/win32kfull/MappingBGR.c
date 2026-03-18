/*
 * XREFs of MappingBGR @ 0x1C0258DD8
 * Callers:
 *     GetFixupScan @ 0x1C0009D98 (GetFixupScan.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall MappingBGR(unsigned __int8 *a1, int a2, __int64 a3, unsigned __int8 *a4)
{
  int v4; // ebx
  unsigned __int8 *v5; // r10
  unsigned __int64 v6; // r11
  unsigned __int8 *v7; // r9
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int8 result; // al

  v4 = *a4;
  v5 = a1;
  v6 = (unsigned __int64)&a1[2 * a2 + a2];
  v7 = a4 + 1;
  do
  {
    v8 = (4 * (BGR555Idx[*v5] - (_WORD)v4)) & 0x7C00 | (unsigned __int64)((((__int64)(BGR555Idx[v5[2]] - v4) >> 5) | (BGR555Idx[v5[1]] - (_WORD)v4) & 0x1F00) >> 3);
    v9 = a3 + 2 * v8;
    *(_WORD *)v5 = *(_WORD *)(v8 + v9);
    result = *(_BYTE *)(v8 + v9 + 2);
    v5[2] = result;
    v4 = *v7++;
    if ( !v4 )
    {
      v7 -= 66;
      v4 = *v7;
    }
    v5 += 3;
  }
  while ( (unsigned __int64)v5 < v6 );
  return result;
}
