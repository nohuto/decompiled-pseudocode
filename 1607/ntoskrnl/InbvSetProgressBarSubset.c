/*
 * XREFs of InbvSetProgressBarSubset @ 0x140139F48
 * Callers:
 *     Phase1Initialization @ 0x14054EDB4 (Phase1Initialization.c)
 *     Phase1InitializationIoReady @ 0x1407934EC (Phase1InitializationIoReady.c)
 * Callees:
 *     <none>
 */

__int64 (*InbvSetProgressBarSubset())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140328E10;
  if ( qword_140328E10 )
  {
    result = *(__int64 (**)(void))(qword_140328E10 + 112);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
