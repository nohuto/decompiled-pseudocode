/*
 * XREFs of InbvNotifyDisplayOwnershipLost @ 0x1401B5C14
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (*InbvNotifyDisplayOwnershipLost())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140305D60;
  if ( qword_140305D60 )
  {
    result = *(__int64 (**)(void))qword_140305D60;
    if ( *(_QWORD *)qword_140305D60 )
      return (__int64 (*)(void))result();
  }
  return result;
}
