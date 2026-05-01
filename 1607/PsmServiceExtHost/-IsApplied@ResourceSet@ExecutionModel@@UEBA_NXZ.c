/*
 * XREFs of ?IsApplied@ResourceSet@ExecutionModel@@UEBA_NXZ @ 0x180012740
 * Callers:
 *     RmpResourceSetIsValidPredecessor @ 0x1800030B8 (RmpResourceSetIsValidPredecessor.c)
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180011F20 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExecutionModel::ResourceSet::IsApplied(ExecutionModel::ResourceSet *this)
{
  return *((_BYTE *)this - 1356);
}
