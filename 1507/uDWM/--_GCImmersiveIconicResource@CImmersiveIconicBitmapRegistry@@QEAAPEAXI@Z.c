/*
 * XREFs of ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x180070380
 * Callers:
 *     ?_ClearBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAUHWND__@@@Z @ 0x180007A84 (-_ClearBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAUHWND__@@@Z.c)
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x18002A30C (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002E510 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ??1CImmersiveIconicBitmapRegistry@@UEAA@XZ @ 0x1800702F0 (--1CImmersiveIconicBitmapRegistry@@UEAA@XZ.c)
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x180070EA8 (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180028054 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *__fastcall CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(
        CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *this)
{
  __int64 i; // rbx
  CBaseObject *v3; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8); i = (unsigned int)(i + 1) )
  {
    v3 = *(CBaseObject **)(*((_QWORD *)this + 1) + 8 * i);
    if ( v3 )
      CBaseObject::Release(v3);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 1);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
