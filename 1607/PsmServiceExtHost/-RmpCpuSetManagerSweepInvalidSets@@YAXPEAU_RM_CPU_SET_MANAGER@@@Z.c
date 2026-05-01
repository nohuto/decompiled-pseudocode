/*
 * XREFs of ?RmpCpuSetManagerSweepInvalidSets@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18001D700
 * Callers:
 *     ?RmpCpuSetManagerRebalanceTopologyChange@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18001D5F4 (-RmpCpuSetManagerRebalanceTopologyChange@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     ?RmpCpuSetManagerActOnAllocationsByType@@YAXPEAU_RM_CPU_SET_MANAGER@@W4_RM_CPU_SET_ALLOCATION_TYPE@@P6AE0PEAU_RM_CPU_SET_ALLOCATION@@PEAX@Z3@Z @ 0x18001D78C (-RmpCpuSetManagerActOnAllocationsByType@@YAXPEAU_RM_CPU_SET_MANAGER@@W4_RM_CPU_SET_ALLOCATION_TY.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

void __fastcall RmpCpuSetManagerSweepInvalidSets(struct _RM_CPU_SET_MANAGER *a1)
{
  unsigned int i; // ebx
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  __int64 cData; // [rsp+20h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  for ( i = 0; i < 4; ++i )
    RmpCpuSetManagerActOnAllocationsByType(a1, i, RmpCpuSetManagerSweepInvalidSetsCallback, 0LL, cData);
  if ( (unsigned int)dword_18004C030 > 4 )
  {
    if ( TlgKeywordOn(v3, 1uLL) )
      TlgWrite(v4, &unk_1800413B7, v5, v6, 2u, &pData);
  }
}
