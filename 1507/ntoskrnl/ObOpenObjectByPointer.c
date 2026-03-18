/*
 * XREFs of ObOpenObjectByPointer @ 0x140434390
 * Callers:
 *     CmLoadKeyHelper @ 0x1401DE79C (CmLoadKeyHelper.c)
 *     PspCreateObjectHandle @ 0x140421204 (PspCreateObjectHandle.c)
 *     NtOpenThreadTokenEx @ 0x140433000 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x140434930 (NtOpenProcessTokenEx.c)
 *     PiCMDuplicateRegistryHandle @ 0x140442BAC (PiCMDuplicateRegistryHandle.c)
 *     CmConvertHandleToKernelHandle @ 0x1404455C0 (CmConvertHandleToKernelHandle.c)
 *     ObSetDirectoryDeviceMap @ 0x14046213C (ObSetDirectoryDeviceMap.c)
 *     NtOpenPrivateNamespace @ 0x14046F864 (NtOpenPrivateNamespace.c)
 *     NtCreateWorkerFactory @ 0x14046FE54 (NtCreateWorkerFactory.c)
 *     ExpGetProcessInformation @ 0x140497410 (ExpGetProcessInformation.c)
 *     WmipIoControl @ 0x1404A915C (WmipIoControl.c)
 *     ExGetNextProcess @ 0x14050D53C (ExGetNextProcess.c)
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 *     EtwpOpenConsumer @ 0x14054D81C (EtwpOpenConsumer.c)
 *     NtGetNextThread @ 0x140554914 (NtGetNextThread.c)
 *     NtGetNextProcess @ 0x14056803C (NtGetNextProcess.c)
 *     ObSetDeviceMap @ 0x1405BBFDC (ObSetDeviceMap.c)
 *     SmRegistrationInfoFill @ 0x1405BD184 (SmRegistrationInfoFill.c)
 *     DbgkOpenProcessDebugPort @ 0x140666668 (DbgkOpenProcessDebugPort.c)
 *     DbgkpOpenHandles @ 0x140667048 (DbgkpOpenHandles.c)
 *     IopInvalidateVolumesForDevice @ 0x140671B84 (IopInvalidateVolumesForDevice.c)
 *     ObOpenObjectByPointerWithTag @ 0x1406AB7DC (ObOpenObjectByPointerWithTag.c)
 *     SmKmFileInfoDuplicate @ 0x1406DC9E8 (SmKmFileInfoDuplicate.c)
 *     EtwpCapturePreviousRegistryData @ 0x1406E6FE4 (EtwpCapturePreviousRegistryData.c)
 * Callees:
 *     ObReferenceObjectByPointerWithTag @ 0x140014FB0 (ObReferenceObjectByPointerWithTag.c)
 *     SepDeleteAccessState @ 0x14004E240 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14004E2C0 (SepCreateAccessStateFromSubjectContext.c)
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ObFastReferenceObjectLocked @ 0x140085588 (ObFastReferenceObjectLocked.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 */

