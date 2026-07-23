/*
 * XREFs of RtlRetrieveNtUserPfn @ 0x180096B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlRetrieveNtUserPfn(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  if ( !byte_1801631C8 )
    return 3221225485LL;
  *a1 = &NtDllUserStubs;
  *a2 = &off_180108998;
  *a3 = &off_180108A50;
  return 0LL;
}
