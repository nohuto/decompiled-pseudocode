/*
 * XREFs of InbvSetScrollRegion @ 0x1401C3640
 * Callers:
 *     DisplayBootBitmap @ 0x14013CBCC (DisplayBootBitmap.c)
 *     PopShutdownHandler @ 0x1403DF97C (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

__int64 (*InbvSetScrollRegion())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140328E10;
  if ( qword_140328E10 )
  {
    result = *(__int64 (**)(void))(qword_140328E10 + 72);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
