/*
 * XREFs of vLine4Octant25 @ 0x140341120
 * Callers:
 *     vDrawLine @ 0x140187A94 (vDrawLine.c)
 * Callees:
 *     <none>
 */

char __fastcall vLine4Octant25(_DWORD *a1, __int64 a2, int a3, char a4)
{
  unsigned int v4; // esi
  int v5; // r11d
  int v6; // ebp
  __int64 v7; // rbx
  int v8; // r14d
  int v9; // r15d
  unsigned __int64 v10; // r10
  char v11; // di
  char v12; // cl
  char result; // al
  int v14; // r11d
  __int64 v15; // r10
  int v16; // r9d
  unsigned int v17; // eax
  int v18; // ebp
  unsigned __int64 v19; // r8
  char v20; // cl

  v4 = a1[1];
  v5 = a1[3];
  v6 = a1[6];
  v7 = a2;
  v8 = a1[4];
  v9 = a1[5];
  v10 = (unsigned __int64)v4 >> 1;
  v11 = a4 & 0xF | (16 * (a4 & 0xF));
  v12 = byte_1403660D0[v4 & 1];
  result = v12 & *(_BYTE *)(v10 + a2);
  *(_BYTE *)(v10 + a2) = result | v11 & ~v12;
  v14 = v5 - 1;
  if ( v14 )
  {
    v15 = a3;
    do
    {
      v7 += v15;
      v17 = v4 - 1;
      v18 = v9 + v6;
      v16 = v18;
      if ( v18 < 0 )
        v17 = v4;
      v6 = v18 - v8;
      v19 = (unsigned __int64)v17 >> 1;
      v4 = v17;
      v20 = byte_1403660D0[v17 & 1];
      result = v20 & *(_BYTE *)(v19 + v7);
      *(_BYTE *)(v19 + v7) = result | v11 & ~v20;
      if ( v16 < 0 )
        v6 = v16;
      --v14;
    }
    while ( v14 );
  }
  return result;
}
