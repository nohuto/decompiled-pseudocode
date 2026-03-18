/*
 * XREFs of HalpCalculateChsValues @ 0x14066EC10
 * Callers:
 *     IoWritePartitionTable @ 0x14066ED20 (IoWritePartitionTable.c)
 * Callees:
 *     <none>
 */

char __fastcall HalpCalculateChsValues(
        __int64 *a1,
        __int64 *a2,
        char a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        _BYTE *a7)
{
  unsigned int v7; // r11d
  int v8; // edi
  unsigned int v9; // ebx
  __int64 v10; // rax
  unsigned int v11; // r10d
  unsigned int v12; // esi
  unsigned int v13; // ebp
  unsigned int v14; // et2
  unsigned int v15; // r8d
  int v16; // eax
  int v17; // edx
  char result; // al

  v7 = a6;
  v8 = a5;
  v9 = a4;
  if ( a6 - 1 > 0x3FF )
    v7 = 1024;
  if ( (unsigned int)(a5 - 1) > 0xFE )
    v8 = 255;
  if ( a4 - 1 > 0x3E )
    v9 = 63;
  v10 = *a1 >> a3;
  v11 = (unsigned int)v10 / (v8 * v9);
  v12 = (unsigned int)v10 % (v8 * v9) / v9;
  v13 = (unsigned int)v10 % (v8 * v9) % v9 + 1;
  v14 = ((unsigned int)v10 + (unsigned int)(*a2 >> a3) - 1) % (v8 * v9);
  v15 = ((unsigned int)v10 + (unsigned int)(*a2 >> a3) - 1) / (v8 * v9);
  v16 = v14 / v9;
  v17 = v14 % v9 + 1;
  if ( v11 >= v7 )
  {
    v11 = v7 - 1;
    LOBYTE(v13) = v9;
    LOBYTE(v12) = v8 - 1;
  }
  if ( v15 >= v7 )
  {
    v15 = v7 - 1;
    LOBYTE(v17) = v9;
    LOBYTE(v16) = v8 - 1;
  }
  a7[5] = v16;
  a7[3] = v11;
  a7[7] = v15;
  a7[2] = (v11 >> 2) ^ (v13 ^ (v11 >> 2)) & 0x3F;
  a7[1] = v12;
  result = (v15 >> 2) ^ (v17 ^ (v15 >> 2)) & 0x3F;
  a7[6] = result;
  return result;
}
