/*
 * XREFs of ?RmpActivityHostComputeCommitEstimate@@YAX_K0PEA_K1@Z @ 0x180005D20
 * Callers:
 *     ?RmpActivityHostGetCommitThresholds@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEA_K22@Z @ 0x180004898 (-RmpActivityHostGetCommitThresholds@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEA_K22@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005B60 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpActivityHostComputeCommitEstimate(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rtt
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r8
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx

  if ( a2 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v5 = a2 >> 4;
  }
  else
  {
    v5 = 0x100000LL;
    if ( a1 >> 3 < 0x100000 )
      goto LABEL_6;
    v5 = a1 >> 3;
  }
  if ( v5 <= 0x1000 )
    v5 = 4096LL;
LABEL_6:
  v6 = v5 + a1 - 1;
  v7 = v6 / v5 * v5;
  v8 = -1LL;
  if ( is_mul_ok(v6 / v5, v5) )
    v8 = v7;
  if ( a2 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && v8 > a2 )
  {
    v12 = (v5 + a2 - 1) / v5;
    v8 = v12 * v5;
    if ( !is_mul_ok(v12, v5) )
    {
      v8 = -1LL;
LABEL_19:
      v9 = -1LL;
      goto LABEL_11;
    }
  }
  if ( v8 == -1LL )
    goto LABEL_19;
  v9 = v8 + v5;
  if ( v8 + v5 < v8 )
    goto LABEL_19;
LABEL_11:
  if ( a2 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( v8 >= a2 )
      v8 = a2;
    if ( a2 < v9 )
      v9 = a2;
  }
  v10 = v8;
  if ( 2 * v5 < v8 )
    v10 = 2 * v5;
  v11 = v8 - v10;
  if ( a4 )
    *a4 = v9;
  if ( a3 )
    *a3 = v11;
}
