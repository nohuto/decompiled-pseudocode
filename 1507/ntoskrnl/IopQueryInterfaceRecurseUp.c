/*
 * XREFs of IopQueryInterfaceRecurseUp @ 0x1405B7B04
 * Callers:
 *     IoQueryInterface @ 0x1405B7ABC (IoQueryInterface.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400D0E10 (IoGetDeviceAttachmentBaseRef.c)
 *     PnpQueryInterface @ 0x14040DEB4 (PnpQueryInterface.c)
 *     PpDevNodeUnlockTree @ 0x1404E1F18 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1404E20D8 (PpDevNodeLockTree.c)
 */

__int64 __fastcall IopQueryInterfaceRecurseUp(
        PDEVICE_OBJECT DeviceObject,
        ULONG_PTR a2,
        USHORT a3,
        USHORT a4,
        struct _NAMED_PIPE_CREATE_PARAMETERS *a5,
        USHORT *a6)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v11; // rsi
  PDEVICE_OBJECT *DeviceNode; // rbx
  unsigned int Interface; // edi

  PpDevNodeLockTree(0);
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
  v11 = DeviceAttachmentBaseRef;
  if ( DeviceAttachmentBaseRef )
    DeviceNode = (PDEVICE_OBJECT *)DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  if ( DeviceNode == (PDEVICE_OBJECT *)IopRootDeviceNode )
  {
LABEL_8:
    Interface = -1073741637;
  }
  else
  {
    while ( DeviceNode && *((_DWORD *)DeviceNode + 75) != 788 )
    {
      Interface = PnpQueryInterface(DeviceNode[4], a2, a4, a3, a5, a6);
      if ( Interface != -1073741637 )
        goto LABEL_9;
      DeviceNode = (PDEVICE_OBJECT *)DeviceNode[2];
      if ( DeviceNode == (PDEVICE_OBJECT *)IopRootDeviceNode )
        goto LABEL_8;
    }
    Interface = -1073741130;
  }
LABEL_9:
  ObfDereferenceObject(v11);
  PpDevNodeUnlockTree(0);
  return Interface;
}
