/*
 * XREFs of ?IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ @ 0x180034248
 * Callers:
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x18003366C (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x180033798 (-MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ.c)
 *     ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x180033D40 (-IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ.c)
 * Callees:
 *     ?HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z @ 0x180035098 (-HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x180035208 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@PEAU_GUID@@@Z @ 0x1801325D8 (-GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@PEAU_GUID@@@Z.c)
 */

bool __fastcall CCachedVisualImage::RenderTargetBitmapInfo::IsValid(
        CCachedVisualImage::RenderTargetBitmapInfo *this,
        __int64 a2,
        __int64 a3,
        struct _GUID *a4)
{
  CRenderTargetBitmap *v5; // rcx
  int DeviceInfo; // eax
  int v7; // edi
  int v8; // eax
  char v9; // bl
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF
  struct _LUID v12; // [rsp+48h] [rbp+10h] BYREF

  v5 = (CRenderTargetBitmap *)*((_QWORD *)this + 1);
  v11 = 0;
  DeviceInfo = CRenderTargetBitmap::GetDeviceInfo(v5, &v12, (struct DisplayId *)&v11, a4);
  v7 = DeviceInfo;
  if ( DeviceInfo < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DeviceInfo, 0x206u);
  }
  else
  {
    v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CD3DDeviceManager::ValidateAdapterLuidAndDisplayId)(
           &g_D3DDeviceManager,
           v12,
           v11);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x209u);
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 1) + 112LL) + 128LL))(*((_QWORD *)this + 1) + 112LL);
      if ( CD3DDeviceManager::HardwareProtectionRequired((CD3DDeviceManager *)&g_D3DDeviceManager, v12) != v9 )
        v7 = -2147467259;
    }
  }
  return v7 == 0;
}
