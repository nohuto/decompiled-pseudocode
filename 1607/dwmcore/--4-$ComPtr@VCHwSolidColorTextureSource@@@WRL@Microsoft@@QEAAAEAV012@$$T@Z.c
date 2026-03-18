/*
 * XREFs of ??4?$ComPtr@VCHwSolidColorTextureSource@@@WRL@Microsoft@@QEAAAEAV012@$$T@Z @ 0x180173324
 * Callers:
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x180080264 (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x18016AB90 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 */

CMILRefCountBase **__fastcall Microsoft::WRL::ComPtr<CHwSolidColorTextureSource>::operator=(CMILRefCountBase **a1)
{
  Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(a1);
  return a1;
}
