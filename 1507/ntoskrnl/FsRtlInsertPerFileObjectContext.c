/*
 * XREFs of FsRtlInsertPerFileObjectContext @ 0x1400714D0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     IoChangeFileObjectFilterContext @ 0x140071654 (IoChangeFileObjectFilterContext.c)
 *     IoGetFileObjectFilterContext @ 0x1400716FC (IoGetFileObjectFilterContext.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall FsRtlInsertPerFileObjectContext(PFILE_OBJECT FileObject, PFSRTL_PER_FILEOBJECT_CONTEXT Ptr)
{
  NTSTATUS result; // eax
  __int64 v5; // r9
  signed __int64 v6; // rbx
  _QWORD *PoolWithTag; // rax
  __int64 v8; // r8
  void *v9; // rdi
  _QWORD *v10; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int32 *v12; // rdi
  __int64 v13; // rax
  signed __int8 v14; // cf
  signed __int64 *v15; // rdi
  __int64 v16; // rsi
  struct _LIST_ENTRY *v17; // rcx
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  ULONG_PTR v20; // rbx
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp+8h] BYREF

  if ( !FileObject )
    return -1073741811;
  result = IoGetFileObjectFilterContext(FileObject, &BugCheckParameter2, 1);
  if ( result >= 0 )
  {
    v6 = 0LL;
    if ( BugCheckParameter2 )
      goto LABEL_6;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x58434F46u);
    BugCheckParameter2 = (ULONG_PTR)PoolWithTag;
    v9 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    *PoolWithTag = 0LL;
    LOBYTE(v8) = 1;
    v10 = PoolWithTag + 1;
    v10[1] = v10;
    *v10 = v10;
    if ( (int)IoChangeFileObjectFilterContext(FileObject, v9, v8) >= 0
      || (ExFreePoolWithTag(v9, 0),
          IoGetFileObjectFilterContext(FileObject, &BugCheckParameter2, 0LL),
          BugCheckParameter2) )
    {
LABEL_6:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v12 = (volatile signed __int32 *)BugCheckParameter2;
      v13 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL, v5);
      v14 = _interlockedbittestandset64(v12, 0LL);
      v15 = (signed __int64 *)BugCheckParameter2;
      v16 = v13;
      if ( v14 )
        ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v13, BugCheckParameter2);
      if ( v16 )
      {
        *(_BYTE *)(v16 + 26) |= 1u;
        v15 = (signed __int64 *)BugCheckParameter2;
      }
      v17 = (struct _LIST_ENTRY *)v15[1];
      Ptr->Links.Flink = v17;
      Ptr->Links.Blink = (struct _LIST_ENTRY *)(v15 + 1);
      if ( (signed __int64 *)v17->Blink != v15 + 1 )
        __fastfail(3u);
      v17->Blink = &Ptr->Links;
      v15[1] = (signed __int64)Ptr;
      _m_prefetchw(v15);
      v18 = *v15;
      if ( (*v15 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v6 = v18 - 16;
      if ( (v18 & 2) != 0
        || (v19 = *v15, v19 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v6, v18)) )
      {
        v20 = BugCheckParameter2;
        ExfReleasePushLock(BugCheckParameter2);
      }
      else
      {
        v20 = BugCheckParameter2;
      }
      KeAbPostRelease(v20);
      v21 = KeGetCurrentThread();
      v22 = v21->KernelApcDisable + 1;
      v21->KernelApcDisable = v22;
      if ( !v22
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
        && !v21->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery(v21);
      }
      return 0;
    }
    else
    {
      return -1073741823;
    }
  }
  return result;
}
