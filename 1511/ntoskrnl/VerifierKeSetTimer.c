/*
 * XREFs of VerifierKeSetTimer @ 0x1406C6664
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 */

BOOLEAN __fastcall VerifierKeSetTimer(struct _KTIMER *a1, LARGE_INTEGER a2, struct _KDPC *a3)
{
  return pXdvKeSetTimer(a1, a2, a3);
}
