/*
 * XREFs of ?IsOfType@CTileLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18005CBA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CTileLegacyMilBrush::IsOfType(__int64 a1, int a2)
{
  return ((a2 - 70) & 0xFFFFFFFB) == 0;
}
