/*
 * XREFs of ObSetSiloRootDirectoryByPointer @ 0x1406AECC4
 * Callers:
 *     PsSetSiloObjectRootDirectoryByPointer @ 0x1406C12E4 (PsSetSiloObjectRootDirectoryByPointer.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14017FAF0 (ZwOpenDirectoryObject.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     PsInsertSiloObjectByPointer @ 0x1406C0E40 (PsInsertSiloObjectByPointer.c)
 */

NTSTATUS __fastcall ObSetSiloRootDirectoryByPointer(__int64 a1, void *a2, KPROCESSOR_MODE a3)
{
  NTSTATUS result; // eax
  int inserted; // ebx
  NTSTATUS v7; // r14d
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // rdi
  __int64 v10; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v12; // rbx
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rsi
  signed __int64 v18; // rax
  signed __int64 v19; // rcx
  unsigned __int64 v20; // rtt
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  HANDLE DirectoryHandle; // [rsp+38h] [rbp-19h] BYREF
  PVOID Object; // [rsp+40h] [rbp-11h] BYREF
  __int64 v25; // [rsp+48h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+Fh] BYREF
  PVOID v28; // [rsp+D0h] [rbp+7Fh] BYREF

  result = ObReferenceObjectByHandle(a2, 2u, ObpDirectoryObjectType, a3, &Object, 0LL);
  if ( result >= 0 )
  {
    inserted = PsInsertSiloObjectByPointer(a1, &ObpDirectoryObjectType, Object);
    if ( inserted < 0 )
    {
      ObfDereferenceObject(Object);
      return inserted;
    }
    RtlInitUnicodeString(&DestinationString, L"Global??");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
    if ( result >= 0 )
    {
      v7 = ObReferenceObjectByHandle(DirectoryHandle, 2u, ObpDirectoryObjectType, 0, &v28, 0LL);
      if ( v7 >= 0 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x6D44624Fu);
        v9 = PoolWithTag;
        if ( !PoolWithTag )
        {
          ZwClose(DirectoryHandle);
          ObfDereferenceObject(v28);
          return -1073741670;
        }
        memset(PoolWithTag, 0, 0x40uLL);
        *(_QWORD *)v9 = v28;
        v9[6] = 1;
        PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v25, v10);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        v12 = (unsigned __int64 *)(v25 + 120);
        v14 = KeAbPreAcquire(v25 + 120, 0LL, 0LL, v13);
        v17 = v14;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
          ExfAcquirePushLockExclusiveEx(v12, v14, (ULONG_PTR)v12, v16);
        if ( v17 )
          *(_BYTE *)(v17 + 26) |= 1u;
        if ( !*((_QWORD *)v28 + 38) )
        {
          *((_QWORD *)v28 + 38) = v9;
          v9 = 0LL;
        }
        _m_prefetchw(v12);
        v18 = *v12;
        v19 = *v12 - 16;
        if ( (*v12 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v19 = 0LL;
        if ( (v18 & 2) != 0
          || (v20 = *v12, v20 != _InterlockedCompareExchange64((volatile signed __int64 *)v12, v19, v18)) )
        {
          ExfReleasePushLock(v12, v15);
        }
        KeAbPostRelease((ULONG_PTR)v12);
        v21 = KeGetCurrentThread();
        v22 = v21->SpecialApcDisable + 1;
        v21->SpecialApcDisable = v22;
        if ( !v22 && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152 )
          KiCheckForKernelApcDelivery();
        PsDereferenceMonitorContextServerSilo(v25);
        if ( v9 )
        {
          ExFreePoolWithTag(v9, 0);
          ObfDereferenceObject(v28);
        }
      }
      ZwClose(DirectoryHandle);
      return v7;
    }
  }
  return result;
}
