/*
 * XREFs of NtRIMObserveNextInput @ 0x1C00C1910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtRIMObserveNextInput(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return rimObsObserveNextInput(a1, a2);
}
