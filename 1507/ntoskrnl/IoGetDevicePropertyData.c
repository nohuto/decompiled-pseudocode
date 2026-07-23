/*
 * XREFs of IoGetDevicePropertyData @ 0x1404DB778
 * Callers:
 *     PopFxQueryBiosDeviceName @ 0x14002733C (PopFxQueryBiosDeviceName.c)
 *     PopFxChildDeviceActive @ 0x1402376A0 (PopFxChildDeviceActive.c)
 *     IopGetSessionIdFromPDO @ 0x14045E7E8 (IopGetSessionIdFromPDO.c)
 *     sub_1404A8518 @ 0x1404A8518 (sub_1404A8518.c)
 *     sub_1404DB560 @ 0x1404DB560 (sub_1404DB560.c)
 *     sub_1404DB5DC @ 0x1404DB5DC (sub_1404DB5DC.c)
 *     IopGetInterruptConnectionData @ 0x14057D528 (IopGetInterruptConnectionData.c)
 *     PnprIsMemoryDevice @ 0x1406902E0 (PnprIsMemoryDevice.c)
 *     PnprIsProcessorDevice @ 0x14069038C (PnprIsProcessorDevice.c)
 *     VerifierIoGetDevicePropertyData @ 0x140741F78 (VerifierIoGetDevicePropertyData.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14016F790 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     PnpGetDevicePropertyData @ 0x1404DB80C (PnpGetDevicePropertyData.c)
 */

NTSTATUS __stdcall IoGetDevicePropertyData(
        PDEVICE_OBJECT Pdo,
        const DEVPROPKEY *PropertyKey,
        LCID Lcid,
        ULONG Flags,
        ULONG Size,
        PVOID Data,
        PULONG RequiredSize,
        PDEVPROPTYPE Type)
{
  _DWORD *DeviceNode; // rcx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v13; // rcx
  unsigned __int16 *v14; // rdi
  _WORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx

  if ( !Pdo )
    goto LABEL_16;
  DeviceNode = Pdo->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock((int)Pdo, Pdo->Size);
    DriverObject = Pdo->DriverObject;
    if ( DriverObject )
    {
      IoAddTriageDumpDataBlock((int)DriverObject, DriverObject->Size);
      p_DriverName = &Pdo->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        IoAddTriageDumpDataBlock((int)p_DriverName, 2);
        IoAddTriageDumpDataBlock((int)Pdo->DriverObject->DriverName.Buffer, Pdo->DriverObject->DriverName.Length);
      }
    }
    v13 = (char *)Pdo->DeviceObjectExtension->DeviceNode;
    if ( v13 )
    {
      v14 = (unsigned __int16 *)(v13 + 40);
      IoAddTriageDumpDataBlock((int)v13, 712);
      if ( *v14 )
      {
        IoAddTriageDumpDataBlock((int)v14, 2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v14 + 1), *v14);
      }
      v15 = (char *)Pdo->DeviceObjectExtension->DeviceNode + 56;
      if ( *v15 )
      {
        IoAddTriageDumpDataBlock((int)v15, 2);
        IoAddTriageDumpDataBlock(
          *((_QWORD *)Pdo->DeviceObjectExtension->DeviceNode + 8),
          *((unsigned __int16 *)Pdo->DeviceObjectExtension->DeviceNode + 28));
      }
      v16 = *((_QWORD *)Pdo->DeviceObjectExtension->DeviceNode + 2);
      if ( v16 && *(_WORD *)(v16 + 56) )
      {
        IoAddTriageDumpDataBlock(v16 + 56, 2);
        v17 = *((_QWORD *)Pdo->DeviceObjectExtension->DeviceNode + 2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v17 + 64), *(unsigned __int16 *)(v17 + 56));
      }
    }
LABEL_16:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)Pdo, 0LL, 0LL);
  }
  return PnpGetDevicePropertyData(Pdo, PropertyKey, Lcid, Flags, Size, Data, RequiredSize, Type);
}
