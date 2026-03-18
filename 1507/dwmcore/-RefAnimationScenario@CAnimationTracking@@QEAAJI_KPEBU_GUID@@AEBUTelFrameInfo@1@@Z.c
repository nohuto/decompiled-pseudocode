/*
 * XREFs of ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x180064E98
 * Callers:
 *     ?TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAJI_KPEBU_GUID@@@Z @ 0x180065300 (-TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAJI_KPEBU_GUID@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGIPEBU_GUID@@AEBUTelFrameInfo@1@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x18006488C (-EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_IN.c)
 *     ?GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x180064B44 (-GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x180064BAC (-GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180099BAE (memcmp_0.c)
 *     Template_xzqqqz @ 0x1800E6F04 (Template_xzqqqz.c)
 *     Template_zqqqqx @ 0x1800E70E0 (Template_zqqqqx.c)
 */

__int64 __fastcall CAnimationTracking::RefAnimationScenario(
        CAnimationTracking *this,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        const struct CAnimationTracking::TelFrameInfo *a5)
{
  int v5; // edi
  const struct _GUID *v6; // rbx
  unsigned int v9; // eax
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v10; // rbx
  unsigned int v11; // esi
  unsigned int v12; // eax
  unsigned int v13; // edx
  CAnimationTracking *v14; // rcx
  int v15; // edx
  unsigned int ScenarioName; // ebp
  ULONGLONG TickCount64; // rax
  unsigned int *v19; // rcx
  char *v20; // rax
  unsigned __int16 *ScenarioDetails; // rax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // [rsp+40h] [rbp-238h] BYREF
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v25; // [rsp+48h] [rbp-230h] BYREF
  unsigned __int16 v26[128]; // [rsp+50h] [rbp-228h] BYREF
  unsigned __int16 v27[128]; // [rsp+150h] [rbp-128h] BYREF

  LOBYTE(v5) = 0;
  v24 = a3;
  v25 = 0LL;
  v6 = (const struct _GUID *)a4;
  if ( a4 )
    v6 = (const struct _GUID *)(-(__int64)(memcmp_0((const void *)a4, &GUID_NULL, 0x10uLL) != 0) & a4);
  v9 = CAnimationTracking::EnsureScenario(this, 0LL, 0LL, a2, v6, a5, &v25);
  v10 = v25;
  v11 = v9;
  if ( v25 )
  {
    v12 = *((_DWORD *)v25 + 44);
    v13 = v12 + 1;
    if ( v12 + 1 < v12 )
    {
      v11 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      v11 = 0;
      if ( v13 > *((_DWORD *)v25 + 43) )
      {
        v22 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v25 + 152, 8u, 1, &v24);
        v11 = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xC0u);
      }
      else
      {
        v14 = (CAnimationTracking *)v12;
        *(_QWORD *)(*((_QWORD *)v25 + 19) + 8LL * v12) = v24;
        *((_DWORD *)v10 + 44) = v13;
      }
    }
    ScenarioName = (unsigned int)CAnimationTracking::GetScenarioName(v14, v10, v26);
    if ( !*((_QWORD *)v10 + 7) )
    {
      *((_QWORD *)v10 + 7) = *((_QWORD *)a5 + 1);
      TickCount64 = GetTickCount64();
      *((_QWORD *)v10 + 14) = TickCount64;
      v19 = (unsigned int *)*((_QWORD *)v10 + 18);
      if ( v19 )
      {
        if ( v19[6] )
        {
          v19 = (unsigned int *)(v19[6] + 500LL);
          v20 = (char *)v19 + TickCount64;
          if ( *((_QWORD *)v10 + 15) < (unsigned __int64)v20 )
            *((_QWORD *)v10 + 15) = v20;
        }
      }
      ScenarioDetails = CAnimationTracking::GetScenarioDetails((CAnimationTracking *)v19, v10, v27);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100) != 0 )
      {
        v23 = *((_QWORD *)v10 + 18);
        if ( v23 )
          v5 = *(_DWORD *)(v23 + 28);
        Template_xzqqqz(
          *((_DWORD *)v10 + 14) - *((_DWORD *)v10 + 12),
          v15,
          *((_QWORD *)v10 + 7),
          ScenarioName,
          *((_BYTE *)v10 + 56) - *((_BYTE *)v10 + 48),
          *((_DWORD *)v10 + 5),
          v5,
          (__int64)ScenarioDetails);
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_zqqqqx(
        *((_DWORD *)v10 + 7) - *((_DWORD *)v10 + 6),
        v15,
        ScenarioName,
        *((_DWORD *)v10 + 44),
        *((_BYTE *)v10 + 28) - *((_BYTE *)v10 + 24),
        *((_DWORD *)v10 + 8),
        *((_DWORD *)v10 + 5),
        v24);
  }
  return v11;
}
