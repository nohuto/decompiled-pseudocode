/*
 * XREFs of ?ForceNewDisplayState@CDesktopRenderTarget@@UEAA_NXZ @ 0x180074FF0
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x180095C70 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDesktopRenderTarget::ForceNewDisplayState(CDesktopRenderTarget *this)
{
  bool result; // al

  result = 0;
  if ( *((_BYTE *)this + 225) )
  {
    result = 1;
    *((_BYTE *)this + 225) = 0;
  }
  return result;
}
