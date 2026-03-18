/*
 * XREFs of InbvSetScrollRegion @ 0x1401B5C74
 * Callers:
 *     DisplayBootBitmap @ 0x1401344C8 (DisplayBootBitmap.c)
 *     PopShutdownHandler @ 0x1403B2C90 (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

__int64 (*InbvSetScrollRegion())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140305D60;
  if ( qword_140305D60 )
  {
    result = *(__int64 (**)(void))(qword_140305D60 + 72);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
