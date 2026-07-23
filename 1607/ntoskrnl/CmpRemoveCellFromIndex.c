/*
 * XREFs of CmpRemoveCellFromIndex @ 0x14060AA60
 * Callers:
 *     CmpRemoveSubKeyCellNoCellRef @ 0x14060AB08 (CmpRemoveSubKeyCellNoCellRef.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 */

unsigned __int16 __fastcall CmpRemoveCellFromIndex(_WORD *a1, unsigned __int16 a2)
{
  unsigned __int16 result; // ax
  size_t v4; // r8
  _WORD *v5; // rdx
  _WORD *v6; // rcx

  result = a1[1];
  if ( ((*a1 - 26220) & 0xFDFF) != 0 )
  {
    if ( a2 < result )
    {
      a1[1] = --result;
      if ( result )
      {
        v4 = 4LL * (result - a2);
        v5 = &a1[2 * a2 + 4];
        v6 = &a1[2 * a2 + 2];
        return (unsigned __int16)memmove(v6, v5, v4);
      }
    }
  }
  else if ( a2 < result )
  {
    a1[1] = --result;
    if ( result )
    {
      v4 = 8LL * (result - a2);
      v5 = &a1[4 * a2 + 6];
      v6 = &a1[4 * a2 + 2];
      return (unsigned __int16)memmove(v6, v5, v4);
    }
  }
  return result;
}
