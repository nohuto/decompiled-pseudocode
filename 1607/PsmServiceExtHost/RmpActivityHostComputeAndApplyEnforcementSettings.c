/*
 * XREFs of RmpActivityHostComputeAndApplyEnforcementSettings @ 0x180007AA0
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000F850 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180011F20 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180012630 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     RmpActivityHostZeroProcessNotification @ 0x180019964 (RmpActivityHostZeroProcessNotification.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002BBC4 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 *     ?AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x1800353A0 (-AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z.c)
 *     ?ReleaseMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAX_K@Z @ 0x180035CA8 (-ReleaseMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAX_K@Z.c)
 * Callees:
 *     RmpCommitValuesAdd @ 0x180007008 (RmpCommitValuesAdd.c)
 *     RmpActivityHostComputeCommitEstimate @ 0x180007C20 (RmpActivityHostComputeCommitEstimate.c)
 *     RmpActivityHostPopulateRunnabilitySettings @ 0x180007CD0 (RmpActivityHostPopulateRunnabilitySettings.c)
 *     RmpActivityHostComputeCommitLimit @ 0x180008040 (RmpActivityHostComputeCommitLimit.c)
 *     ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180008220 (-RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpActivityHostApplyEnforcementSettings @ 0x18000A3C0 (RmpActivityHostApplyEnforcementSettings.c)
 *     RmpActivityHostQueryCommit @ 0x18000AFD0 (RmpActivityHostQueryCommit.c)
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000D650 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

__int64 __fastcall RmpActivityHostComputeAndApplyEnforcementSettings(struct _RM_ACTIVITY_HOST *a1)
{
  unsigned __int64 v2; // rdi
  unsigned int v3; // r15d
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rbp
  __int64 result; // rax
  unsigned __int64 v9; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-60h] BYREF
  _QWORD Buf1[5]; // [rsp+30h] [rbp-58h] BYREF
  int v12; // [rsp+58h] [rbp-30h]
  int v13; // [rsp+60h] [rbp-28h]

  if ( (int)RmpActivityHostQueryCommit(a1, 0LL, &v9) < 0 )
    v2 = 0LL;
  else
    v2 = v9;
  RmpActivityHostAggregateCommitValues(a1);
  memset_0(Buf1, 0, 0x38uLL);
  v3 = 1;
  v13 = 100;
  v12 = 1;
  v4 = RmpActivityHostComputeCommitLimit(a1);
  v5 = *((_QWORD *)a1 + 119);
  v6 = *((_QWORD *)a1 + 120);
  Buf1[2] = v4;
  if ( v2 >= v5 )
  {
    if ( v2 < v6 )
    {
      v7 = v5;
      v3 = 2;
      v5 = v6;
    }
    else if ( v2 < *((_QWORD *)a1 + 117) )
    {
      v5 = *((_QWORD *)a1 + 117);
      v3 = 3;
      v7 = v6;
    }
    else
    {
      v7 = *((_QWORD *)a1 + 117);
      v3 = 4;
      v5 = -1LL;
    }
  }
  else
  {
    v7 = 0LL;
  }
  RmpActivityHostComputeCommitEstimate(v2, *((_QWORD *)a1 + 121), &v9, &v10);
  if ( v7 <= v9 )
    v7 = v9;
  if ( v2 >= v6 && *((_DWORD *)a1 + 12) == 1 )
  {
    RmpCommitValuesAdd(v2, 0x100000LL, &v9);
    if ( v5 >= v9 )
      v5 = v9;
  }
  if ( v2 <= *((_QWORD *)a1 + 121) && v5 >= v10 )
    v5 = v10;
  Buf1[0] = v7;
  Buf1[1] = v5;
  RmpActivityHostPopulateRunnabilitySettings(a1, Buf1);
  RmpActivityHostUpdateCommitUseState(a1, v2, v3);
  result = RmpActivityHostApplyEnforcementSettings(a1, Buf1);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
