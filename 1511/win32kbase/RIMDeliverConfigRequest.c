/*
 * XREFs of RIMDeliverConfigRequest @ 0x1C0005B94
 * Callers:
 *     RIMAllocateHidConfigDesc @ 0x1C0005A0C (RIMAllocateHidConfigDesc.c)
 *     RIMConfigurePointerDevice @ 0x1C007BDB4 (RIMConfigurePointerDevice.c)
 * Callees:
 *     rimHidP_SetUsageValue @ 0x1C0005D18 (rimHidP_SetUsageValue.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0008C68 (rimHidP_GetSpecificValueCaps.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

__int64 __fastcall RIMDeliverConfigRequest(__int64 a1, struct _DEVICE_OBJECT *a2, struct _FILE_OBJECT *a3, int a4)
{
  NTSTATUS SpecificValueCaps; // ebx
  int v9; // eax
  int v10; // edx
  PIRP v11; // rax
  __int16 v13; // [rsp+50h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-A0h] BYREF
  _KEVENT Event; // [rsp+68h] [rbp-90h] BYREF
  _BYTE v16[80]; // [rsp+80h] [rbp-78h] BYREF

  v13 = 1;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(2, 13, 0, 82, (__int64)v16, (__int64)&v13, *(_QWORD *)(a1 + 16));
  if ( SpecificValueCaps >= 0 )
  {
    **(_BYTE **)(a1 + 32) = v16[2];
    v9 = rimHidP_SetUsageValue(
           2,
           13,
           0,
           82,
           a4,
           *(_QWORD *)(a1 + 16),
           *(_QWORD *)(a1 + 32),
           *(unsigned __int16 *)(a1 + 48));
    SpecificValueCaps = v9;
    if ( v9 < 0 )
    {
      LOBYTE(v10) = 3;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        3,
        51,
        (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
        v9);
    }
    else
    {
      v11 = IoBuildDeviceIoControlRequest(
              0xB0191u,
              a2,
              *(PVOID *)(a1 + 32),
              *(unsigned __int16 *)(a1 + 48),
              0LL,
              0,
              0,
              &Event,
              &IoStatusBlock);
      if ( v11 )
      {
        v11->Tail.Overlay.CurrentStackLocation[-1].FileObject = a3;
        SpecificValueCaps = IofCallDriver(a2, v11);
        if ( SpecificValueCaps == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          return (unsigned int)IoStatusBlock.Status;
        }
      }
      else
      {
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          3,
          3,
          52,
          (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids);
        return (unsigned int)-1073741668;
      }
    }
  }
  return (unsigned int)SpecificValueCaps;
}
