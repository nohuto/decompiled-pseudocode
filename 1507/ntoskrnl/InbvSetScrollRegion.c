/*
 * XREFs of InbvSetScrollRegion @ 0x1401F0B88
 * Callers:
 *     DisplayBootBitmap @ 0x14015EE80 (DisplayBootBitmap.c)
 *     PopShutdownHandler @ 0x140403F30 (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

__int64 (*InbvSetScrollRegion())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140353AD8;
  if ( qword_140353AD8 )
  {
    result = *(__int64 (**)(void))(qword_140353AD8 + 72);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
