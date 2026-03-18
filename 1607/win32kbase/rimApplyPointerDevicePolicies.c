/*
 * XREFs of rimApplyPointerDevicePolicies @ 0x1C00DBD14
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1C00DE1A8 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     ApiSetGetPowerTransitionsState @ 0x1C0081AE0 (ApiSetGetPowerTransitionsState.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C00D1F58 (WPP_RECORDER_SF_d.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C00DC054 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C00DDB9C (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimPenButtonsPolicyUpdateState @ 0x1C00DDCA0 (rimPenButtonsPolicyUpdateState.c)
 *     rimPredictionPolicyUpdateStateAndApply @ 0x1C00DDF28 (rimPredictionPolicyUpdateStateAndApply.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C00E11D4 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C00E134C (RIMCmRemoveContactSuppressionReasons.c)
 */

__int64 __fastcall rimApplyPointerDevicePolicies(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        int a9,
        __int64 a10)
{
  unsigned int v10; // esi
  __int64 v13; // rcx
  int v14; // edx
  __int16 v15; // r8
  unsigned __int16 v16; // r9
  int v17; // r11d
  int v18; // eax
  int v19; // edx
  int v20; // r10d
  __int64 v22; // [rsp+28h] [rbp-50h]
  _DWORD v23[14]; // [rsp+30h] [rbp-48h] BYREF

  v10 = 0;
  if ( a5 && (*(_DWORD *)(a4 + 2404) & 0x400000) == 0 )
  {
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      5u,
      0x22u,
      (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids,
      *(_DWORD *)a4);
    RIMCmAddContactSuppressionReasons(a1, a4, 4LL);
    *(_DWORD *)(a4 + 2404) |= 0x8000u;
  }
  ApiSetGetPowerTransitionsState(v23);
  if ( !v23[0] && (*(_DWORD *)(a4 + 8) & 0x80u) == 0 )
  {
    RIMCmAddContactSuppressionReasons(a1, a4, 128LL);
    *(_DWORD *)(a4 + 2404) |= 0x8000u;
  }
  if ( gbEnableLidClosedInputSuppression )
  {
    if ( !*(_DWORD *)(a1 + 256) )
    {
      ApiSetGetPowerTransitionsState(v23);
      if ( !v23[13] && (*(_DWORD *)(a4 + 8) & 0x100) == 0 )
      {
        RIMCmAddContactSuppressionReasons(a1, a4, 256LL);
        *(_DWORD *)(a4 + 2404) |= 0x8000u;
      }
    }
  }
  rimNullXYPolicyUpdateStateAndApply(a1, a4, a6, a7);
  rimConfidenceBitPolicyUpdateStateAndApply(a1, a4, a8);
  v14 = *(_DWORD *)(a4 + 2404);
  if ( (v14 & 0x400002) == 0x400000 )
  {
    RIMCmAddContactSuppressionReasons(a1, a4, 64LL);
    v16 = v15 - 27;
  }
  else
  {
    LOBYTE(v13) = (*(_BYTE *)(a4 + 8) & 0x40) != 0;
    if ( ((unsigned __int8)v13 & ((v14 & 2) != 0)) == 0 )
      goto LABEL_17;
    RIMCmRemoveContactSuppressionReasons(a1, a4, 64LL);
    v16 = 38;
  }
  LODWORD(v22) = *(_DWORD *)a4;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    5u,
    v16,
    (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids,
    v22);
LABEL_17:
  v17 = 1;
  if ( (unsigned int)(*(_DWORD *)(a1 + 24) - 5) <= 1 )
    rimPenButtonsPolicyUpdateState(v13, a4, a5);
  if ( a6 )
    goto LABEL_26;
  if ( a7 )
    goto LABEL_26;
  v18 = *(_DWORD *)(a4 + 8);
  if ( (v18 & 0x40) != 0 )
    goto LABEL_26;
  if ( !a9 )
  {
    if ( (v18 & 8) == 0 )
      goto LABEL_27;
    RIMCmRemoveContactSuppressionReasons(a1, a4, 8LL);
    *(_QWORD *)(a4 + 36) = 0LL;
LABEL_26:
    v10 = v17;
    goto LABEL_27;
  }
  RIMCmAddContactSuppressionReasons(a1, a4, 8LL);
  *(_QWORD *)(a4 + 36) = a10;
LABEL_27:
  if ( *(_DWORD *)(a4 + 8) && (*(_DWORD *)(a4 + 2620) & 2) != 0 )
    *(_DWORD *)(a4 + 2404) &= 0xFFFFFFE9;
  v19 = *(_DWORD *)(a4 + 2620);
  v20 = *(_DWORD *)(a4 + 2404);
  if ( (v19 & 4) != 0 && (v20 & 4) == 0 || (v19 & 2) != 0 && (v20 & 2) == 0 )
  {
    v10 = v17;
    *(_QWORD *)(a4 + 2440) = *(_QWORD *)(a4 + 2656);
    *(_QWORD *)(a4 + 2448) = *(_QWORD *)(a4 + 2664);
  }
  return rimPredictionPolicyUpdateStateAndApply(a1, a4, a5, v10);
}
