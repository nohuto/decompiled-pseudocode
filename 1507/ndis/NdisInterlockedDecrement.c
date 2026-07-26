/*
 * XREFs of NdisInterlockedDecrement @ 0x1C00550E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisInterlockedDecrement(volatile signed __int32 *a1)
{
  return (unsigned int)_InterlockedDecrement(a1);
}
