/*
 * XREFs of ?ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z @ 0x1C009B98C
 * Callers:
 *     ndisCloseHandler @ 0x1C000CC68 (ndisCloseHandler.c)
 *     ndisCreateHandler @ 0x1C000CEDC (ndisCreateHandler.c)
 *     ndisPowerDispatch @ 0x1C001FC10 (ndisPowerDispatch.c)
 *     ndisDeviceInternalDispatch @ 0x1C0062AD8 (ndisDeviceInternalDispatch.c)
 *     ndisDeviceControlHandler @ 0x1C009B358 (ndisDeviceControlHandler.c)
 *     ndisPnPDispatch @ 0x1C009DAC0 (ndisPnPDispatch.c)
 *     ndisWMIDispatch @ 0x1C00A883C (ndisWMIDispatch.c)
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
