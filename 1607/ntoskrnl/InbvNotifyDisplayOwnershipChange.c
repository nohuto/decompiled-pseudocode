/*
 * XREFs of InbvNotifyDisplayOwnershipChange @ 0x140126E48
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 InbvNotifyDisplayOwnershipChange()
{
  __int64 (*v0)(void); // r8

  if ( qword_140328DD0 && (v0 = *(__int64 (**)(void))(qword_140328DD0 + 16)) != 0LL )
    return v0();
  else
    return 3221225474LL;
}
