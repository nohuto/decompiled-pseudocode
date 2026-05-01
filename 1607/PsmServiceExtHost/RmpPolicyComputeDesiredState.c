/*
 * XREFs of RmpPolicyComputeDesiredState @ 0x1800176C0
 * Callers:
 *     RmpEnforcementWorkCallback @ 0x180016C10 (RmpEnforcementWorkCallback.c)
 *     RmpActivityHostCheckQueueWork @ 0x180017600 (RmpActivityHostCheckQueueWork.c)
 * Callees:
 *     RmpPolicyGetDesiredEmptyOptimizationsForHost @ 0x180006F74 (RmpPolicyGetDesiredEmptyOptimizationsForHost.c)
 *     ?RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180018050 (-RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     RmpPolicyComputeDesiredEmptyState @ 0x180018124 (RmpPolicyComputeDesiredEmptyState.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

char __fastcall RmpPolicyComputeDesiredState(struct _RM_ACTIVITY_HOST *a1)
{
  char v2; // bl
  int v3; // edi
  int v4; // eax
  int v5; // r8d
  unsigned __int16 v6; // cx
  unsigned __int16 v7; // ax
  unsigned int v8; // ebp
  BOOL v9; // r8d
  __int64 v11; // r14
  char v12; // di
  char v13; // al
  int v14; // [rsp+60h] [rbp+8h] BYREF

  if ( !(*((_DWORD *)a1 + 164) + *((_DWORD *)a1 + 158)) )
    return 0;
  v2 = 0;
  v3 = *((_DWORD *)a1 + 12);
  if ( !v3 )
  {
    v4 = *((_DWORD *)a1 + 148);
    if ( v4 != 2 )
    {
      if ( v4 == 4 )
      {
        if ( (*((_BYTE *)a1 + 816) & 8) != 0 )
          v2 = 64;
      }
      else if ( v4 != 8 )
      {
        return 0;
      }
    }
  }
  if ( v3 == 1 )
  {
    v5 = (*((unsigned __int8 *)a1 + 820) >> 6) & 1;
  }
  else
  {
    (*(void (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int *))(*(_QWORD *)(*((_QWORD *)a1 + 5) + 72LL)
                                                                          + 208LL))(
      (char *)a1 + 520,
      *((unsigned int *)a1 + 147),
      (char *)a1 + 56,
      *((unsigned int *)a1 + 148),
      *((_QWORD *)a1 + 3),
      &v14);
    v5 = v14 == 7;
  }
  v6 = *((_WORD *)a1 + 332);
  v7 = *((_WORD *)a1 + 333);
  v8 = (v7 & v6 & 4) == 0 || !v5;
  v9 = v8 == 0;
  if ( v3 == 1 )
  {
    if ( ((v6 | v7) & 1) == 0 )
      v9 = 1;
    v13 = (v7 & 4) != 0 || (*((_BYTE *)a1 + 816) & 8) != 0;
    v2 ^= (v2 ^ (v13 << 6)) & 0x40;
  }
  if ( !v9 )
    return v2;
  v11 = *((_QWORD *)a1 + 5) + 424LL;
  v12 = v2 ^ (v2 ^ (8 * *(_BYTE *)(v11 + 1412))) & 8 | RmpPolicyComputeDesiredEmptyState(v11, a1, 0LL);
  if ( !v8 )
    v12 |= RmpPolicyGetDesiredEmptyOptimizationsForHost(v11, (__int64)a1);
  if ( RmpPolicyIsHostCommitSaveEligible((struct _RM_POLICY *)v11, a1, v8) )
    return v12 ^ (v12 ^ (16 * (*(_DWORD *)(v11 + 1416) >> 3))) & 0x10;
  else
    return v12;
}
