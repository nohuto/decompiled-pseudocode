/*
 * XREFs of DT_DrawJustifiedLine @ 0x1C024AD98
 * Callers:
 *     AddEllipsisAndDrawLine @ 0x1C024ABC0 (AddEllipsisAndDrawLine.c)
 * Callees:
 *     DT_DrawStr @ 0x1C024AE58 (DT_DrawStr.c)
 */

__int64 __fastcall DT_DrawJustifiedLine(int a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
  __int64 result; // rax

  if ( (a5 & 3) != 0 )
    DT_DrawStr(a1, a4, 0, a5, a6, -1);
  result = *(_DWORD *)(a6 + 56) + (unsigned int)DT_DrawStr(a1, a4, 1, a5, a6, -1);
  if ( (int)result > *(_DWORD *)(a6 + 36) )
    *(_DWORD *)(a6 + 36) = result;
  return result;
}
