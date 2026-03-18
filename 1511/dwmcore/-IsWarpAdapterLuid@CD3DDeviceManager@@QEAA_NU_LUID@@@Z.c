/*
 * XREFs of ?IsWarpAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z @ 0x1800111D4
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x18006C508 (-CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@.c)
 * Callees:
 *     ?IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x18006B840 (-IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z.c)
 *     ?EnsureDXGIEnumeration@CD3DDeviceManager@@AEAAJXZ @ 0x1800723B8 (-EnsureDXGIEnumeration@CD3DDeviceManager@@AEAAJXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800A1C40 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

bool __fastcall CD3DDeviceManager::IsWarpAdapterLuid(CD3DDeviceManager *this, struct _LUID a2)
{
  bool IsWarpAdapterLuid; // bl
  char *v5; // [rsp+30h] [rbp+8h] BYREF
  struct _LUID v6; // [rsp+38h] [rbp+10h]

  v6 = a2;
  IsWarpAdapterLuid = 0;
  v5 = (char *)this + 24;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  if ( (int)CD3DDeviceManager::EnsureDXGIEnumeration(this) >= 0 )
    IsWarpAdapterLuid = CDXGIEnumeration::IsWarpAdapterLuid(*((CDXGIEnumeration **)this + 9), v6);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v5);
  return IsWarpAdapterLuid;
}
