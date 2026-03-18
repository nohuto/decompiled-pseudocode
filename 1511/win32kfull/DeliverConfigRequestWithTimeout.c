/*
 * XREFs of DeliverConfigRequestWithTimeout @ 0x1C01D4B38
 * Callers:
 *     RequestModeSwitchOnPowerUp @ 0x1C014F6D8 (RequestModeSwitchOnPowerUp.c)
 *     EnablePTPDevices @ 0x1C01D0D58 (EnablePTPDevices.c)
 *     SetUserPTPEnabledPreference @ 0x1C01D1800 (SetUserPTPEnabledPreference.c)
 *     RevokeConfigurationChange @ 0x1C01D5620 (RevokeConfigurationChange.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?IoBuildDeviceConfigRequest@@YAPEAU_IRP@@KPEAU_DEVICE_OBJECT@@PEAXK@Z @ 0x1C01D42A4 (-IoBuildDeviceConfigRequest@@YAPEAU_IRP@@KPEAU_DEVICE_OBJECT@@PEAXK@Z.c)
 */

__int64 __fastcall DeliverConfigRequestWithTimeout(
        __int64 a1,
        struct _DEVICE_OBJECT *a2,
        struct _FILE_OBJECT *a3,
        ULONG a4,
        USAGE a5)
{
  struct _DEVICE_OBJECT *KernelEvent; // rsi
  unsigned int SpecificValueCaps; // ebx
  NTSTATUS v9; // eax
  UCHAR *v10; // rcx
  struct _DEVICE_OBJECT *v11; // rbx
  struct _IRP *v12; // rax
  IRP *v13; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _FILE_OBJECT *v15; // rcx
  struct _HIDP_PREPARSED_DATA *ValueCapsLength; // [rsp+28h] [rbp-D8h]
  CHAR *PreparsedData; // [rsp+30h] [rbp-D0h]
  ULONG ReportLength; // [rsp+38h] [rbp-C8h]
  ULONG UsageValue; // [rsp+40h] [rbp-C0h] BYREF
  USHORT ButtonCapsLength[2]; // [rsp+44h] [rbp-BCh] BYREF
  ULONG UsageLength; // [rsp+48h] [rbp-B8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-B0h] BYREF
  struct _IRP *v23; // [rsp+58h] [rbp-A8h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+60h] [rbp-A0h] BYREF
  struct _FILE_OBJECT *v25; // [rsp+68h] [rbp-98h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+70h] [rbp-90h] BYREF
  struct _HIDP_BUTTON_CAPS ButtonCaps; // [rsp+C0h] [rbp-40h] BYREF

  DeviceObject = a2;
  UsageValue = a4;
  ButtonCapsLength[0] = 1;
  v25 = a3;
  Timeout.QuadPart = -10000000LL;
  KernelEvent = (struct _DEVICE_OBJECT *)CreateKernelEvent(1LL, 0LL);
  if ( !KernelEvent )
    return 3221225628LL;
  memset(*(void **)(a1 + 32), 0, *(unsigned __int16 *)(a1 + 48));
  if ( a5 == 82 )
  {
    SpecificValueCaps = HidP_GetSpecificValueCaps(
                          HidP_Feature,
                          0xDu,
                          0,
                          0x52u,
                          &ValueCaps,
                          ButtonCapsLength,
                          *(PHIDP_PREPARSED_DATA *)(a1 + 16));
    if ( SpecificValueCaps != 1114112 )
      goto LABEL_19;
    **(_BYTE **)(a1 + 32) = ValueCaps.ReportID;
    v9 = HidP_SetUsageValue(
           HidP_Feature,
           0xDu,
           0,
           0x52u,
           UsageValue,
           *(PHIDP_PREPARSED_DATA *)(a1 + 16),
           *(PCHAR *)(a1 + 32),
           *(unsigned __int16 *)(a1 + 48));
LABEL_9:
    SpecificValueCaps = v9;
    if ( v9 == 1114112 )
      goto LABEL_10;
LABEL_17:
    if ( a5 == 87 )
      SpecificValueCaps = 0;
    goto LABEL_19;
  }
  SpecificValueCaps = HidP_GetSpecificButtonCaps(
                        HidP_Feature,
                        0xDu,
                        0,
                        a5,
                        &ButtonCaps,
                        ButtonCapsLength,
                        *(PHIDP_PREPARSED_DATA *)(a1 + 16));
  if ( SpecificValueCaps != 1114112 )
    goto LABEL_17;
  v10 = *(UCHAR **)(a1 + 32);
  *v10 = ButtonCaps.ReportID;
  if ( UsageValue )
  {
    ReportLength = *(unsigned __int16 *)(a1 + 48);
    PreparsedData = *(CHAR **)(a1 + 32);
    ValueCapsLength = *(struct _HIDP_PREPARSED_DATA **)(a1 + 16);
    UsageLength = 2;
    UsageValue = 5767255;
    v9 = HidP_SetUsages(
           HidP_Feature,
           0xDu,
           0,
           (PUSAGE)&UsageValue,
           &UsageLength,
           ValueCapsLength,
           PreparsedData,
           ReportLength);
    goto LABEL_9;
  }
LABEL_10:
  v11 = DeviceObject;
  v12 = IoBuildDeviceConfigRequest((__int64)v10, DeviceObject, *(void **)(a1 + 32), *(unsigned __int16 *)(a1 + 48));
  v13 = v12;
  if ( !v12 )
  {
LABEL_15:
    SpecificValueCaps = -1073741668;
    goto LABEL_19;
  }
  v23 = v12;
  CurrentStackLocation = v12->Tail.Overlay.CurrentStackLocation;
  DeviceObject = KernelEvent;
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)OnConfigCompletion;
  CurrentStackLocation[-1].Context = &DeviceObject;
  v15 = v25;
  CurrentStackLocation[-1].Control = -32;
  v13->Tail.Overlay.CurrentStackLocation[-1].FileObject = v15;
  SpecificValueCaps = IofCallDriver(v11, v13);
  if ( SpecificValueCaps == 259 )
  {
    SpecificValueCaps = KeWaitForSingleObject(KernelEvent, Executive, 0, 0, &Timeout);
    if ( SpecificValueCaps != 258 )
    {
      SpecificValueCaps = 0;
      goto LABEL_19;
    }
    if ( _InterlockedExchange64((volatile __int64 *)&v23, 0LL) )
    {
      IoCancelIrp(v13);
      KeWaitForSingleObject(KernelEvent, Executive, 0, 0, 0LL);
      Win32FreePool(v13->AssociatedIrp.MasterIrp);
      IoFreeIrp(v13);
      goto LABEL_15;
    }
  }
LABEL_19:
  Win32FreePool(KernelEvent);
  return SpecificValueCaps;
}
