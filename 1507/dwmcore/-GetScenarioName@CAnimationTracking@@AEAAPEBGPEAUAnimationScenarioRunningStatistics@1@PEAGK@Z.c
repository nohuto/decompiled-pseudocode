/*
 * XREFs of ?GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x180064BAC
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x180064118 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x180064E98 (-RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 *     ?UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x180065048 (-UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     ?GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z @ 0x180063578 (-GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z.c)
 *     ?ScenarioNameFromGuid@CAnimationTracking@@CAJAEBU_GUID@@PEAPEBG@Z @ 0x180063898 (-ScenarioNameFromGuid@CAnimationTracking@@CAJAEBU_GUID@@PEAPEBG@Z.c)
 */

unsigned __int16 *__fastcall CAnimationTracking::GetScenarioName(
        CAnimationTracking *this,
        struct CAnimationTracking::AnimationScenarioRunningStatistics *a2,
        unsigned __int16 *a3)
{
  __int64 v4; // rax
  const struct _GUID *v6; // rcx
  unsigned __int16 *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = (unsigned __int16 *)this;
  if ( *(_DWORD *)a2 )
  {
    v4 = *((_QWORD *)a2 + 18);
    if ( v4 )
    {
      if ( *(_WORD *)(v4 + 34) )
        return (unsigned __int16 *)(v4 + *(unsigned __int16 *)(v4 + 34));
      else
        return 0LL;
    }
    else
    {
      return L"Unknown";
    }
  }
  else
  {
    v7 = 0LL;
    if ( (int)CAnimationTracking::ScenarioNameFromGuid(
                (const struct _GUID *)((char *)a2 + 4),
                (const unsigned __int16 **)&v7) < 0 )
      CAnimationTracking::GuidToString(v6, a3);
    else
      return v7;
  }
  return a3;
}
