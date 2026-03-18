/*
 * XREFs of ?IsOfType@CIndirectSwapchainRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B9150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIndirectSwapchainRenderTarget::IsOfType(__int64 a1, int a2)
{
  char v2; // cl

  v2 = 1;
  if ( (unsigned int)(a2 - 53) > 1 )
    return a2 == 36;
  return v2;
}
