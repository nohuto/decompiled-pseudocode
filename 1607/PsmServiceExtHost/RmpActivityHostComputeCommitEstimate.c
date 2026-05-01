/*
 * XREFs of RmpActivityHostComputeCommitEstimate @ 0x180007C20
 * Callers:
 *     ?RmpActivityHostGetCommitThresholdsAndLevel@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEA_K2PEAW4_RM_COMMIT_LEVEL@@2@Z @ 0x1800071DC (-RmpActivityHostGetCommitThresholdsAndLevel@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEA_K2PEAW4_RM_COMMIT_L.c)
 *     RmpActivityHostComputeAndApplyEnforcementSettings @ 0x180007AA0 (RmpActivityHostComputeAndApplyEnforcementSettings.c)
 * Callees:
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x180029D8C (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 */

unsigned __int64 __fastcall RmpActivityHostComputeCommitEstimate(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 *v4; // r11
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rtt
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r10
  unsigned __int64 result; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v4 = a3;
  if ( a2 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v6 = a2 >> 4;
  }
  else
  {
    v6 = a1 >> 3;
    if ( a1 >> 3 < 0x100000 )
      v6 = 0x100000LL;
  }
  v7 = v6 + a1 - 1;
  v8 = v7 / v6 * v6;
  v9 = -1LL;
  if ( is_mul_ok(v7 / v6, v6) )
    v9 = v8;
  if ( a2 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && v9 > a2 )
  {
    v14 = (v6 + a2 - 1) / v6;
    RtlULongLongMult(v14, v6, &v14);
    v9 = v14;
  }
  if ( v9 == -1LL || v6 == -1LL || (v10 = v9 + v6, v9 + v6 < v9) )
    v10 = -1LL;
  if ( a2 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( v9 >= a2 )
      v9 = a2;
    if ( a2 < v10 )
      v10 = a2;
  }
  v11 = 2 * v6;
  result = v9;
  if ( v11 < v9 )
    result = v11;
  v13 = v9 - result;
  if ( a4 )
    *a4 = v10;
  if ( v4 )
    *v4 = v13;
  return result;
}
