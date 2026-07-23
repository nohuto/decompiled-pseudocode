/*
 * XREFs of ExAllocatePoolWithQuotaTag @ 0x140012330
 * Callers:
 *     PiControlAllocateBufferForUserModeCaller @ 0x1400093B8 (PiControlAllocateBufferForUserModeCaller.c)
 *     NtGetWriteWatch @ 0x140014A70 (NtGetWriteWatch.c)
 *     IopAllocateIrpPrivate @ 0x14002DDD0 (IopAllocateIrpPrivate.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x140079FA0 (IopVerifierExAllocatePoolWithQuota.c)
 *     RtlInsertDynamicFunctionTable @ 0x140097DC0 (RtlInsertDynamicFunctionTable.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x14009A334 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x1400AE584 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     PopCaptureReasonContext @ 0x1400FA054 (PopCaptureReasonContext.c)
 *     RtlIsUntrustedObject @ 0x1400FA600 (RtlIsUntrustedObject.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x140133428 (IopVerifierExAllocatePoolWithQuota_2.c)
 *     CmpCaptureKeyValueArray @ 0x1401B2B70 (CmpCaptureKeyValueArray.c)
 *     FsRtlAllocatePoolWithQuota @ 0x1401B8E58 (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x1401B8E80 (FsRtlAllocatePoolWithQuotaTag.c)
 *     IopVerifierExAllocatePoolWithQuota_3 @ 0x1401CAD00 (IopVerifierExAllocatePoolWithQuota_3.c)
 *     PsSetCpuQuotaInformation @ 0x14020EBA4 (PsSetCpuQuotaInformation.c)
 *     ExAllocatePoolWithQuota @ 0x14022CB64 (ExAllocatePoolWithQuota.c)
 *     ExGetWakeTimerList @ 0x14022E018 (ExGetWakeTimerList.c)
 *     NtDeleteValueKey @ 0x1403F9878 (NtDeleteValueKey.c)
 *     CmpAllocatePostBlock @ 0x1403FFFF8 (CmpAllocatePostBlock.c)
 *     CmpNotifyChangeKey @ 0x1404000F4 (CmpNotifyChangeKey.c)
 *     NtSetValueKey @ 0x140401F58 (NtSetValueKey.c)
 *     NtTraceControl @ 0x14040CC00 (NtTraceControl.c)
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x14041CA30 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     NtQueryValueKey @ 0x14043A750 (NtQueryValueKey.c)
 *     IopXxxControlFile @ 0x140442DD0 (IopXxxControlFile.c)
 *     PspBuildCreateProcessContext @ 0x1404588B8 (PspBuildCreateProcessContext.c)
 *     IopCreateFile @ 0x14045A850 (IopCreateFile.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x14045B870 (FsRtlAllocateExtraCreateParameterList.c)
 *     ExpWnfCreateNameInstance @ 0x140461464 (ExpWnfCreateNameInstance.c)
 *     ExpWnfWriteStateData @ 0x140462258 (ExpWnfWriteStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x1404625B4 (ExpWnfSubscribeNameInstance.c)
 *     CmCreateKey @ 0x140462FD0 (CmCreateKey.c)
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     NtCreateWorkerFactory @ 0x14046FD64 (NtCreateWorkerFactory.c)
 *     IopAllocateMiniCompletionPacket @ 0x1404708D8 (IopAllocateMiniCompletionPacket.c)
 *     RtlQueryImageFileKeyOption @ 0x140472194 (RtlQueryImageFileKeyOption.c)
 *     ExLockUserBuffer @ 0x140499EB0 (ExLockUserBuffer.c)
 *     NtQueryDirectoryObject @ 0x14049A960 (NtQueryDirectoryObject.c)
 *     PspCaptureUserProcessParameters @ 0x14049B8E4 (PspCaptureUserProcessParameters.c)
 *     CmLoadDifferencingKey @ 0x1404A37E0 (CmLoadDifferencingKey.c)
 *     CmpNameFromAttributes @ 0x1404A4444 (CmpNameFromAttributes.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1404AA364 (ExpGetSystemFirmwareTableInformation.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1404B6D6C (RtlpProcessIFEOKeyFilter.c)
 *     NtQueueApcThreadEx @ 0x1404BB320 (NtQueueApcThreadEx.c)
 *     RtlAcquirePrivilege @ 0x1404BF554 (RtlAcquirePrivilege.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1404E3368 (PiControlMakeUserModeCallersCopy.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x1404E3950 (FsRtlAllocateExtraCreateParameter.c)
 *     NtRegisterThreadTerminatePort @ 0x14052E198 (NtRegisterThreadTerminatePort.c)
 *     RtlQueryModuleInformation @ 0x1405386E4 (RtlQueryModuleInformation.c)
 *     DbgkRegisterErrorPort @ 0x14057BE30 (DbgkRegisterErrorPort.c)
 *     NtCompactKeys @ 0x1405F94B4 (NtCompactKeys.c)
 *     NtRenameKey @ 0x1405F9EA4 (NtRenameKey.c)
 *     CmpSaveKeyByFileCopy @ 0x14060DB48 (CmpSaveKeyByFileCopy.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x140613D24 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     DbgkpQueueMessage @ 0x140619050 (DbgkpQueueMessage.c)
 *     KeEnableProfiling @ 0x14064FCA4 (KeEnableProfiling.c)
 *     RtlGetAppContainerParent @ 0x140683A6C (RtlGetAppContainerParent.c)
 *     RtlAddResourceAttributeAce @ 0x1406847E4 (RtlAddResourceAttributeAce.c)
 *     NtQuerySecurityPolicy @ 0x14068C778 (NtQuerySecurityPolicy.c)
 *     ExpGetDeviceDataInformation @ 0x1406AB380 (ExpGetDeviceDataInformation.c)
 *     ExpQueryElamCertInfo @ 0x1406ABB78 (ExpQueryElamCertInfo.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1406AC090 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpStringCapture @ 0x1406AC6A8 (ExpStringCapture.c)
 * Callees:
 *     PspExpandQuota @ 0x1400C4764 (PspExpandQuota.c)
 *     MmIsSpecialPoolAddress @ 0x1400E90BC (MmIsSpecialPoolAddress.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
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
    BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)&Process[-1].Spare2[52]);
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
