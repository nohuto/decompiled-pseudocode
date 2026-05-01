/*
 * XREFs of RmpResourceSetInfoIsValid @ 0x180015C08
 * Callers:
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK5PEAU_RM_ACTIVATOR@@PEA_NPEA_K@Z @ 0x1800136B0 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 * Callees:
 *     RmpEmPriorityCompare @ 0x180014E6C (RmpEmPriorityCompare.c)
 */

__int64 __fastcall RmpResourceSetInfoIsValid(__int64 a1)
{
  unsigned int v2; // r8d
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  int v6; // eax
  _DWORD *i; // rcx
  __int64 v8; // r9

  if ( *(_QWORD *)(a1 + 120) == -1LL )
    return 0;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 72) - 1LL) <= 0xFFE )
    return 0;
  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 - 1 <= 0xFFE )
    return 0;
  v4 = *(_QWORD *)(a1 + 360);
  if ( v4 - 1 <= 0xFFE )
    return 0;
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 - 1 <= 0xFFE || v5 < v3 )
  {
    return 0;
  }
  else
  {
    v2 = 0;
    if ( v3 >= v4 )
    {
      v6 = 0;
      for ( i = (_DWORD *)(a1 + 88); *i == v6; i += 6 )
      {
        if ( (unsigned int)++v6 >= 3 )
        {
          if ( (int)RmpEmPriorityCompare(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 32)) >= 0
            && (*(_BYTE *)(v8 + 40) & 9) != 9
            && ((*(_BYTE *)(v8 + 374) & 1) == 0 || (*(_BYTE *)(v8 + 40) & 3) != 0) )
          {
            return 1;
          }
          return v2;
        }
      }
    }
  }
  return v2;
}
