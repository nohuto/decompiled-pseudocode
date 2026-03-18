/*
 * XREFs of InbvSetProgressBarSubset @ 0x140136BB8
 * Callers:
 *     Phase1Initialization @ 0x14052FD40 (Phase1Initialization.c)
 *     Phase1InitializationIoReady @ 0x140763CC8 (Phase1InitializationIoReady.c)
 * Callees:
 *     <none>
 */

__int64 (*InbvSetProgressBarSubset())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140305D60;
  if ( qword_140305D60 )
  {
    result = *(__int64 (**)(void))(qword_140305D60 + 112);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
