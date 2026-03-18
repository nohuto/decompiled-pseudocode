/*
 * XREFs of ?GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x180064B44
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x180064118 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x180064E98 (-RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     ?GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z @ 0x180063578 (-GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z.c)
 */

unsigned __int16 *__fastcall CAnimationTracking::GetScenarioDetails(
        CAnimationTracking *this,
        struct CAnimationTracking::AnimationScenarioRunningStatistics *a2,
        unsigned __int16 *a3)
{
  unsigned __int16 *v3; // rbx
  __int64 v4; // rcx

  v3 = a3;
  if ( *(_DWORD *)a2 )
  {
    v4 = *((_QWORD *)a2 + 18);
    if ( v4 && *(_WORD *)(v4 + 38) && v4 + *(unsigned __int16 *)(v4 + 38) )
    {
      if ( *(_WORD *)(v4 + 38) )
        return (unsigned __int16 *)(v4 + *(unsigned __int16 *)(v4 + 38));
      else
        return 0LL;
    }
    else
    {
      return (unsigned __int16 *)&unk_180167798;
    }
  }
  else
  {
    CAnimationTracking::GuidToString((const struct _GUID *)((char *)a2 + 4), a3);
  }
  return v3;
}
