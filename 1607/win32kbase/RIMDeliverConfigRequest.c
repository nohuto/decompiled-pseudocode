/*
 * XREFs of RIMDeliverConfigRequest @ 0x1C0005780
 * Callers:
 *     RIMAllocateHidConfigDesc @ 0x1C000560C (RIMAllocateHidConfigDesc.c)
 *     RIMConfigurePointerDevice @ 0x1C007F890 (RIMConfigurePointerDevice.c)
 * Callees:
 *     rimHidP_SetUsageValue @ 0x1C0005984 (rimHidP_SetUsageValue.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0009C68 (rimHidP_GetSpecificValueCaps.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00D1F58 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall RIMDeliverConfigRequest(__int64 a1, struct _DEVICE_OBJECT *a2, struct _FILE_OBJECT *a3, int a4)
{
  struct _DEVICE_OBJECT *v6; // rsi
  NTSTATUS SpecificValueCaps; // ebx
  int v9; // eax
  int v10; // edx
  PIRP v11; // rax
  __int16 v13; // [rsp+50h] [rbp-B8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-B0h] BYREF
  _KEVENT Event; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v16[80]; // [rsp+80h] [rbp-88h] BYREF

  v13 = 1;
  v6 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_d(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    4,
    52,
    (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids,
    a4);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(2, 13, 0, 82, (__int64)v16, (__int64)&v13, *(_QWORD *)(a1 + 16));
  if ( SpecificValueCaps >= 0 )
  {
    memset(*(void **)(a1 + 32), 0, *(unsigned __int16 *)(a1 + 48));
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
    if ( v9 >= 0 )
    {
      v11 = IoBuildDeviceIoControlRequest(
              0xB0191u,
              v6,
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
        SpecificValueCaps = IofCallDriver(v6, v11);
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
          54,
          (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids);
        return (unsigned int)-1073741668;
      }
    }
    else
    {
      LOBYTE(v10) = 3;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        3,
        53,
        (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids,
        v9);
    }
  }
  return (unsigned int)SpecificValueCaps;
}
