/*
 * XREFs of HvpReleaseCellFlat @ 0x1404E9A6C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpReleaseCellFlat(__int64 a1, __int64 a2)
{
  return HvpGetCellContextReinitialize(a2);
}
