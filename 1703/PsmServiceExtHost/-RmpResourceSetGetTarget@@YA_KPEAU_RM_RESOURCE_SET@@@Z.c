/*
 * XREFs of ?RmpResourceSetGetTarget@@YA_KPEAU_RM_RESOURCE_SET@@@Z @ 0x18002D808
 * Callers:
 *     ?NotifyPendingResourceSetTransition@ResourceSet@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@@Z @ 0x180033E50 (-NotifyPendingResourceSetTransition@ResourceSet@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@@Z.c)
 * Callees:
 *     ?RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x180017778 (-RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpResourceSetGetTarget(struct _RM_RESOURCE_SET *a1)
{
  _BYTE v2[16]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v3; // [rsp+30h] [rbp-28h]

  RmpResourceSetGetReportedCommitThresholds(a1, (struct _RM_COMMIT_THRESHOLDS *)v2);
  return v3;
}
