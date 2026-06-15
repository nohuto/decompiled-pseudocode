/*
 * XREFs of McGenEventUnregister @ 0x180083318
 * Callers:
 *     ?MyServiceTerminate@@YAXXZ @ 0x180082EC0 (-MyServiceTerminate@@YAXXZ.c)
 *     Pdcv2ActivationClientUnregister @ 0x18008E084 (Pdcv2ActivationClientUnregister.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall McGenEventUnregister(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( !v2 )
    return 0LL;
  result = EtwEventUnregister(v2);
  *a1 = 0LL;
  return result;
}
