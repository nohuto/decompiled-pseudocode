/*
 * XREFs of InbvEnableBootDriver @ 0x1401B5B98
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (*InbvEnableBootDriver())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140305D60;
  if ( qword_140305D60 )
  {
    result = *(__int64 (**)(void))(qword_140305D60 + 48);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
