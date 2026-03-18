/*
 * XREFs of ?InvokeClient@FxPnpDevicePrepareHardware@@MEAAJXZ @ 0x1C0039BF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 */

int (__fastcall *__fastcall FxPnpDevicePrepareHardware::InvokeClient(
        FxPnpDevicePrepareHardware *this))(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *)
{
  int (__fastcall *result)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *); // rax
  int _a3; // edi

  result = this->m_Method;
  if ( result )
  {
    _a3 = result(this->m_Device, this->m_ResourcesRaw, this->m_ResourcesTranslated);
    if ( _a3 < 0 )
      WPP_IFR_SF_qid(
        this->m_PkgPnp->m_Globals,
        2u,
        0xCu,
        0xEu,
        WPP_PnpCallbacks_cpp_Traceguids,
        this->m_Device,
        (__int64)this->m_PkgPnp->m_DeviceBase->m_DeviceObject.m_DeviceObject,
        _a3);
    return (int (__fastcall *)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *))(unsigned int)_a3;
  }
  return result;
}
