/*
 * XREFs of ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005B60
 * Callers:
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800025B8 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D438 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x18000F300 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18000F930 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z @ 0x180017224 (-RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z.c)
 *     ?RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z @ 0x1800187E0 (-RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpResourceSetUpdateElasticRecipient@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180018CE8 (-RmpResourceSetUpdateElasticRecipient@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002AE68 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 *     ?RmpRsEnforcedThresholdsTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18002DD70 (-RmpRsEnforcedThresholdsTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?RmpActivityHostTrySetCommitTargetForPple@@YAJPEAU_RM_ACTIVITY_HOST@@_K@Z @ 0x18002EBC4 (-RmpActivityHostTrySetCommitTargetForPple@@YAJPEAU_RM_ACTIVITY_HOST@@_K@Z.c)
 * Callees:
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x18000450C (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 *     ?RmpActivityHostComputeCommitEstimate@@YAX_K0PEA_K1@Z @ 0x180005D20 (-RmpActivityHostComputeCommitEstimate@@YAX_K0PEA_K1@Z.c)
 *     ?RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180005DE0 (-RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTI.c)
 *     ?RmpActivityHostComputeCommitLimit@@YA_KPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006120 (-RmpActivityHostComputeCommitLimit@@YA_KPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006300 (-RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180006D00 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x180008E60 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000B0A0 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

__int64 __fastcall RmpActivityHostComputeAndApplyEnforcementSettings(struct _RM_ACTIVITY_HOST *a1)
{
  unsigned int v2; // r12d
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rsi
  __int64 result; // rax
  unsigned __int64 v10; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v12[5]; // [rsp+30h] [rbp-68h] BYREF
  int v13; // [rsp+58h] [rbp-40h]
  int v14; // [rsp+60h] [rbp-38h]

  v10 = 0LL;
  RmpActivityHostQueryCommit(a1, 0LL, &v10, &v11);
  RmpActivityHostAggregateCommitValues(a1);
  memset_0(v12, 0, 0x38uLL);
  v2 = 1;
  v14 = 100;
  v13 = 1;
  v3 = RmpActivityHostComputeCommitLimit(a1);
  v4 = *((_QWORD *)a1 + 123);
  v5 = v10;
  v6 = *((_QWORD *)a1 + 126);
  v7 = *((_QWORD *)a1 + 124);
  v12[2] = v3;
  if ( v10 >= v4 )
  {
    if ( v10 < v7 )
    {
      v8 = v4;
      v4 = v7;
    }
    else if ( v10 < *((_QWORD *)a1 + 125) )
    {
      v4 = *((_QWORD *)a1 + 125);
      v8 = v7;
    }
    else
    {
      v8 = *((_QWORD *)a1 + 125);
      v4 = -1LL;
    }
  }
  else
  {
    v8 = 0LL;
  }
  RmpActivityHostComputeCommitEstimate(v10, v6, &v10, &v11);
  if ( v8 <= v10 )
    v8 = v10;
  if ( v5 >= v7 && *((_DWORD *)a1 + 14) == 1 )
  {
    RmpCommitValuesAdd(v5, 0x100000LL, &v10);
    if ( v4 >= v10 )
      v4 = v10;
  }
  if ( v5 <= v6 && v4 >= v11 )
    v4 = v11;
  v12[0] = v8;
  v12[1] = v4;
  if ( v5 >= *((_QWORD *)a1 + 123) )
  {
    if ( v5 < *((_QWORD *)a1 + 124) )
    {
      v2 = 2;
    }
    else
    {
      v2 = 4;
      if ( v5 < *((_QWORD *)a1 + 125) )
        v2 = 3;
    }
  }
  RmpActivityHostPopulateRunnabilitySettings(a1, (struct _RM_ENFORCEMENT_SETTINGS *)v12);
  RmpActivityHostUpdateCommitUseState(a1, v5, v2);
  result = RmpActivityHostApplyEnforcementSettings(a1, (struct _RM_ENFORCEMENT_SETTINGS *)v12, 0);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
