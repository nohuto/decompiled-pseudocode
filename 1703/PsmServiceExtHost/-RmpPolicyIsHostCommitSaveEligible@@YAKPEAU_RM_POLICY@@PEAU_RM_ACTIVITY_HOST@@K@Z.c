/*
 * XREFs of ?RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180015898
 * Callers:
 *     ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180013F00 (-RmpPolicyComputeDesiredState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x18001595C (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 *     ?RmpActivityHostQueryIsAoW@@YAJPEAU_RM_ACTIVITY_HOST@@PEAK@Z @ 0x1800159E0 (-RmpActivityHostQueryIsAoW@@YAJPEAU_RM_ACTIVITY_HOST@@PEAK@Z.c)
 */

__int64 __fastcall RmpPolicyIsHostCommitSaveEligible(struct _RM_POLICY *a1, struct _RM_ACTIVITY_HOST *a2, int a3)
{
  bool v5; // dl
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  unsigned __int8 v8; // al
  unsigned __int8 v9; // r11
  unsigned int v11; // [rsp+40h] [rbp+18h] BYREF

  v5 = (*((_BYTE *)a2 + 664) & 8) == 0 && (*((_BYTE *)a2 + 666) & 8) == 0 && a3 == 0;
  v6 = *((unsigned __int16 *)a2 + 560);
  LOWORD(v6) = ~(_WORD)v6;
  v7 = v5 & (unsigned __int8)(~(*((_DWORD *)a2 + 204) >> 5) & (v6 >> 9)) & 1;
  if ( v7 )
  {
    RmpActivityHostQueryIsAoW(a2, &v11);
    v8 = RmpPolicyComputeDesiredEmptyState(a1, a2, 2LL);
    return v9 & ((v8 & *((_BYTE *)a2 + 820) & 0x27) == v8);
  }
  return v7;
}
