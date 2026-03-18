/*
 * XREFs of sbit_SearchForBitmap @ 0x1C00C4F68
 * Callers:
 *     fs_NewGlyph @ 0x1C00C4E04 (fs_NewGlyph.c)
 * Callees:
 *     sfac_SearchForStrike @ 0x1C001D694 (sfac_SearchForStrike.c)
 *     sfac_SearchForBitmap @ 0x1C001DB10 (sfac_SearchForBitmap.c)
 */

__int64 __fastcall sbit_SearchForBitmap(
        __int64 a1,
        unsigned int *a2,
        unsigned __int16 a3,
        __int16 a4,
        _WORD *a5,
        _WORD *a6)
{
  _WORD *v9; // rdi
  __int64 result; // rax

  *a6 = 0;
  if ( *(_WORD *)(a1 + 38) > 3u )
    return 0LL;
  v9 = (_WORD *)(a1 + 28);
  if ( *(_WORD *)(a1 + 28)
    || (result = sfac_SearchForStrike(
                   a2,
                   *(_WORD *)(a1 + 30),
                   *(_WORD *)(a1 + 32),
                   a4,
                   a1 + 94,
                   v9,
                   (_WORD *)(a1 + 34),
                   (_WORD *)(a1 + 36),
                   (_DWORD *)a1),
        !(_DWORD)result) )
  {
    *a5 = *(_WORD *)(a1 + 94);
    if ( (unsigned __int16)(*v9 - 2) <= 1u )
    {
      result = sfac_SearchForBitmap(
                 (__int64)a2,
                 a3,
                 *(_DWORD *)a1,
                 (_DWORD *)(a1 + 84),
                 (_WORD *)(a1 + 40),
                 (_WORD *)(a1 + 42),
                 (unsigned __int32 *)(a1 + 4),
                 (unsigned __int16 *)(a1 + 44),
                 (unsigned __int32 *)(a1 + 8),
                 (unsigned __int32 *)(a1 + 12));
      if ( (_DWORD)result )
        return result;
      if ( *(_DWORD *)(a1 + 84) )
      {
        if ( *v9 == 2 )
          *a6 = 1;
        else
          *a6 = 2;
        *(_DWORD *)(a1 + 88) = 0;
      }
    }
    return 0LL;
  }
  return result;
}
