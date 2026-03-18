/*
 * XREFs of DpiGetSchedulerCallbackState @ 0x1C000B5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetSchedulerCallbackState(__int64 a1)
{
  return (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 64) + 2560LL), 0, 0);
}
