/*
 * XREFs of VerifierKeSetTimerEx @ 0x1406C6674
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimerEx @ 0x140091400 (KeSetTimerEx.c)
 */

BOOLEAN __fastcall VerifierKeSetTimerEx(struct _KTIMER *a1, LARGE_INTEGER a2, LONG a3, struct _KDPC *a4)
{
  return pXdvKeSetTimerEx(a1, a2, a3, a4);
}
