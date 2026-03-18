/*
 * XREFs of rimNullXYPolicyUpdateStateAndApply @ 0x1C00DDB9C
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C00DBD14 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00D1F58 (WPP_RECORDER_SF_d.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C00E11D4 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C00E134C (RIMCmRemoveContactSuppressionReasons.c)
 */

__int64 __fastcall rimNullXYPolicyUpdateStateAndApply(__int64 a1, _DWORD *a2, int a3, int a4)
{
  _DWORD *v5; // rbx
  __int64 result; // rax
  __int64 v7; // r8
  unsigned __int16 v8; // r9

  v5 = a2;
  if ( *(_DWORD *)(a1 + 24) == 5 )
  {
    if ( !a3 && !a4 )
      return RIMCmRemoveContactSuppressionReasons(a1, a2, 32LL);
    if ( (a2[601] & 6) == 2 )
    {
      v7 = 32LL;
LABEL_12:
      result = RIMCmAddContactSuppressionReasons(a1, a2, v7);
      v5[601] |= 0x8000u;
      return result;
    }
    v8 = 39;
LABEL_11:
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      5u,
      v8,
      (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids,
      *a2);
    a2 = v5;
    v7 = 2LL;
    goto LABEL_12;
  }
  if ( a3 || a4 )
  {
    v8 = 40;
    goto LABEL_11;
  }
  return result;
}
