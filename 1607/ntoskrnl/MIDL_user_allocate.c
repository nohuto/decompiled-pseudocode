/*
 * XREFs of MIDL_user_allocate @ 0x1404EC5DC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__stdcall MIDL_user_allocate(size_t size)
{
  return ExAllocatePoolWithTag(PagedPool, size, 0x6370726Bu);
}
