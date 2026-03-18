/*
 * XREFs of RIMABAssessContactForArbitrationSuspension @ 0x1C00D414C
 * Callers:
 *     RIMGetPointerDeviceContactState @ 0x1C00CC1F4 (RIMGetPointerDeviceContactState.c)
 *     RIMABAbortDeviceDeadZoneActivity @ 0x1C00D3E04 (RIMABAbortDeviceDeadZoneActivity.c)
 *     RIMABIsDeviceAllowed @ 0x1C00D43CC (RIMABIsDeviceAllowed.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00C7D58 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00CD760 (WPP_RECORDER_SF_dddd.c)
 *     RIMABAddBoostSource @ 0x1C00D3EA8 (RIMABAddBoostSource.c)
 *     RIMSetupContactForSuppression @ 0x1C00D4D4C (RIMSetupContactForSuppression.c)
 */

__int64 __fastcall RIMABAssessContactForArbitrationSuspension(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // r12
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  struct tagRECT v10; // xmm0
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rdx
  int v14; // eax
  __int64 v16; // [rsp+28h] [rbp-50h]
  __int64 v17; // [rsp+30h] [rbp-48h]

  v5 = a3;
  v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (*(_DWORD *)(a1 + 636) & 1) != 0 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      4u,
      0x19u,
      (__int64)&WPP_746cccc7ccbdb71cc07ee6fb0ef29515_Traceguids);
    v10 = *(struct tagRECT *)(a1 + 620);
LABEL_6:
    WPP_RECORDER_SF_dddd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v9,
      4u,
      0x1Cu,
      (__int64)&WPP_746cccc7ccbdb71cc07ee6fb0ef29515_Traceguids,
      v10.top,
      v10.left,
      v10.bottom,
      v10.right);
    v11 = *(_QWORD *)(a2 + 696);
    v12 = 2400 * v5;
    v13 = *(unsigned int *)(2400 * v5 + v11 + 2292);
    if ( v10.left <= (int)v13 && v10.right >= (int)v13 )
    {
      v14 = *(_DWORD *)(v12 + v11 + 2296);
      if ( v10.top <= v14 && v10.bottom >= v14 )
      {
        LODWORD(v17) = *(_DWORD *)(v12 + v11 + 2296);
        LODWORD(v16) = *(_DWORD *)(2400 * v5 + v11 + 2292);
        WPP_RECORDER_SF_dd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v13,
          4u,
          0x1Eu,
          (__int64)&WPP_746cccc7ccbdb71cc07ee6fb0ef29515_Traceguids,
          v16,
          v17);
LABEL_11:
        RIMSetupContactForSuppression(v12 + *(_QWORD *)(a2 + 696), a1);
        return 0LL;
      }
    }
    if ( (*(_DWORD *)(v12 + v11 + 2392) & 0x2000) == 0 )
    {
      if ( a4 && (*(_DWORD *)(*(_QWORD *)(a4 + 696) + 2392LL) & 2) != 0 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          4u,
          0x20u,
          (__int64)&WPP_746cccc7ccbdb71cc07ee6fb0ef29515_Traceguids);
        goto LABEL_11;
      }
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        5u,
        0x1Fu,
        (__int64)&WPP_746cccc7ccbdb71cc07ee6fb0ef29515_Traceguids);
      goto LABEL_19;
    }
    return 1LL;
  }
  if ( gbSetDeadZoneExp )
  {
    if ( (unsigned int)v8 - gdwDeadZoneExpirationTime < 0xFA )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        4u,
        0x1Au,
        (__int64)&WPP_746cccc7ccbdb71cc07ee6fb0ef29515_Traceguids);
      v10 = gGlobalDeadZone;
      gdwDeadZoneExpirationTime = v8;
      goto LABEL_6;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      4u,
      0x1Bu,
      (__int64)&WPP_746cccc7ccbdb71cc07ee6fb0ef29515_Traceguids);
    gbSetDeadZoneExp = 0;
  }
  if ( (*(_DWORD *)(2400 * v5 + *(_QWORD *)(a2 + 696) + 2392) & 4) == 0 )
LABEL_19:
    RIMABAddBoostSource(a1, a2, v5);
  return 1LL;
}
