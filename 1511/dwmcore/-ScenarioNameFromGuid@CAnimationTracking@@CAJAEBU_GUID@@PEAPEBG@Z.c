/*
 * XREFs of ?ScenarioNameFromGuid@CAnimationTracking@@CAJAEBU_GUID@@PEAPEBG@Z @ 0x180029BB8
 * Callers:
 *     ?GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x180029AD0 (-GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?SendLongtermStatistics@CAnimationTracking@@AEAAXXZ @ 0x180102718 (-SendLongtermStatistics@CAnimationTracking@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationTracking::ScenarioNameFromGuid(const struct _GUID *a1, const unsigned __int16 **a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r8
  __int64 v4; // rax

  v2 = -2147319765;
  v3 = 0LL;
  while ( 1 )
  {
    v4 = *(_QWORD *)&a1->Data1 - (_QWORD)*(&off_18019E070 + 3 * v3 + 1);
    if ( *(wchar_t **)&a1->Data1 == *(&off_18019E070 + 3 * v3 + 1) )
      v4 = *(_QWORD *)a1->Data4 - (_QWORD)(&off_18019E070)[3 * v3 + 1];
    if ( !v4 )
      break;
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= 0x48 )
      return v2;
  }
  v2 = 0;
  *a2 = (&off_18019E070)[3 * v3];
  return v2;
}
