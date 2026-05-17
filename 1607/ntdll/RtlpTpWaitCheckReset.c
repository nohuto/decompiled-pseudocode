/*
 * XREFs of RtlpTpWaitCheckReset @ 0x18007FE88
 * Callers:
 *     RtlpTpWaitCallback @ 0x18007FD40 (RtlpTpWaitCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     TpSetWaitEx @ 0x18003BD60 (TpSetWaitEx.c)
 */

signed __int64 __fastcall RtlpTpWaitCheckReset(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  int v4; // edi

  v4 = (int)a2;
  RtlAcquireSRWLockExclusive(a1 + 16, a2, a3, a4);
  if ( (*(_BYTE *)(a1 + 8) & 8) == 0 && (!v4 || v4 == 258) )
    TpSetWaitEx(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 56), *(_QWORD **)(a1 + 72), 0LL);
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 16));
}
