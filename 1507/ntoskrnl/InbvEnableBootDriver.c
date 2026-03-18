/*
 * XREFs of InbvEnableBootDriver @ 0x1401F0AAC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (*InbvEnableBootDriver())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140353AD8;
  if ( qword_140353AD8 )
  {
    result = *(__int64 (**)(void))(qword_140353AD8 + 48);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
