/*
 * XREFs of InbvNotifyDisplayOwnershipLost @ 0x1401C35E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (*InbvNotifyDisplayOwnershipLost())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140328E10;
  if ( qword_140328E10 )
  {
    result = *(__int64 (**)(void))qword_140328E10;
    if ( *(_QWORD *)qword_140328E10 )
      return (__int64 (*)(void))result();
  }
  return result;
}
