/*
 * XREFs of GreCreateSemaphore @ 0x1C0024380
 * Callers:
 *     InitializeGre @ 0x1C0137A5C (InitializeGre.c)
 * Callees:
 *     <none>
 */

__int64 GreCreateSemaphore()
{
  return GreCreateSemaphoreInternal(0LL);
}
