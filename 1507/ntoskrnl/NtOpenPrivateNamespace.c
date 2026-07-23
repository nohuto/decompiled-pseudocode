/*
 * XREFs of NtOpenPrivateNamespace @ 0x14046F864
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObOpenObjectByPointer @ 0x140434390 (ObOpenObjectByPointer.c)
 *     ObpLookupNamespaceEntry @ 0x14046FAE8 (ObpLookupNamespaceEntry.c)
 *     ObpCaptureBoundaryDescriptor @ 0x14046FBA0 (ObpCaptureBoundaryDescriptor.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtOpenPrivateNamespace(
        PHANDLE NamespaceHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor)
{
  PHANDLE v5; // rsi
  KPROCESSOR_MODE AccessMode; // r14
  NTSTATUS result; // eax
  __int64 v8; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdx
  bool v17; // cc
  signed __int64 v18; // rcx
  ULONG_PTR v19; // rtt
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax
  void *v22; // rdi
  __int64 v23; // rdx
  signed __int64 v24; // rcx
  ULONG_PTR v25; // rtt
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax
  ULONG HandleAttributes; // [rsp+40h] [rbp-38h]
  int HandleAttributesa; // [rsp+40h] [rbp-38h]
  PVOID P; // [rsp+48h] [rbp-30h]
  NTSTATUS Pa; // [rsp+48h] [rbp-30h]
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF

  v5 = NamespaceHandle;
  Handle = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  HandleAttributes = 0;
  if ( AccessMode )
  {
    if ( (unsigned __int64)NamespaceHandle >= MmUserProbeAddress )
      NamespaceHandle = (PHANDLE)MmUserProbeAddress;
    *NamespaceHandle = *NamespaceHandle;
    if ( ObjectAttributes )
    {
      if ( ((unsigned __int8)ObjectAttributes & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      HandleAttributes = ObjectAttributes->Attributes;
    }
  }
  else if ( ObjectAttributes )
  {
    HandleAttributes = ObjectAttributes->Attributes;
  }
  if ( AccessMode )
    HandleAttributesa = HandleAttributes & 0xDF2;
  else
    HandleAttributesa = HandleAttributes & 0x10FF2;
  result = ObpCaptureBoundaryDescriptor(BoundaryDescriptor);
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = KeAbPreAcquire((ULONG_PTR)&qword_140331B90, 0LL, 0LL, v8);
    v13 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140331B90, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_140331B90, v10, (ULONG_PTR)&qword_140331B90, v12);
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
    v15 = ((__int64 (__fastcall *)(__int64))ObpLookupNamespaceEntry)(v11);
    ExFreePoolWithTag(P, 0x534E624Fu);
    if ( v15 && (v22 = *(void **)(v15 + 16)) != 0LL )
    {
      ObfReferenceObject(v22);
      _m_prefetchw(&qword_140331B90);
      v24 = qword_140331B90 - 16;
      if ( (qword_140331B90 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v24 = 0LL;
      if ( (qword_140331B90 & 2) != 0
        || (v25 = qword_140331B90,
            v25 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140331B90, v24, qword_140331B90)) )
      {
        ExfReleasePushLock(&qword_140331B90, v23);
      }
      KeAbPostRelease((ULONG_PTR)&qword_140331B90);
      v26 = KeGetCurrentThread();
      v27 = v26->KernelApcDisable + 1;
      v26->KernelApcDisable = v27;
      if ( !v27
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
        && !v26->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      Pa = ObOpenObjectByPointer(
             v22,
             HandleAttributesa,
             0LL,
             DesiredAccess,
             ObpDirectoryObjectType,
             AccessMode,
             &Handle);
      ObfDereferenceObject(v22);
      *v5 = Handle;
      return Pa;
    }
    else
    {
      v17 = (qword_140331B90 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10;
      v18 = qword_140331B90 - 16;
      _m_prefetchw(&qword_140331B90);
      if ( v17 )
        v18 = 0LL;
      if ( (qword_140331B90 & 2) != 0
        || (v19 = qword_140331B90,
            v19 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140331B90, v18, qword_140331B90)) )
      {
        ExfReleasePushLock(&qword_140331B90, v16);
      }
      KeAbPostRelease((ULONG_PTR)&qword_140331B90);
      v20 = KeGetCurrentThread();
      v21 = v20->KernelApcDisable + 1;
      v20->KernelApcDisable = v21;
      if ( !v21
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
        && !v20->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return -1073741766;
    }
  }
  return result;
}
