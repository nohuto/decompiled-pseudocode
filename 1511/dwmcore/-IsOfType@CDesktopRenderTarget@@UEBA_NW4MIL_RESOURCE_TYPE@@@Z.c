/*
 * XREFs of ?IsOfType@CDesktopRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180074E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDesktopRenderTarget::IsOfType(__int64 a1, int a2)
{
  return ((a2 - 36) & 0xFFFFFFFD) == 0;
}
