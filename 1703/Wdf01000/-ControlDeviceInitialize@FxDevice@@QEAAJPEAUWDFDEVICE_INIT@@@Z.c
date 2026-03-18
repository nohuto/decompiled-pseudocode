/*
 * XREFs of ?ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00200D0
 * Callers:
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0021950 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 * Callees:
 *     ?CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001FB1C (-CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0020C14 (-PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PostCreateDeviceInitialize@FxWmiIrpHandler@@QEAAJXZ @ 0x1C00335C8 (-PostCreateDeviceInitialize@FxWmiIrpHandler@@QEAAJXZ.c)
 */

NTSTATUS __fastcall FxDevice::ControlDeviceInitialize(FxDevice *this, WDFDEVICE_INIT *DeviceInit)
{
  NTSTATUS result; // eax

  this->m_Legacy = 1;
  result = FxDevice::CreateDevice(this, DeviceInit);
  if ( result >= 0 )
  {
    result = FxWmiIrpHandler::PostCreateDeviceInitialize(this->m_PkgWmi);
    if ( result >= 0 )
      return FxPkgGeneral::PostCreateDeviceInitialize(this->m_PkgGeneral, DeviceInit);
  }
  return result;
}
