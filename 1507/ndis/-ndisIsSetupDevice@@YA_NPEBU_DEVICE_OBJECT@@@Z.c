/*
 * XREFs of ?ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z @ 0x1C0096504
 * Callers:
 *     ndisCloseIrpHandler @ 0x1C0003150 (ndisCloseIrpHandler.c)
 *     ndisCreateHandler @ 0x1C00086B0 (ndisCreateHandler.c)
 *     ndisPowerDispatch @ 0x1C001F570 (ndisPowerDispatch.c)
 *     ndisCloseHandler @ 0x1C00575C4 (ndisCloseHandler.c)
 *     ndisDeviceInternalDispatch @ 0x1C005F19C (ndisDeviceInternalDispatch.c)
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
