/*
 * XREFs of ?RemoveDevicesNotInCurrentEnumeration@CD3DDeviceManager@@AEAAXXZ @ 0x1800BA2E8
 * Callers:
 *     ?EnsureDXGIEnumeration@CD3DDeviceManager@@AEAAJXZ @ 0x180035C84 (-EnsureDXGIEnumeration@CD3DDeviceManager@@AEAAJXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DF@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006C640 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 * Callees:
 *     ?ValidateAdapterLuid@CDXGIEnumeration@@QEBAJU_LUID@@@Z @ 0x180036DA0 (-ValidateAdapterLuid@CDXGIEnumeration@@QEBAJU_LUID@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ @ 0x1800BA360 (-DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ.c)
 *     ?ProcessUnusable@CD3DDeviceLevel1@@QEAAXXZ @ 0x18010F230 (-ProcessUnusable@CD3DDeviceLevel1@@QEAAXXZ.c)
 */

void __fastcall CD3DDeviceManager::RemoveDevicesNotInCurrentEnumeration(CD3DDeviceManager *this)
{
  unsigned int v2; // edi
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v2 = *((_DWORD *)this + 64);
  while ( v2 )
  {
    if ( (int)CDXGIEnumeration::ValidateAdapterLuid(
                *((CDXGIEnumeration **)this + 9),
                *(struct _LUID *)(*((_QWORD *)this + 18) + 40LL * --v2 + 8)) < 0 )
      CD3DDeviceLevel1::ProcessUnusable(*(CD3DDeviceLevel1 **)(*((_QWORD *)this + 18) + 40LL * v2));
  }
  CD3DDeviceManager::DeleteUnusableDevices(this);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v3);
}
