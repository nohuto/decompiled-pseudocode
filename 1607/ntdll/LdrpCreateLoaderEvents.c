/*
 * XREFs of LdrpCreateLoaderEvents @ 0x180081C80
 * Callers:
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 *     LdrpCompleteProcessCloning @ 0x1800D2BE4 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     ZwCreateEvent @ 0x1800A6D20 (ZwCreateEvent.c)
 */

int LdrpCreateLoaderEvents()
{
  int result; // eax

  result = ZwCreateEvent(&LdrpLoadCompleteEvent, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  if ( result >= 0 )
    return ZwCreateEvent(&LdrpWorkCompleteEvent, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  return result;
}
