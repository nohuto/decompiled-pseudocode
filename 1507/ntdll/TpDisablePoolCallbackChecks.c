/*
 * XREFs of TpDisablePoolCallbackChecks @ 0x180078710
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall TpDisablePoolCallbackChecks(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  if ( !a1 )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 72), a2, a3, a4);
  *(_DWORD *)(a1 + 436) |= 1u;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
  return 0LL;
}
