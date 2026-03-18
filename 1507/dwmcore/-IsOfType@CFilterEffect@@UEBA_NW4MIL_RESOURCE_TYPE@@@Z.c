/*
 * XREFs of ?IsOfType@CFilterEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800024A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CFilterEffect::IsOfType(__int64 a1, int a2)
{
  return ((a2 - 7) & 0xFFFFFFFD) == 0;
}
