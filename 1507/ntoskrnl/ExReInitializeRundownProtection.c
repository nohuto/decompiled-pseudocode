/*
 * XREFs of ExReInitializeRundownProtection @ 0x14017068C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall ExReInitializeRundownProtection(PEX_RUNDOWN_REF RunRef)
{
  _InterlockedExchange64((volatile __int64 *)RunRef, 0LL);
}
