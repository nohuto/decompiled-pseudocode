/*
 * XREFs of ?RmpRsEnforcedThresholdsAreNecessary@@YAKPEAU_RM_RESOURCE_SET@@0PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x1800176D0
 * Callers:
 *     ?RmpRsEnforcedThresholdsCheckCreate@@YAJPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x1800175D8 (-RmpRsEnforcedThresholdsCheckCreate@@YAJPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAPEAU.c)
 *     ?RmpRsEnforcedThresholdsCheckTransition@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x180017634 (-RmpRsEnforcedThresholdsCheckTransition@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEA.c)
 * Callees:
 *     ?RmpResourceSetGetEnforcedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x180017760 (-RmpResourceSetGetEnforcedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     ?RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x180017778 (-RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpRsEnforcedThresholdsAreNecessary(
        struct _RM_RESOURCE_SET *a1,
        struct _RM_RESOURCE_SET *a2,
        struct _RM_COMMIT_THRESHOLDS *a3)
{
  unsigned int v5; // edi
  _BYTE v7[16]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v8; // [rsp+30h] [rbp-48h]
  unsigned __int64 v9; // [rsp+38h] [rbp-40h]
  _BYTE v10[32]; // [rsp+40h] [rbp-38h] BYREF

  RmpResourceSetGetReportedCommitThresholds(a2, (struct _RM_COMMIT_THRESHOLDS *)v7);
  v5 = 0;
  if ( a1 )
  {
    RmpResourceSetGetEnforcedCommitThresholds(a1, (struct _RM_COMMIT_THRESHOLDS *)v10);
    a3 = (struct _RM_COMMIT_THRESHOLDS *)v10;
  }
  if ( v9 < *((_QWORD *)a3 + 3) )
    return 1LL;
  LOBYTE(v5) = v8 < *((_QWORD *)a3 + 2);
  return v5;
}
