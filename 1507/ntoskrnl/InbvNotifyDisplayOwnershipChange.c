/*
 * XREFs of InbvNotifyDisplayOwnershipChange @ 0x14014FEB8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 InbvNotifyDisplayOwnershipChange()
{
  __int64 (*v0)(void); // r8

  if ( qword_140353AD8 && (v0 = *(__int64 (**)(void))(qword_140353AD8 + 16)) != 0LL )
    return v0();
  else
    return 3221225474LL;
}
