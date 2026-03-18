/*
 * XREFs of InbvNotifyDisplayOwnershipLost @ 0x1401F0B28
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (*InbvNotifyDisplayOwnershipLost())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140353AD8;
  if ( qword_140353AD8 )
  {
    result = *(__int64 (**)(void))qword_140353AD8;
    if ( *(_QWORD *)qword_140353AD8 )
      return (__int64 (*)(void))result();
  }
  return result;
}
