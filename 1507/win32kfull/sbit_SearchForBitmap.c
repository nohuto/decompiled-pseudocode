/*
 * XREFs of sbit_SearchForBitmap @ 0x1C00B49BC
 * Callers:
 *     fs_NewGlyph @ 0x1C00B4858 (fs_NewGlyph.c)
 * Callees:
 *     sfac_SearchForStrike @ 0x1C00ACDDC (sfac_SearchForStrike.c)
 *     sfac_SearchForBitmap @ 0x1C011153C (sfac_SearchForBitmap.c)
 */

__int64 __fastcall sbit_SearchForBitmap(
        int *a1,
        unsigned int *a2,
        unsigned __int16 a3,
        __int16 a4,
        _WORD *a5,
        _WORD *a6)
{
  int v7; // r14d
  _WORD *v9; // rdi
  __int64 result; // rax

  v7 = (int)a2;
  *a6 = 0;
  if ( *((_WORD *)a1 + 19) > 3u )
    return 0LL;
  v9 = a1 + 7;
  if ( *((_WORD *)a1 + 14)
    || (result = sfac_SearchForStrike(
                   a2,
                   *((_WORD *)a1 + 15),
                   *((_WORD *)a1 + 16),
                   a4,
                   (unsigned __int16 *)a1 + 47,
                   v9,
                   (_WORD *)a1 + 17,
                   (__int16 *)a1 + 18,
                   a1),
        !(_DWORD)result) )
  {
    *a5 = *((_WORD *)a1 + 47);
    if ( (unsigned __int16)(*v9 - 2) <= 1u )
    {
      result = sfac_SearchForBitmap(
                 v7,
                 a3,
                 *a1,
                 (int)a1 + 84,
                 (__int64)(a1 + 10),
                 (__int64)a1 + 42,
                 (__int64)(a1 + 1),
                 (__int64)(a1 + 11),
                 (__int64)(a1 + 2),
                 (__int64)(a1 + 3));
      if ( (_DWORD)result )
        return result;
      if ( a1[21] )
      {
        if ( *v9 == 2 )
          *a6 = 1;
        else
          *a6 = 2;
        a1[22] = 0;
      }
    }
    return 0LL;
  }
  return result;
}
