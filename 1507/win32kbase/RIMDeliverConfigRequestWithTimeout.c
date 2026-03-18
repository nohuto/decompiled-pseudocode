/*
 * XREFs of RIMDeliverConfigRequestWithTimeout @ 0x1C006E618
 * Callers:
 *     RIMDoOnPowerNotification @ 0x1C006E438 (RIMDoOnPowerNotification.c)
 *     rimConfigurationChange @ 0x1C00C356C (rimConfigurationChange.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     rimIoBuildDeviceConfigRequest @ 0x1C006E7E8 (rimIoBuildDeviceConfigRequest.c)
 *     rimHidP_SetUsageValue @ 0x1C0071910 (rimHidP_SetUsageValue.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0073DA0 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0074F80 (rimHidP_GetSpecificValueCaps.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     rimHidP_SetUsages @ 0x1C00C373C (rimHidP_SetUsages.c)
 */

__int64 __fastcall RIMDeliverConfigRequestWithTimeout(
        __int64 a1,
        struct _DEVICE_OBJECT *a2,
        struct _FILE_OBJECT *a3,
        int a4,
        unsigned __int16 a5)
{
  size_t v6; // r8
  void *v8; // rcx
  unsigned int SpecificValueCaps; // ebx
  unsigned int v10; // eax
  _BYTE *v11; // rcx
  IRP *v12; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _FILE_OBJECT *v14; // rcx
  NTSTATUS v15; // eax
  __int64 v17; // [rsp+28h] [rbp-D8h]
  __int64 v18; // [rsp+28h] [rbp-D8h]
  __int64 v19; // [rsp+30h] [rbp-D0h]
  int v20; // [rsp+38h] [rbp-C8h]
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v22[2]; // [rsp+44h] [rbp-BCh] BYREF
  int v23; // [rsp+48h] [rbp-B8h] BYREF
  struct _KEVENT *p_Event; // [rsp+50h] [rbp-B0h] BYREF
  IRP *v25; // [rsp+58h] [rbp-A8h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+60h] [rbp-A0h] BYREF
  struct _FILE_OBJECT *v27; // [rsp+68h] [rbp-98h]
  struct _KEVENT Event; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v29[80]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v30[80]; // [rsp+E0h] [rbp-20h] BYREF

  v27 = a3;
  v6 = *(unsigned __int16 *)(a1 + 48);
  v8 = *(void **)(a1 + 32);
  v21 = a4;
  v22[0] = 1;
  Timeout.QuadPart = -10000000LL;
  memset(v8, 0, v6);
  if ( a5 == 82 )
  {
    SpecificValueCaps = rimHidP_GetSpecificValueCaps(2, 13, 0, 82, (__int64)v29, (__int64)v22, *(_QWORD *)(a1 + 16));
    if ( SpecificValueCaps != 1114112 )
      return SpecificValueCaps;
    **(_BYTE **)(a1 + 32) = v29[2];
    v10 = rimHidP_SetUsageValue(
            2,
            13,
            0,
            82,
            v21,
            *(_QWORD *)(a1 + 16),
            *(_QWORD *)(a1 + 32),
            *(unsigned __int16 *)(a1 + 48));
    goto LABEL_4;
  }
  SpecificValueCaps = rimHidP_GetSpecificButtonCaps(2, 13, 0, a5, (__int64)v30, (__int64)v22, *(_QWORD *)(a1 + 16));
  if ( SpecificValueCaps == 1114112 )
  {
    v11 = *(_BYTE **)(a1 + 32);
    *v11 = v30[2];
    if ( !v21 )
    {
LABEL_5:
      v12 = (IRP *)rimIoBuildDeviceConfigRequest(v11, a2, *(_QWORD *)(a1 + 32), *(unsigned __int16 *)(a1 + 48));
      if ( v12 )
      {
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        v25 = v12;
        p_Event = &Event;
        CurrentStackLocation = v12->Tail.Overlay.CurrentStackLocation;
        CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&rimOnConfigCompletion;
        CurrentStackLocation[-1].Context = &p_Event;
        v14 = v27;
        CurrentStackLocation[-1].Control = -32;
        v12->Tail.Overlay.CurrentStackLocation[-1].FileObject = v14;
        v15 = IofCallDriver(a2, v12);
        SpecificValueCaps = v15;
        if ( v15 != 259 )
        {
          LODWORD(v17) = v15;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            4u,
            0x36u,
            (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
            v17);
          return SpecificValueCaps;
        }
        SpecificValueCaps = KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout);
        if ( SpecificValueCaps != 258 )
          return 0;
        if ( !_InterlockedExchange64((volatile __int64 *)&v25, 0LL) )
          return SpecificValueCaps;
        IoCancelIrp(v12);
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Win32FreePool();
        IoFreeIrp(v12);
      }
      else
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x35u,
          (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids);
      }
      return (unsigned int)-1073741668;
    }
    v20 = *(unsigned __int16 *)(a1 + 48);
    v19 = *(_QWORD *)(a1 + 32);
    v18 = *(_QWORD *)(a1 + 16);
    v23 = 2;
    v21 = 5767255;
    v10 = rimHidP_SetUsages(2, 13, 0, (unsigned int)&v21, (__int64)&v23, v18, v19, v20);
LABEL_4:
    SpecificValueCaps = v10;
    if ( v10 == 1114112 )
      goto LABEL_5;
  }
  if ( (unsigned __int16)(a5 - 87) <= 1u )
    return 0;
  return SpecificValueCaps;
}
