/*
 * XREFs of ?RmpActivityHostComputeImportanceCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@PEAX@Z @ 0x1800091D0
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z @ 0x18000CDE0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z.c)
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x18000DE80 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 * Callees:
 *     RmpActivityImportanceMergeVectors @ 0x180009200 (RmpActivityImportanceMergeVectors.c)
 */

__int64 __fastcall RmpActivityHostComputeImportanceCallback(
        struct _RM_ACTIVITY_HOST *a1,
        struct ExecutionModel::ResourceSet *a2,
        _DWORD *a3)
{
  *a3 = RmpActivityImportanceMergeVectors((unsigned int)*a3, *((unsigned int *)a2 + 357));
  return 0LL;
}
