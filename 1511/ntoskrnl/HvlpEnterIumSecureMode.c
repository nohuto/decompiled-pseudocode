/*
 * XREFs of HvlpEnterIumSecureMode @ 0x1400EB69C
 * Callers:
 *     KeRequestTerminationThread @ 0x140030C48 (KeRequestTerminationThread.c)
 *     HvlFlushTbAllPartitions @ 0x1400E8120 (HvlFlushTbAllPartitions.c)
 *     HvlGetNestedPageProtectionFlags @ 0x140126EC8 (HvlGetNestedPageProtectionFlags.c)
 *     HvlRegisterLogPages @ 0x140126F30 (HvlRegisterLogPages.c)
 *     KeBalanceSetManager @ 0x1401373C4 (KeBalanceSetManager.c)
 *     VslExchangeEntropy @ 0x140141C38 (VslExchangeEntropy.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1401B0B6C (HvlNotifyDebugDeviceAvailable.c)
 *     HvlPrepareForRootCrashdump @ 0x1401B0D54 (HvlPrepareForRootCrashdump.c)
 *     HvlResumeFromRootCrashdump @ 0x1401B0EDC (HvlResumeFromRootCrashdump.c)
 *     HvlPrepareForSecureHibernate @ 0x1401B2A10 (HvlPrepareForSecureHibernate.c)
 *     HvlAbortLiveDump @ 0x1401B2FB8 (HvlAbortLiveDump.c)
 *     HvlFinalizeLiveDumpInSk @ 0x1401B3014 (HvlFinalizeLiveDumpInSk.c)
 *     HvlLiveDumpQuerySecondaryDataSize @ 0x1401B312C (HvlLiveDumpQuerySecondaryDataSize.c)
 *     HvlMakeProtectedPageWritable @ 0x1401B319C (HvlMakeProtectedPageWritable.c)
 *     HvlNotifyShutdown @ 0x1401B3200 (HvlNotifyShutdown.c)
 *     HvlQuerySecureKernelProfileInformation @ 0x1401B3250 (HvlQuerySecureKernelProfileInformation.c)
 *     HvlRegisterSecureSystemProcess @ 0x1401B3340 (HvlRegisterSecureSystemProcess.c)
 *     HvlReportBugCheckProgress @ 0x1401B33B0 (HvlReportBugCheckProgress.c)
 *     HvlSetupLiveDumpBufferInSk @ 0x1401B349C (HvlSetupLiveDumpBufferInSk.c)
 *     HvlpAddLiveDumpBufferChunk @ 0x1401B3598 (HvlpAddLiveDumpBufferChunk.c)
 *     HvlpFastFlushSecureRangeList @ 0x1401B3648 (HvlpFastFlushSecureRangeList.c)
 *     HvlpFlushSecureAddressSpace @ 0x1401B3718 (HvlpFlushSecureAddressSpace.c)
 *     HvlpIumEfiRuntimeService @ 0x1401B3808 (HvlpIumEfiRuntimeService.c)
 *     HvlpIumPhase3Initialize @ 0x1401B3964 (HvlpIumPhase3Initialize.c)
 *     HvlpSetupLiveDumpBuffer @ 0x1401B3B68 (HvlpSetupLiveDumpBuffer.c)
 *     HvlpSlowFlushSecureRangeList @ 0x1401B3BF0 (HvlpSlowFlushSecureRangeList.c)
 *     VslIsTrustletRunning @ 0x1401B3CBC (VslIsTrustletRunning.c)
 *     VslRetrieveMailbox @ 0x1401B3D38 (VslRetrieveMailbox.c)
 *     HvlpDetermineEnlightenments @ 0x1401B3EC0 (HvlpDetermineEnlightenments.c)
 *     HvlCollectLivedump @ 0x1401B458C (HvlCollectLivedump.c)
 *     HvlpEndSecurePageListIteration @ 0x1401B534C (HvlpEndSecurePageListIteration.c)
 *     HvlpGetSecurePageList @ 0x1401B54B8 (HvlpGetSecurePageList.c)
 *     HvlpStartSecurePageListIteration @ 0x1401B56DC (HvlpStartSecurePageListIteration.c)
 *     KeConfigureDynamicMemory @ 0x1401C3254 (KeConfigureDynamicMemory.c)
 *     KeCopyPrivilegedPage @ 0x1401C32B8 (KeCopyPrivilegedPage.c)
 *     KeReservePrivilegedPages @ 0x1401C3328 (KeReservePrivilegedPages.c)
 *     KeSetPagePrivilege @ 0x1401C3384 (KeSetPagePrivilege.c)
 *     KeSecureProcess @ 0x1401C38F4 (KeSecureProcess.c)
 *     KeUnsecureProcess @ 0x1401C3A8C (KeUnsecureProcess.c)
 *     HvlCloseSecureHandle @ 0x140220A0C (HvlCloseSecureHandle.c)
 *     HvlCreateSecureAllocation @ 0x140220A58 (HvlCreateSecureAllocation.c)
 *     HvlCreateSecureImageSection @ 0x140220AB4 (HvlCreateSecureImageSection.c)
 *     HvlFillSecureAllocation @ 0x140220BA0 (HvlFillSecureAllocation.c)
 *     HvlFinalizeSecureImageHash @ 0x140220C9C (HvlFinalizeSecureImageHash.c)
 *     HvlFinishSecureImageValidation @ 0x140220D78 (HvlFinishSecureImageValidation.c)
 *     HvlMakeCodeCatalog @ 0x140220EEC (HvlMakeCodeCatalog.c)
 *     HvlPrepareSecureImageRelocations @ 0x140220F50 (HvlPrepareSecureImageRelocations.c)
 *     HvlRelocateImage @ 0x140221014 (HvlRelocateImage.c)
 *     HvlTransferSecureImageVersionResource @ 0x140221064 (HvlTransferSecureImageVersionResource.c)
 *     HvlValidateDynamicCodePages @ 0x140221138 (HvlValidateDynamicCodePages.c)
 *     HvlValidateSecureImagePages @ 0x140221324 (HvlValidateSecureImagePages.c)
 *     DbgkCopyProcessDebugPort @ 0x1403E38B4 (DbgkCopyProcessDebugPort.c)
 *     PopAllocateHiberContext @ 0x1404F64C8 (PopAllocateHiberContext.c)
 *     HvlInitializeProcessor @ 0x14052F954 (HvlInitializeProcessor.c)
 *     NtDebugActiveProcess @ 0x1405EFBC8 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x1405EFF80 (NtRemoveProcessDebug.c)
 *     HvlFreeSecureHibernateResources @ 0x1405F6A44 (HvlFreeSecureHibernateResources.c)
 *     HvlCreateSecureProcess @ 0x1405F6A8C (HvlCreateSecureProcess.c)
 *     HvlCreateSecureThread @ 0x1405F6AEC (HvlCreateSecureThread.c)
 *     HvlGetSecurePebAddress @ 0x1405F6B80 (HvlGetSecurePebAddress.c)
 *     HvlGetSecureTebAddress @ 0x1405F6BE4 (HvlGetSecureTebAddress.c)
 *     HvlGetSetSecureContext @ 0x1405F6C4C (HvlGetSetSecureContext.c)
 *     HvlIumEtwEnableCallback @ 0x1405F6CA8 (HvlIumEtwEnableCallback.c)
 *     HvlRundownSecureProcess @ 0x1405F6D24 (HvlRundownSecureProcess.c)
 *     HvlStartSecureThread @ 0x1405F6D70 (HvlStartSecureThread.c)
 *     HvlTerminateSecureThread @ 0x1405F6DC0 (HvlTerminateSecureThread.c)
 *     HvlpConnectedStandbyPoCallback @ 0x1405F6E38 (HvlpConnectedStandbyPoCallback.c)
 *     HvlpConnectedStandbyWnfCallback @ 0x1405F6EDC (HvlpConnectedStandbyWnfCallback.c)
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 *     HvlConnectSwInterrupt @ 0x14074F444 (HvlConnectSwInterrupt.c)
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
 *     PspInitPhase3 @ 0x140772470 (PspInitPhase3.c)
 *     HvlpInitializeIum @ 0x1407829C0 (HvlpInitializeIum.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x140084230 (KeReleaseSemaphore.c)
 *     _TlgKeywordOn @ 0x1400923CC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140092474 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     HvlpSwitchToVsmVtl1 @ 0x140150490 (HvlpSwitchToVsmVtl1.c)
 *     HvlpDispatchIumSyscall @ 0x1401505D0 (HvlpDispatchIumSyscall.c)
 *     PsDispatchIumService @ 0x1401F5B10 (PsDispatchIumService.c)
 */

