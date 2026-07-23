/*
 * XREFs of HvpReleaseCellFlat @ 0x1404CBCC8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpReleaseCellFlat(__int64 a1, __int64 a2)
{
  return HvpGetCellContextReinitialize(a2);
}
