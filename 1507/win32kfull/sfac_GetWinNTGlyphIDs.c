/*
 * XREFs of sfac_GetWinNTGlyphIDs @ 0x1C01249C8
 * Callers:
 *     fs_WinNTGetGlyphIDs @ 0x1C0124958 (fs_WinNTGetGlyphIDs.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C00ADC14 (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C00ADC28 (sfac_GetDataPtr.c)
 *     sfac_GetLongGlyphIDs @ 0x1C0124A90 (sfac_GetLongGlyphIDs.c)
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
  result = sfac_GetDataPtr(a1, 0, 0xFFFFFFFF, 8, 1, &v13);
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
    InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
    return LongGlyphIDs;
  }
  return result;
}
