/*
 * XREFs of LdrpCreateLoaderEvents @ 0x1800CB424
 * Callers:
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     LdrpCompleteProcessCloning @ 0x1800CB37C (LdrpCompleteProcessCloning.c)
 * Callees:
 *     ZwCreateEvent @ 0x1800A59C0 (ZwCreateEvent.c)
 */

__int64 LdrpCreateLoaderEvents()
{
  __int64 result; // rax

  result = ZwCreateEvent();
  if ( (int)result >= 0 )
    return ZwCreateEvent();
  return result;
}
