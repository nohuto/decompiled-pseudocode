/*
 * XREFs of vLine4Octant07 @ 0x140238F10
 * Callers:
 *     vDrawLine @ 0x140187A94 (vDrawLine.c)
 * Callees:
 *     <none>
 */

char __fastcall vLine4Octant07(_DWORD *a1, __int64 a2, int a3, char a4)
{
  unsigned int v4; // esi
  int v5; // ebx
  int v6; // r15d
  __int64 v7; // rdi
  int v8; // ebp
  int v9; // r11d
  __int64 v10; // r14
  unsigned __int64 v11; // r10
  char v12; // r8
  char v13; // cl
  char result; // al
  unsigned __int64 v15; // rdx

  v4 = a1[1];
  v5 = a1[6];
  v6 = a1[4];
  v7 = a2;
  v8 = a1[5];
  v9 = a1[3];
  v10 = a3;
  v11 = (unsigned __int64)v4 >> 1;
  v12 = a4 & 0xF | (16 * (a4 & 0xF));
  v13 = byte_1403660D0[v4 & 1];
  result = v13 & *(_BYTE *)(v11 + a2);
  *(_BYTE *)(v11 + a2) = result | v12 & ~v13;
  while ( --v9 )
  {
    ++v4;
    v5 += v8;
    if ( v5 >= 0 )
    {
      v5 -= v6;
      v7 += v10;
    }
    v15 = (unsigned __int64)v4 >> 1;
    result = *(_BYTE *)(v15 + v7) & byte_1403660D0[v4 & 1] | v12 & ~byte_1403660D0[v4 & 1];
    *(_BYTE *)(v15 + v7) = result;
  }
  return result;
}
