/*
 * XREFs of ?ForceNewDisplayState@CDesktopRenderTarget@@UEAA_NXZ @ 0x180075EA0
 * Callers:
 *     ?UpdateDisplaySet@CComposition@@IEAAJPEAJ@Z @ 0x18003CC2C (-UpdateDisplaySet@CComposition@@IEAAJPEAJ@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDesktopRenderTarget::ForceNewDisplayState(CDesktopRenderTarget *this)
{
  bool result; // al

  result = 0;
  if ( *((_BYTE *)this + 273) )
  {
    result = 1;
    *((_BYTE *)this + 273) = 0;
  }
  return result;
}
