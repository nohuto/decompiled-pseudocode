/*
 * XREFs of NdisInterlockedIncrement @ 0x1C00599B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisInterlockedIncrement(volatile signed __int32 *a1)
{
  return (unsigned int)_InterlockedIncrement(a1);
}
