/*
 * XREFs of EngCreateSemaphore @ 0x1C000D920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HSEMAPHORE EngCreateSemaphore(void)
{
  return (HSEMAPHORE)GreCreateSemaphoreInternal(1LL);
}
