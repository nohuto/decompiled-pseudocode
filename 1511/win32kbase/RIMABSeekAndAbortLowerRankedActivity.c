/*
 * XREFs of RIMABSeekAndAbortLowerRankedActivity @ 0x1C00D4550
 * Callers:
 *     RIMExtractDeviceUsages @ 0x1C00CB374 (RIMExtractDeviceUsages.c)
 *     RIMGetPointerDeviceContactState @ 0x1C00CC1F4 (RIMGetPointerDeviceContactState.c)
 *     rimProcessPointerDeviceInput @ 0x1C00CDE70 (rimProcessPointerDeviceInput.c)
 *     RIMABAddBoostSource @ 0x1C00D3EA8 (RIMABAddBoostSource.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     RIMAbortDeviceActivity @ 0x1C00C45E4 (RIMAbortDeviceActivity.c)
 *     RIMAssessPointerContactState @ 0x1C00CAF80 (RIMAssessPointerContactState.c)
 *     RIMABAbortDeviceDeadZoneActivity @ 0x1C00D3E04 (RIMABAbortDeviceDeadZoneActivity.c)
 */

__int64 __fastcall RIMABSeekAndAbortLowerRankedActivity(__int64 a1, __int64 a2, int a3)
{
  _QWORD **v3; // r14
  int v4; // edi
  _QWORD *v5; // rbx
  __int64 v6; // r15
  __int64 *v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rbp
  __int64 *v13; // rdi

  v3 = (_QWORD **)(a1 + 568);
  v4 = 0;
  v5 = *(_QWORD **)(a1 + 568);
  v6 = 0LL;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    5u,
    0x23u,
    (__int64)&WPP_746cccc7ccbdb71cc07ee6fb0ef29515_Traceguids);
  while ( v5 != v3 )
  {
    v10 = v5 - 1;
    v5 = (_QWORD *)*v5;
    if ( *v10 == a2 )
      v4 = 1;
    if ( (unsigned int)(*(_DWORD *)(*v10 + 24) - 6) <= 1 )
      v6 = *v10;
  }
  v11 = *v3;
  if ( *v3 != v3 )
  {
    v12 = v4;
    do
    {
      v13 = v11 - 1;
      v11 = (_QWORD *)*v11;
      if ( *(_DWORD *)(a2 + 1492) > *(_DWORD *)(*v13 + 1492) )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          5u,
          0x24u,
          (__int64)&WPP_746cccc7ccbdb71cc07ee6fb0ef29515_Traceguids);
        if ( gFastSwitchingEnabled )
        {
          if ( a3 || (unsigned int)(*(_DWORD *)(*v13 + 24) - 1) > 4 )
            goto LABEL_16;
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            5u,
            0x25u,
            (__int64)&WPP_746cccc7ccbdb71cc07ee6fb0ef29515_Traceguids);
          RIMABAbortDeviceDeadZoneActivity(a1, *v13, v6);
        }
        else if ( !v12 )
        {
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            5u,
            0x26u,
            (__int64)&WPP_746cccc7ccbdb71cc07ee6fb0ef29515_Traceguids);
LABEL_16:
          RIMAbortDeviceActivity(a1, *v13);
        }
      }
    }
    while ( v11 != v3 );
  }
  if ( *(_BYTE *)(a1 + 681) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      5u,
      0x27u,
      (__int64)&WPP_746cccc7ccbdb71cc07ee6fb0ef29515_Traceguids);
    RIMAssessPointerContactState(a1);
  }
  else
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      5u,
      0x28u,
      (__int64)&WPP_746cccc7ccbdb71cc07ee6fb0ef29515_Traceguids);
  }
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           5u,
           0x29u,
           (__int64)&WPP_746cccc7ccbdb71cc07ee6fb0ef29515_Traceguids);
}
