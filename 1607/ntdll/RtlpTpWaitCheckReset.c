/*
 * XREFs of RtlpTpWaitCheckReset @ 0x18007FE78
 * Callers:
 *     RtlpTpWaitCallback @ 0x18007FD30 (RtlpTpWaitCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     TpSetWaitEx @ 0x18003BD50 (TpSetWaitEx.c)
 */

void __fastcall RtlpTpWaitCheckReset(__int64 a1, int a2)
{
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 16));
  if ( (*(_BYTE *)(a1 + 8) & 8) == 0 && (!a2 || a2 == 258) )
    TpSetWaitEx(*(PTP_WAIT *)(a1 + 48), *(HANDLE *)(a1 + 56), *(PLARGE_INTEGER *)(a1 + 72), 0LL);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 16));
}
