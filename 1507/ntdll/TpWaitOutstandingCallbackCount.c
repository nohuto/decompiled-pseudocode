/*
 * XREFs of TpWaitOutstandingCallbackCount @ 0x18007D3E0
 * Callers:
 *     RtlDeregisterWaitEx @ 0x18007B7E0 (RtlDeregisterWaitEx.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TppWaitpValidateWait @ 0x18003CDCC (TppWaitpValidateWait.c)
 */

__int64 __fastcall TpWaitOutstandingCallbackCount(__int64 a1)
{
  __int64 v1; // rbx
  _RTL_SRWLOCK *v2; // rdi

  v1 = a1;
  TppWaitpValidateWait(a1, 0LL, 0LL);
  v2 = (_RTL_SRWLOCK *)(v1 + 232);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v1 + 232));
  LODWORD(v1) = *(_DWORD *)(v1 + 56);
  RtlReleaseSRWLockExclusive(v2);
  return (unsigned int)v1;
}
