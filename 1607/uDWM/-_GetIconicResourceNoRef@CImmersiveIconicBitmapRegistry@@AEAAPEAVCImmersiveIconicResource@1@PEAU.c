/*
 * XREFs of ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x1800417A4
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180030A40 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18003206C (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?_ClearBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAUHWND__@@@Z @ 0x180041760 (-_ClearBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAUHWND__@@@Z.c)
 *     ?RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@3@Z @ 0x180079BF4 (-RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@H.c)
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x18007A26C (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z @ 0x18007A794 (-Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x18007A89C (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x18007AAE4 (-LoadIconW@CImmersiveWindowIconic@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *__fastcall CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(
        CImmersiveIconicBitmapRegistry *this,
        HWND a2)
{
  unsigned int v2; // r10d
  __int64 v3; // r8
  unsigned int v4; // r9d
  __int64 v6; // r11

  v2 = *((_DWORD *)this + 10);
  v3 = 0LL;
  v4 = 0;
  if ( v2 )
  {
    v6 = *((_QWORD *)this + 2);
    while ( **(HWND **)(v6 + 8LL * v4) != a2 )
    {
      if ( ++v4 >= v2 )
        return (struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *)v3;
    }
    return *(struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource **)(v6 + 8LL * v4);
  }
  return (struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *)v3;
}
