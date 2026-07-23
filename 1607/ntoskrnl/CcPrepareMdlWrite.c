/*
 * XREFs of CcPrepareMdlWrite @ 0x1400AF55C
 * Callers:
 *     FsRtlPrepareMdlWriteDev @ 0x14061E0CC (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     CcCanIWriteStream @ 0x140020620 (CcCanIWriteStream.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     IoAllocateMdl @ 0x14002EB10 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x14002ECA0 (MmProbeAndLockPages.c)
 *     CcGetVirtualAddress @ 0x140032F40 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x140033460 (CcMapAndRead.c)
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     CcSetDirtyInMask @ 0x14006F1E0 (CcSetDirtyInMask.c)
 *     IoFreeMdl @ 0x140071DB0 (IoFreeMdl.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 */

void __stdcall CcPrepareMdlWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus)
{
  ULONG v6; // edi
  unsigned int v8; // esi
  struct _FAST_MUTEX *SharedCacheMap; // r14
  ULONG Flags; // eax
  LONGLONG QuadPart; // rbx
  unsigned int v12; // r15d
  LONGLONG v13; // rdi
  int v14; // esi
  __int64 v15; // rdx
  PMDL v16; // rcx
  struct _KEVENT *v17; // rcx
  struct _MDL *Next; // rax
  PIO_STATUS_BLOCK v19; // rcx
  KIRQL v20; // al
  char v21; // [rsp+34h] [rbp-94h]
  __int64 v22; // [rsp+3Ch] [rbp-8Ch]
  struct _MDL *MemoryDescriptorList; // [rsp+40h] [rbp-88h]
  signed __int64 v24; // [rsp+48h] [rbp-80h]
  volatile signed __int32 *v25; // [rsp+50h] [rbp-78h] BYREF
  LONGLONG v26; // [rsp+58h] [rbp-70h]
  struct _FAST_MUTEX *v27; // [rsp+60h] [rbp-68h]
  PVOID VirtualAddress; // [rsp+68h] [rbp-60h]
  PMDL i; // [rsp+70h] [rbp-58h]
  LONGLONG v30; // [rsp+78h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-48h]
  ULONG v32; // [rsp+D0h] [rbp+8h] BYREF
  PLARGE_INTEGER v33; // [rsp+D8h] [rbp+10h]
  ULONG v34; // [rsp+E0h] [rbp+18h]
  PMDL *v35; // [rsp+E8h] [rbp+20h]

  v35 = MdlChain;
  v34 = Length;
  v33 = FileOffset;
  v6 = Length;
  v8 = 0;
  LODWORD(v22) = 0;
  v25 = 0LL;
  SharedCacheMap = (struct _FAST_MUTEX *)FileObject->SectionObjectPointer->SharedCacheMap;
  v27 = SharedCacheMap;
  Flags = FileObject->Flags;
  if ( (Flags & 0x10) == 0 && (Flags & 0x1000000) != 0 && !CcCanIWriteStream((__int64)FileObject, Length, 0, 0) )
    RtlRaiseStatus(-1073741670);
  QuadPart = FileOffset->QuadPart;
  v26 = QuadPart;
  while ( v6 )
  {
    VirtualAddress = (PVOID)CcGetVirtualAddress((__int64)SharedCacheMap, QuadPart, &v25, &v32, 0, 0);
    v12 = v32;
    if ( v32 > v6 )
      v12 = v6;
    v32 = v12;
    v13 = QuadPart + v12;
    v30 = v13;
    v14 = 2;
    if ( (QuadPart & 0xFFF) == 0 && v12 >= 0x1000 )
      v14 = 3;
    if ( (v13 & 0xFFF) == 0 )
      v14 |= 4u;
    ExAcquireFastMutex(SharedCacheMap + 5);
    v24 = *(_QWORD *)&SharedCacheMap->OldIrql - (QuadPart & 0xFFFFFFFFFFFFF000uLL);
    KeReleaseGuardedMutex(SharedCacheMap + 5);
    if ( v24 <= 0 )
    {
      v14 |= 7u;
    }
    else if ( (unsigned int)v24 <= 0x1000 && !HIDWORD(v24) )
    {
      v14 |= 6u;
    }
    CcMapAndRead(v12, v14, 1, (__int64)VirtualAddress);
    MemoryDescriptorList = IoAllocateMdl(VirtualAddress, v12, 0, 0, 0LL);
    if ( !MemoryDescriptorList )
      RtlRaiseStatus(-1073741670);
    CurrentThread = KeGetCurrentThread();
    v21 = BYTE5(CurrentThread[1].Queue) + 2;
    BYTE5(CurrentThread[1].Queue) = 1;
    MmProbeAndLockPages(MemoryDescriptorList, 0, IoWriteAccess);
    BYTE5(KeGetCurrentThread()[1].Queue) = v21 - 2;
    ExAcquireFastMutex(SharedCacheMap + 5);
    if ( v13 > *(_QWORD *)&SharedCacheMap->OldIrql )
      *(_QWORD *)&SharedCacheMap->OldIrql = v13;
    KeReleaseGuardedMutex(SharedCacheMap + 5);
    v15 = *((_QWORD *)v25 + 1);
    if ( !(unsigned __int16)_InterlockedDecrement(v25 + 4) )
    {
      v17 = *(struct _KEVENT **)(v15 + 184);
      if ( v17 )
        KeSetEvent(v17, 0, 0);
    }
    v25 = 0LL;
    v16 = *MdlChain;
    if ( *MdlChain )
    {
      for ( i = *MdlChain; ; i = Next )
      {
        Next = v16->Next;
        if ( !v16->Next )
          break;
        v16 = v16->Next;
      }
      v16->Next = MemoryDescriptorList;
    }
    else
    {
      *MdlChain = MemoryDescriptorList;
    }
    QuadPart += v12;
    v26 = v13;
    v8 = v32 + v22;
    v22 = v32 + (unsigned int)v22;
    v6 = v34 - v32;
    v34 -= v32;
  }
  v19 = IoStatus;
  IoStatus->Status = 0;
  v19->Information = v8;
  v20 = KeAcquireQueuedSpinLock(5uLL);
  ++*(&SharedCacheMap->Count + 1);
  KeReleaseQueuedSpinLock(5uLL, v20);
}
