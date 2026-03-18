/*
 * XREFs of InbvNotifyDisplayOwnershipChange @ 0x14011BC2C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 InbvNotifyDisplayOwnershipChange()
{
  __int64 (*v0)(void); // r8

  if ( qword_140305D60 && (v0 = *(__int64 (**)(void))(qword_140305D60 + 16)) != 0LL )
    return v0();
  else
    return 3221225474LL;
}
