/*
 * XREFs of HvpReleaseCellFlat @ 0x140554810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpReleaseCellFlat(__int64 a1, _DWORD *a2)
{
  return HvpGetCellContextReinitialize(a2);
}
