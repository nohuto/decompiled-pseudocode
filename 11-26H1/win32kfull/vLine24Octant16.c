/*
 * XREFs of vLine24Octant16 @ 0x1401CFC50
 * Callers:
 *     vDrawLine @ 0x140187A94 (vDrawLine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall vLine24Octant16(_DWORD *a1, __int64 a2, int a3, int a4)
{
  int v4; // r10d
  int v5; // r11d
  int v6; // ebp
  int v7; // r14d
  __int64 result; // rax
  __int64 v9; // rdx
  int i; // r10d
  int v11; // ecx
  int v12; // r11d

  v4 = a1[3];
  v5 = a1[6];
  v6 = a1[4];
  v7 = a1[5];
  result = 3 * a1[1];
  v9 = result + a2;
  *(_WORD *)v9 = a4;
  *(_BYTE *)(v9 + 2) = BYTE2(a4);
  for ( i = v4 - 1; i; --i )
  {
    result = a3 + v9;
    v9 = result + 3;
    v12 = v7 + v5;
    v11 = v12;
    if ( v12 < 0 )
      v9 = result;
    v5 = v12 - v6;
    if ( v11 < 0 )
      v5 = v11;
    *(_WORD *)v9 = a4;
    *(_BYTE *)(v9 + 2) = BYTE2(a4);
  }
  return result;
}
