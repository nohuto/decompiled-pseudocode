/*
 * XREFs of ?UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x18002888C
 * Callers:
 *     ?TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAXI_KPEBU_GUID@@@Z @ 0x18008D9A8 (-TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAXI_KPEBU_GUID@@@Z.c)
 * Callees:
 *     ?GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x180029AD0 (-GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x180029B48 (-FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800BC8BA (memcmp_0.c)
 *     Template_zqqqqx @ 0x180103178 (Template_zqqqqx.c)
 */

void __fastcall CAnimationTracking::UnrefAnimationScenario(
        CAnimationTracking *this,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        const struct CAnimationTracking::TelFrameInfo *a5)
{
  const struct _GUID *v5; // rbx
  unsigned int v9; // r9d
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v10; // rbx
  __int64 v11; // rdi
  CAnimationTracking *v12; // rcx
  _QWORD *v13; // rax
  bool v14; // si
  unsigned int ScenarioName; // r8d
  unsigned int v16; // eax
  __int64 v17; // rax
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v18; // [rsp+40h] [rbp-128h] BYREF
  unsigned __int16 v19[128]; // [rsp+50h] [rbp-118h] BYREF

  v5 = (const struct _GUID *)a4;
  if ( a4 )
    v5 = (const struct _GUID *)(-(__int64)(memcmp_0((const void *)a4, &DirectX::g_XMZero, 0x10uLL) != 0) & a4);
  v18 = 0LL;
  if ( CAnimationTracking::FindScenario(this, a2, v5, &v18) != *((_DWORD *)this + 6) )
  {
    v10 = v18;
    v11 = 0LL;
    v12 = (CAnimationTracking *)*((unsigned int *)v18 + 44);
    v13 = (_QWORD *)*((_QWORD *)v18 + 19);
    if ( (_DWORD)v12 )
    {
      do
      {
        if ( a3 == *v13 )
          break;
        v11 = (unsigned int)(v11 + 1);
        ++v13;
      }
      while ( (unsigned int)v11 < (unsigned int)v12 );
    }
    v14 = (_DWORD)v11 != (_DWORD)v12;
    ScenarioName = (unsigned int)CAnimationTracking::GetScenarioName(v12, v18, v19, v9);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_zqqqqx(
        v14,
        *((_DWORD *)v10 + 7) - *((_DWORD *)v10 + 6),
        ScenarioName,
        *((_DWORD *)v10 + 44) - v14,
        *((_BYTE *)v10 + 28) - *((_BYTE *)v10 + 24),
        *((_DWORD *)v10 + 8),
        *((_DWORD *)v10 + 5),
        a3);
    if ( v14 )
    {
      v16 = *((_DWORD *)v10 + 44);
      if ( (unsigned int)v11 >= v16 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x218u);
      }
      else
      {
        v17 = v16 - 1;
        if ( (unsigned int)v11 < (unsigned int)v17 )
          *(_QWORD *)(*((_QWORD *)v10 + 19) + 8 * v11) = *(_QWORD *)(*((_QWORD *)v10 + 19) + 8 * v17);
        --*((_DWORD *)v10 + 44);
      }
      if ( !*((_DWORD *)v10 + 44) )
        *((_QWORD *)v10 + 8) = *((_QWORD *)a5 + 1);
    }
  }
}
