/*
 * XREFs of ?RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@T_RM_HOST_STATE_DIGEST@@@Z @ 0x180006694
 * Callers:
 *     RmpPolicyComputeDesiredState @ 0x180009058 (RmpPolicyComputeDesiredState.c)
 *     RmpActivityHostCheckQueueWork @ 0x18000ADC0 (RmpActivityHostCheckQueueWork.c)
 * Callees:
 *     RmpActivityHostStateDigestIsRunnable @ 0x180006744 (RmpActivityHostStateDigestIsRunnable.c)
 *     RmpPolicyComputeDesiredEmptyState @ 0x180006760 (RmpPolicyComputeDesiredEmptyState.c)
 *     RmpActivityHostQueryIsAoW @ 0x1800067DC (RmpActivityHostQueryIsAoW.c)
 */

__int64 __fastcall RmpPolicyIsHostCommitSaveEligible(__int64 a1, __int64 a2, unsigned int a3)
{
  int IsRunnable; // eax
  int v6; // edi
  char v7; // r8
  __int64 v8; // rdx
  unsigned int v9; // ebx
  int IsAoW; // eax
  int v11; // ecx
  bool v12; // sf
  int v13; // eax
  int v14; // ebx
  unsigned __int8 v15; // al
  int v17; // [rsp+38h] [rbp+10h] BYREF

  IsRunnable = RmpActivityHostStateDigestIsRunnable(a3);
  v6 = 0;
  v9 = ((unsigned __int16)~*(_WORD *)(v8 + 936) >> 9) & 1 & ((unsigned __int8)~v7 >> 6) & 1 & (IsRunnable == 0);
  if ( v9 )
  {
    IsAoW = RmpActivityHostQueryIsAoW(a2, &v17);
    v11 = v17;
    v12 = IsAoW < 0;
    v13 = 0;
    if ( v12 )
      v11 = 0;
    LOBYTE(v13) = v11 == 0;
    v14 = v13 & v9;
    v15 = RmpPolicyComputeDesiredEmptyState(a1, a2, 2LL);
    LOBYTE(v6) = (v15 & *(_BYTE *)(a2 + 780) & 0x27) == v15;
    return v6 & (unsigned int)v14;
  }
  return v9;
}
