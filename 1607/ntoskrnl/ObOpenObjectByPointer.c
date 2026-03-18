/*
 * XREFs of ObOpenObjectByPointer @ 0x1404203C0
 * Callers:
 *     PsOpenThread @ 0x140405210 (PsOpenThread.c)
 *     NtOpenThreadTokenEx @ 0x140413580 (NtOpenThreadTokenEx.c)
 *     PsOpenProcess @ 0x14041F410 (PsOpenProcess.c)
 *     NtOpenProcessTokenEx @ 0x140420240 (NtOpenProcessTokenEx.c)
 *     ExpGetProcessInformation @ 0x1404513E0 (ExpGetProcessInformation.c)
 *     NtCreateWorkerFactory @ 0x140470E94 (NtCreateWorkerFactory.c)
 *     WmipIoControl @ 0x1404749C4 (WmipIoControl.c)
 *     NtOpenPrivateNamespace @ 0x1404784D8 (NtOpenPrivateNamespace.c)
 *     EtwpOpenConsumer @ 0x140492B30 (EtwpOpenConsumer.c)
 *     CmLoadDifferencingKey @ 0x14049B648 (CmLoadDifferencingKey.c)
 *     CmConvertHandleToKernelHandle @ 0x14049C210 (CmConvertHandleToKernelHandle.c)
 *     sub_1404A6E00 @ 0x1404A6E00 (sub_1404A6E00.c)
 *     NtGetNextThread @ 0x1404D4F50 (NtGetNextThread.c)
 *     ObpSetDeviceMap @ 0x1404E9E58 (ObpSetDeviceMap.c)
 *     PiCMDuplicateRegistryHandle @ 0x1404F89B4 (PiCMDuplicateRegistryHandle.c)
 *     ExGetNextProcess @ 0x140508FB4 (ExGetNextProcess.c)
 *     PspCreateObjectHandle @ 0x140516ED4 (PspCreateObjectHandle.c)
 *     NtGetNextProcess @ 0x14053F498 (NtGetNextProcess.c)
 *     ObInitServerSilo @ 0x140579FFC (ObInitServerSilo.c)
 *     SmRegistrationInfoFill @ 0x14057B810 (SmRegistrationInfoFill.c)
 *     VrpPostEnumerateKey @ 0x140614D90 (VrpPostEnumerateKey.c)
 *     VrpPreLoadKey @ 0x140615D08 (VrpPreLoadKey.c)
 *     DbgkOpenProcessDebugPort @ 0x140617DA0 (DbgkOpenProcessDebugPort.c)
 *     DbgkpOpenHandles @ 0x140618510 (DbgkpOpenHandles.c)
 *     IopInvalidateVolumesForDevice @ 0x140621ABC (IopInvalidateVolumesForDevice.c)
 *     ObOpenObjectByPointerWithTag @ 0x140665D10 (ObOpenObjectByPointerWithTag.c)
 *     TtmiOpenDefaultTerminal @ 0x140677A24 (TtmiOpenDefaultTerminal.c)
 *     SmKmFileInfoDuplicate @ 0x140697E7C (SmKmFileInfoDuplicate.c)
 *     EtwpCapturePreviousRegistryData @ 0x1406A4724 (EtwpCapturePreviousRegistryData.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14000F690 (ObFastDereferenceObject.c)
 *     SepDeleteAccessState @ 0x14000F6E0 (SepDeleteAccessState.c)
 *     ObFastReferenceObject @ 0x14000F760 (ObFastReferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14000F860 (SepCreateAccessStateFromSubjectContext.c)
 *     ObReferenceObjectByPointerWithTag @ 0x140013580 (ObReferenceObjectByPointerWithTag.c)
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockThreadSecurityShared @ 0x140087058 (PspUnlockThreadSecurityShared.c)
 *     PspLockThreadSecurityShared @ 0x1400870A0 (PspLockThreadSecurityShared.c)
 *     PspUnlockProcessShared @ 0x1400C9C44 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x1400C9C88 (PspLockProcessShared.c)
 *     ObFastReferenceObjectLocked @ 0x1400D1534 (ObFastReferenceObjectLocked.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ObpCreateHandle @ 0x140419C20 (ObpCreateHandle.c)
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
  void *v10; // r13
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 Process; // r12
  ULONG_PTR v15; // r13
  NTSTATUS v16; // ebx
  NTSTATUS v17; // edi
  PACCESS_TOKEN v18; // rcx
  struct _KTHREAD *v19; // rbx
  _QWORD *PrimaryToken; // rax
  _QWORD *ClientToken; // rax
  struct _KTHREAD *v23; // [rsp+68h] [rbp-200h]
  __int128 v24; // [rsp+70h] [rbp-1F8h] BYREF
  ULONG_PTR v25; // [rsp+80h] [rbp-1E8h]
  __int64 v26; // [rsp+88h] [rbp-1E0h]
  _QWORD v27[20]; // [rsp+90h] [rbp-1D8h] BYREF
  _QWORD v28[28]; // [rsp+130h] [rbp-138h] BYREF

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
        Process = (__int64)CurrentThread->ApcState.Process;
        v26 = *(_QWORD *)(Process + 744);
        if ( CurrentThread && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
        {
          v23 = KeGetCurrentThread();
          PspLockThreadSecurityShared((__int64)CurrentThread, (__int64)v23);
          if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
          {
            v10 = (void *)(*(_QWORD *)&CurrentThread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
            ObfReferenceObject(v10);
            DWORD2(v24) = CurrentThread[1].SystemCallNumber & 3;
          }
          PspUnlockThreadSecurityShared((__int64)CurrentThread, (__int64)v23);
        }
        *(_QWORD *)&v24 = v10;
        v15 = ObFastReferenceObject((signed __int64 *)(Process + 856));
        if ( !v15 )
        {
          v19 = KeGetCurrentThread();
          PspLockProcessShared(Process, (__int64)v19);
          v15 = ObFastReferenceObjectLocked((_QWORD *)(Process + 856));
          PspUnlockProcessShared(Process, (__int64)v19);
        }
        v25 = v15;
        if ( SeTokenLeakTracking )
        {
          if ( v15 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 1144) + 284LL));
            if ( v15 == SepTokenLeakToken )
              __debugbreak();
          }
          if ( (_QWORD)v24 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v24 + 1144) + 284LL));
            if ( (_QWORD)v24 == SepTokenLeakToken )
              __debugbreak();
          }
        }
        v16 = SepCreateAccessStateFromSubjectContext(&v24, v27, v28, DesiredAccess, &v9->TypeInfo.GenericMapping);
        if ( v16 < 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
          return v16;
        }
        PassedAccessState = (PACCESS_STATE)v27;
      }
      v17 = ObpCreateHandle(
              1,
              (char *)Object,
              0,
              PassedAccessState,
              0,
              HandleAttributes,
              AccessMode,
              0LL,
              0,
              0LL,
              (unsigned __int64 *)Handle);
      if ( v17 < 0 )
        ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      if ( PassedAccessState == (PACCESS_STATE)v27 )
      {
        SepDeleteAccessState((__int64)PassedAccessState);
        if ( SeTokenLeakTracking )
        {
          PrimaryToken = PassedAccessState->SubjectSecurityContext.PrimaryToken;
          if ( PrimaryToken )
          {
            _InterlockedDecrement((volatile signed __int32 *)(PrimaryToken[143] + 284LL));
            if ( PassedAccessState->SubjectSecurityContext.PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
              __debugbreak();
          }
          ClientToken = PassedAccessState->SubjectSecurityContext.ClientToken;
          if ( ClientToken )
          {
            _InterlockedDecrement((volatile signed __int32 *)(ClientToken[143] + 284LL));
            if ( PassedAccessState->SubjectSecurityContext.ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
              __debugbreak();
          }
        }
        ObFastDereferenceObject(
          (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
          (unsigned __int64)PassedAccessState->SubjectSecurityContext.PrimaryToken);
        v18 = PassedAccessState->SubjectSecurityContext.ClientToken;
        PassedAccessState->SubjectSecurityContext.PrimaryToken = 0LL;
        if ( v18 )
          ObfDereferenceObject(v18);
        PassedAccessState->SubjectSecurityContext.ClientToken = 0LL;
      }
      return v17;
    }
  }
  return result;
}
