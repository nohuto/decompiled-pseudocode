/*
 * XREFs of ExReInitializeRundownProtection @ 0x1401323F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall ExReInitializeRundownProtection(PEX_RUNDOWN_REF RunRef)
{
  _InterlockedExchange64((volatile __int64 *)RunRef, 0LL);
}
