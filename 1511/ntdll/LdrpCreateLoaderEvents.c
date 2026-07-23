/*
 * XREFs of LdrpCreateLoaderEvents @ 0x1800CB424
 * Callers:
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     LdrpCompleteProcessCloning @ 0x1800CB37C (LdrpCompleteProcessCloning.c)
 * Callees:
 *     ZwCreateEvent @ 0x1800A59C0 (ZwCreateEvent.c)
 */

int LdrpCreateLoaderEvents()
{
  int result; // eax

  result = ZwCreateEvent(&LdrpLoadCompleteEvent, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  if ( result >= 0 )
    return ZwCreateEvent(&LdrpWorkCompleteEvent, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  return result;
}
