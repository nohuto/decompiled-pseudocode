/*
 * XREFs of RmpActivityHostCheckForegroundBoostState @ 0x180005280
 * Callers:
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x18000DE80 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 * Callees:
 *     RmpActivityHostActOnProcesses @ 0x180018750 (RmpActivityHostActOnProcesses.c)
 */

char __fastcall RmpActivityHostCheckForegroundBoostState(struct _RM_ACTIVITY_HOST *a1, char a2, char a3, char a4)
{
  char result; // al
  char v6; // cl
  unsigned __int8 v7; // bl

  result = 1;
  v6 = (*((_BYTE *)a1 + 700) & 8) != 0;
  v7 = (a2 & 0x40) != 0 || *((int *)a1 + 172) >= 2;
  if ( a3 >= 0 && !a4 )
    result = 0;
  if ( (a2 < 0 || a4) && (!result || v7 != v6) )
  {
    result = RmpActivityHostActOnProcesses(a1, (void *)v7);
    *((_BYTE *)a1 + 700) ^= (*((_BYTE *)a1 + 700) ^ (8 * v7)) & 8;
  }
  return result;
}
