/*
 * XREFs of HvlUnregisterInterruptCallback @ 0x1401E564C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

signed __int64 __fastcall HvlUnregisterInterruptCallback(int a1, signed __int64 a2)
{
  return _InterlockedCompareExchange64(
           (volatile signed __int64 *)&HvlpInterruptCallback[a1],
           (signed __int64)PopPoCoalescinCallback,
           a2);
}
