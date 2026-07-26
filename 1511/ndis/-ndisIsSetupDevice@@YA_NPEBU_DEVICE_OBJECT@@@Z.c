/*
 * XREFs of ?ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z @ 0x1C0093CCC
 * Callers:
 *     ndisCreateHandler @ 0x1C0004CC4 (ndisCreateHandler.c)
 *     ndisCloseHandler @ 0x1C000B2C0 (ndisCloseHandler.c)
 *     ndisPowerDispatch @ 0x1C0024480 (ndisPowerDispatch.c)
 *     ndisDeviceInternalDispatch @ 0x1C005EAFC (ndisDeviceInternalDispatch.c)
 *     ndisDeviceControlHandler @ 0x1C0093CE0 (ndisDeviceControlHandler.c)
 *     ndisWMIDispatch @ 0x1C009EDDC (ndisWMIDispatch.c)
 *     ndisPnPDispatch @ 0x1C00A8060 (ndisPnPDispatch.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsSetupDevice(const struct _DEVICE_OBJECT *a1)
{
  bool result; // al

  result = 0;
  if ( a1 )
    return *(_BYTE *)a1->DeviceExtension == 23;
  return result;
}
