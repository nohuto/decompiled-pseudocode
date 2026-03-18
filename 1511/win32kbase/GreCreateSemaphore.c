/*
 * XREFs of GreCreateSemaphore @ 0x1C0012310
 * Callers:
 *     InitializeGre @ 0x1C013A000 (InitializeGre.c)
 * Callees:
 *     <none>
 */

__int64 GreCreateSemaphore()
{
  return GreCreateSemaphoreInternal(0LL);
}
