/*
 * XREFs of IopGetSessionIdFromSymbolicName @ 0x140543198
 * Callers:
 *     PiUEventProcessBroadcastNotifications @ 0x1403EF550 (PiUEventProcessBroadcastNotifications.c)
 *     PnpNotifyDeviceClassChange @ 0x1403F0E40 (PnpNotifyDeviceClassChange.c)
 *     IoRegisterPlugPlayNotification @ 0x14052BB14 (IoRegisterPlugPlayNotification.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     IopGetSessionIdFromPDO @ 0x1404ED078 (IopGetSessionIdFromPDO.c)
 *     IopDeviceObjectFromSymbolicName @ 0x1405431F0 (IopDeviceObjectFromSymbolicName.c)
 */

__int64 __fastcall IopGetSessionIdFromSymbolicName(__int64 a1)
{
  unsigned int SessionIdFromPDO; // edi
  struct _DEVICE_OBJECT *v2; // rax
  struct _DEVICE_OBJECT *v3; // rbx
  _DWORD *DeviceNode; // rcx

  SessionIdFromPDO = -1;
  v2 = (struct _DEVICE_OBJECT *)IopDeviceObjectFromSymbolicName(a1);
  v3 = v2;
  if ( v2 )
  {
    DeviceNode = v2->DeviceObjectExtension->DeviceNode;
    if ( DeviceNode )
    {
      if ( (DeviceNode[99] & 0x20000) == 0 )
      {
        SessionIdFromPDO = IopGetSessionIdFromPDO(v2);
        ObfDereferenceObject(v3);
      }
    }
  }
  return SessionIdFromPDO;
}
