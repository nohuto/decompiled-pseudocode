/*
 * XREFs of Do5225 @ 0x1400F3330
 * Callers:
 *     FastExpAA_CY @ 0x1400F20D0 (FastExpAA_CY.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Do5225(_BYTE *a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 *a4, int a5)
{
  int v7; // esi
  int i; // ebp
  int v10; // r10d
  int v11; // r8d
  int v12; // eax
  __int64 result; // rax
  signed __int64 v14; // r11
  signed __int64 v15; // rbx
  __int64 v16; // rdi
  int v17; // r10d
  int v18; // r9d
  int v19; // eax

  v7 = a5 >> 2;
  for ( i = a5 & 3; v7; --v7 )
  {
    *a1 = (*a4 + 16 + *a2 + 22 * *a3 + 4 * (*a2 + (unsigned int)*a4)) >> 5;
    a1[1] = (a4[1] + 16 + a2[1] + 22 * a3[1] + 4 * (a2[1] + (unsigned int)a4[1])) >> 5;
    a1[2] = (a4[2] + 16 + a2[2] + 22 * a3[2] + 4 * (a2[2] + (unsigned int)a4[2])) >> 5;
    v10 = a4[3];
    a4 += 4;
    v11 = a2[3];
    a2 += 4;
    v12 = a3[3];
    a3 += 4;
    result = (unsigned int)(v11 + 22 * v12);
    a1[3] = (unsigned int)(v10 + result + 4 * (v11 + v10 + 4)) >> 5;
    a1 += 4;
  }
  if ( (a5 & 3) != 0 )
  {
    v14 = a4 - a2;
    v15 = a3 - a2;
    v16 = a1 - a2;
    do
    {
      v17 = *a2;
      v18 = a2[v14];
      v19 = (a2++)[v15];
      result = (unsigned int)(v18 + 22 * v19);
      a2[v16 - 1] = (unsigned int)(v17 + result + 4 * (v18 + v17 + 4)) >> 5;
      --i;
    }
    while ( i );
  }
  return result;
}
