/*
 * XREFs of RIMSimulatedPointerDeviceScanTime @ 0x1C00CD218
 * Callers:
 *     RIMMarkEndPointerMessageDelivery @ 0x1C00C4F90 (RIMMarkEndPointerMessageDelivery.c)
 *     rimProcessPTPDeviceInput @ 0x1C00CD9FC (rimProcessPTPDeviceInput.c)
 *     rimProcessPointerDeviceInput @ 0x1C00CDE70 (rimProcessPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dddii @ 0x1C00CD8C8 (WPP_RECORDER_SF_dddii.c)
 */

__int64 __fastcall RIMSimulatedPointerDeviceScanTime(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  int v11; // r8d
  int v13; // [rsp+20h] [rbp-38h]

  ++*(_DWORD *)(a2 + 1456);
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x18u,
    (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids);
  if ( *(_DWORD *)(a2 + 1456) == 1 )
  {
    *(_DWORD *)(a2 + 1480) = *a4;
    *(_QWORD *)(a2 + 1472) = a3;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 688);
    if ( v8 )
      v9 = *(_DWORD *)(a2 + 1480) + 1000 * (a3 - *(_QWORD *)(a2 + 1472)) / v8;
    else
      v9 = *(_DWORD *)(a2 + 1436) + 10;
    *a4 = v9;
  }
  v10 = *(_DWORD *)(a2 + 1436);
  *(_DWORD *)(a2 + 1440) = v10;
  v11 = *a4;
  *(_DWORD *)(a2 + 1436) = *a4;
  return WPP_RECORDER_SF_dddii(
           WPP_GLOBAL_Control->DeviceExtension,
           -(*(_DWORD *)(a2 + 1484) & 1),
           v11,
           25,
           v13,
           -(*(_BYTE *)(a2 + 1484) & 1),
           *(_DWORD *)(a2 + 1452),
           v11,
           *(_QWORD *)(a2 + 1464),
           (unsigned __int8)v11 - (unsigned __int8)v10);
}
