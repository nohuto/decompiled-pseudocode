/*
 * XREFs of CcPrepareMdlWrite @ 0x1400F04A8
 * Callers:
 *     FsRtlPrepareMdlWriteDev @ 0x1405F3CC0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     CcCanIWriteStream @ 0x14002F5F0 (CcCanIWriteStream.c)
 *     IoFreeMdl @ 0x1400395A0 (IoFreeMdl.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     CcGetVirtualAddress @ 0x1400A39E0 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x1400A3F00 (CcMapAndRead.c)
 *     MmProbeAndLockPages @ 0x1400A7230 (MmProbeAndLockPages.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcSetDirtyInMask @ 0x1400B2DE0 (CcSetDirtyInMask.c)
 *     IoAllocateMdl @ 0x1400FC2E0 (IoAllocateMdl.c)
 */

void __stdcall CcPrepareMdlWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus)
{
  ULONG v6; // edi
  ULONG v8; // esi
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
  char v21; // [rsp+30h] [rbp-98h]
  int v22; // [rsp+38h] [rbp-90h]
  struct _MDL *MemoryDescriptorList; // [rsp+40h] [rbp-88h]
  signed __int64 v24; // [rsp+48h] [rbp-80h]
  __int64 v25; // [rsp+50h] [rbp-78h] BYREF
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
  v22 = 0;
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
    v21 = BYTE1(CurrentThread[1].Teb) + 2;
    BYTE1(CurrentThread[1].Teb) = 1;
    MmProbeAndLockPages(MemoryDescriptorList, 0, IoWriteAccess);
    BYTE1(KeGetCurrentThread()[1].Teb) = v21 - 2;
    ExAcquireFastMutex(SharedCacheMap + 5);
    if ( v13 > *(_QWORD *)&SharedCacheMap->OldIrql )
      *(_QWORD *)&SharedCacheMap->OldIrql = v13;
    KeReleaseGuardedMutex(SharedCacheMap + 5);
    v15 = *(_QWORD *)(v25 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v25 + 16)) )
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
    v22 += v32;
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
