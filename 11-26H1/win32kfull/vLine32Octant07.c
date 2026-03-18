/*
 * XREFs of vLine32Octant07 @ 0x1401AC210
 * Callers:
 *     vDrawLine @ 0x140187A94 (vDrawLine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall vLine32Octant07(int *a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  int v5; // r11d
  int v6; // edi
  int v7; // ebx
  int v8; // r10d
  _DWORD *v9; // rcx

  result = a1[1];
  v5 = a1[6];
  v6 = a1[4];
  v7 = a1[5];
  v8 = a1[3];
  v9 = (_DWORD *)(a2 + 4 * result);
  while ( 1 )
  {
    *v9 = a4;
    if ( !--v8 )
      break;
    ++v9;
    v5 += v7;
    if ( v5 >= 0 )
    {
      v5 -= v6;
      result = a3;
      v9 = (_DWORD *)((char *)v9 + a3);
    }
  }
  return result;
}
