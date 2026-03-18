/*
 * XREFs of UsbhPdo_ReportPnPFailureProblem @ 0x1C0054AE8
 * Callers:
 *     UsbhPdoPnp_QueryPnpDeviceState @ 0x1C0028510 (UsbhPdoPnp_QueryPnpDeviceState.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C0006BC0 (RtlStringCbPrintfW.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C000AB2C (UsbhSetPdoRegistryParameter.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     __security_check_cookie @ 0x1C0029D80 (__security_check_cookie.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 *     RtlUnalignedStringCbLengthW @ 0x1C00535C8 (RtlUnalignedStringCbLengthW.c)
 */

void __fastcall UsbhPdo_ReportPnPFailureProblem(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // r14
  size_t v9; // rdi
  PVOID PoolWithTag; // rax
  void *Data; // rbx
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+20h] [rbp-39h]
  size_t pcbLength; // [rsp+40h] [rbp-19h] BYREF
  PMESSAGE_RESOURCE_ENTRY v14; // [rsp+48h] [rbp-11h] BYREF
  _OWORD v15[3]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v16; // [rsp+80h] [rbp+27h]
  wchar_t v17; // [rsp+88h] [rbp+2Fh]

  v17 = aSystem32Driver[28];
  v15[0] = *(_OWORD *)L"@System32\\drivers\\usbhub.sys";
  v15[1] = *(_OWORD *)L"2\\drivers\\usbhub.sys";
  v15[2] = *(_OWORD *)L"s\\usbhub.sys";
  v16 = *(_QWORD *)L".sys";
  v8 = PdoExt((__int64)DeviceObject, a2, a3, a4);
  if ( v8[697] )
  {
    LODWORD(pcbLength) = PdoExt((__int64)DeviceObject, v5, v6, v7)[697];
    UsbhSetPdoRegistryParameter(DeviceObject, L"EnumerationFailureCode", 4u, &pcbLength, 4u);
    if ( RtlFindMessage(WPP_MAIN_CB.Queue.ListEntry.Flink[1].Blink, 0xBu, 0, v8[697], &v14) >= 0
      && RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)v14->Text, v14->Length - 4, &pcbLength) >= 0 )
    {
      v9 = pcbLength + 86;
      pcbLength += 86LL;
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, pcbLength, 0x42554855u);
      Data = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v9);
        LODWORD(MessageResourceEntry) = v8[697];
        if ( RtlStringCbPrintfW((NTSTRSAFE_PWSTR)Data, v9, L"%s,#%d;%hs", v15, MessageResourceEntry, v14->Text) >= 0
          && RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)Data, v9, &pcbLength) >= 0 )
        {
          IoSetDevicePropertyData(DeviceObject, &DEVPKEY_Device_DriverProblemDesc, 0, 0, 0x19u, pcbLength + 2, Data);
        }
        ExFreePoolWithTag(Data, 0);
      }
    }
  }
}
