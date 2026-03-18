/*
 * XREFs of RIMDeliverConfigRequestWithTimeout @ 0x1C0086F50
 * Callers:
 *     RIMDoOnPowerNotification @ 0x1C0086D18 (RIMDoOnPowerNotification.c)
 *     rimConfigurationChange @ 0x1C00D2DCC (rimConfigurationChange.c)
 * Callees:
 *     rimHidP_SetUsageValue @ 0x1C0005984 (rimHidP_SetUsageValue.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0008A6C (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0009C68 (rimHidP_GetSpecificValueCaps.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     rimIoBuildDeviceConfigRequest @ 0x1C0087120 (rimIoBuildDeviceConfigRequest.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     rimHidP_SetUsages @ 0x1C00D2FA8 (rimHidP_SetUsages.c)
 */

__int64 __fastcall RIMDeliverConfigRequestWithTimeout(
        __int64 a1,
        struct _DEVICE_OBJECT *a2,
        struct _FILE_OBJECT *a3,
        unsigned int a4,
        unsigned __int16 a5)
{
  size_t v6; // r8
  void *v8; // rcx
  unsigned int SpecificValueCaps; // ebx
  int v10; // eax
  UCHAR *v11; // rcx
  int v12; // edx
  IRP *v13; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _FILE_OBJECT *v15; // rcx
  NTSTATUS v16; // eax
  __int64 v18; // [rsp+28h] [rbp-D8h]
  __int64 v19; // [rsp+28h] [rbp-D8h]
  __int64 v20; // [rsp+30h] [rbp-D0h]
  int v21; // [rsp+38h] [rbp-C8h]
  unsigned __int16 v22[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v23; // [rsp+44h] [rbp-BCh] BYREF
  int v24; // [rsp+48h] [rbp-B8h] BYREF
  struct _KEVENT *p_Event; // [rsp+50h] [rbp-B0h] BYREF
  IRP *v26; // [rsp+58h] [rbp-A8h] BYREF
  struct _FILE_OBJECT *v27; // [rsp+60h] [rbp-A0h]
  union _LARGE_INTEGER Timeout; // [rsp+68h] [rbp-98h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-90h] BYREF
  struct _HIDP_VALUE_CAPS v30; // [rsp+90h] [rbp-70h] BYREF
  struct _HIDP_BUTTON_CAPS v31; // [rsp+E0h] [rbp-20h] BYREF

  v27 = a3;
  v6 = *(unsigned __int16 *)(a1 + 48);
  v8 = *(void **)(a1 + 32);
  v23 = a4;
  v22[0] = 1;
  Timeout.QuadPart = -10000000LL;
  memset(v8, 0, v6);
  if ( a5 == 82 )
  {
    SpecificValueCaps = rimHidP_GetSpecificValueCaps(
                          HidP_Feature,
                          0xDu,
                          0,
                          0x52u,
                          &v30,
                          v22,
                          *(struct _HIDP_PREPARSED_DATA **)(a1 + 16));
    if ( SpecificValueCaps != 1114112 )
      return SpecificValueCaps;
    **(_BYTE **)(a1 + 32) = v30.ReportID;
    v10 = rimHidP_SetUsageValue(
            HidP_Feature,
            0xDu,
            0,
            0x52u,
            v23,
            *(struct _HIDP_PREPARSED_DATA **)(a1 + 16),
            *(char **)(a1 + 32),
            *(unsigned __int16 *)(a1 + 48));
    goto LABEL_4;
  }
  SpecificValueCaps = rimHidP_GetSpecificButtonCaps(
                        HidP_Feature,
                        0xDu,
                        0,
                        a5,
                        &v31,
                        v22,
                        *(struct _HIDP_PREPARSED_DATA **)(a1 + 16));
  if ( SpecificValueCaps == 1114112 )
  {
    v11 = *(UCHAR **)(a1 + 32);
    *v11 = v31.ReportID;
    if ( !v23 )
    {
LABEL_5:
      v13 = (IRP *)rimIoBuildDeviceConfigRequest(v11, a2, *(_QWORD *)(a1 + 32), *(unsigned __int16 *)(a1 + 48));
      if ( v13 )
      {
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        v26 = v13;
        p_Event = &Event;
        CurrentStackLocation = v13->Tail.Overlay.CurrentStackLocation;
        CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&rimOnConfigCompletion;
        CurrentStackLocation[-1].Context = &p_Event;
        v15 = v27;
        CurrentStackLocation[-1].Control = -32;
        v13->Tail.Overlay.CurrentStackLocation[-1].FileObject = v15;
        v16 = IofCallDriver(a2, v13);
        SpecificValueCaps = v16;
        if ( v16 != 259 )
        {
          LODWORD(v18) = v16;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            4u,
            0x38u,
            (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids,
            v18);
          return SpecificValueCaps;
        }
        SpecificValueCaps = KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout);
        if ( SpecificValueCaps != 258 )
          return 0;
        if ( !_InterlockedExchange64((volatile __int64 *)&v26, 0LL) )
          return SpecificValueCaps;
        IoCancelIrp(v13);
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Win32FreePool();
        IoFreeIrp(v13);
      }
      else
      {
        LOBYTE(v12) = 3;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v12,
          3,
          55,
          (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids);
      }
      return (unsigned int)-1073741668;
    }
    v21 = *(unsigned __int16 *)(a1 + 48);
    v20 = *(_QWORD *)(a1 + 32);
    v19 = *(_QWORD *)(a1 + 16);
    v24 = 2;
    v23 = 5767255;
    v10 = rimHidP_SetUsages(2, 13, 0, (unsigned int)&v23, (__int64)&v24, v19, v20, v21);
LABEL_4:
    SpecificValueCaps = v10;
    if ( v10 == 1114112 )
      goto LABEL_5;
  }
  if ( (unsigned __int16)(a5 - 87) <= 1u )
    return 0;
  return SpecificValueCaps;
}
