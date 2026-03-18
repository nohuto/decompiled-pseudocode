/*
 * XREFs of RIMDeliverConfigRequest @ 0x1C007178C
 * Callers:
 *     RIMAllocateHidConfigDesc @ 0x1C0071604 (RIMAllocateHidConfigDesc.c)
 *     RIMConfigurePointerDevice @ 0x1C00817D0 (RIMConfigurePointerDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     rimHidP_SetUsageValue @ 0x1C0071910 (rimHidP_SetUsageValue.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0074F80 (rimHidP_GetSpecificValueCaps.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

__int64 __fastcall RIMDeliverConfigRequest(__int64 a1, struct _DEVICE_OBJECT *a2, struct _FILE_OBJECT *a3, int a4)
{
  NTSTATUS SpecificValueCaps; // ebx
  int v9; // eax
  PIRP v10; // rax
  ULONG OutputBufferLength[2]; // [rsp+28h] [rbp-D0h]
  __int16 v13; // [rsp+50h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-A0h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-90h] BYREF
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
      OutputBufferLength[0] = v9;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x33u,
        (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
        *(_QWORD *)OutputBufferLength);
    }
    else
    {
      v10 = IoBuildDeviceIoControlRequest(
              0xB0191u,
              a2,
              *(PVOID *)(a1 + 32),
              *(unsigned __int16 *)(a1 + 48),
              0LL,
              0,
              0,
              &Event,
              &IoStatusBlock);
      if ( v10 )
      {
        v10->Tail.Overlay.CurrentStackLocation[-1].FileObject = a3;
        SpecificValueCaps = IofCallDriver(a2, v10);
        if ( SpecificValueCaps == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          return (unsigned int)IoStatusBlock.Status;
        }
      }
      else
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x34u,
          (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids);
        return (unsigned int)-1073741668;
      }
    }
  }
  return (unsigned int)SpecificValueCaps;
}
