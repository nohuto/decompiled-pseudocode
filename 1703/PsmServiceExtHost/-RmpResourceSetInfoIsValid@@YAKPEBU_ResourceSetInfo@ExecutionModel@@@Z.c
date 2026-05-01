/*
 * XREFs of ?RmpResourceSetInfoIsValid@@YAKPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180013B90
 * Callers:
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK5PEAU_RM_ACTIVATOR@@PEA_NPEA_K@Z @ 0x180011250 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 * Callees:
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x180013C34 (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 */

__int64 __fastcall RmpResourceSetInfoIsValid(const struct ExecutionModel::_ResourceSetInfo *a1)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // r8
  unsigned int v8; // ecx

  if ( *((_QWORD *)a1 + 15) == -1LL )
    return 0;
  v2 = *((_QWORD *)a1 + 9);
  if ( v2 - 1 <= 0xFFE )
    return 0;
  v3 = *((_QWORD *)a1 + 8);
  if ( v3 - 1 <= 0xFFE )
    return 0;
  v4 = *((_QWORD *)a1 + 45);
  if ( v4 - 1 <= 0xFFE )
    return 0;
  v5 = *((_QWORD *)a1 + 3);
  if ( v5 - 1 <= 0xFFE || v2 < v5 || v5 < v3 || v3 < v4 )
  {
    return 0;
  }
  else
  {
    v6 = RmpEmPriorityCompare(*((unsigned int *)a1 + 2), *((unsigned int *)a1 + 8));
    v8 = 0;
    if ( v6 >= 0
      && (*(_BYTE *)(v7 + 40) & 9) != 9
      && ((*(_BYTE *)(v7 + 42) & 7u) - 2 > 2 || (*(_BYTE *)(v7 + 40) & 3) != 0) )
    {
      return 1;
    }
  }
  return v8;
}
