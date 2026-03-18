/*
 * XREFs of InbvNotifyDisplayOwnershipLost @ 0x1401C36FC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (*InbvNotifyDisplayOwnershipLost())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140328DD0;
  if ( qword_140328DD0 )
  {
    result = *(__int64 (**)(void))qword_140328DD0;
    if ( *(_QWORD *)qword_140328DD0 )
      return (__int64 (*)(void))result();
  }
  return result;
}
