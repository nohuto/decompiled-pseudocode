/*
 * XREFs of RtlpTpWaitCheckReset @ 0x18000BE10
 * Callers:
 *     RtlpTpWaitCallback @ 0x18000BCB0 (RtlpTpWaitCallback.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TpSetWaitEx @ 0x18003C830 (TpSetWaitEx.c)
 */

void __fastcall RtlpTpWaitCheckReset(__int64 a1, int a2)
{
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 16));
  if ( (*(_BYTE *)(a1 + 8) & 8) == 0 && (!a2 || a2 == 258) )
    TpSetWaitEx(*(PTP_WAIT *)(a1 + 48), *(HANDLE *)(a1 + 56), *(PLARGE_INTEGER *)(a1 + 72), 0LL);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 16));
}
