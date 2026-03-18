/*
 * XREFs of InbvEnableBootDriver @ 0x1401C3680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (*InbvEnableBootDriver())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140328DD0;
  if ( qword_140328DD0 )
  {
    result = *(__int64 (**)(void))(qword_140328DD0 + 48);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
