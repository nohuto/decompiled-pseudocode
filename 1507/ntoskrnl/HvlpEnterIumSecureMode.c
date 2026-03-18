/*
 * XREFs of HvlpEnterIumSecureMode @ 0x1401289D4
 * Callers:
 *     KeRequestTerminationThread @ 0x14000C2F4 (KeRequestTerminationThread.c)
 *     HvlFlushTbAllPartitions @ 0x1400E6968 (HvlFlushTbAllPartitions.c)
 *     HvlGetNestedPageProtectionFlags @ 0x14015A5A4 (HvlGetNestedPageProtectionFlags.c)
 *     HvlRegisterLogPages @ 0x14015A60C (HvlRegisterLogPages.c)
 *     KeBalanceSetManager @ 0x140165F30 (KeBalanceSetManager.c)
 *     VslExchangeEntropy @ 0x14016FC5C (VslExchangeEntropy.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1401E9568 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlPrepareForRootCrashdump @ 0x1401E9B20 (HvlPrepareForRootCrashdump.c)
 *     HvlResumeFromRootCrashdump @ 0x1401E9EEC (HvlResumeFromRootCrashdump.c)
 *     HvlPrepareForSecureHibernate @ 0x1401ED27C (HvlPrepareForSecureHibernate.c)
 *     HvlMakeProtectedPageWritable @ 0x1401EDDC8 (HvlMakeProtectedPageWritable.c)
 *     HvlNotifyShutdown @ 0x1401EDE2C (HvlNotifyShutdown.c)
 *     HvlRegisterSecureSystemProcess @ 0x1401EDE94 (HvlRegisterSecureSystemProcess.c)
 *     HvlReportBugCheckProgress @ 0x1401EDF04 (HvlReportBugCheckProgress.c)
 *     HvlpFastFlushSecureRangeList @ 0x1401EDFF0 (HvlpFastFlushSecureRangeList.c)
 *     HvlpFlushSecureAddressSpace @ 0x1401EE0C0 (HvlpFlushSecureAddressSpace.c)
 *     HvlpIumEfiRuntimeService @ 0x1401EE194 (HvlpIumEfiRuntimeService.c)
 *     HvlpIumPhase3Initialize @ 0x1401EE378 (HvlpIumPhase3Initialize.c)
 *     HvlpSlowFlushSecureRangeList @ 0x1401EE57C (HvlpSlowFlushSecureRangeList.c)
 *     VslRetrieveMailbox @ 0x1401EE654 (VslRetrieveMailbox.c)
 *     HvlpEndSecurePageListIteration @ 0x1401F04E0 (HvlpEndSecurePageListIteration.c)
 *     HvlpGetSecurePageList @ 0x1401F064C (HvlpGetSecurePageList.c)
 *     HvlpStartSecurePageListIteration @ 0x1401F098C (HvlpStartSecurePageListIteration.c)
 *     KeCopyPrivilegedPage @ 0x1401FF210 (KeCopyPrivilegedPage.c)
 *     KeReservePrivilegedPages @ 0x1401FF280 (KeReservePrivilegedPages.c)
 *     KeSetPagePrivilege @ 0x1401FF2DC (KeSetPagePrivilege.c)
 *     KeSecureProcess @ 0x1401FF820 (KeSecureProcess.c)
 *     KeUnsecureProcess @ 0x1401FFA8C (KeUnsecureProcess.c)
 *     HvlCloseSecureHandle @ 0x14026FE60 (HvlCloseSecureHandle.c)
 *     HvlCreateSecureAllocation @ 0x14026FEAC (HvlCreateSecureAllocation.c)
 *     HvlCreateSecureImageSection @ 0x14026FF08 (HvlCreateSecureImageSection.c)
 *     HvlFillSecureAllocation @ 0x14026FFF4 (HvlFillSecureAllocation.c)
 *     HvlFinalizeSecureImageHash @ 0x1402700F0 (HvlFinalizeSecureImageHash.c)
 *     HvlFinishSecureImageValidation @ 0x1402701CC (HvlFinishSecureImageValidation.c)
 *     HvlMakeCodeCatalog @ 0x140270340 (HvlMakeCodeCatalog.c)
 *     HvlPrepareSecureImageRelocations @ 0x1402703A4 (HvlPrepareSecureImageRelocations.c)
 *     HvlRelocateImage @ 0x140270468 (HvlRelocateImage.c)
 *     HvlTransferSecureImageVersionResource @ 0x1402704B8 (HvlTransferSecureImageVersionResource.c)
 *     HvlValidateDynamicCodePages @ 0x14027058C (HvlValidateDynamicCodePages.c)
 *     HvlValidateSecureImagePages @ 0x140270778 (HvlValidateSecureImagePages.c)
 *     DbgkCopyProcessDebugPort @ 0x14046ACD0 (DbgkCopyProcessDebugPort.c)
 *     PopAllocateHiberContext @ 0x14056A188 (PopAllocateHiberContext.c)
 *     HvlInitializeProcessor @ 0x14059A970 (HvlInitializeProcessor.c)
 *     NtDebugActiveProcess @ 0x1406685CC (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140668A2C (NtRemoveProcessDebug.c)
 *     HvlFreeSecureHibernateResources @ 0x140670914 (HvlFreeSecureHibernateResources.c)
 *     HvlCreateSecureProcess @ 0x14067095C (HvlCreateSecureProcess.c)
 *     HvlCreateSecureThread @ 0x1406709BC (HvlCreateSecureThread.c)
 *     HvlGetSecurePebAddress @ 0x140670A50 (HvlGetSecurePebAddress.c)
 *     HvlGetSecureTebAddress @ 0x140670AB4 (HvlGetSecureTebAddress.c)
 *     HvlGetSetSecureContext @ 0x140670B1C (HvlGetSetSecureContext.c)
 *     HvlIumEtwEnableCallback @ 0x140670BB8 (HvlIumEtwEnableCallback.c)
 *     HvlRundownSecureProcess @ 0x140670C34 (HvlRundownSecureProcess.c)
 *     HvlStartSecureThread @ 0x140670C80 (HvlStartSecureThread.c)
 *     HvlTerminateSecureThread @ 0x140670CD0 (HvlTerminateSecureThread.c)
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 *     PspInitPhase3 @ 0x1407E8FD8 (PspInitPhase3.c)
 *     HvlpInitializeIum @ 0x1407F9184 (HvlpInitializeIum.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x140048A40 (KeReleaseSemaphore.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     _TlgWrite @ 0x1400EFEB0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlpSwitchToVsmVtl1 @ 0x14017EE60 (HvlpSwitchToVsmVtl1.c)
 *     HvlpDispatchIumSyscall @ 0x14017EFA0 (HvlpDispatchIumSyscall.c)
 *     PsDispatchIumService @ 0x140244710 (PsDispatchIumService.c)
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
  __int16 v22; // ax
  char PreviousMode; // [rsp+38h] [rbp-D0h] BYREF
  char v24; // [rsp+39h] [rbp-CFh] BYREF
  bool v25; // [rsp+3Ah] [rbp-CEh] BYREF
  unsigned __int8 v26; // [rsp+3Bh] [rbp-CDh] BYREF
  unsigned __int8 v27; // [rsp+3Ch] [rbp-CCh] BYREF
  char v28; // [rsp+3Dh] [rbp-CBh] BYREF
  int v29; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v30; // [rsp+44h] [rbp-C4h] BYREF
  __int16 v31; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v32; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v33; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v34; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v35; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v36; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR v37; // [rsp+68h] [rbp-A0h] BYREF
  char *v38; // [rsp+88h] [rbp-80h]
  __int64 v39; // [rsp+90h] [rbp-78h]
  __int16 *v40; // [rsp+98h] [rbp-70h]
  __int64 v41; // [rsp+A0h] [rbp-68h]
  unsigned int *v42; // [rsp+A8h] [rbp-60h]
  __int64 v43; // [rsp+B0h] [rbp-58h]
  char *v44; // [rsp+B8h] [rbp-50h]
  __int64 v45; // [rsp+C0h] [rbp-48h]
  bool *v46; // [rsp+C8h] [rbp-40h]
  __int64 v47; // [rsp+D0h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D8h] [rbp-30h] BYREF
  char *v49; // [rsp+F8h] [rbp-10h]
  __int64 v50; // [rsp+100h] [rbp-8h]
  __int16 *v51; // [rsp+108h] [rbp+0h]
  __int64 v52; // [rsp+110h] [rbp+8h]
  unsigned int *v53; // [rsp+118h] [rbp+10h]
  __int64 v54; // [rsp+120h] [rbp+18h]
  EVENT_DATA_DESCRIPTOR v55; // [rsp+128h] [rbp+20h] BYREF
  char *v56; // [rsp+148h] [rbp+40h]
  __int64 v57; // [rsp+150h] [rbp+48h]
  __int16 *v58; // [rsp+158h] [rbp+50h]
  __int64 v59; // [rsp+160h] [rbp+58h]
  unsigned int *v60; // [rsp+168h] [rbp+60h]
  __int64 v61; // [rsp+170h] [rbp+68h]
  EVENT_DATA_DESCRIPTOR v62; // [rsp+178h] [rbp+70h] BYREF
  char *v63; // [rsp+198h] [rbp+90h]
  __int64 v64; // [rsp+1A0h] [rbp+98h]
  int *v65; // [rsp+1A8h] [rbp+A0h]
  __int64 v66; // [rsp+1B0h] [rbp+A8h]
  __int64 *v67; // [rsp+1B8h] [rbp+B0h]
  __int64 v68; // [rsp+1C0h] [rbp+B8h]

  v6 = a3;
  if ( !HvlpVsmVtlCallVa )
    return -1073741667;
  *a4 = a1;
  *((_WORD *)a4 + 1) = a2;
  if ( a1 > 1u )
  {
    if ( stru_14031E8B0.LevelPlus1 > 5 && TlgKeywordOn(&stru_14031E8B0, 1uLL) )
    {
      v28 = v9;
      v49 = &v28;
      v51 = &v32;
      v53 = &v36;
      v32 = v10;
      v36 = v6;
      v50 = v8;
      v52 = 2LL;
      v54 = 4LL;
      TlgWrite(&stru_14031E8B0, &unk_1402A3DC3, 0LL, 0LL, 5u, &pData);
    }
    HvlpSwitchToVsmVtl1(0LL, a4);
    if ( stru_14031E8B0.LevelPlus1 > 5 && TlgKeywordOn(&stru_14031E8B0, 1uLL) )
    {
      v27 = a4[1];
      LOWORD(v29) = *((_WORD *)a4 + 1);
      v63 = (char *)&v27;
      v65 = &v29;
      v67 = &v33;
      LODWORD(v33) = v6;
      v64 = v11;
      v66 = 2LL;
      v68 = 4LL;
      TlgWrite(&stru_14031E8B0, &unk_1402A3D7E, 0LL, 0LL, 5u, &v62);
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
  v33 = CurrentIrql;
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
      LOBYTE(CurrentIrql) = v33;
    }
  }
  if ( (_BYTE)CurrentIrql == 1 )
  {
    LOBYTE(v4) = 1;
    v29 = v4;
LABEL_27:
    --CurrentThread->KernelApcDisable;
    goto LABEL_28;
  }
  v4 = CurrentThread->SecureThreadCookie == 0;
  if ( (_BYTE)CurrentIrql )
    v4 = 0;
  v29 = v4;
  if ( v4 )
    goto LABEL_27;
  while ( 1 )
  {
LABEL_28:
    if ( stru_14031E8B0.LevelPlus1 > 5 && TlgKeywordOn(&stru_14031E8B0, 1uLL) )
    {
      v26 = *a4;
      v30 = *((_WORD *)a4 + 1);
      v38 = (char *)&v26;
      v40 = &v30;
      v42 = &v34;
      v44 = &v24;
      v46 = &v25;
      v34 = v6;
      v24 = v16;
      v25 = v4;
      v39 = 1LL;
      v41 = 2LL;
      v43 = 4LL;
      v45 = 1LL;
      v47 = 1LL;
      TlgWrite(&stru_14031E8B0, &unk_1402A3D19, 0LL, 0LL, 7u, &v37);
    }
    HvlpSwitchToVsmVtl1(0LL, a4);
    LODWORD(v17) = 1;
    if ( stru_14031E8B0.LevelPlus1 > 5 && TlgKeywordOn(&stru_14031E8B0, 1uLL) )
    {
      PreviousMode = a4[1];
      v31 = *((_WORD *)a4 + 1);
      v56 = &PreviousMode;
      v58 = &v31;
      v60 = &v35;
      v35 = v6;
      v57 = v17;
      v59 = 2LL;
      v61 = 4LL;
      TlgWrite(&stru_14031E8B0, &unk_1402A3CD4, 0LL, 0LL, 5u, &v55);
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
    if ( v19 )
    {
      if ( a4[1] == 2 )
      {
        if ( !CurrentThread->PreviousMode )
        {
          *((_QWORD *)a4 + 1) = -1073741776LL;
          goto LABEL_50;
        }
      }
      else if ( a4[1] != 3 )
      {
        goto LABEL_50;
      }
      if ( *((unsigned __int16 *)a4 + 1) < (unsigned int)xmmword_1403D17D0 )
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
    }
    else
    {
      PsDispatchIumService(a4);
    }
LABEL_50:
    if ( !v6 )
      CurrentThread->SecureThreadCookie = 0;
    LOBYTE(v4) = v29;
    *a4 = 0;
    *((_WORD *)a4 + 1) = 0;
  }
  if ( !v6 && (unsigned __int8)v33 < 2u && (HvlpFlags & 0x2000) != 0 )
    KeReleaseSemaphore(&HvlpIumThreadSemaphore, 0, v17, 0);
  if ( v4 )
  {
    v22 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v22;
    if ( !v22
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return *((_DWORD *)a4 + 2);
}
