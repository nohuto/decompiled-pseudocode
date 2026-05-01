/*
 * XREFs of ?RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180018050
 * Callers:
 *     RmpPolicyComputeDesiredState @ 0x1800176C0 (RmpPolicyComputeDesiredState.c)
 * Callees:
 *     RmpPolicyComputeDesiredEmptyState @ 0x180018124 (RmpPolicyComputeDesiredEmptyState.c)
 *     RmpActivityHostQueryIsAoW @ 0x1800181A0 (RmpActivityHostQueryIsAoW.c)
 */

__int64 __fastcall RmpPolicyIsHostCommitSaveEligible(struct _RM_POLICY *a1, struct _RM_ACTIVITY_HOST *a2, int a3)
{
  int v3; // edi
  char v6; // al
  unsigned int v7; // ebx
  int IsAoW; // eax
  int v9; // ecx
  bool v10; // sf
  int v11; // eax
  int v12; // ebx
  unsigned __int8 v13; // al
  int v15; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( (*((_BYTE *)a2 + 664) & 8) != 0 || (v6 = 1, (*((_BYTE *)a2 + 666) & 8) != 0) )
    v6 = 0;
  v7 = ((unsigned __int8)~*((_BYTE *)a2 + 816) >> 5) & 1 & ((unsigned __int16)~*((_WORD *)a2 + 556) >> 9) & 1 & (unsigned __int8)v6 & (a3 == 0);
  if ( v7 )
  {
    IsAoW = RmpActivityHostQueryIsAoW(a2, &v15);
    v9 = v15;
    v10 = IsAoW < 0;
    v11 = 0;
    if ( v10 )
      v9 = 0;
    LOBYTE(v11) = v9 == 0;
    v12 = v11 & v7;
    v13 = RmpPolicyComputeDesiredEmptyState(a1, a2, 2LL);
    LOBYTE(v3) = (v13 & *((_BYTE *)a2 + 820) & 0x27) == v13;
    return v3 & (unsigned int)v12;
  }
  return v7;
}
