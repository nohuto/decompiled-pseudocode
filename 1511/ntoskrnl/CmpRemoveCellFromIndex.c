/*
 * XREFs of CmpRemoveCellFromIndex @ 0x1405E3FF4
 * Callers:
 *     CmpRemoveSubKeyCellNoCellRef @ 0x1405E4090 (CmpRemoveSubKeyCellNoCellRef.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 */

unsigned __int64 __fastcall CmpRemoveCellFromIndex(_WORD *a1, unsigned __int16 a2)
{
  bool v3; // zf
  unsigned __int64 result; // rax
  size_t v5; // r8
  _WORD *v6; // rdx
  _WORD *v7; // rcx

  if ( ((*a1 - 26220) & 0xFDFF) != 0 )
  {
    v3 = a1[1]-- == 1;
    result = (unsigned __int16)a1[1];
    if ( v3 )
      return result;
    v5 = 4LL * ((unsigned __int16)result - a2);
    v6 = &a1[2 * a2 + 4];
    v7 = &a1[2 * a2 + 2];
  }
  else
  {
    v3 = a1[1]-- == 1;
    result = (unsigned __int16)a1[1];
    if ( v3 )
      return result;
    v5 = 8LL * ((unsigned __int16)result - a2);
    v6 = &a1[4 * a2 + 6];
    v7 = &a1[4 * a2 + 2];
  }
  return (unsigned __int64)memmove(v7, v6, v5);
}
