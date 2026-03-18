/*
 * XREFs of IopSetFileObjectIosbRange @ 0x140672E30
 * Callers:
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140018004 (RtlDeleteElementGenericTableAvl.c)
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     IoFreeMdl @ 0x140031620 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x140033BF0 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x140034050 (MmProbeAndLockPages.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     IopGetFileObjectExtension @ 0x1400716C0 (IopGetFileObjectExtension.c)
 *     IopAllocateFileObjectExtension @ 0x140071760 (IopAllocateFileObjectExtension.c)
 *     IopSetTypeSpecificFoExtension @ 0x1400718D8 (IopSetTypeSpecificFoExtension.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x1400ADB20 (MmUnmapLockedPages.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     RtlInsertElementGenericTableAvl @ 0x1400D0A24 (RtlInsertElementGenericTableAvl.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopSetFileObjectIosbRange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _KPROCESS *i; // rdi
  char **v5; // r14
  int FileObjectExtension; // r15d
  char **v7; // r12
  __int64 v8; // rsi
  char *v10; // r12
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int8 CurrentIrql; // dl
  _KPROCESS **inserted; // rax
  PMDL Mdl; // rsi
  struct _LIST_ENTRY *MappedSystemVa; // rax
  char **PoolWithTag; // rax
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // r8
  char **v21; // rcx
  signed __int64 v22; // rax
  signed __int64 v23; // rax
  unsigned __int8 v24; // bl
  signed __int32 v25; // eax
  int v26; // [rsp+34h] [rbp-A4h]
  PMDL MemoryDescriptorList; // [rsp+38h] [rbp-A0h]
  _KPROCESS *Object; // [rsp+40h] [rbp-98h]
  __int64 v29; // [rsp+48h] [rbp-90h]
  _KPROCESS **v30; // [rsp+48h] [rbp-90h]
  struct _LIST_ENTRY *BaseAddress; // [rsp+50h] [rbp-88h]
  unsigned __int8 v32; // [rsp+60h] [rbp-78h]
  __int64 v33[2]; // [rsp+80h] [rbp-58h] BYREF
  _QWORD Buffer[9]; // [rsp+90h] [rbp-48h] BYREF
  BOOLEAN NewElement; // [rsp+F0h] [rbp+18h] BYREF
  char v38; // [rsp+F8h] [rbp+20h]

  v38 = 0;
  NewElement = 0;
  i = 0LL;
  v5 = 0LL;
  MemoryDescriptorList = 0LL;
  BaseAddress = 0LL;
  FileObjectExtension = 0;
  Object = KeGetCurrentThread()->ApcState.Process;
  v33[1] = (__int64)Object;
  v7 = *(char ***)(a2 + 24);
  v8 = *((unsigned int *)v7 + 2);
  v26 = v8;
  if ( !(_DWORD)v8 )
    return 3221225485LL;
  v10 = *v7;
  v11 = KeAbPreAcquire((ULONG_PTR)&IoStatusBlockRangeTableLock, 0LL, 0LL, a4);
  v12 = v11;
  v29 = v11;
  CurrentIrql = KeGetCurrentIrql();
  v32 = CurrentIrql;
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&IoStatusBlockRangeTableLock, 0) )
  {
    ExpAcquireFastMutexContended((ULONG_PTR)&IoStatusBlockRangeTableLock, v11);
    v12 = v29;
    CurrentIrql = v32;
  }
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  qword_14034BCC8 = (__int64)KeGetCurrentThread();
  dword_14034BCF0 = CurrentIrql;
  Buffer[0] = Object;
  inserted = (_KPROCESS **)RtlInsertElementGenericTableAvl(&IoStatusBlockRangeTable, Buffer, 0x10u, &NewElement);
  v30 = inserted;
  if ( !inserted )
    goto LABEL_8;
  if ( !NewElement )
  {
    for ( i = inserted[1];
          i && ((char *)i->Header.WaitListHead.Flink != v10 || (char *)i->Header.WaitListHead.Blink != &v10[v8]);
          i = (_KPROCESS *)i->DirectoryTableBase )
    {
      ;
    }
  }
  if ( i )
  {
    Mdl = 0LL;
  }
  else
  {
    i = (_KPROCESS *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x65546F49u);
    if ( !i )
    {
LABEL_8:
      FileObjectExtension = -1073741670;
      Mdl = 0LL;
      goto LABEL_58;
    }
    v38 = 1;
    if ( Object[1].ActiveProcessors.Bitmap[7] )
    {
      if ( ((unsigned __int8)v10 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    else if ( ((unsigned __int8)v10 & 7) != 0 )
    {
      ExRaiseDatatypeMisalignment();
    }
    if ( (unsigned __int64)&v10[v8] > MmUserProbeAddress || &v10[v8] < v10 )
      *(_BYTE *)MmUserProbeAddress = 0;
    Mdl = IoAllocateMdl(v10, v8, 0, 1u, 0LL);
    MemoryDescriptorList = Mdl;
    if ( !Mdl )
      RtlRaiseStatus(-1073741670);
    MmProbeAndLockPages(Mdl, *(_BYTE *)(a2 + 64), IoWriteAccess);
    if ( (Mdl->MdlFlags & 5) != 0 )
      MappedSystemVa = (struct _LIST_ENTRY *)Mdl->MappedSystemVa;
    else
      MappedSystemVa = (struct _LIST_ENTRY *)MmMapLockedPagesSpecifyCache(Mdl, 0, MmCached, 0LL, 0, 0x40000010u);
    BaseAddress = MappedSystemVa;
    if ( MappedSystemVa )
    {
      i->ProfileListHead.Flink = (struct _LIST_ENTRY *)Mdl;
      i->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v10;
      i->Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&v10[v26];
      i->Header.LockNV = 1;
      i->DirectoryTableBase = 0LL;
      i->ProfileListHead.Blink = MappedSystemVa;
    }
    else
    {
      FileObjectExtension = -1073741670;
    }
  }
  if ( FileObjectExtension < 0 )
    goto LABEL_58;
  PoolWithTag = (char **)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x65546F49u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
  {
    FileObjectExtension = -1073741670;
    goto LABEL_58;
  }
  memset(PoolWithTag, 0, 0x30uLL);
  *v5 = v10;
  v5[1] = &v10[v26];
  v5[3] = &v10[(unsigned __int64)((char *)i->ProfileListHead.Blink - (char *)i->Header.WaitListHead.Flink)];
  v5[2] = (char *)i->ProfileListHead.Flink;
  v5[5] = 0LL;
  ObfReferenceObjectWithTag(Object, 0x70436F49u);
  v5[4] = (char *)Object;
  FileObjectExtension = IopAllocateFileObjectExtension(a1, v33);
  if ( FileObjectExtension >= 0 )
  {
    FileObjectExtension = IopSetTypeSpecificFoExtension(v33[0], 2u, (signed __int64)v5);
    if ( FileObjectExtension == -1073741823 )
    {
      v19 = IopGetFileObjectExtension(a1, v18, 0LL);
      v20 = v19;
      if ( v5[4] == (char *)Object )
      {
        v21 = (char **)v19;
        if ( v19 )
        {
          while ( *v5 != *v21 || v5[1] != v21[1] )
          {
            v21 = (char **)v21[5];
            if ( !v21 )
              goto LABEL_46;
          }
          ObfDereferenceObjectWithTag(Object, 0x70436F49u);
          ExFreePoolWithTag(v5, 0);
          FileObjectExtension = 0;
          goto LABEL_68;
        }
LABEL_46:
        v22 = *(_QWORD *)(v19 + 40);
        v5[5] = (char *)v22;
        if ( (char *)_InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 40), (signed __int64)v5, v22) != v5[5] )
        {
          _m_prefetchw((const void *)(v20 + 40));
          do
          {
            v23 = *(_QWORD *)(v20 + 40);
            v5[5] = (char *)v23;
          }
          while ( (char *)_InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 40), (signed __int64)v5, v23) != v5[5] );
        }
        FileObjectExtension = 0;
        Mdl = MemoryDescriptorList;
      }
    }
    if ( FileObjectExtension < 0 )
      goto LABEL_58;
    if ( v38 == 1 )
    {
      if ( NewElement == 1 )
        *v30 = Object;
      else
        i->DirectoryTableBase = (unsigned __int64)v30[1];
      v30[1] = i;
    }
    else
    {
      ++i->Header.LockNV;
    }
  }
  if ( FileObjectExtension < 0 )
  {
LABEL_58:
    if ( Mdl )
    {
      if ( BaseAddress )
        MmUnmapLockedPages(BaseAddress, Mdl);
      MmUnlockPages(Mdl);
      IoFreeMdl(Mdl);
    }
    if ( v5 )
    {
      ObfDereferenceObjectWithTag(Object, 0x70436F49u);
      ExFreePoolWithTag(v5, 0);
    }
    if ( NewElement == 1 )
      RtlDeleteElementGenericTableAvl(&IoStatusBlockRangeTable, Buffer);
    if ( v38 == 1 )
      ExFreePoolWithTag(i, 0);
  }
LABEL_68:
  qword_14034BCC8 = 0LL;
  v24 = dword_14034BCF0;
  v25 = _InterlockedCompareExchange((volatile signed __int32 *)&IoStatusBlockRangeTableLock, 1, 0);
  if ( v25 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&IoStatusBlockRangeTableLock, v25);
  __writecr8(v24);
  KeAbPostRelease((ULONG_PTR)&IoStatusBlockRangeTableLock);
  return (unsigned int)FileObjectExtension;
}
