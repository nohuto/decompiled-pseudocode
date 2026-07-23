/*
 * XREFs of NtOpenPrivateNamespace @ 0x1404773A8
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObOpenObjectByPointer @ 0x14041F280 (ObOpenObjectByPointer.c)
 *     ObpLookupNamespaceEntry @ 0x1404775CC (ObpLookupNamespaceEntry.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140477664 (ObpCaptureBoundaryDescriptor.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtOpenPrivateNamespace(
        PHANDLE NamespaceHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor)
{
  PHANDLE v5; // r14
  signed __int64 v6; // rbx
  KPROCESSOR_MODE AccessMode; // r12
  NTSTATUS result; // eax
  char *CurrentServerSiloGlobals; // r15
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 *v11; // rdi
  _BYTE *v12; // rax
  _BYTE *v13; // rsi
  __int64 v14; // rsi
  signed __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rtt
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  void *v21; // rsi
  signed __int64 v22; // rax
  unsigned __int64 v23; // rtt
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  ULONG HandleAttributes; // [rsp+40h] [rbp-38h]
  int HandleAttributesa; // [rsp+40h] [rbp-38h]
  PVOID P; // [rsp+48h] [rbp-30h]
  NTSTATUS Pa; // [rsp+48h] [rbp-30h]
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF

  v5 = NamespaceHandle;
  v6 = 0LL;
  Handle = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  HandleAttributes = 0;
  if ( AccessMode )
  {
    if ( (unsigned __int64)NamespaceHandle >= 0x7FFFFFFF0000LL )
      NamespaceHandle = (PHANDLE)0x7FFFFFFF0000LL;
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
    HandleAttributesa = HandleAttributes & 0x1DF2;
  else
    HandleAttributesa = HandleAttributes & 0x11FF2;
  result = ObpCaptureBoundaryDescriptor(BoundaryDescriptor);
  if ( result >= 0 )
  {
    CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = (unsigned __int64 *)(CurrentServerSiloGlobals + 720);
    v12 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(CurrentServerSiloGlobals + 720), 0LL, 0);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)CurrentServerSiloGlobals + 180, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, v12, (ULONG_PTR)v11);
    if ( v13 )
      v13[26] |= 1u;
    v14 = ObpLookupNamespaceEntry(CurrentServerSiloGlobals + 128);
    ExFreePoolWithTag(P, 0x534E624Fu);
    if ( v14 && (v21 = *(void **)(v14 + 16)) != 0LL )
    {
      ObfReferenceObject(v21);
      _m_prefetchw(v11);
      v22 = *v11;
      if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v6 = v22 - 16;
      if ( (v22 & 2) != 0 || (v23 = *v11, v23 != _InterlockedCompareExchange64((volatile signed __int64 *)v11, v6, v22)) )
        ExfReleasePushLock(v11);
      KeAbPostRelease((ULONG_PTR)v11);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v24, v25, v26);
      Pa = ObOpenObjectByPointer(
             v21,
             HandleAttributesa,
             0LL,
             DesiredAccess,
             ObpDirectoryObjectType,
             AccessMode,
             &Handle);
      ObfDereferenceObject(v21);
      *v5 = Handle;
      return Pa;
    }
    else
    {
      v15 = *v11;
      v16 = *v11 & 0xFFFFFFFFFFFFFFF0uLL;
      _m_prefetchw(v11);
      if ( v16 > 0x10 )
        v6 = v15 - 16;
      if ( (v15 & 2) != 0 || (v17 = *v11, v17 != _InterlockedCompareExchange64((volatile signed __int64 *)v11, v6, v15)) )
        ExfReleasePushLock(v11);
      KeAbPostRelease((ULONG_PTR)v11);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v18, v19, v20);
      return -1073741766;
    }
  }
  return result;
}
