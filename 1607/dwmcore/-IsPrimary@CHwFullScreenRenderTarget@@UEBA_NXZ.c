/*
 * XREFs of ?IsPrimary@CHwFullScreenRenderTarget@@UEBA_NXZ @ 0x18017A510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CHwFullScreenRenderTarget::IsPrimary(CDisplay **this)
{
  return CDisplay::IsPrimary(this[3]);
}
