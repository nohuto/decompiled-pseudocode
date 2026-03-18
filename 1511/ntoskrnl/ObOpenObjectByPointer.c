/*
 * XREFs of ObOpenObjectByPointer @ 0x140476C40
 * Callers:
 *     WmipIoControl @ 0x1403D24BC (WmipIoControl.c)
 *     NtLoadKeyEx @ 0x1403DB3CC (NtLoadKeyEx.c)
 *     CmConvertHandleToKernelHandle @ 0x1403DBDEC (CmConvertHandleToKernelHandle.c)
 *     PspCreateObjectHandle @ 0x1403EFA94 (PspCreateObjectHandle.c)
 *     ExpGetProcessInformation @ 0x140409F60 (ExpGetProcessInformation.c)
 *     PiCMDuplicateRegistryHandle @ 0x140443F00 (PiCMDuplicateRegistryHandle.c)
 *     ExGetNextProcess @ 0x14044B7C8 (ExGetNextProcess.c)
 *     NtCreateWorkerFactory @ 0x14044E4E8 (NtCreateWorkerFactory.c)
 *     sub_1404667A0 @ 0x1404667A0 (sub_1404667A0.c)
 *     PsOpenThread @ 0x140470C60 (PsOpenThread.c)
 *     NtOpenThreadTokenEx @ 0x1404772C0 (NtOpenThreadTokenEx.c)
 *     ObSetDirectoryDeviceMap @ 0x1404A7D9C (ObSetDirectoryDeviceMap.c)
 *     NtOpenPrivateNamespace @ 0x1404AA1A0 (NtOpenPrivateNamespace.c)
 *     EtwpOpenConsumer @ 0x1404B66EC (EtwpOpenConsumer.c)
 *     NtGetNextThread @ 0x1404BE9DC (NtGetNextThread.c)
 *     NtGetNextProcess @ 0x1404F3D3C (NtGetNextProcess.c)
 *     ObSetDeviceMap @ 0x140545400 (ObSetDeviceMap.c)
 *     SmRegistrationInfoFill @ 0x140545CB8 (SmRegistrationInfoFill.c)
 *     DbgkOpenProcessDebugPort @ 0x1405EE178 (DbgkOpenProcessDebugPort.c)
 *     DbgkpOpenHandles @ 0x1405EE8E0 (DbgkpOpenHandles.c)
 *     IopInvalidateVolumesForDevice @ 0x1405F7CFC (IopInvalidateVolumesForDevice.c)
 *     ObOpenObjectByPointerWithTag @ 0x14062DC04 (ObOpenObjectByPointerWithTag.c)
 *     SmKmFileInfoDuplicate @ 0x14065A2A4 (SmKmFileInfoDuplicate.c)
 *     EtwpCapturePreviousRegistryData @ 0x140663F0C (EtwpCapturePreviousRegistryData.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x14000D5AC (ObFastReferenceObjectLocked.c)
 *     PspUnlockProcessShared @ 0x14002E340 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x14002E384 (PspLockProcessShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     ObFastDereferenceObject @ 0x140043280 (ObFastDereferenceObject.c)
 *     SepDeleteAccessState @ 0x1400432D0 (SepDeleteAccessState.c)
 *     ObFastReferenceObject @ 0x140043350 (ObFastReferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140043450 (SepCreateAccessStateFromSubjectContext.c)
 *     ObReferenceObjectByPointerWithTag @ 0x14009E120 (ObReferenceObjectByPointerWithTag.c)
 *     PspUnlockThreadSecurityShared @ 0x1400D1980 (PspUnlockThreadSecurityShared.c)
 *     PspLockThreadSecurityShared @ 0x1400D19C0 (PspLockThreadSecurityShared.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
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
  POBJECT_TYPE v8; // rdi
  void *v10; // rbp
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 Process; // rsi
  ULONG_PTR v15; // rbp
  NTSTATUS v16; // ebx
  NTSTATUS v17; // edi
  PACCESS_TOKEN ClientToken; // rcx
  struct _KTHREAD *v19; // r14
  struct _KTHREAD *v20; // rbx
  __int128 v22; // [rsp+58h] [rbp-200h] BYREF
  ULONG_PTR v23; // [rsp+68h] [rbp-1F0h]
  __int64 v24; // [rsp+70h] [rbp-1E8h]
  _QWORD v25[20]; // [rsp+80h] [rbp-1D8h] BYREF
  _QWORD v26[28]; // [rsp+120h] [rbp-138h] BYREF

  v8 = ObjectType;
  v10 = 0LL;
  *Handle = 0LL;
  result = ObReferenceObjectByPointerWithTag(Object, 0, ObjectType, AccessMode, 0x6E48624Fu);
  if ( result >= 0 )
  {
    if ( !ObjectType )
      v8 = (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( (HandleAttributes & v8->TypeInfo.InvalidAttributes) != 0
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
        v24 = *(_QWORD *)(Process + 744);
        if ( CurrentThread && (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 8) != 0 )
        {
          v19 = KeGetCurrentThread();
          PspLockThreadSecurityShared((__int64)CurrentThread, (__int64)v19);
          if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 8) != 0 )
          {
            v10 = (void *)(*(_QWORD *)&CurrentThread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
            ObfReferenceObject(v10);
            DWORD2(v22) = CurrentThread[1].SystemCallNumber & 3;
          }
          PspUnlockThreadSecurityShared((__int64)CurrentThread, (__int64)v19);
        }
        *(_QWORD *)&v22 = v10;
        v15 = ObFastReferenceObject((signed __int64 *)(Process + 856));
        if ( !v15 )
        {
          v20 = KeGetCurrentThread();
          PspLockProcessShared(Process, (__int64)v20);
          v15 = ObFastReferenceObjectLocked((_QWORD *)(Process + 856));
          PspUnlockProcessShared(Process, (__int64)v20);
        }
        v23 = v15;
        v16 = SepCreateAccessStateFromSubjectContext(&v22, v25, v26, DesiredAccess, &v8->TypeInfo.GenericMapping);
        if ( v16 < 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
          return v16;
        }
        PassedAccessState = (PACCESS_STATE)v25;
      }
      v17 = ObpCreateHandle(
              1u,
              (char *)Object,
              0,
              (__int64)PassedAccessState,
              0,
              HandleAttributes,
              AccessMode,
              0LL,
              0LL,
              (__int64 *)Handle);
      if ( v17 < 0 )
        ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      if ( PassedAccessState == (PACCESS_STATE)v25 )
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
      return v17;
    }
  }
  return result;
}
