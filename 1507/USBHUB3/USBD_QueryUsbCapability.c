/*
 * XREFs of USBD_QueryUsbCapability @ 0x1C00317C8
 * Callers:
 *     HUBFDO_EvtDeviceAdd @ 0x1C0061E20 (HUBFDO_EvtDeviceAdd.c)
 * Callees:
 *     USBDInternal_BuildandSendIoctlSynchronously @ 0x1C0030E78 (USBDInternal_BuildandSendIoctlSynchronously.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

NTSTATUS __stdcall USBD_QueryUsbCapability(
        USBD_HANDLE USBDHandle,
        const GUID *CapabilityType,
        ULONG OutputBufferLength,
        PUCHAR OutputBuffer,
        PULONG ResultLength)
{
  NTSTATUS v9; // ebx
  int v10; // eax
  __int64 v11; // rax
  struct _DEVICE_OBJECT *v12; // rdx
  struct _DEVICE_OBJECT *v13; // rcx
  _BYTE v15[40]; // [rsp+30h] [rbp-48h] BYREF

  if ( KeGetCurrentIrql() )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "PASSIVE_LEVEL required\n");
    return -1073741811;
  }
  if ( !USBDHandle )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "USBDHandle cant be NULL\n");
    return -1073741811;
  }
  if ( !CapabilityType )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "CapabilityType cant be NULL\n");
    return -1073741811;
  }
  if ( OutputBufferLength )
  {
    if ( !OutputBuffer )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "OutputBuffer cant be NULL if OutputBufferLength is not zero\n");
      return -1073741811;
    }
  }
  else if ( OutputBuffer )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "OutputBuffer must be NULL if OutputBufferLength is zero\n");
    return -1073741811;
  }
  v10 = *((_DWORD *)USBDHandle + 42);
  if ( v10 == -1 )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(
        0x4Du,
        0,
        "Could not exchange an interface with the Underlying USB core stack, querrying for capability is not possible\n");
    return -1073741822;
  }
  if ( v10 != 1536 )
  {
    memset(v15, 0, sizeof(v15));
    v11 = *((_QWORD *)USBDHandle + 6);
    v12 = (struct _DEVICE_OBJECT *)*((_QWORD *)USBDHandle + 20);
    v13 = (struct _DEVICE_OBJECT *)*((_QWORD *)USBDHandle + 7);
    *(GUID *)&v15[16] = *CapabilityType;
    *(_DWORD *)v15 = 2621441;
    *(_QWORD *)&v15[8] = v11;
    *(_DWORD *)&v15[32] = OutputBufferLength;
    return USBDInternal_BuildandSendIoctlSynchronously(v13, v12, (_IRP *)OutputBuffer, (unsigned __int64)v15);
  }
  if ( RtlCompareMemory(CapabilityType, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_HIGH_SPEED_COMPATIBLE, 0x10uLL) == 16 )
  {
    if ( OutputBuffer )
    {
      v9 = -1073741811;
      if ( g_EnableDbgPrints )
        DbgPrintEx(
          0x4Du,
          0,
          "OutputBuffer must be NULL for GUID_USB_CAPABILITY_DEVICE_CONNECTION_HIGH_SPEED_COMPATIBLE\n");
      return v9;
    }
    if ( !*((_BYTE *)USBDHandle + 176) )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 3u, "Device is not High Speed\n");
      return -1073741637;
    }
    return 0;
  }
  if ( RtlCompareMemory(CapabilityType, &GUID_USB_CAPABILITY_SELECTIVE_SUSPEND, 0x10uLL) != 16 )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "QueryUsbCapability not supported/implemented by core stack\n");
    return -1073741822;
  }
  if ( !OutputBuffer )
    return 0;
  v9 = -1073741811;
  if ( g_EnableDbgPrints )
    DbgPrintEx(0x4Du, 0, "OutputBuffer must be NULL for GUID_USB_CAPABILITY_SELECTIVE_SUSPEND\n");
  return v9;
}