NTSTATUS __stdcall ObOpenObjectByPointer(
        PVOID Object,
        ULONG HandleAttributes,
        PACCESS_STATE PassedAccessState,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        PHANDLE Handle)
{
  POBJECT_TYPE v9; // rdi
  void *v10; // rbp
  NTSTATUS result; // eax
  __int64 v13; // r9
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 *Process; // rsi
  _QWORD *v16; // rbp
  ULONG_PTR v17; // rbx
  __int64 v18; // r9
  NTSTATUS v19; // ebx
  NTSTATUS v20; // edi
  PACCESS_TOKEN ClientToken; // rcx
  __int64 v22; // rbp
  __int64 v23; // r9
  unsigned __int64 *p_WaitBlockList; // rcx
  __int16 v25; // ax
  unsigned __int64 *v26; // rsi
  __int64 v27; // rbx
  __int64 v28; // r9
  __int16 v29; // ax
  struct _KTHREAD *v31; // [rsp+60h] [rbp-208h]
  struct _KTHREAD *v32; // [rsp+60h] [rbp-208h]
  __int128 v33; // [rsp+70h] [rbp-1F8h] BYREF
  ULONG_PTR v34; // [rsp+80h] [rbp-1E8h]
  unsigned __int64 v35; // [rsp+88h] [rbp-1E0h]
  _QWORD v36[20]; // [rsp+90h] [rbp-1D8h] BYREF
  __int64 v37[28]; // [rsp+130h] [rbp-138h] BYREF

  v9 = ObjectType;
  v10 = 0LL;
  *Handle = 0LL;
  result = ObReferenceObjectByPointerWithTag(Object, 0, ObjectType, AccessMode, 0x6E48624Fu);
  if ( result >= 0 )
  {
    if ( !ObjectType )
      v9 = (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( (HandleAttributes & v9->TypeInfo.InvalidAttributes) != 0
      || (*((char *)Object - 21) & 1) != 0 && *((_QWORD *)Object - 2) )
    {
      ++ObpInvalidOpenByPointer;
      ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      return -1073741811;
    }
    else
    {
      if ( !PassedAccessState )
      {
        CurrentThread = KeGetCurrentThread();
        Process = (unsigned __int64 *)CurrentThread->ApcState.Process;
        v35 = Process[93];
        if ( CurrentThread && (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 8) != 0 )
        {
          v31 = KeGetCurrentThread();
          --v31->KernelApcDisable;
          v22 = KeAbPreAcquire((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL, 0LL, v13);
          p_WaitBlockList = (unsigned __int64 *)&CurrentThread[1].WaitBlockList;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
          {
            ExfAcquirePushLockSharedEx(p_WaitBlockList, v22, (ULONG_PTR)&CurrentThread[1].WaitBlockList, v23);
            p_WaitBlockList = (unsigned __int64 *)&CurrentThread[1].WaitBlockList;
          }
          if ( v22 )
            *(_BYTE *)(v22 + 26) |= 1u;
          if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 8) != 0 )
          {
            v10 = (void *)(*(_QWORD *)&CurrentThread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
            ObfReferenceObject(v10);
            p_WaitBlockList = (unsigned __int64 *)&CurrentThread[1].WaitBlockList;
            DWORD2(v33) = CurrentThread[1].SystemCallNumber & 3;
          }
          else
          {
            v10 = 0LL;
          }
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)p_WaitBlockList, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared((signed __int64 *)p_WaitBlockList);
            p_WaitBlockList = (unsigned __int64 *)&CurrentThread[1].WaitBlockList;
          }
          KeAbPostRelease((ULONG_PTR)p_WaitBlockList);
          v25 = v31->KernelApcDisable + 1;
          v31->KernelApcDisable = v25;
          if ( !v25
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v31->ApcState.ApcListHead[0].Flink != &v31->152
            && !v31->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
        }
        *(_QWORD *)&v33 = v10;
        v16 = Process + 107;
        v17 = ObFastReferenceObject((signed __int64 *)Process + 107);
        if ( !v17 )
        {
          v32 = KeGetCurrentThread();
          --v32->KernelApcDisable;
          v26 = Process + 91;
          v27 = KeAbPreAcquire((ULONG_PTR)v26, 0LL, 0LL, v18);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v26, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v26, v27, (ULONG_PTR)v26, v28);
          if ( v27 )
            *(_BYTE *)(v27 + 26) |= 1u;
          v17 = ObFastReferenceObjectLocked(v16);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v26, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v26);
          KeAbPostRelease((ULONG_PTR)v26);
          v29 = v32->KernelApcDisable + 1;
          v32->KernelApcDisable = v29;
          if ( !v29
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v32->ApcState.ApcListHead[0].Flink != &v32->152
            && !v32->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
        }
        v34 = v17;
        v19 = SepCreateAccessStateFromSubjectContext(&v33, v36, v37, DesiredAccess, &v9->TypeInfo.GenericMapping);
        if ( v19 < 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
          return v19;
        }
        PassedAccessState = (PACCESS_STATE)v36;
      }
      v20 = ObpCreateHandle(1LL, Object, 0LL, PassedAccessState, 0, HandleAttributes, AccessMode, 0LL, 0LL, Handle);
      if ( v20 < 0 )
        ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      if ( PassedAccessState == (PACCESS_STATE)v36 )
      {
        SepDeleteAccessState((__int64)PassedAccessState);
        ObFastDereferenceObject(
          (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
          (unsigned __int64)PassedAccessState->SubjectSecurityContext.PrimaryToken);
        ClientToken = PassedAccessState->SubjectSecurityContext.ClientToken;
        PassedAccessState->SubjectSecurityContext.PrimaryToken = 0LL;
        if ( ClientToken )
          ObfDereferenceObject(ClientToken);
        PassedAccessState->SubjectSecurityContext.ClientToken = 0LL;
      }
      return v20;
    }
  }
  return result;
}
