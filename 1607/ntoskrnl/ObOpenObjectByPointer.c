/*
 * XREFs of ObOpenObjectByPointer @ 0x14041F280
 * Callers:
 *     PsOpenThread @ 0x1404040D0 (PsOpenThread.c)
 *     NtOpenThreadTokenEx @ 0x140412440 (NtOpenThreadTokenEx.c)
 *     PsOpenProcess @ 0x14041E2D0 (PsOpenProcess.c)
 *     NtOpenProcessTokenEx @ 0x14041F100 (NtOpenProcessTokenEx.c)
 *     ExpGetProcessInformation @ 0x1404502B0 (ExpGetProcessInformation.c)
 *     NtCreateWorkerFactory @ 0x14046FD64 (NtCreateWorkerFactory.c)
 *     WmipIoControl @ 0x140473894 (WmipIoControl.c)
 *     NtOpenPrivateNamespace @ 0x1404773A8 (NtOpenPrivateNamespace.c)
 *     EtwpOpenConsumer @ 0x1404935C0 (EtwpOpenConsumer.c)
 *     CmLoadDifferencingKey @ 0x1404A37E0 (CmLoadDifferencingKey.c)
 *     CmConvertHandleToKernelHandle @ 0x1404A43A8 (CmConvertHandleToKernelHandle.c)
 *     NtGetNextThread @ 0x1404B8554 (NtGetNextThread.c)
 *     ObpSetDeviceMap @ 0x1404CBF4C (ObpSetDeviceMap.c)
 *     PiCMDuplicateRegistryHandle @ 0x1404DB940 (PiCMDuplicateRegistryHandle.c)
 *     ExGetNextProcess @ 0x1404EBF44 (ExGetNextProcess.c)
 *     PspCreateObjectHandle @ 0x1404FA2C4 (PspCreateObjectHandle.c)
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 *     NtGetNextProcess @ 0x14053F9D8 (NtGetNextProcess.c)
 *     ObInitServerSilo @ 0x14057A53C (ObInitServerSilo.c)
 *     SmRegistrationInfoFill @ 0x14057BCBC (SmRegistrationInfoFill.c)
 *     VrpPostEnumerateKey @ 0x140614E44 (VrpPostEnumerateKey.c)
 *     VrpPreLoadKey @ 0x140615DBC (VrpPreLoadKey.c)
 *     DbgkOpenProcessDebugPort @ 0x140617E54 (DbgkOpenProcessDebugPort.c)
 *     DbgkpOpenHandles @ 0x1406185C4 (DbgkpOpenHandles.c)
 *     IopInvalidateVolumesForDevice @ 0x140621B70 (IopInvalidateVolumesForDevice.c)
 *     ObOpenObjectByPointerWithTag @ 0x140665DF4 (ObOpenObjectByPointerWithTag.c)
 *     TtmiOpenDefaultTerminal @ 0x140677B08 (TtmiOpenDefaultTerminal.c)
 *     SmKmFileInfoDuplicate @ 0x140697F60 (SmKmFileInfoDuplicate.c)
 *     EtwpCapturePreviousRegistryData @ 0x1406A485C (EtwpCapturePreviousRegistryData.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14000F210 (ObFastDereferenceObject.c)
 *     SepDeleteAccessState @ 0x14000F260 (SepDeleteAccessState.c)
 *     ObFastReferenceObject @ 0x14000F2E0 (ObFastReferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14000F3E0 (SepCreateAccessStateFromSubjectContext.c)
 *     ObReferenceObjectByPointerWithTag @ 0x140013100 (ObReferenceObjectByPointerWithTag.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockThreadSecurityShared @ 0x1400920C8 (PspUnlockThreadSecurityShared.c)
 *     PspLockThreadSecurityShared @ 0x140092110 (PspLockThreadSecurityShared.c)
 *     PspUnlockProcessShared @ 0x1400C7AE4 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x1400C7B28 (PspLockProcessShared.c)
 *     ObFastReferenceObjectLocked @ 0x1400CF3D4 (ObFastReferenceObjectLocked.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
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
