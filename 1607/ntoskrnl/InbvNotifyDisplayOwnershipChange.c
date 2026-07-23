/*
 * XREFs of InbvNotifyDisplayOwnershipChange @ 0x1401273B8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 InbvNotifyDisplayOwnershipChange()
{
  __int64 (*v0)(void); // r8

  if ( qword_140328E10 && (v0 = *(__int64 (**)(void))(qword_140328E10 + 16)) != 0LL )
    return v0();
  else
    return 3221225474LL;
}
