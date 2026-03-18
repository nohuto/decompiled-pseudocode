/*
 * XREFs of ?SetOffset@CAnalogDisplayRenderTarget@@UEAAXHH@Z @ 0x18009AD30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAnalogDisplayRenderTarget::SetOffset(CAnalogDisplayRenderTarget *this, int a2, int a3)
{
  *((_DWORD *)this + 38) = a2;
  *((_DWORD *)this + 39) = a3;
}