NTSTATUS __fastcall HvlpEnterIumSecureMode(unsigned __int8 a1, __int16 a2, unsigned int a3, unsigned __int8 *a4)
{
  BOOL v4; // ebx
  unsigned int v6; // r14d
  NTSTATUS result; // eax
  __int64 v8; // rdx
  char v9; // r9
  __int16 v10; // r10
  __int64 v11; // rdx
  char v12; // al
  struct _KTHREAD *CurrentThread; // rsi
  __int64 CurrentIrql; // r9
  unsigned int SecureThreadCookie; // eax
  char v16; // r9
  __int64 v17; // rdx
  char v18; // al
  unsigned __int8 v19; // dl
  __int64 v20; // rcx
  char v21; // al
  char PreviousMode; // [rsp+38h] [rbp-D0h] BYREF
  char v23; // [rsp+39h] [rbp-CFh] BYREF
  bool v24; // [rsp+3Ah] [rbp-CEh] BYREF
  unsigned __int8 v25; // [rsp+3Bh] [rbp-CDh] BYREF
  unsigned __int8 v26; // [rsp+3Ch] [rbp-CCh] BYREF
  char v27; // [rsp+3Dh] [rbp-CBh] BYREF
  int v28; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v29; // [rsp+44h] [rbp-C4h] BYREF
  __int16 v30; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v31; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v32; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v33; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v34; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v35; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR v36; // [rsp+68h] [rbp-A0h] BYREF
  char *v37; // [rsp+88h] [rbp-80h]
  __int64 v38; // [rsp+90h] [rbp-78h]
  __int16 *v39; // [rsp+98h] [rbp-70h]
  __int64 v40; // [rsp+A0h] [rbp-68h]
  unsigned int *v41; // [rsp+A8h] [rbp-60h]
  __int64 v42; // [rsp+B0h] [rbp-58h]
  char *v43; // [rsp+B8h] [rbp-50h]
  __int64 v44; // [rsp+C0h] [rbp-48h]
  bool *v45; // [rsp+C8h] [rbp-40h]
  __int64 v46; // [rsp+D0h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D8h] [rbp-30h] BYREF
  char *v48; // [rsp+F8h] [rbp-10h]
  __int64 v49; // [rsp+100h] [rbp-8h]
  __int16 *v50; // [rsp+108h] [rbp+0h]
  __int64 v51; // [rsp+110h] [rbp+8h]
  unsigned int *v52; // [rsp+118h] [rbp+10h]
  __int64 v53; // [rsp+120h] [rbp+18h]
  EVENT_DATA_DESCRIPTOR v54; // [rsp+128h] [rbp+20h] BYREF
  char *v55; // [rsp+148h] [rbp+40h]
  __int64 v56; // [rsp+150h] [rbp+48h]
  __int16 *v57; // [rsp+158h] [rbp+50h]
  __int64 v58; // [rsp+160h] [rbp+58h]
  unsigned int *v59; // [rsp+168h] [rbp+60h]
  __int64 v60; // [rsp+170h] [rbp+68h]
  EVENT_DATA_DESCRIPTOR v61; // [rsp+178h] [rbp+70h] BYREF
  char *v62; // [rsp+198h] [rbp+90h]
  __int64 v63; // [rsp+1A0h] [rbp+98h]
  int *v64; // [rsp+1A8h] [rbp+A0h]
  __int64 v65; // [rsp+1B0h] [rbp+A8h]
  __int64 *v66; // [rsp+1B8h] [rbp+B0h]
  __int64 v67; // [rsp+1C0h] [rbp+B8h]

  v6 = a3;
  if ( !HvlpVsmVtlCallVa )
    return -1073741667;
  *a4 = a1;
  *((_WORD *)a4 + 1) = a2;
  if ( a1 > 1u )
  {
    if ( stru_1402CF860.LevelPlus1 > 5 && TlgKeywordOn(&stru_1402CF860, 1uLL) )
    {
      v27 = v9;
      v48 = &v27;
      v50 = &v31;
      v52 = &v35;
      v31 = v10;
      v35 = v6;
      v49 = v8;
      v51 = 2LL;
      v53 = 4LL;
      TlgWrite(&stru_1402CF860, &unk_140253A0B, 0LL, 0LL, 5u, &pData);
    }
    HvlpSwitchToVsmVtl1(0LL, a4);
    if ( stru_1402CF860.LevelPlus1 > 5 && TlgKeywordOn(&stru_1402CF860, 1uLL) )
    {
      v26 = a4[1];
      LOWORD(v28) = *((_WORD *)a4 + 1);
      v62 = (char *)&v26;
      v64 = &v28;
      v66 = &v32;
      LODWORD(v32) = v6;
      v63 = v11;
      v65 = 2LL;
      v67 = 4LL;
      TlgWrite(&stru_1402CF860, &unk_1402539C6, 0LL, 0LL, 5u, &v61);
    }
    v12 = a4[1];
    if ( v12 < 0 )
    {
      __debugbreak();
      a4[1] = v12 & 0x7F;
    }
    return 0;
  }
  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  v32 = CurrentIrql;
  if ( a3 )
  {
    *((_DWORD *)a4 + 1) = a3;
  }
  else
  {
    SecureThreadCookie = CurrentThread->SecureThreadCookie;
    *((_DWORD *)a4 + 1) = SecureThreadCookie;
    if ( SecureThreadCookie )
    {
      v6 = SecureThreadCookie;
    }
    else if ( (HvlpFlags & 0x2000) != 0 && (unsigned __int8)CurrentIrql < 2u )
    {
      result = KeWaitForSingleObject(&HvlpIumThreadSemaphore, Executive, 0, 0, 0LL);
      if ( result < 0 )
        return result;
      LOBYTE(CurrentIrql) = v32;
    }
  }
  if ( (_BYTE)CurrentIrql == 1 )
  {
    LOBYTE(v4) = 1;
    v28 = v4;
LABEL_27:
    --CurrentThread->KernelApcDisable;
    goto LABEL_28;
  }
  v4 = CurrentThread->SecureThreadCookie == 0;
  if ( (_BYTE)CurrentIrql )
    v4 = 0;
  v28 = v4;
  if ( v4 )
    goto LABEL_27;
  while ( 1 )
  {
LABEL_28:
    if ( stru_1402CF860.LevelPlus1 > 5 && TlgKeywordOn(&stru_1402CF860, 1uLL) )
    {
      v25 = *a4;
      v29 = *((_WORD *)a4 + 1);
      v37 = (char *)&v25;
      v39 = &v29;
      v41 = &v33;
      v43 = &v23;
      v45 = &v24;
      v33 = v6;
      v23 = v16;
      v24 = v4;
      v38 = 1LL;
      v40 = 2LL;
      v42 = 4LL;
      v44 = 1LL;
      v46 = 1LL;
      TlgWrite(&stru_1402CF860, &unk_140253961, 0LL, 0LL, 7u, &v36);
    }
    HvlpSwitchToVsmVtl1(0LL, a4);
    LODWORD(v17) = 1;
    if ( stru_1402CF860.LevelPlus1 > 5 && TlgKeywordOn(&stru_1402CF860, 1uLL) )
    {
      PreviousMode = a4[1];
      v30 = *((_WORD *)a4 + 1);
      v55 = &PreviousMode;
      v57 = &v30;
      v59 = &v34;
      v34 = v6;
      v56 = v17;
      v58 = 2LL;
      v60 = 4LL;
      TlgWrite(&stru_1402CF860, &unk_14025391C, 0LL, 0LL, 5u, &v54);
      LODWORD(v17) = 1;
    }
    v18 = a4[1];
    if ( v18 < 0 )
    {
      __debugbreak();
      a4[1] = v18 & 0x7F;
    }
    if ( a4[1] == (_BYTE)v17 )
      break;
    if ( !v6 )
      CurrentThread->SecureThreadCookie = *((_DWORD *)a4 + 1);
    v19 = a4[1];
    if ( !v19 )
      goto LABEL_43;
    switch ( a4[1] )
    {
      case 2u:
        if ( !CurrentThread->PreviousMode )
        {
          *((_QWORD *)a4 + 1) = -1073741776LL;
          goto LABEL_44;
        }
        break;
      case 3u:
        break;
      case 5u:
LABEL_43:
        PsDispatchIumService(a4);
        goto LABEL_44;
      default:
        goto LABEL_44;
    }
    if ( *((unsigned __int16 *)a4 + 1) < (unsigned int)xmmword_140382790 )
    {
      PreviousMode = CurrentThread->PreviousMode;
      if ( v19 == 3 )
        CurrentThread->PreviousMode = 0;
      v20 = (int)HvlpDispatchIumSyscall(
                   KeServiceDescriptorTable
                 + (*(int *)(KeServiceDescriptorTable + 4LL * *((unsigned __int16 *)a4 + 1)) >> 4),
                   a4 + 8,
                   *(_DWORD *)(KeServiceDescriptorTable + 4LL * *((unsigned __int16 *)a4 + 1)) & 0xF);
      v21 = PreviousMode;
      *((_QWORD *)a4 + 1) = v20;
      CurrentThread->PreviousMode = v21;
    }
    else
    {
      *((_QWORD *)a4 + 1) = -1073741796LL;
    }
LABEL_44:
    if ( !v6 )
      CurrentThread->SecureThreadCookie = 0;
    LOBYTE(v4) = v28;
    *a4 = 0;
    *((_WORD *)a4 + 1) = 0;
  }
  if ( !v6 && (unsigned __int8)v32 < 2u && (HvlpFlags & 0x2000) != 0 )
    KeReleaseSemaphore(&HvlpIumThreadSemaphore, 0, v17, 0);
  if ( v4 )
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return *((_DWORD *)a4 + 2);
}
