/*
 * XREFs of sbit_NewTransform @ 0x1C00AB8A0
 * Callers:
 *     fs__NewTransformation @ 0x1C00AAC30 (fs__NewTransformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sbit_NewTransform(
        __int64 a1,
        __int16 a2,
        __int16 a3,
        __int16 a4,
        __int16 a5,
        __int16 a6,
        __int16 a7)
{
  int v7; // eax
  int v8; // edx

  *(_WORD *)(a1 + 30) = a5;
  *(_WORD *)(a1 + 32) = a6;
  LOWORD(v7) = a3;
  *(_WORD *)(a1 + 38) = a7;
  *(_DWORD *)(a1 + 84) = 0;
  *(_WORD *)(a1 + 28) = 0;
  *(_WORD *)(a1 + 92) = a2;
  if ( a3 < 0 )
    v7 = -a3;
  *(_WORD *)(a1 + 96) = v7;
  LOWORD(v8) = a4;
  if ( a4 < 0 )
    v8 = -a4;
  *(_WORD *)(a1 + 98) = v8;
  if ( ((a7 - 1) & 0xFFFD) == 0 )
  {
    *(_WORD *)(a1 + 96) = v8;
    *(_WORD *)(a1 + 98) = v7;
  }
  return 0LL;
}
