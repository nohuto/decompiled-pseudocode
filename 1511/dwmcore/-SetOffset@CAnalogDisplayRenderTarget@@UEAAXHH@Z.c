/*
 * XREFs of ?SetOffset@CAnalogDisplayRenderTarget@@UEAAXHH@Z @ 0x1800BD9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAnalogDisplayRenderTarget::SetOffset(CAnalogDisplayRenderTarget *this, int a2, int a3)
{
  *((_DWORD *)this + 40) = a2;
  *((_DWORD *)this + 41) = a3;
}
