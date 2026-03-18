/*
 * XREFs of CcPrepareMdlWrite @ 0x140124310
 * Callers:
 *     FsRtlPrepareMdlWriteDev @ 0x14066CBCC (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     CcSetDirtyInMask @ 0x14002FE40 (CcSetDirtyInMask.c)
 *     IoFreeMdl @ 0x140031620 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x140033BF0 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x140034050 (MmProbeAndLockPages.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     CcGetVirtualAddress @ 0x1400501E0 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x140050800 (CcMapAndRead.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     CcCanIWriteStream @ 0x1400E4930 (CcCanIWriteStream.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
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
  volatile signed __int32 *SharedCacheMap; // r14
  ULONG Flags; // eax
  LONGLONG QuadPart; // rbx
  __int64 v12; // r9
  ULONG v13; // ecx
  LONGLONG v14; // rdi
  int v15; // eax
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rsi
  unsigned __int8 CurrentIrql; // r12
  unsigned __int8 v20; // si
  signed __int32 v21; // eax
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rsi
  unsigned __int8 v25; // r12
  unsigned __int8 v26; // si
  signed __int32 v27; // eax
  __int64 v28; // rdx
  struct _KEVENT *v29; // rcx
  PMDL v30; // rcx
  struct _MDL *Next; // rax
  PIO_STATUS_BLOCK v32; // rcx
  KIRQL v33; // al
  int v34; // [rsp+30h] [rbp-98h]
  char v35; // [rsp+34h] [rbp-94h]
  int v36; // [rsp+38h] [rbp-90h]
  unsigned __int64 v37; // [rsp+40h] [rbp-88h]
  __int64 v38; // [rsp+40h] [rbp-88h]
  struct _MDL *MemoryDescriptorList; // [rsp+48h] [rbp-80h]
  volatile signed __int32 *v40; // [rsp+50h] [rbp-78h] BYREF
  LONGLONG v41; // [rsp+58h] [rbp-70h]
  volatile signed __int32 *v42; // [rsp+60h] [rbp-68h]
  PVOID VirtualAddress; // [rsp+68h] [rbp-60h]
  PMDL i; // [rsp+70h] [rbp-58h]
  LONGLONG v45; // [rsp+78h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-48h]
  ULONG Lengtha; // [rsp+D0h] [rbp+8h] BYREF
  PLARGE_INTEGER v48; // [rsp+D8h] [rbp+10h]
  ULONG v49; // [rsp+E0h] [rbp+18h]
  PMDL *v50; // [rsp+E8h] [rbp+20h]

  v50 = MdlChain;
  v49 = Length;
  v48 = FileOffset;
  v6 = Length;
  v8 = 0;
  v36 = 0;
  v40 = 0LL;
  SharedCacheMap = (volatile signed __int32 *)FileObject->SectionObjectPointer->SharedCacheMap;
  v42 = SharedCacheMap;
  Flags = FileObject->Flags;
  if ( (Flags & 0x10) == 0 && (Flags & 0x1000000) != 0 && !CcCanIWriteStream((__int64)FileObject, Length, 0, 0) )
    RtlRaiseStatus(-1073741670);
  QuadPart = FileOffset->QuadPart;
  v41 = QuadPart;
  while ( v6 )
  {
    VirtualAddress = (PVOID)CcGetVirtualAddress((__int64)SharedCacheMap, QuadPart, &v40, &Lengtha, 0, 0);
    v13 = Lengtha;
    if ( Lengtha > v6 )
      v13 = v6;
    Lengtha = v13;
    v14 = QuadPart + v13;
    v45 = v14;
    v15 = 2;
    v34 = 2;
    if ( (QuadPart & 0xFFF) == 0 )
    {
      if ( v13 >= 0x1000 )
        v15 = 3;
      v34 = v15;
    }
    if ( (v14 & 0xFFF) == 0 )
      v34 = v15 | 4;
    v37 = QuadPart & 0xFFFFFFFFFFFFF000uLL;
    v16 = SharedCacheMap + 70;
    v17 = KeAbPreAcquire((ULONG_PTR)(SharedCacheMap + 70), 0LL, 0LL, v12);
    v18 = v17;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset(SharedCacheMap + 70, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)(SharedCacheMap + 70), v17);
    if ( v18 )
      *(_BYTE *)(v18 + 26) |= 1u;
    *((_QWORD *)SharedCacheMap + 36) = KeGetCurrentThread();
    *((_DWORD *)SharedCacheMap + 82) = CurrentIrql;
    v38 = *((_QWORD *)SharedCacheMap + 6) - v37;
    *((_QWORD *)SharedCacheMap + 36) = 0LL;
    v20 = *((_BYTE *)SharedCacheMap + 328);
    v21 = _InterlockedCompareExchange(v16, 1, 0);
    if ( v21 )
      ExpReleaseFastMutexContended(SharedCacheMap + 70, v21);
    __writecr8(v20);
    KeAbPostRelease((ULONG_PTR)(SharedCacheMap + 70));
    if ( v38 <= 0 )
    {
      v34 |= 7u;
    }
    else if ( (unsigned int)v38 <= 0x1000 && !HIDWORD(v38) )
    {
      v34 |= 6u;
    }
    CcMapAndRead(Lengtha, v34, 1, (__int64)VirtualAddress);
    MemoryDescriptorList = IoAllocateMdl(VirtualAddress, Lengtha, 0, 0, 0LL);
    if ( !MemoryDescriptorList )
      RtlRaiseStatus(-1073741670);
    CurrentThread = KeGetCurrentThread();
    v35 = BYTE1(CurrentThread[1].Teb) + 2;
    BYTE1(CurrentThread[1].Teb) = 1;
    MmProbeAndLockPages(MemoryDescriptorList, 0, IoWriteAccess);
    BYTE1(KeGetCurrentThread()[1].Teb) = v35 - 2;
    v23 = KeAbPreAcquire((ULONG_PTR)(SharedCacheMap + 70), 0LL, 0LL, v22);
    v24 = v23;
    v25 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset(v16, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)(SharedCacheMap + 70), v23);
    if ( v24 )
      *(_BYTE *)(v24 + 26) |= 1u;
    *((_QWORD *)SharedCacheMap + 36) = KeGetCurrentThread();
    *((_DWORD *)SharedCacheMap + 82) = v25;
    if ( v14 > *((_QWORD *)SharedCacheMap + 6) )
      *((_QWORD *)SharedCacheMap + 6) = v14;
    *((_QWORD *)SharedCacheMap + 36) = 0LL;
    v26 = *((_BYTE *)SharedCacheMap + 328);
    v27 = _InterlockedCompareExchange(v16, 1, 0);
    if ( v27 )
      ExpReleaseFastMutexContended(SharedCacheMap + 70, v27);
    __writecr8(v26);
    KeAbPostRelease((ULONG_PTR)(SharedCacheMap + 70));
    v28 = *((_QWORD *)v40 + 1);
    if ( !(unsigned __int16)_InterlockedDecrement(v40 + 4) )
    {
      v29 = *(struct _KEVENT **)(v28 + 184);
      if ( v29 )
        KeSetEvent(v29, 0, 0);
    }
    v40 = 0LL;
    v30 = *MdlChain;
    if ( *MdlChain )
    {
      for ( i = *MdlChain; ; i = Next )
      {
        Next = v30->Next;
        if ( !v30->Next )
          break;
        v30 = v30->Next;
      }
      v30->Next = MemoryDescriptorList;
    }
    else
    {
      *MdlChain = MemoryDescriptorList;
    }
    QuadPart = v14;
    v41 = v14;
    v8 = Lengtha + v36;
    v36 += Lengtha;
    v6 = v49 - Lengtha;
    v49 -= Lengtha;
  }
  v32 = IoStatus;
  IoStatus->Status = 0;
  v32->Information = v8;
  v33 = KeAcquireQueuedSpinLock(5uLL);
  ++*((_DWORD *)SharedCacheMap + 1);
  KeReleaseQueuedSpinLock(5uLL, v33);
}
