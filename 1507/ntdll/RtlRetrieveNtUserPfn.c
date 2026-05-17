/*
 * XREFs of RtlRetrieveNtUserPfn @ 0x180083F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlRetrieveNtUserPfn(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  if ( !byte_1801571C8 )
    return 3221225485LL;
  *a1 = NtDllUserStubs;
  *a2 = off_180102F38;
  *a3 = off_180102FF0;
  return 0LL;
}
