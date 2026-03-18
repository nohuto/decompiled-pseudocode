/*
 * XREFs of CiDecrementTotalThreadCount @ 0x1C0001BD0
 * Callers:
 *     CiThreadCreate @ 0x1C000A890 (CiThreadCreate.c)
 *     CiThreadCleanup @ 0x1C000B2C0 (CiThreadCleanup.c)
 * Callees:
 *     <none>
 */

void __fastcall CiDecrementTotalThreadCount(volatile signed __int32 *a1)
{
  _InterlockedDecrement(a1);
}
