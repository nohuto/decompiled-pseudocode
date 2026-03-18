/*
 * XREFs of ?InvokeCxCallback@FxPnpDeviceD0Exit@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvokeCallbackSubType@@@Z @ 0x1C00943D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_sqqLd @ 0x1C0094810 (WPP_IFR_SF_sqqLd.c)
 */

__int64 __fastcall FxPnpDeviceD0Exit::InvokeCxCallback(
        FxPnpDeviceD0Exit *this,
        FxCxPnpPowerCallbackContext *Context,
        FxCxInvokeCallbackSubType PrePost)
{
  int flags; // eax
  unsigned int v6; // edi
  const char *_a4; // r8
  const _GUID *v9; // [rsp+20h] [rbp-38h]

  if ( PrePost )
    flags = ((__int64 (__fastcall *)(WDFDEVICE__ *, _QWORD))Context->u.PrepareHardware.PostCallback)(
              this->m_Device,
              (unsigned int)this->m_TargetState);
  else
    flags = ((__int64 (__fastcall *)(WDFDEVICE__ *, _QWORD))Context->u.PrepareHardware.PreCallback)(
              this->m_Device,
              (unsigned int)this->m_TargetState);
  v6 = flags;
  if ( flags < 0 )
  {
    _a4 = "Pre";
    if ( PrePost )
      _a4 = "Post";
    WPP_IFR_SF_sqqLd(
      this->m_PkgPnp->m_Globals,
      this->m_TargetState,
      (unsigned int)_a4,
      0xDu,
      v9,
      _a4,
      this->m_Device,
      this->m_PkgPnp->m_DeviceBase->m_DeviceObject.m_DeviceObject,
      this->m_TargetState,
      flags);
  }
  return v6;
}
