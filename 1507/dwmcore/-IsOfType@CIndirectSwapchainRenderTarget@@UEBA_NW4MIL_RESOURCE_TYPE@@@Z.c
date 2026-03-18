/*
 * XREFs of ?IsOfType@CIndirectSwapchainRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800EE670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIndirectSwapchainRenderTarget::IsOfType(__int64 a1, int a2)
{
  char v2; // cl

  v2 = 1;
  if ( a2 != 35 )
    return (unsigned int)(a2 - 49) <= 1;
  return v2;
}
