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
  volatile signed __int64 *v2; // rdi
  char *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  v1 = a1;
  TppWaitpValidateWait(a1, 0LL, 0LL);
  v2 = (volatile signed __int64 *)(v1 + 232);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v1 + 232), v3, v4, v5);
  LODWORD(v1) = *(_DWORD *)(v1 + 56);
  RtlReleaseSRWLockExclusive(v2);
  return (unsigned int)v1;
}
