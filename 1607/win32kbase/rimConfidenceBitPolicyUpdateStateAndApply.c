/*
 * XREFs of rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C00DC054
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C00DBD14 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     EtwTraceTouchPadConfidenceCleared @ 0x1C00B5CB0 (EtwTraceTouchPadConfidenceCleared.c)
 *     WPP_RECORDER_SF_d @ 0x1C00D1F58 (WPP_RECORDER_SF_d.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C00E11D4 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C00E134C (RIMCmRemoveContactSuppressionReasons.c)
 */

__int64 __fastcall rimConfidenceBitPolicyUpdateStateAndApply(__int64 a1, _DWORD *a2, int a3)
{
  __int64 result; // rax
  int v7; // r8d
  BOOL v8; // edx
  unsigned __int16 v9; // r9

  if ( a3 || (result = *(unsigned int *)(a1 + 252), (result & 0x10) != 0) && (a2[601] & 0x4000) == 0 )
  {
    if ( *(_DWORD *)(a1 + 24) == 7 && (a2[2] & 0x10) == 0 )
    {
      v7 = (*((unsigned __int8 *)a2 + 2620) >> 1) & 1;
      v8 = (a2[601] & 4) != 0 && (a2[655] & 4) == 0;
      EtwTraceTouchPadConfidenceCleared(*a2, v8, v7);
    }
    v9 = 35;
    if ( !a3 )
      v9 = 36;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      5u,
      v9,
      (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids,
      *a2);
    result = RIMCmAddContactSuppressionReasons(a1, a2, 16LL);
    a2[601] |= 0x8000u;
  }
  if ( *(_DWORD *)(a1 + 24) == 7 )
  {
    result = (unsigned int)a2[2];
    if ( (result & 0x10) != 0 && (a2[601] & 0x4000) != 0 )
    {
      result = (unsigned int)a2[8];
      if ( (result & 1) == 0 )
      {
        RIMCmRemoveContactSuppressionReasons(a1, a2, 16LL);
        a2[614] = a2[12];
        *((_QWORD *)a2 + 309) = *((_QWORD *)a2 + 7);
        *((_QWORD *)a2 + 304) = *((_QWORD *)a2 + 8);
        result = *((_QWORD *)a2 + 8);
        *((_QWORD *)a2 + 306) = result;
      }
    }
  }
  return result;
}
