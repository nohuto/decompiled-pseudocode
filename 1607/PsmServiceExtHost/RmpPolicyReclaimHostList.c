/*
 * XREFs of RmpPolicyReclaimHostList @ 0x180034270
 * Callers:
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180009A90 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_POLICY@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x180033318 (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_POLICY@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_.c)
 *     RmpPolicyRevokeResourceSetsForAcquire @ 0x180034370 (RmpPolicyRevokeResourceSetsForAcquire.c)
 * Callees:
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     RmpActivityHostAddToRemediationGroup @ 0x18002EC24 (RmpActivityHostAddToRemediationGroup.c)
 *     RmpActivityHostDecommitOfferedMemory @ 0x18002EE78 (RmpActivityHostDecommitOfferedMemory.c)
 *     RmpActivityHostRevokeResourceSets @ 0x18002F600 (RmpActivityHostRevokeResourceSets.c)
 */

void __fastcall RmpPolicyReclaimHostList(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 i; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdi
  int v11; // r8d
  __int64 v12; // rax
  int v13; // r8d
  _QWORD v14[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+30h] [rbp-48h]

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 40); i = (unsigned int)(i + 1) )
  {
    v9 = *(_QWORD *)(a1 + 8);
    v10 = *(_QWORD *)(v9 + 24 * i + 8);
    if ( *(_DWORD *)(v9 + 24 * i + 16) == 1 )
    {
      v11 = *(_DWORD *)(v9 + 24 * i + 20);
      v12 = *(_QWORD *)(v9 + 24 * i);
      v15 = 0LL;
      v14[1] = 0LL;
      v13 = v11 & 1;
      if ( v13 )
        v12 = -1LL;
      v14[0] = v12;
      LODWORD(v15) = ((*(_BYTE *)(v10 + 820) & 0x10) != 0) | v15 & 0xFFFFFFF8 | (4 * (v13 & 1));
      RmpActivityHostDecommitOfferedMemory((struct _RM_ACTIVITY_HOST *)v10, v14);
    }
    else
    {
      if ( a5 )
        RmpActivityHostAddToRemediationGroup(*(_QWORD *)(v9 + 24 * i + 8), a5);
      RmpActivityHostRevokeResourceSets(v10, a2, a3);
    }
  }
}
