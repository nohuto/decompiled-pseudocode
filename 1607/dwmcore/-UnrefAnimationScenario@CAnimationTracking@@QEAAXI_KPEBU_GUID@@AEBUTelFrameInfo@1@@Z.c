/*
 * XREFs of ?UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800A1490
 * Callers:
 *     ?TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAXI_KPEBU_GUID@@@Z @ 0x180043EFC (-TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAXI_KPEBU_GUID@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x1800A0F58 (-GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x1800A0FD0 (-FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800BF656 (memcmp_0.c)
 *     Template_zqqqqx @ 0x180118814 (Template_zqqqqx.c)
 */

void __fastcall CAnimationTracking::UnrefAnimationScenario(
        CAnimationTracking *this,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        const struct CAnimationTracking::TelFrameInfo *a5)
{
  const struct _GUID *v5; // rbx
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v9; // rbx
  __int64 v10; // rdi
  CAnimationTracking *v11; // rcx
  _QWORD *v12; // rax
  bool v13; // si
  unsigned int ScenarioName; // r8d
  unsigned int v15; // eax
  __int64 v16; // rax
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v17; // [rsp+40h] [rbp-128h] BYREF
  unsigned __int16 v18[128]; // [rsp+50h] [rbp-118h] BYREF

  v5 = (const struct _GUID *)a4;
  if ( a4 )
    v5 = (const struct _GUID *)(-(__int64)(memcmp_0((const void *)a4, &GUID_NULL, 0x10uLL) != 0) & a4);
  v17 = 0LL;
  if ( (unsigned int)CAnimationTracking::FindScenario(this, a2, v5, &v17) != *((_DWORD *)this + 6) )
  {
    v9 = v17;
    v10 = 0LL;
    v11 = (CAnimationTracking *)*((unsigned int *)v17 + 46);
    v12 = (_QWORD *)*((_QWORD *)v17 + 20);
    if ( (_DWORD)v11 )
    {
      do
      {
        if ( a3 == *v12 )
          break;
        v10 = (unsigned int)(v10 + 1);
        ++v12;
      }
      while ( (unsigned int)v10 < (unsigned int)v11 );
    }
    v13 = (_DWORD)v10 != (_DWORD)v11;
    ScenarioName = (unsigned int)CAnimationTracking::GetScenarioName(v11, v17, v18);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_zqqqqx(
        v13,
        *((_DWORD *)v9 + 7) - *((_DWORD *)v9 + 6),
        ScenarioName,
        *((_DWORD *)v9 + 46) - v13,
        *((_BYTE *)v9 + 28) - *((_BYTE *)v9 + 24),
        *((_DWORD *)v9 + 8),
        *((_DWORD *)v9 + 5),
        a3);
    if ( v13 )
    {
      v15 = *((_DWORD *)v9 + 46);
      if ( (unsigned int)v10 >= v15 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x217u);
      }
      else
      {
        v16 = v15 - 1;
        if ( (unsigned int)v10 < (unsigned int)v16 )
          *(_QWORD *)(*((_QWORD *)v9 + 20) + 8 * v10) = *(_QWORD *)(*((_QWORD *)v9 + 20) + 8 * v16);
        --*((_DWORD *)v9 + 46);
      }
      if ( !*((_DWORD *)v9 + 46) )
        *((_QWORD *)v9 + 8) = *((_QWORD *)a5 + 1);
    }
  }
}
