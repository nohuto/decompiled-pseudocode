/*
 * XREFs of GreCreateSemaphore @ 0x1C000D910
 * Callers:
 *     InitializeGre @ 0x1C0154000 (InitializeGre.c)
 * Callees:
 *     <none>
 */

__int64 GreCreateSemaphore()
{
  return GreCreateSemaphoreInternal(0LL);
}
