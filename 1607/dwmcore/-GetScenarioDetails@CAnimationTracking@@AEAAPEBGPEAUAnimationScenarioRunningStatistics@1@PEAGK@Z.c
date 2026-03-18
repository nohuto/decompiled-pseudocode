/*
 * XREFs of ?GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x1800A0EF0
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800A0628 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800A12DC (-RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     ?GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z @ 0x1800A459C (-GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z.c)
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
    v4 = *((_QWORD *)a2 + 19);
    if ( v4 && *(_WORD *)(v4 + 38) && v4 + *(unsigned __int16 *)(v4 + 38) )
    {
      if ( *(_WORD *)(v4 + 38) )
        return (unsigned __int16 *)(v4 + *(unsigned __int16 *)(v4 + 38));
      else
        return 0LL;
    }
    else
    {
      return (unsigned __int16 *)&unk_1801ADA80;
    }
  }
  else
  {
    CAnimationTracking::GuidToString((const struct _GUID *)((char *)a2 + 4), a3, 0);
  }
  return v3;
}
