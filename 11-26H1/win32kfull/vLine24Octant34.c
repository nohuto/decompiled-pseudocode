/*
 * XREFs of vLine24Octant34 @ 0x1401F2750
 * Callers:
 *     vDrawLine @ 0x140187A94 (vDrawLine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall vLine24Octant34(_DWORD *a1, __int64 a2, int a3, int a4)
{
  int v4; // r11d
  int v5; // ebp
  int v6; // esi
  int v7; // r10d
  __int64 result; // rax

  v4 = a1[6];
  v5 = a1[4];
  v6 = a1[5];
  v7 = a1[3];
  result = 3 * a1[1];
LABEL_4:
  a2 += result;
  while ( 1 )
  {
    *(_BYTE *)(a2 + 2) = BYTE2(a4);
    *(_WORD *)a2 = a4;
    if ( !--v7 )
      return result;
    a2 -= 3LL;
    v4 += v6;
    if ( v4 >= 0 )
    {
      v4 -= v5;
      result = a3;
      goto LABEL_4;
    }
  }
}
