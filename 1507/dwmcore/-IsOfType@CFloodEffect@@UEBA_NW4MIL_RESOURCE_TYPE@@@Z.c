/*
 * XREFs of ?IsOfType@CFloodEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800F9A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CFloodEffect::IsOfType(__int64 a1, int a2)
{
  return ((a2 - 7) & 0xFFFFFFF5) == 0 && a2 != 15;
}
