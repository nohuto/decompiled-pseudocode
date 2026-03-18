/*
 * XREFs of ??1?$ComPtr@VCHwSolidColorTextureSource@@@WRL@Microsoft@@QEAA@XZ @ 0x1801732C4
 * Callers:
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x180080264 (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CHwSolidColorTextureSource>::~ComPtr<CHwSolidColorTextureSource>(
        CMILRefCountBase **a1)
{
  return Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(a1);
}
