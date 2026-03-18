/*
 * XREFs of EngCreateSemaphore @ 0x1C0024390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HSEMAPHORE EngCreateSemaphore(void)
{
  return (HSEMAPHORE)GreCreateSemaphoreInternal(1LL);
}
