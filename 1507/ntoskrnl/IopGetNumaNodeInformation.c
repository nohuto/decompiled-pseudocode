/*
 * XREFs of IopGetNumaNodeInformation @ 0x14067607C
 * Callers:
 *     NtQueryInformationFile @ 0x140490C50 (NtQueryInformationFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     IopGetDevicePDO @ 0x1400D0E98 (IopGetDevicePDO.c)
 *     IoGetDeviceNumaNode @ 0x1405833F4 (IoGetDeviceNumaNode.c)
 */

__int64 __fastcall IopGetNumaNodeInformation(__int64 a1, USHORT *a2)
{
  struct _DEVICE_OBJECT *DevicePDO; // rax
  struct _DEVICE_OBJECT *v4; // rdi
  NTSTATUS DeviceNumaNode; // ebx
  USHORT NodeNumber; // [rsp+30h] [rbp+8h] BYREF

  DevicePDO = (struct _DEVICE_OBJECT *)IopGetDevicePDO(*(_QWORD *)(a1 + 8));
  v4 = DevicePDO;
  if ( !DevicePDO )
    return 3221225486LL;
  DeviceNumaNode = IoGetDeviceNumaNode(DevicePDO, &NodeNumber);
  ObfDereferenceObject(v4);
  if ( DeviceNumaNode >= 0 )
    *a2 = NodeNumber;
  return (unsigned int)DeviceNumaNode;
}
