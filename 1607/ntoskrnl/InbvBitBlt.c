/*
 * XREFs of InbvBitBlt @ 0x1401C3644
 * Callers:
 *     DisplayBootBitmap @ 0x14013C65C (DisplayBootBitmap.c)
 *     PopShutdownHandler @ 0x1403DF97C (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

__int64 (*InbvBitBlt())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140328DD0;
  if ( qword_140328DD0 )
  {
    result = *(__int64 (**)(void))(qword_140328DD0 + 96);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
