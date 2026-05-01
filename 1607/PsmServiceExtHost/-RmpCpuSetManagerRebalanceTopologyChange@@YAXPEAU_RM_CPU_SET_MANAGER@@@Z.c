/*
 * XREFs of ?RmpCpuSetManagerRebalanceTopologyChange@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18001D5F4
 * Callers:
 *     ?RmpCpuSetManagerRebalance@@YAXPEAU_RM_CPU_SET_MANAGER@@K@Z @ 0x18001D560 (-RmpCpuSetManagerRebalance@@YAXPEAU_RM_CPU_SET_MANAGER@@K@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     ?RmpCpuSetManagerAcquireSetsForAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@K@Z @ 0x18001D694 (-RmpCpuSetManagerAcquireSetsForAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATIO.c)
 *     ?RmpCpuSetManagerSweepInvalidSets@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18001D700 (-RmpCpuSetManagerSweepInvalidSets@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerReleaseSetsFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@K@Z @ 0x1800310B0 (-RmpCpuSetManagerReleaseSetsFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATI.c)
 */

void __fastcall RmpCpuSetManagerRebalanceTopologyChange(struct _RM_CPU_SET_MANAGER *a1)
{
  const struct _TlgProvider_t *v2; // rcx
  struct _RM_CPU_SET_ALLOCATION *v3; // rdx
  unsigned int v4; // eax
  unsigned int v5; // r8d
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  RmpCpuSetManagerSweepInvalidSets(a1);
  v3 = (struct _RM_CPU_SET_MANAGER *)((char *)a1 + 360);
  v4 = *((_DWORD *)a1 + 158);
  v5 = (unsigned int)(*((_DWORD *)a1 + 237) + 3) >> 2;
  if ( v5 < v4 )
  {
    RmpCpuSetManagerReleaseSetsFromAllocation(a1, v3, v4 - v5);
  }
  else if ( v5 > v4 )
  {
    RmpCpuSetManagerAcquireSetsForAllocation(a1, v3, v5 - v4);
  }
  if ( (unsigned int)dword_18004C030 > 4 )
  {
    if ( TlgKeywordOn(v2, 1uLL) )
      TlgWrite(v6, &unk_180041389, v7, v8, 2u, &pData);
  }
}
