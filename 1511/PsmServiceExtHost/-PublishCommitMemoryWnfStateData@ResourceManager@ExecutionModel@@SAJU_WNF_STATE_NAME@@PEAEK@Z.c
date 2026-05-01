/*
 * XREFs of ?PublishCommitMemoryWnfStateData@ResourceManager@ExecutionModel@@SAJU_WNF_STATE_NAME@@PEAEK@Z @ 0x18003D888
 * Callers:
 *     ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K2@Z @ 0x18000F650 (-CommitMemoryLimitChange@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K2@Z.c)
 *     ?UpdateCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@W4RmCommitLevel@@@Z @ 0x18000F6B0 (-UpdateCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@W4RmCommitL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceManager::PublishCommitMemoryWnfStateData(
        struct _WNF_STATE_NAME a1,
        unsigned __int8 *a2,
        unsigned int a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))RtlPublishWnfStateData)(
              a1,
              0LL,
              a2,
              a3,
              0LL) < 0 )
    return (unsigned int)-2147467259;
  return v3;
}
