/*
 * XREFs of ?SetInitialState@FxDevice@@AEAAXXZ @ 0x1C001B8CC
 * Callers:
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C001A4F0 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 * Callees:
 *     memset @ 0x1C0036C40 (memset.c)
 */

void __fastcall FxDevice::SetInitialState(FxDevice *this)
{
  this->m_CurrentPnpState = WdfDevStatePnpObjectCreated;
  this->m_CurrentPowerState = WdfDevStatePowerObjectCreated;
  this->m_CurrentPowerPolicyState = WdfDevStatePwrPolObjectCreated;
  this->m_ReadWriteIoType = WdfDeviceIoBuffered;
  *(_QWORD *)&this->m_DeviceName.Length = 0LL;
  this->m_DeviceName.Buffer = 0LL;
  *(_QWORD *)&this->m_SymbolicLinkName.Length = 0LL;
  this->m_SymbolicLinkName.Buffer = 0LL;
  *(_QWORD *)&this->m_MofResourceName.Length = 0LL;
  this->m_MofResourceName.Buffer = 0LL;
  *(_DWORD *)&this->m_Filter = 0;
  *(_WORD *)&this->m_Legacy = 0;
  *(_WORD *)&this->m_PdoKnown = 0;
  this->m_SelfIoTargetNeeded = 0;
  this->m_DeviceTelemetryInfoFlags = 0;
  this->m_PkgIo = 0LL;
  this->m_PkgPnp = 0LL;
  this->m_PkgGeneral = 0LL;
  this->m_PkgWmi = 0LL;
  this->m_PkgDefault = 0LL;
  this->m_PreprocessInfoListHead.Blink = &this->m_PreprocessInfoListHead;
  this->m_PreprocessInfoListHead.Flink = &this->m_PreprocessInfoListHead;
  this->m_CxDeviceInfoListHead.Blink = &this->m_CxDeviceInfoListHead;
  this->m_CxDeviceInfoListHead.Flink = &this->m_CxDeviceInfoListHead;
  this->m_DefaultPriorityBoost = 0;
  this->m_FileObjectClass = WdfFileObjectNotRequired;
  this->m_FileObjectListHead.Blink = &this->m_FileObjectListHead;
  this->m_FileObjectListHead.Flink = &this->m_FileObjectListHead;
  this->m_RequestLookasideListElementSize = 0LL;
  memset(&this->m_RequestLookasideList, 0, sizeof(this->m_RequestLookasideList));
  memset(&this->m_RequestAttributes, 0, sizeof(this->m_RequestAttributes));
}
