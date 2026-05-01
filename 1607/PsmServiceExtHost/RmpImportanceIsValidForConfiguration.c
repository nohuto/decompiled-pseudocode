/*
 * XREFs of RmpImportanceIsValidForConfiguration @ 0x180003060
 * Callers:
 *     ?AcquireResourceSetHelper@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAUIResourceSet@2@PEAPEAU72@@Z @ 0x180010354 (-AcquireResourceSetHelper@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResou.c)
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180011F20 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RmpImportanceIsValidForConfiguration(__int16 a1, char a2)
{
  return ((a1 & 0x200) == 0 || (a2 & 0x40) != 0) && (a1 & 0x500) != 1024;
}
