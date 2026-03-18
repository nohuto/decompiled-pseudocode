/*
 * XREFs of HvpReleaseCellFlat @ 0x1404BE1FC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpReleaseCellFlat(__int64 a1, _DWORD *a2)
{
  return HvpGetCellContextReinitialize(a2);
}
