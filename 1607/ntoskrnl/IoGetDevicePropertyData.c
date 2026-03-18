/*
 * XREFs of IoGetDevicePropertyData @ 0x1404F757C
 * Callers:
 *     PopFxQueryBiosDeviceName @ 0x1400AEE60 (PopFxQueryBiosDeviceName.c)
 *     PopFxChildDeviceActive @ 0x140202518 (PopFxChildDeviceActive.c)
 *     IopGetSessionIdFromPDO @ 0x1404ED078 (IopGetSessionIdFromPDO.c)
 *     ExpCheckPortableOperatingSystem @ 0x1404ED840 (ExpCheckPortableOperatingSystem.c)
 *     ExpHwidGetDevicePropertyDataFixed @ 0x1404F710C (ExpHwidGetDevicePropertyDataFixed.c)
 *     ExpHwidGetDevicePropertyData @ 0x1404F7188 (ExpHwidGetDevicePropertyData.c)
 *     IopGetInterruptConnectionData @ 0x140539B0C (IopGetInterruptConnectionData.c)
 *     PnprIsMemoryDevice @ 0x140644978 (PnprIsMemoryDevice.c)
 *     PnprIsProcessorDevice @ 0x140644A24 (PnprIsProcessorDevice.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14014B3B4 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     PnpGetDevicePropertyData @ 0x1404F7610 (PnpGetDevicePropertyData.c)
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
      IoAddTriageDumpDataBlock((int)v13, 720);
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
  return PnpGetDevicePropertyData(
           (int)Pdo,
           (int)PropertyKey,
           Lcid,
           Flags,
           Size,
           Data,
           (__int64)RequiredSize,
           (__int64)Type);
}
