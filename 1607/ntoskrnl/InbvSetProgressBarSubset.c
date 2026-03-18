/*
 * XREFs of InbvSetProgressBarSubset @ 0x1401399D8
 * Callers:
 *     Phase1Initialization @ 0x14054EA14 (Phase1Initialization.c)
 *     Phase1InitializationIoReady @ 0x1407934EC (Phase1InitializationIoReady.c)
 * Callees:
 *     <none>
 */

__int64 (*InbvSetProgressBarSubset())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140328DD0;
  if ( qword_140328DD0 )
  {
    result = *(__int64 (**)(void))(qword_140328DD0 + 112);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
