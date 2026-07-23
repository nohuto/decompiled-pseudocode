/*
 * XREFs of TpWaitOutstandingCallbackCount @ 0x180006F44
 * Callers:
 *     RtlDeregisterWaitEx @ 0x180006DF0 (RtlDeregisterWaitEx.c)
 * Callees:
 *     TppWaitpValidateWait @ 0x18000AC08 (TppWaitpValidateWait.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
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
