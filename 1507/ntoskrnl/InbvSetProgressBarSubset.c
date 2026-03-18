/*
 * XREFs of InbvSetProgressBarSubset @ 0x140163120
 * Callers:
 *     Phase1Initialization @ 0x14059A0DC (Phase1Initialization.c)
 *     Phase1InitializationIoReady @ 0x1407D05E0 (Phase1InitializationIoReady.c)
 * Callees:
 *     <none>
 */

__int64 (*InbvSetProgressBarSubset())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140353AD8;
  if ( qword_140353AD8 )
  {
    result = *(__int64 (**)(void))(qword_140353AD8 + 112);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
