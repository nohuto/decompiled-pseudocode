/*
 * XREFs of ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180013F00
 * Callers:
 *     ?RmpEnforcementWorkCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800057C0 (-RmpEnforcementWorkCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180013E50 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180015804 (-RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU.c)
 *     ?RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180015898 (-RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x18001595C (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

char __fastcall RmpPolicyComputeDesiredState(__int64 a1)
{
  int v2; // ecx
  char v3; // bl
  int v4; // esi
  int v5; // eax
  int v6; // r8d
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // cx
  unsigned int v9; // ebp
  int v10; // r8d
  __int64 v12; // rsi
  int v13; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 632);
  if ( (__ROL4__(1, 1) & 3) != 0 )
    v2 += *(_DWORD *)(a1 + 656);
  if ( !v2 )
    return 0;
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 56);
  if ( !v4 )
  {
    v5 = *(_DWORD *)(a1 + 600);
    if ( v5 != 2 )
    {
      if ( v5 == 4 )
      {
        if ( (*(_BYTE *)(a1 + 816) & 8) != 0 )
          v3 = 64;
      }
      else if ( v5 != 8 )
      {
        return 0;
      }
    }
  }
  if ( v4 == 1 )
  {
    v6 = (*(unsigned __int8 *)(a1 + 820) >> 6) & 1;
  }
  else
  {
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, int *))(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 56LL)
                                                                            + 200LL))(
      a1 + 528,
      *(unsigned int *)(a1 + 596),
      a1 + 64,
      *(unsigned int *)(a1 + 600),
      *(_QWORD *)(a1 + 24),
      &v13);
    v6 = v13 == 7;
  }
  v7 = *(_WORD *)(a1 + 666);
  v8 = *(_WORD *)(a1 + 664);
  v9 = (v8 & v7 & 4) == 0 || !v6;
  v10 = v9 ^ 1;
  if ( v4 == 1 )
  {
    if ( ((v8 | v7) & 1) == 0 )
      v10 = 1;
    if ( (v7 & 4) != 0 || (*(_BYTE *)(a1 + 816) & 8) != 0 )
      v3 = 64;
    else
      v3 = 0;
  }
  if ( !v10 )
    return v3;
  v12 = *(_QWORD *)(a1 + 40) + 400LL;
  v3 |= (8 * (*(_BYTE *)(v12 + 104) & 1)) | RmpPolicyComputeDesiredEmptyState(v12, a1, 0LL);
  if ( !v9 )
    v3 |= RmpPolicyGetDesiredEmptyOptimizationsForHost(v12, a1);
  if ( RmpPolicyIsHostCommitSaveEligible((struct _RM_POLICY *)v12, (struct _RM_ACTIVITY_HOST *)a1, v9) )
    return v3 ^ (v3 ^ (16 * (*(_DWORD *)(v12 + 108) >> 1))) & 0x10;
  else
    return v3;
}
