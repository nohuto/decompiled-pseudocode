/*
 * XREFs of ?IsWarpAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z @ 0x180005564
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x180089BA0 (-CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180051C78 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?EnsureDXGIEnumeration@CD3DDeviceManager@@AEAAJXZ @ 0x180055F6C (-EnsureDXGIEnumeration@CD3DDeviceManager@@AEAAJXZ.c)
 *     ?IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x18005655C (-IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z.c)
 */

bool __fastcall CD3DDeviceManager::IsWarpAdapterLuid(CD3DDeviceManager *this, struct _LUID a2)
{
  bool IsWarpAdapterLuid; // bl
  char *v5; // [rsp+30h] [rbp+8h] BYREF
  _LUID v6; // [rsp+38h] [rbp+10h]

  v6 = a2;
  IsWarpAdapterLuid = 0;
  v5 = (char *)this + 24;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  if ( (int)CD3DDeviceManager::EnsureDXGIEnumeration(this) >= 0 )
    IsWarpAdapterLuid = CDXGIEnumeration::IsWarpAdapterLuid(*((CDXGIEnumeration **)this + 10), v6);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v5);
  return IsWarpAdapterLuid;
}
