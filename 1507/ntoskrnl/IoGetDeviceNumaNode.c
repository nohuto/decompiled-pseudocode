/*
 * XREFs of IoGetDeviceNumaNode @ 0x1405833F4
 * Callers:
 *     IopGetNumaNodeInformation @ 0x14067607C (IopGetNumaNodeInformation.c)
 *     VerifierIoGetDeviceNumaNode @ 0x140741F60 (VerifierIoGetDeviceNumaNode.c)
 * Callees:
 *     KeQueryHighestNodeNumber @ 0x1400DBBB8 (KeQueryHighestNodeNumber.c)
 */

NTSTATUS __stdcall IoGetDeviceNumaNode(PDEVICE_OBJECT Pdo, PUSHORT NodeNumber)
{
  PVOID DeviceNode; // rcx

  if ( !Pdo )
    return -1073741811;
  DeviceNode = Pdo->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (*((_DWORD *)DeviceNode + 99) & 0x20000) != 0 )
    return -1073741811;
  if ( *((_DWORD *)DeviceNode + 165) <= 0xFFFFFFFD )
  {
    *NodeNumber = *((_WORD *)DeviceNode + 330);
  }
  else
  {
    if ( KeQueryHighestNodeNumber() )
      return -1073741275;
    *NodeNumber = 0;
  }
  return 0;
}
