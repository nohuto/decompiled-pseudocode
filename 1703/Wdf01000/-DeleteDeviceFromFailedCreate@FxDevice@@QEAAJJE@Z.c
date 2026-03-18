/*
 * XREFs of ?DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z @ 0x1C007D60C
 * Callers:
 *     ?AddDevice@FxDriver@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C002118C (-AddDevice@FxDriver@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0021950 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C002D1A4 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 * Callees:
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C007D644 (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 */

__int64 __fastcall FxDevice::DeleteDeviceFromFailedCreate(
        FxDevice *this,
        int FailedStatus,
        unsigned __int8 UseStateMachine)
{
  unsigned int v4; // ebx

  v4 = FxDevice::DeleteDeviceFromFailedCreateNoDelete(this, FailedStatus, UseStateMachine);
  this->DeleteObject(this);
  return v4;
}
