/*
 * XREFs of CiDecrementTotalThreadCount @ 0x1C0001AE0
 * Callers:
 *     CiThreadCreate @ 0x1C000A830 (CiThreadCreate.c)
 *     CiThreadCleanup @ 0x1C000B1C0 (CiThreadCleanup.c)
 * Callees:
 *     <none>
 */

void __fastcall CiDecrementTotalThreadCount(volatile signed __int32 *a1)
{
  _InterlockedDecrement(a1);
}
