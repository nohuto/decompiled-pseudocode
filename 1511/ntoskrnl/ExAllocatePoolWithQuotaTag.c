/*
 * XREFs of ExAllocatePoolWithQuotaTag @ 0x14008E480
 * Callers:
 *     IopAllocateIrpPrivate @ 0x140043750 (IopAllocateIrpPrivate.c)
 *     sub_14008E44C @ 0x14008E44C (sub_14008E44C.c)
 *     RtlInsertDynamicFunctionTable @ 0x140096130 (RtlInsertDynamicFunctionTable.c)
 *     PopCaptureReasonContext @ 0x140097B84 (PopCaptureReasonContext.c)
 *     PiControlAllocateBufferForUserModeCaller @ 0x140099938 (PiControlAllocateBufferForUserModeCaller.c)
 *     NtGetWriteWatch @ 0x1400B66D0 (NtGetWriteWatch.c)
 *     sub_1400CC928 @ 0x1400CC928 (sub_1400CC928.c)
 *     sub_1400CCC88 @ 0x1400CCC88 (sub_1400CCC88.c)
 *     sub_1400D08C8 @ 0x1400D08C8 (sub_1400D08C8.c)
 *     RtlIsUntrustedObject @ 0x1400E3F14 (RtlIsUntrustedObject.c)
 *     FsRtlAllocatePoolWithQuota @ 0x1401ACCDC (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x1401ACD04 (FsRtlAllocatePoolWithQuotaTag.c)
 *     sub_1401BCE8C @ 0x1401BCE8C (sub_1401BCE8C.c)
 *     PsSetCpuQuotaInformation @ 0x1401F50E0 (PsSetCpuQuotaInformation.c)
 *     ExAllocatePoolWithQuota @ 0x140212ACC (ExAllocatePoolWithQuota.c)
 *     ExGetWakeTimerList @ 0x14021457C (ExGetWakeTimerList.c)
 *     NtDeleteValueKey @ 0x1403D4700 (NtDeleteValueKey.c)
 *     NtLoadKeyEx @ 0x1403DB3CC (NtLoadKeyEx.c)
 *     CmpNameFromAttributes @ 0x1403DBE88 (CmpNameFromAttributes.c)
 *     ExpWnfCreateNameInstance @ 0x1403E5290 (ExpWnfCreateNameInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x1403E6008 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfWriteStateData @ 0x1403E68DC (ExpWnfWriteStateData.c)
 *     NtSetValueKey @ 0x1403F2FD0 (NtSetValueKey.c)
 *     NtQueryValueKey @ 0x140400BF0 (NtQueryValueKey.c)
 *     IopXxxControlFile @ 0x140410C30 (IopXxxControlFile.c)
 *     CmCreateKey @ 0x140422220 (CmCreateKey.c)
 *     NtTraceControl @ 0x140436E10 (NtTraceControl.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1404390E4 (PiControlMakeUserModeCallersCopy.c)
 *     IopCreateFile @ 0x140439640 (IopCreateFile.c)
 *     NtQueryDirectoryObject @ 0x14043A290 (NtQueryDirectoryObject.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x14043EEEC (FsRtlAllocateExtraCreateParameter.c)
 *     PspBuildCreateProcessContext @ 0x14044629C (PspBuildCreateProcessContext.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x140448610 (FsRtlAllocateExtraCreateParameterList.c)
 *     NtCreateWorkerFactory @ 0x14044E4E8 (NtCreateWorkerFactory.c)
 *     IopAllocateMiniCompletionPacket @ 0x14044EFEC (IopAllocateMiniCompletionPacket.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 *     PspCaptureUserProcessParameters @ 0x140465500 (PspCaptureUserProcessParameters.c)
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x14047D620 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14048434C (ExpGetSystemFirmwareTableInformation.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 *     CmpAllocatePostBlock @ 0x14049A400 (CmpAllocatePostBlock.c)
 *     CmpNotifyChangeKey @ 0x14049A500 (CmpNotifyChangeKey.c)
 *     ExLockUserBuffer @ 0x1404AC538 (ExLockUserBuffer.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1404AE068 (RtlpProcessIFEOKeyFilter.c)
 *     NtQueueApcThreadEx @ 0x1404B1628 (NtQueueApcThreadEx.c)
 *     RtlQueryImageFileKeyOption @ 0x1404B33FC (RtlQueryImageFileKeyOption.c)
 *     RtlAcquirePrivilege @ 0x1404B404C (RtlAcquirePrivilege.c)
 *     NtRegisterThreadTerminatePort @ 0x1404C39FC (NtRegisterThreadTerminatePort.c)
 *     RtlQueryModuleInformation @ 0x14050290C (RtlQueryModuleInformation.c)
 *     DbgkRegisterErrorPort @ 0x140547930 (DbgkRegisterErrorPort.c)
 *     NtCompactKeys @ 0x1405DB720 (NtCompactKeys.c)
 *     NtRenameKey @ 0x1405DC010 (NtRenameKey.c)
 *     CmpSaveKeyByFileCopy @ 0x1405EAD8C (CmpSaveKeyByFileCopy.c)
 *     DbgkpQueueMessage @ 0x1405EF390 (DbgkpQueueMessage.c)
 *     KeEnableProfiling @ 0x14061A98C (KeEnableProfiling.c)
 *     RtlAddResourceAttributeAce @ 0x140644DCC (RtlAddResourceAttributeAce.c)
 *     RtlGetAppContainerParent @ 0x140646A50 (RtlGetAppContainerParent.c)
 *     ExpGetDeviceDataInformation @ 0x14066ABBC (ExpGetDeviceDataInformation.c)
 *     ExpQueryElamCertInfo @ 0x14066B1D0 (ExpQueryElamCertInfo.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x14066B6E0 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpStringCapture @ 0x14066BCE0 (ExpStringCapture.c)
 * Callees:
 *     PspExpandQuota @ 0x140012E80 (PspExpandQuota.c)
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     MmIsSpecialPoolAddress @ 0x140079508 (MmIsSpecialPoolAddress.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

PVOID __stdcall ExAllocatePoolWithQuotaTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  int v3; // ebp
  unsigned __int32 v4; // ebx
  POOL_TYPE v5; // ebx
  PEPROCESS Process; // rsi
  unsigned __int64 PoolWithTag; // rax
  char *v8; // r15
  char *v9; // rbp
  __int64 v10; // rdx
  char *v11; // r8
  unsigned int v12; // ecx
  bool v13; // zf
  __int64 v14; // r14
  unsigned __int64 v15; // rax
  signed int v16; // ecx
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
  signed int v34; // [rsp+30h] [rbp-58h]
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
  PoolWithTag = (unsigned __int64)ExAllocatePoolWithTag(v5, NumberOfBytes, Tag);
  v8 = (char *)PoolWithTag;
  if ( (PoolWithTag & 0xFFF) == 0 )
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
    if ( !PspExpandQuota(v16, (__int64)v18, v20, v14, &v35) )
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
