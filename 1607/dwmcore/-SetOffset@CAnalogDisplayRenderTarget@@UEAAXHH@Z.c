/*
 * XREFs of ?SetOffset@CAnalogDisplayRenderTarget@@UEAAXHH@Z @ 0x1800C1120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAnalogDisplayRenderTarget::SetOffset(CAnalogDisplayRenderTarget *this, int a2, int a3)
{
  *((_DWORD *)this + 42) = a2;
  *((_DWORD *)this + 43) = a3;
}
