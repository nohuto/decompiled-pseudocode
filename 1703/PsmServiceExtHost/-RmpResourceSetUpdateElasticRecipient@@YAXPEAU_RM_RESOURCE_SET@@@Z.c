/*
 * XREFs of ?RmpResourceSetUpdateElasticRecipient@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180018CE8
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D438 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z @ 0x180017224 (-RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z.c)
 * Callees:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005B60 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z @ 0x18000E2D4 (-SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z.c)
 *     ?GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z @ 0x18000E2FC (-GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z.c)
 *     ?RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x180017778 (-RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpCommitThresholdsSubtractValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x18002AB64 (-RmpCommitThresholdsSubtractValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z.c)
 */

void __fastcall RmpResourceSetUpdateElasticRecipient(struct _RM_RESOURCE_SET *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 Amount; // rax
  int v7; // edx
  __int64 v8; // r10
  _QWORD v9[4]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *((_QWORD *)a1 + 5) + 1408LL;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 1450LL) & 7) == 4 )
  {
    if ( *((_DWORD *)a1 + 26) )
    {
      v3 = **((_QWORD **)a1 + 12);
      RmpResourceSetGetReportedCommitThresholds((struct _RM_RESOURCE_SET *)v3, (struct _RM_COMMIT_THRESHOLDS *)v9);
      RmpCommitThresholdsSubtractValue((struct _RM_COMMIT_THRESHOLDS *)v9, *(_QWORD *)(v3 + 56));
      v4 = v9[3];
      *(_QWORD *)(v2 + 24) = v9[2];
      *(_QWORD *)(v2 + 64) = v9[1];
      v5 = v9[0];
      *(_QWORD *)(v2 + 72) = v4;
      *(_QWORD *)(v2 + 360) = v5;
      Amount = ExecutionModel::_ResourceSetInfo::GetAmount(*(_QWORD *)(v3 + 40) + 1408LL, 0);
      ExecutionModel::_ResourceSetInfo::SetAmount(v2, v7, Amount);
      *(_DWORD *)(v2 + 44) ^= (*(_DWORD *)(v2 + 44) ^ *(_DWORD *)(v8 + 1452)) & 3;
      RmpActivityHostComputeAndApplyEnforcementSettings(*(struct _RM_ACTIVITY_HOST **)(*((_QWORD *)a1 + 5) + 1392LL));
    }
  }
}
