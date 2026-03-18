/*
 * XREFs of IopSetFileObjectIosbRange @ 0x1405F8D44
 * Callers:
 *     NtSetInformationFile @ 0x14008E8E0 (NtSetInformationFile.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     IoFreeMdl @ 0x1400395A0 (IoFreeMdl.c)
 *     MmUnmapLockedPages @ 0x14003A290 (MmUnmapLockedPages.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     IopAllocateFileObjectExtension @ 0x140074A60 (IopAllocateFileObjectExtension.c)
 *     IopGetFileObjectExtension @ 0x14007CDA0 (IopGetFileObjectExtension.c)
 *     RtlInsertElementGenericTableAvl @ 0x140090468 (RtlInsertElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x140090710 (RtlDeleteElementGenericTableAvl.c)
 *     MmProbeAndLockPages @ 0x1400A7230 (MmProbeAndLockPages.c)
 *     IopSetTypeSpecificFoExtension @ 0x1400CC3B4 (IopSetTypeSpecificFoExtension.c)
 *     IoAllocateMdl @ 0x1400FC2E0 (IoAllocateMdl.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopSetFileObjectIosbRange(__int64 a1, __int64 a2)
{
  _KPROCESS *i; // rdi
  char **v3; // r14
  int FileObjectExtension; // r15d
  _KPROCESS *Process; // rsi
  char **v6; // r12
  __int64 v7; // r13
  char *v9; // r12
  _KPROCESS **inserted; // rax
  PMDL Mdl; // rsi
  char v12; // r13
  struct _LIST_ENTRY *MappedSystemVa; // rax
  char **PoolWithTag; // rax
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // r8
  char **v18; // rcx
  signed __int64 v19; // rax
  signed __int64 v20; // rax
  PMDL MemoryDescriptorList; // [rsp+38h] [rbp-A0h]
  struct _LIST_ENTRY *BaseAddress; // [rsp+40h] [rbp-98h]
  _KPROCESS *Object; // [rsp+48h] [rbp-90h]
  _KPROCESS **v24; // [rsp+58h] [rbp-80h]
  __int64 v25[2]; // [rsp+80h] [rbp-58h] BYREF
  _QWORD Buffer[9]; // [rsp+90h] [rbp-48h] BYREF
  char v29; // [rsp+F0h] [rbp+18h]
  BOOLEAN NewElement; // [rsp+F8h] [rbp+20h] BYREF

  v29 = 0;
  NewElement = 0;
  i = 0LL;
  v3 = 0LL;
  v25[1] = 0LL;
  MemoryDescriptorList = 0LL;
  BaseAddress = 0LL;
  FileObjectExtension = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  Object = Process;
  v6 = *(char ***)(a2 + 24);
  v7 = *((unsigned int *)v6 + 2);
  if ( !(_DWORD)v7 )
    return 3221225485LL;
  v9 = *v6;
  ExAcquireFastMutex(&IoStatusBlockRangeTableLock);
  Buffer[0] = Process;
  inserted = (_KPROCESS **)RtlInsertElementGenericTableAvl(&IoStatusBlockRangeTable, Buffer, 0x10u, &NewElement);
  v24 = inserted;
  if ( !inserted )
  {
    FileObjectExtension = -1073741670;
    Mdl = 0LL;
    v12 = 0;
LABEL_56:
    if ( Mdl )
    {
      if ( BaseAddress )
        MmUnmapLockedPages(BaseAddress, Mdl);
      MmUnlockPages(Mdl);
      IoFreeMdl(Mdl);
    }
    if ( v3 )
    {
      ObfDereferenceObjectWithTag(Object, 0x70436F49u);
      ExFreePoolWithTag(v3, 0);
    }
    if ( NewElement == 1 )
      RtlDeleteElementGenericTableAvl(&IoStatusBlockRangeTable, Buffer);
    if ( v12 == 1 )
      ExFreePoolWithTag(i, 0);
    goto LABEL_66;
  }
  if ( !NewElement )
  {
    for ( i = inserted[1];
          i && ((char *)i->Header.WaitListHead.Flink != v9 || (char *)i->Header.WaitListHead.Blink != &v9[v7]);
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
      FileObjectExtension = -1073741670;
      Mdl = 0LL;
      v12 = 0;
      goto LABEL_56;
    }
    v29 = 1;
    if ( Process[1].ActiveProcessors.Bitmap[7] )
    {
      if ( ((unsigned __int8)v9 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    else if ( ((unsigned __int8)v9 & 7) != 0 )
    {
      ExRaiseDatatypeMisalignment();
    }
    if ( (unsigned __int64)&v9[v7] > MmUserProbeAddress || &v9[v7] < v9 )
      *(_BYTE *)MmUserProbeAddress = 0;
    Mdl = IoAllocateMdl(v9, v7, 0, 1u, 0LL);
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
      i->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v9;
      i->Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&v9[(unsigned int)v7];
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
    goto LABEL_54;
  PoolWithTag = (char **)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x65546F49u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
  {
    FileObjectExtension = -1073741670;
    v12 = v29;
    goto LABEL_56;
  }
  memset(PoolWithTag, 0, 0x30uLL);
  *v3 = v9;
  v3[1] = &v9[(unsigned int)v7];
  v3[3] = &v9[(unsigned __int64)((char *)i->ProfileListHead.Blink - (char *)i->Header.WaitListHead.Flink)];
  v3[2] = (char *)i->ProfileListHead.Flink;
  v3[5] = 0LL;
  ObfReferenceObjectWithTag(Object, 0x70436F49u);
  v3[4] = (char *)Object;
  FileObjectExtension = IopAllocateFileObjectExtension(a1, v25);
  if ( FileObjectExtension < 0 )
  {
LABEL_54:
    v12 = v29;
  }
  else
  {
    FileObjectExtension = IopSetTypeSpecificFoExtension(v25[0], 2u, (signed __int64)v3);
    if ( FileObjectExtension == -1073741823 )
    {
      v16 = IopGetFileObjectExtension(a1, v15, 0LL);
      v17 = v16;
      if ( v3[4] == (char *)Object )
      {
        v18 = (char **)v16;
        if ( v16 )
        {
          while ( *v3 != *v18 || v3[1] != v18[1] )
          {
            v18 = (char **)v18[5];
            if ( !v18 )
              goto LABEL_43;
          }
          ObfDereferenceObjectWithTag(Object, 0x70436F49u);
          ExFreePoolWithTag(v3, 0);
          FileObjectExtension = 0;
          goto LABEL_66;
        }
LABEL_43:
        v19 = *(_QWORD *)(v16 + 40);
        v3[5] = (char *)v19;
        if ( (char *)_InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 40), (signed __int64)v3, v19) != v3[5] )
        {
          _m_prefetchw((const void *)(v17 + 40));
          do
          {
            v20 = *(_QWORD *)(v17 + 40);
            v3[5] = (char *)v20;
          }
          while ( (char *)_InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 40), (signed __int64)v3, v20) != v3[5] );
        }
        FileObjectExtension = 0;
        Mdl = MemoryDescriptorList;
      }
    }
    v12 = v29;
    if ( FileObjectExtension < 0 )
      goto LABEL_56;
    if ( v29 == 1 )
    {
      if ( NewElement == 1 )
        *v24 = Object;
      else
        i->DirectoryTableBase = (unsigned __int64)v24[1];
      v24[1] = i;
    }
    else
    {
      ++i->Header.LockNV;
    }
  }
  if ( FileObjectExtension < 0 )
    goto LABEL_56;
LABEL_66:
  KeReleaseGuardedMutex(&IoStatusBlockRangeTableLock);
  return (unsigned int)FileObjectExtension;
}
