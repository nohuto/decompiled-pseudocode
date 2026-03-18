/*
 * XREFs of ExAllocatePoolWithQuotaTag @ 0x140045B50
 * Callers:
 *     RtlInsertDynamicFunctionTable @ 0x14000AE00 (RtlInsertDynamicFunctionTable.c)
 *     NtGetWriteWatch @ 0x14003C8B0 (NtGetWriteWatch.c)
 *     IopAllocateIrpPrivate @ 0x1400480F0 (IopAllocateIrpPrivate.c)
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 *     PopCaptureReasonContext @ 0x1400D156C (PopCaptureReasonContext.c)
 *     RtlIsUntrustedObject @ 0x14012AE2C (RtlIsUntrustedObject.c)
 *     CmLoadKeyHelper @ 0x1401DE79C (CmLoadKeyHelper.c)
 *     CmpCaptureKeyValueArray @ 0x1401DF5AC (CmpCaptureKeyValueArray.c)
 *     FsRtlAllocatePoolWithQuota @ 0x1401E2CAC (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x1401E2CD4 (FsRtlAllocatePoolWithQuotaTag.c)
 *     PsSetCpuQuotaInformation @ 0x140243470 (PsSetCpuQuotaInformation.c)
 *     ExAllocatePoolWithQuota @ 0x140262190 (ExAllocatePoolWithQuota.c)
 *     ExGetWakeTimerList @ 0x140264560 (ExGetWakeTimerList.c)
 *     IopTrackLink @ 0x14040C918 (IopTrackLink.c)
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     NtSetValueKey @ 0x140428350 (NtSetValueKey.c)
 *     CmpAllocatePostBlock @ 0x14042C258 (CmpAllocatePostBlock.c)
 *     CmpNotifyChangeKey @ 0x14042C358 (CmpNotifyChangeKey.c)
 *     IopAllocateMiniCompletionPacket @ 0x14042D3D0 (IopAllocateMiniCompletionPacket.c)
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1404379BC (PiControlMakeUserModeCallersCopy.c)
 *     CmpNameFromAttributes @ 0x14044565C (CmpNameFromAttributes.c)
 *     PspBuildCreateProcessContext @ 0x14044EA2C (PspBuildCreateProcessContext.c)
 *     NtQueryVolumeInformationFile @ 0x140457400 (NtQueryVolumeInformationFile.c)
 *     NtCreateWorkerFactory @ 0x14046FE54 (NtCreateWorkerFactory.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x140472610 (FsRtlAllocateExtraCreateParameterList.c)
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 *     NtReadFile @ 0x14048EFE0 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x140490C50 (NtQueryInformationFile.c)
 *     NtLockFile @ 0x1404A4FE4 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x1404BC130 (BuildQueryDirectoryIrp.c)
 *     NtWriteFile @ 0x1404BCA70 (NtWriteFile.c)
 *     NtQueryValueKey @ 0x1404C0BB0 (NtQueryValueKey.c)
 *     NtTraceControl @ 0x1404CE420 (NtTraceControl.c)
 *     PiControlGetRelatedDevice @ 0x1404E11FC (PiControlGetRelatedDevice.c)
 *     PiControlGetPropertyData @ 0x1404E1474 (PiControlGetPropertyData.c)
 *     NtDeleteValueKey @ 0x1404EF910 (NtDeleteValueKey.c)
 *     CmCreateKey @ 0x1404F4850 (CmCreateKey.c)
 *     ExpWnfCreateNameInstance @ 0x1405023B4 (ExpWnfCreateNameInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x140503024 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfWriteStateData @ 0x14050395C (ExpWnfWriteStateData.c)
 *     PspCaptureUserProcessParameters @ 0x140507D64 (PspCaptureUserProcessParameters.c)
 *     IopCreateFile @ 0x14050A2E0 (IopCreateFile.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x14050B22C (FsRtlAllocateExtraCreateParameter.c)
 *     ExLockUserBuffer @ 0x14051CAD0 (ExLockUserBuffer.c)
 *     NtQueryDirectoryObject @ 0x140520F80 (NtQueryDirectoryObject.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14052DF08 (ExpGetSystemFirmwareTableInformation.c)
 *     NtQueryEaFile @ 0x140534134 (NtQueryEaFile.c)
 *     IopUnloadDriver @ 0x140539658 (IopUnloadDriver.c)
 *     NtUnlockFile @ 0x14053C750 (NtUnlockFile.c)
 *     NtNotifyChangeDirectoryFile @ 0x14053E7A0 (NtNotifyChangeDirectoryFile.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140540030 (RtlpProcessIFEOKeyFilter.c)
 *     NtWriteFileGather @ 0x140540320 (NtWriteFileGather.c)
 *     NtQueueApcThreadEx @ 0x140540B68 (NtQueueApcThreadEx.c)
 *     RtlQueryImageFileKeyOption @ 0x140545DF4 (RtlQueryImageFileKeyOption.c)
 *     RtlAcquirePrivilege @ 0x1405484C0 (RtlAcquirePrivilege.c)
 *     NtReadFileScatter @ 0x140549CBC (NtReadFileScatter.c)
 *     NtRegisterThreadTerminatePort @ 0x140559F3C (NtRegisterThreadTerminatePort.c)
 *     NtSetVolumeInformationFile @ 0x14055F21C (NtSetVolumeInformationFile.c)
 *     NtLoadDriver @ 0x14057157C (NtLoadDriver.c)
 *     RtlQueryModuleInformation @ 0x14057D670 (RtlQueryModuleInformation.c)
 *     DbgkRegisterErrorPort @ 0x1405BE8F4 (DbgkRegisterErrorPort.c)
 *     NtCompactKeys @ 0x14064FE10 (NtCompactKeys.c)
 *     NtRenameKey @ 0x140650A88 (NtRenameKey.c)
 *     CmpSaveKeyByFileCopy @ 0x140662794 (CmpSaveKeyByFileCopy.c)
 *     DbgkpQueueMessage @ 0x140667B2C (DbgkpQueueMessage.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406728FC (IopSetEaOrQuotaInformationFile.c)
 *     IopValidateJunctionTarget @ 0x14067350C (IopValidateJunctionTarget.c)
 *     NtSetEaFile @ 0x140675B58 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140676310 (NtQueryQuotaInformationFile.c)
 *     PiControlQueryAndRemoveDevice @ 0x140694958 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x140694AD8 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x140694D0C (PiControlQueryDeviceRelations.c)
 *     KeEnableProfiling @ 0x14069905C (KeEnableProfiling.c)
 *     RtlAddResourceAttributeAce @ 0x1406C7E58 (RtlAddResourceAttributeAce.c)
 *     RtlGetAppContainerParent @ 0x1406C9AC4 (RtlGetAppContainerParent.c)
 *     ExpGetDeviceDataInformation @ 0x1406EE204 (ExpGetDeviceDataInformation.c)
 *     ExpQueryElamCertInfo @ 0x1406EE818 (ExpQueryElamCertInfo.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1406EED28 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpStringCapture @ 0x1406EF374 (ExpStringCapture.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     MmIsSpecialPoolAddress @ 0x14005ED6C (MmIsSpecialPoolAddress.c)
 *     PspExpandQuota @ 0x140125608 (PspExpandQuota.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

PVOID __stdcall ExAllocatePoolWithQuotaTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  int v3; // ebp
  unsigned __int32 v4; // ebx
  POOL_TYPE v5; // ebx
  PEPROCESS Process; // rsi
  char *PoolWithTag; // rax
  char *v8; // r15
  char *v9; // rbp
  __int64 v10; // rdx
  char *v11; // r8
  unsigned int v12; // ecx
  bool v13; // zf
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // r13
  unsigned __int64 *v18; // rbx
  char v19; // r8
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  signed __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  signed __int64 BugCheckParameter4; // rdi
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  NTSTATUS v32; // ebx
  signed __int32 v33[8]; // [rsp+0h] [rbp-88h] BYREF
  int v34; // [rsp+30h] [rbp-58h]
  unsigned __int64 v35; // [rsp+38h] [rbp-50h] BYREF
  char *v36; // [rsp+40h] [rbp-48h]
  __int64 v37; // [rsp+48h] [rbp-40h]
  char v38; // [rsp+90h] [rbp+8h]
  int v40; // [rsp+A8h] [rbp+20h]

  v40 = 1;
  v3 = 1;
  v4 = PoolType;
  if ( (PoolType & 8) != 0 )
  {
    v3 = 0;
    v40 = 0;
    v4 = PoolType & 0xFFFFFFF7;
  }
  v5 = v4 + 8;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process == PsInitialSystemProcess )
    v5 -= 8;
  PoolWithTag = (char *)ExAllocatePoolWithTag(v5, NumberOfBytes, Tag);
  v8 = PoolWithTag;
  if ( ((unsigned __int16)PoolWithTag & 0xFFF) == 0 )
  {
    if ( !PoolWithTag && v3 )
      RtlRaiseStatus(-1073741670);
    return v8;
  }
  if ( ExpSpecialAllocations && (unsigned int)MmIsSpecialPoolAddress(PoolWithTag) || (v5 & 8) == 0 )
    return v8;
  v9 = v8 - 16;
  v10 = ExpPoolQuotaCookie;
  v11 = 0LL;
  v12 = (unsigned __int8)*((_WORD *)v8 - 7);
  v36 = 0LL;
  v13 = (*(v8 - 13) & 4) == 0;
  *((_QWORD *)v8 - 1) = (unsigned __int64)(v8 - 16) ^ ExpPoolQuotaCookie;
  if ( !v13 )
  {
    v36 = &v9[-16 * (unsigned __int8)*(_WORD *)v9];
    v11 = v36;
    *((_QWORD *)v36 + 1) = (unsigned __int64)v36 ^ v10;
    v12 = (unsigned __int8)*((_WORD *)v11 + 1);
  }
  v14 = 16LL * v12;
  if ( Process == PsInitialSystemProcess )
  {
LABEL_21:
    *((_QWORD *)v9 + 1) = (unsigned __int64)Process ^ (unsigned __int64)v9 ^ v10;
    if ( v11 )
      *((_QWORD *)v11 + 1) = (unsigned __int64)Process ^ (unsigned __int64)v11 ^ v10;
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)Process - 48);
    BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)&Process[-1].Spare2[39]);
    if ( BugCheckParameter4 <= 1 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Process, 0x10uLL, BugCheckParameter4);
    return v8;
  }
  v15 = Process[1].ActiveProcessors.Bitmap[4];
  v16 = v5 & 1;
  v17 = v16;
  v34 = v16;
  v18 = (unsigned __int64 *)(v15 + ((__int64)v16 << 7));
  v19 = PspResourceFlags[8 * v16];
  v38 = v19;
  v37 = 8LL * v16;
  _m_prefetchw(v18);
  v20 = *v18;
  _InterlockedOr(v33, 0);
LABEL_12:
  v21 = v18[8];
LABEL_13:
  v35 = v21;
  while ( 1 )
  {
    v22 = v20 + v14;
    if ( v20 + v14 < v20 )
      break;
    if ( v22 <= v21 )
    {
      v23 = _InterlockedCompareExchange64((volatile signed __int64 *)v18, v22, v20);
      v13 = v20 == v23;
      v20 = v23;
      if ( !v13 )
        goto LABEL_12;
      _m_prefetchw(v18 + 1);
      v24 = v18[1];
      if ( v22 > v24 )
      {
        do
        {
          v30 = v24;
          v24 = _InterlockedCompareExchange64((volatile signed __int64 *)v18 + 1, v22, v24);
        }
        while ( v24 != v30 && v22 > v24 );
      }
      if ( (v19 & 4) != 0 )
      {
        v25 = v14 + _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].ThreadListHead.Blink + v17, v14);
        _m_prefetchw(&Process[1].DeepFreezeStartTime + v17);
        v26 = *(&Process[1].DeepFreezeStartTime + v17);
        if ( v25 > v26 )
        {
          do
          {
            v29 = v26;
            v26 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&Process[1].DeepFreezeStartTime + v17,
                    v25,
                    v26);
          }
          while ( v26 != v29 && v25 > v26 );
        }
      }
      goto LABEL_20;
    }
    if ( (v19 & 1) == 0 || !v18[10] )
      break;
    v31 = _InterlockedExchange64((volatile __int64 *)v18 + 9, 0LL);
    if ( v31 )
    {
      v21 = v31 + _InterlockedExchangeAdd64((volatile signed __int64 *)v18 + 8, v31);
      goto LABEL_13;
    }
    if ( !(unsigned __int8)PspExpandQuota(v16, (_DWORD)v18, v20, v14, (__int64)&v35) )
      break;
    v21 = v35;
    v19 = v38;
    v16 = v34;
  }
  v32 = *(_DWORD *)&PspResourceFlags[v37 + 4];
  if ( v32 >= 0 )
  {
LABEL_20:
    v11 = v36;
    v10 = ExpPoolQuotaCookie;
    goto LABEL_21;
  }
  ExFreePoolWithTag(v8, Tag);
  if ( v40 )
    RtlRaiseStatus(v32);
  return 0LL;
}
