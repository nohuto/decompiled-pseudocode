/*
 * XREFs of EtwpUpdatePerfectHashFunction @ 0x1406A9398
 * Callers:
 *     EtwpUpdateFilterData @ 0x140492728 (EtwpUpdateFilterData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpUpdatePerfectHashFunction(volatile __int64 *a1, __int64 *a2, char a3)
{
  __int64 v3; // rcx

  if ( a3 )
    return _InterlockedExchange64(a1, 0LL);
  v3 = _InterlockedExchange64(a1, *a2);
  *a2 = 0LL;
  return v3;
}
