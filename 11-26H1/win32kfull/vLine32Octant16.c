/*
 * XREFs of vLine32Octant16 @ 0x140198570
 * Callers:
 *     vDrawLine @ 0x140187A94 (vDrawLine.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall vLine32Octant16(int *a1, __int64 a2, int a3, int a4)
{
  _DWORD *result; // rax
  int v5; // r10d
  int v6; // ebx
  int v7; // edi
  int v8; // esi
  _DWORD *v9; // r11
  int i; // r10d
  int v11; // ecx
  int v12; // ebx

  result = (_DWORD *)a1[1];
  v5 = a1[3];
  v6 = a1[6];
  v7 = a1[4];
  v8 = a1[5];
  v9 = (_DWORD *)(a2 + 4LL * (_QWORD)result);
  *v9 = a4;
  for ( i = v5 - 1; i; --i )
  {
    result = (_DWORD *)((char *)v9 + a3);
    v9 = result + 1;
    v12 = v8 + v6;
    v11 = v12;
    if ( v12 < 0 )
      v9 = result;
    v6 = v12 - v7;
    if ( v11 < 0 )
      v6 = v11;
    *v9 = a4;
  }
  return result;
}
