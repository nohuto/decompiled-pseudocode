/*
 * XREFs of RtlpTpWaitCheckReset @ 0x18000BE10
 * Callers:
 *     RtlpTpWaitCallback @ 0x18000BCB0 (RtlpTpWaitCallback.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TpSetWaitEx @ 0x18003C830 (TpSetWaitEx.c)
 */

__int64 __fastcall RtlpTpWaitCheckReset(__int64 a1, int a2)
{
  RtlAcquireSRWLockExclusive(a1 + 16);
  if ( (*(_BYTE *)(a1 + 8) & 8) == 0 && (!a2 || a2 == 258) )
    TpSetWaitEx(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 72), 0LL);
  return RtlReleaseSRWLockExclusive(a1 + 16);
}
