/*
 * XREFs of RIMABSeekAndAbortLowerRankedActivity @ 0x1C00D272C
 * Callers:
 *     RIMExtractDeviceUsages @ 0x1C00CA2A0 (RIMExtractDeviceUsages.c)
 *     RIMGetPointerDeviceContactState @ 0x1C00CB12C (RIMGetPointerDeviceContactState.c)
 *     rimProcessPointerDeviceInput @ 0x1C00CCB80 (rimProcessPointerDeviceInput.c)
 *     RIMABAddBoostSource @ 0x1C00D2084 (RIMABAddBoostSource.c)
 * Callees:
 *     RIMIsPenPointerDevice @ 0x1C001A8E4 (RIMIsPenPointerDevice.c)
 *     RIMIsTouchPointerDevice @ 0x1C001A8F8 (RIMIsTouchPointerDevice.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     RIMAbortDeviceActivity @ 0x1C00C37A4 (RIMAbortDeviceActivity.c)
 *     RIMAssessPointerContactState @ 0x1C00C9EAC (RIMAssessPointerContactState.c)
 *     RIMABAbortDeviceDeadZoneActivity @ 0x1C00D1FE0 (RIMABAbortDeviceDeadZoneActivity.c)
 */

__int64 __fastcall RIMABSeekAndAbortLowerRankedActivity(__int64 a1, __int64 a2, int a3)
{
  _QWORD **v3; // r14
  int v4; // edi
  _QWORD *v5; // rbx
  __int64 v6; // r15
  __int64 *v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rbx
  __int64 v13; // rbp
  __int64 *v14; // rdi

  v3 = (_QWORD **)(a1 + 536);
  v4 = 0;
  v5 = *(_QWORD **)(a1 + 536);
  v6 = 0LL;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    5u,
    0x23u,
    (__int64)&WPP_86289b4e279a767c521179e66ac4ddc8_Traceguids);
  while ( v5 != v3 )
  {
    v10 = v5 - 1;
    v5 = (_QWORD *)*v5;
    if ( *v10 == a2 )
      v4 = 1;
    if ( RIMIsPenPointerDevice(*v10) )
      v6 = v11;
  }
  v12 = *v3;
  if ( *v3 != v3 )
  {
    v13 = v4;
    do
    {
      v14 = v12 - 1;
      v12 = (_QWORD *)*v12;
      if ( *(_DWORD *)(a2 + 1476) > *(_DWORD *)(*v14 + 1476) )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          5u,
          0x24u,
          (__int64)&WPP_86289b4e279a767c521179e66ac4ddc8_Traceguids);
        if ( gFastSwitchingEnabled )
        {
          if ( a3 || !RIMIsTouchPointerDevice(*v14) )
            goto LABEL_16;
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            5u,
            0x25u,
            (__int64)&WPP_86289b4e279a767c521179e66ac4ddc8_Traceguids);
          RIMABAbortDeviceDeadZoneActivity(a1, *v14, v6);
        }
        else if ( !v13 )
        {
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            5u,
            0x26u,
            (__int64)&WPP_86289b4e279a767c521179e66ac4ddc8_Traceguids);
LABEL_16:
          RIMAbortDeviceActivity(a1, *v14);
        }
      }
    }
    while ( v12 != v3 );
  }
  if ( *(_BYTE *)(a1 + 649) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      5u,
      0x27u,
      (__int64)&WPP_86289b4e279a767c521179e66ac4ddc8_Traceguids);
    RIMAssessPointerContactState(a1);
  }
  else
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      5u,
      0x28u,
      (__int64)&WPP_86289b4e279a767c521179e66ac4ddc8_Traceguids);
  }
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           5u,
           0x29u,
           (__int64)&WPP_86289b4e279a767c521179e66ac4ddc8_Traceguids);
}
