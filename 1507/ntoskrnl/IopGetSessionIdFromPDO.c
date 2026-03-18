/*
 * XREFs of IopGetSessionIdFromPDO @ 0x14045E7E8
 * Callers:
 *     IopCheckSessionDeviceAccess @ 0x1401F6948 (IopCheckSessionDeviceAccess.c)
 *     IopGetSessionIdFromSymbolicName @ 0x14045BF70 (IopGetSessionIdFromSymbolicName.c)
 *     PnpStartDeviceNode @ 0x14045E860 (PnpStartDeviceNode.c)
 *     PnpNotifyTargetDeviceChange @ 0x14045EA84 (PnpNotifyTargetDeviceChange.c)
 *     PnpInitializeSessionId @ 0x1405551FC (PnpInitializeSessionId.c)
 *     IoRegisterContainerNotification @ 0x1405BD318 (IoRegisterContainerNotification.c)
 * Callees:
 *     IoGetDevicePropertyData @ 0x1404DB778 (IoGetDevicePropertyData.c)
 */

__int64 __fastcall IopGetSessionIdFromPDO(struct _DEVICE_OBJECT *a1)
{
  unsigned int v1; // ebx
  _DWORD *DeviceNode; // rdx
  NTSTATUS DevicePropertyData; // eax
  unsigned int v4; // ecx
  int v6; // [rsp+50h] [rbp+8h] BYREF
  ULONG v7; // [rsp+58h] [rbp+10h] BYREF
  ULONG v8; // [rsp+60h] [rbp+18h] BYREF

  v1 = -1;
  v6 = -1;
  if ( a1 )
  {
    DeviceNode = a1->DeviceObjectExtension->DeviceNode;
    if ( DeviceNode )
    {
      if ( (DeviceNode[99] & 0x20000) == 0 )
      {
        DevicePropertyData = IoGetDevicePropertyData(a1, &DEVPKEY_Device_SessionId, 0, 0, 4u, &v6, &v8, &v7);
        v4 = v6;
        if ( DevicePropertyData < 0 )
          return (unsigned int)-1;
        return v4;
      }
    }
  }
  return v1;
}
