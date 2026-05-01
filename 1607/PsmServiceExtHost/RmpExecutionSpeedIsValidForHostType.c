/*
 * XREFs of RmpExecutionSpeedIsValidForHostType @ 0x180002008
 * Callers:
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180011F20 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 * Callees:
 *     <none>
 */

char __fastcall RmpExecutionSpeedIsValidForHostType(int a1, int a2, int a3)
{
  if ( a2 )
    return a1 >= 1;
  if ( a1 >= 1 )
    return 1;
  return a3 == 2;
}
