/*
 * XREFs of RmpPsmAppInstanceIdInitializeFromCStr @ 0x180004CC0
 * Callers:
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x1800115F0 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x180036E40 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?PublishCommitMemoryLevelChange@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_KW4CommitLevelChange@2@@Z @ 0x180037620 (-PublishCommitMemoryLevelChange@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_KW4Comm.c)
 *     ?PublishCommitMemoryLimitChange@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K22@Z @ 0x1800376E0 (-PublishCommitMemoryLimitChange@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K22@Z.c)
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@UEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEAX2KW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x180038280 (-RmAcquireResources@ResourceManager@ExecutionModel@@UEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     RmpActivityHostFindPsmResourceSets @ 0x18003BBE4 (RmpActivityHostFindPsmResourceSets.c)
 *     ?GetApplicationProperties@ResourceManager@ExecutionModel@@UEAAJPEBGPEAXKK_KPEAKPEA_K44@Z @ 0x18003E640 (-GetApplicationProperties@ResourceManager@ExecutionModel@@UEAAJPEBGPEAXKK_KPEAKPEA_K44@Z.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEA_N@Z @ 0x18003F1E8 (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 * Callees:
 *     RmpRmSidInitialize @ 0x180004D44 (RmpRmSidInitialize.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall RmpPsmAppInstanceIdInitializeFromCStr(
        wchar_t *Destination,
        wchar_t *Source,
        void *Src,
        int a4,
        int a5,
        __int64 a6)
{
  __int64 result; // rax

  memset_0(Destination, 0, 0x228uLL);
  wcscpy_s(Destination, 0xE8uLL, Source);
  RmpRmSidInitialize(Destination + 232, Src);
  *((_DWORD *)Destination + 134) = a5;
  result = a6;
  *((_DWORD *)Destination + 133) = a4;
  *((_QWORD *)Destination + 68) = a6;
  return result;
}
