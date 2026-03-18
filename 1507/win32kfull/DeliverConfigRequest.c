/*
 * XREFs of DeliverConfigRequest @ 0x1C01D2F44
 * Callers:
 *     ?AllocateHidConfigDesc@@YAPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAXPEAU_HIDP_CAPS@@PEAU_HID_COLLECTION_INFORMATION@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@@Z @ 0x1C01D21F8 (-AllocateHidConfigDesc@@YAPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAXPEAU_HIDP_CAPS@@PEAU_HID_COLLECTIO.c)
 *     ConfigurePointerDevice @ 0x1C01D2E20 (ConfigurePointerDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

int __fastcall DeliverConfigRequest(__int64 a1, struct _DEVICE_OBJECT *a2, struct _FILE_OBJECT *a3, ULONG a4)
{
  int result; // eax
  PIRP v9; // rax
  USHORT ValueCapsLength; // [rsp+50h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-A0h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-90h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+80h] [rbp-78h] BYREF

  ValueCapsLength = 1;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  result = HidP_GetSpecificValueCaps(
             HidP_Feature,
             0xDu,
             0,
             0x52u,
             &ValueCaps,
             &ValueCapsLength,
             *(PHIDP_PREPARSED_DATA *)(a1 + 16));
  if ( result >= 0 )
  {
    **(_BYTE **)(a1 + 32) = ValueCaps.ReportID;
    result = HidP_SetUsageValue(
               HidP_Feature,
               0xDu,
               0,
               0x52u,
               a4,
               *(PHIDP_PREPARSED_DATA *)(a1 + 16),
               *(PCHAR *)(a1 + 32),
               *(unsigned __int16 *)(a1 + 48));
    if ( result >= 0 )
    {
      v9 = IoBuildDeviceIoControlRequest(
             0xB0191u,
             a2,
             *(PVOID *)(a1 + 32),
             *(unsigned __int16 *)(a1 + 48),
             0LL,
             0,
             0,
             &Event,
             &IoStatusBlock);
      if ( v9 )
      {
        v9->Tail.Overlay.CurrentStackLocation[-1].FileObject = a3;
        result = IofCallDriver(a2, v9);
        if ( result == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          return IoStatusBlock.Status;
        }
      }
      else
      {
        return -1073741668;
      }
    }
  }
  return result;
}
