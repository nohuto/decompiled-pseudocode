/*
 * XREFs of ExWaitForRundownProtectionRelease @ 0x1400D3828
 * Callers:
 *     VerifierExWaitForRundownProtectionRelease @ 0x140741C3C (VerifierExWaitForRundownProtectionRelease.c)
 * Callees:
 *     <none>
 */

void __stdcall ExWaitForRundownProtectionRelease(PEX_RUNDOWN_REF RunRef)
{
  unsigned __int64 v1; // rax

  v1 = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, 1LL, 0LL);
  if ( v1 >= 2 )
    ExfWaitForRundownProtectionRelease(RunRef, v1);
}
