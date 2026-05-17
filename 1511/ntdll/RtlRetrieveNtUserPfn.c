/*
 * XREFs of RtlRetrieveNtUserPfn @ 0x180095730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlRetrieveNtUserPfn(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  if ( !byte_1801551C8 )
    return 3221225485LL;
  *a1 = NtDllUserStubs;
  *a2 = off_1801031D8;
  *a3 = off_180103290;
  return 0LL;
}
