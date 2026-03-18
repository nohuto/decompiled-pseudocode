/*
 * XREFs of QueryRegistryFontIntensityCorrectionTableRoutine @ 0x1C011EAC0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 */

__int64 __fastcall QueryRegistryFontIntensityCorrectionTableRoutine(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned int a4,
        _QWORD *a5)
{
  unsigned int v5; // ebx
  unsigned int v7; // esi
  unsigned __int8 *v8; // rax
  unsigned __int8 *v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  float *v12; // r8
  __int64 v13; // rcx
  int v14; // eax

  v5 = 0;
  v7 = a4 / 0x14;
  if ( !(unsigned __int8)(a4 / 0x14) )
    return 3221225485LL;
  v8 = (unsigned __int8 *)PALLOCMEM2(80 * ((unsigned int)(unsigned __int8)v7 - 1) + 84, 1128875591LL, 1);
  v9 = v8;
  if ( !v8 )
    return 3221225632LL;
  *v8 = v7;
  if ( (_BYTE)v7 )
  {
    do
    {
      v10 = 80LL * v5;
      v9[v10 + 4] = *a3;
      v11 = a3[1];
      a3 += 2;
      v12 = (float *)&v9[v10 + 12];
      *(float *)&v9[v10 + 8] = (float)v11 * 0.0625;
      v13 = 18LL;
      do
      {
        v14 = *a3++;
        *v12++ = (float)v14 / 100.0;
        --v13;
      }
      while ( v13 );
      ++v5;
    }
    while ( v5 < *v9 );
  }
  *a5 = v9;
  return 0LL;
}
