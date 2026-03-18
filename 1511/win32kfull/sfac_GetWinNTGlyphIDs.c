/*
 * XREFs of sfac_GetWinNTGlyphIDs @ 0x1C00A2590
 * Callers:
 *     fs_WinNTGetGlyphIDs @ 0x1C00A2520 (fs_WinNTGetGlyphIDs.c)
 * Callees:
 *     sfac_GetLongGlyphIDs @ 0x1C00A3F64 (sfac_GetLongGlyphIDs.c)
 *     InvokeReleaseSfntFrag @ 0x1C00A631C (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C00A6330 (sfac_GetDataPtr.c)
 */

__int64 __fastcall sfac_GetWinNTGlyphIDs(
        __int64 a1,
        unsigned __int16 a2,
        __int16 a3,
        __int16 a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  __int64 result; // rax
  unsigned int LongGlyphIDs; // ebx
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  if ( (*(_WORD *)(a1 + 208) & 0xFFF9) != 0 )
    return 5130LL;
  result = sfac_GetDataPtr(a1, 0, -1, 8, 1, (__int64)&v13);
  if ( !(_DWORD)result )
  {
    LongGlyphIDs = sfac_GetLongGlyphIDs(
                     *(_DWORD *)(a1 + 212),
                     (int)v13 + *(_DWORD *)(a1 + 20),
                     a1,
                     a2,
                     a3,
                     a4,
                     a5,
                     a6,
                     a7);
    InvokeReleaseSfntFrag(*(unsigned int *)(a1 + 12));
    return LongGlyphIDs;
  }
  return result;
}
