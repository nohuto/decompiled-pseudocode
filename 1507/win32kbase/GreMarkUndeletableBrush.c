/*
 * XREFs of GreMarkUndeletableBrush @ 0x1C0081500
 * Callers:
 *     SetSysColor @ 0x1C0025420 (SetSysColor.c)
 * Callees:
 *     HmgMarkUndeletable @ 0x1C000F910 (HmgMarkUndeletable.c)
 */

__int64 __fastcall GreMarkUndeletableBrush(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return HmgMarkUndeletable(a1, 16);
  return result;
}
