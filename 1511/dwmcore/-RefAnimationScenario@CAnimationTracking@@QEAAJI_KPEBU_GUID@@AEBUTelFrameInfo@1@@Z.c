/*
 * XREFs of ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800286DC
 * Callers:
 *     ?TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAJI_KPEBU_GUID@@@Z @ 0x18008D9E8 (-TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAJI_KPEBU_GUID@@@Z.c)
 * Callees:
 *     ?EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGIPEBU_GUID@@AEBUTelFrameInfo@1@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x180029788 (-EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_IN.c)
 *     ?GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x180029A68 (-GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x180029AD0 (-GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     Template_xzqqqz @ 0x1800BA088 (Template_xzqqqz.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800BC8BA (memcmp_0.c)
 *     Template_zqqqqx @ 0x180103178 (Template_zqqqqx.c)
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
  int v9; // eax
  unsigned int v10; // r9d
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v11; // rbx
  unsigned int v12; // esi
  unsigned int v13; // eax
  unsigned int v14; // edx
  CAnimationTracking *v15; // rcx
  int v16; // edx
  unsigned int ScenarioName; // ebp
  ULONGLONG TickCount64; // rax
  unsigned int v20; // r9d
  unsigned int *v21; // rcx
  char *v22; // rax
  const unsigned __int16 *ScenarioDetails; // rax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // [rsp+40h] [rbp-238h] BYREF
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v27; // [rsp+48h] [rbp-230h] BYREF
  unsigned __int16 v28[128]; // [rsp+50h] [rbp-228h] BYREF
  unsigned __int16 v29[128]; // [rsp+150h] [rbp-128h] BYREF

  LOBYTE(v5) = 0;
  v26 = a3;
  v27 = 0LL;
  v6 = (const struct _GUID *)a4;
  if ( a4 )
    v6 = (const struct _GUID *)(-(__int64)(memcmp_0((const void *)a4, &DirectX::g_XMZero, 0x10uLL) != 0) & a4);
  v9 = CAnimationTracking::EnsureScenario(this, 0LL, 0LL, a2, v6, a5, &v27);
  v11 = v27;
  v12 = v9;
  if ( v27 )
  {
    v13 = *((_DWORD *)v27 + 44);
    v14 = v13 + 1;
    if ( v13 + 1 < v13 )
    {
      v12 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      v12 = 0;
      if ( v14 > *((_DWORD *)v27 + 43) )
      {
        v24 = DynArrayImpl<0>::AddMultipleAndSet((char *)v27 + 152, 8LL, 1LL, &v26);
        v12 = v24;
        if ( v24 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xC0u);
      }
      else
      {
        v15 = (CAnimationTracking *)v13;
        *(_QWORD *)(*((_QWORD *)v27 + 19) + 8LL * v13) = v26;
        *((_DWORD *)v11 + 44) = v14;
      }
    }
    ScenarioName = (unsigned int)CAnimationTracking::GetScenarioName(v15, v11, v28, v10);
    if ( !*((_QWORD *)v11 + 7) )
    {
      *((_QWORD *)v11 + 7) = *((_QWORD *)a5 + 1);
      TickCount64 = GetTickCount64();
      *((_QWORD *)v11 + 14) = TickCount64;
      v21 = (unsigned int *)*((_QWORD *)v11 + 18);
      if ( v21 )
      {
        if ( v21[6] )
        {
          v21 = (unsigned int *)(v21[6] + 500LL);
          v22 = (char *)v21 + TickCount64;
          if ( *((_QWORD *)v11 + 15) < (unsigned __int64)v22 )
            *((_QWORD *)v11 + 15) = v22;
        }
      }
      ScenarioDetails = CAnimationTracking::GetScenarioDetails((CAnimationTracking *)v21, v11, v29, v20);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100) != 0 )
      {
        v25 = *((_QWORD *)v11 + 18);
        if ( v25 )
          v5 = *(_DWORD *)(v25 + 28);
        Template_xzqqqz(
          *((_DWORD *)v11 + 14) - *((_DWORD *)v11 + 12),
          v16,
          *((_QWORD *)v11 + 7),
          ScenarioName,
          *((_BYTE *)v11 + 56) - *((_BYTE *)v11 + 48),
          *((_DWORD *)v11 + 5),
          v5,
          (__int64)ScenarioDetails);
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_zqqqqx(
        *((_DWORD *)v11 + 7) - *((_DWORD *)v11 + 6),
        v16,
        ScenarioName,
        *((_DWORD *)v11 + 44),
        *((_BYTE *)v11 + 28) - *((_BYTE *)v11 + 24),
        *((_DWORD *)v11 + 8),
        *((_DWORD *)v11 + 5),
        v26);
  }
  return v12;
}
