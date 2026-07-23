/*
 * XREFs of InbvEnableBootDriver @ 0x1401C3564
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (*InbvEnableBootDriver())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140328E10;
  if ( qword_140328E10 )
  {
    result = *(__int64 (**)(void))(qword_140328E10 + 48);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
