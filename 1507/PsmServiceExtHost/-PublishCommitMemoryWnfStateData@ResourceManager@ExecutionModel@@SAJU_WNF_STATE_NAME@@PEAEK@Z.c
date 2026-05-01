/*
 * XREFs of ?PublishCommitMemoryWnfStateData@ResourceManager@ExecutionModel@@SAJU_WNF_STATE_NAME@@PEAEK@Z @ 0x1800377B4
 * Callers:
 *     ?PublishCommitMemoryLevelChange@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_KW4CommitLevelChange@2@@Z @ 0x180037620 (-PublishCommitMemoryLevelChange@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_KW4Comm.c)
 *     ?PublishCommitMemoryLimitChange@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K22@Z @ 0x1800376E0 (-PublishCommitMemoryLimitChange@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K22@Z.c)
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
