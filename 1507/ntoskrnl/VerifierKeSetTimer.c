/*
 * XREFs of VerifierKeSetTimer @ 0x140748DB4
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimer @ 0x1400669A0 (KeSetTimer.c)
 */

BOOLEAN __fastcall VerifierKeSetTimer(struct _KTIMER *a1, LARGE_INTEGER a2, struct _KDPC *a3)
{
  return pXdvKeSetTimer(a1, a2, a3);
}
