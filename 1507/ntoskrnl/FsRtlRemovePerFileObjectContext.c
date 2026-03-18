/*
 * XREFs of FsRtlRemovePerFileObjectContext @ 0x140071350
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     IopGetFileObjectExtension @ 0x1400716C0 (IopGetFileObjectExtension.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

PFSRTL_PER_FILEOBJECT_CONTEXT __stdcall FsRtlRemovePerFileObjectContext(
        PFILE_OBJECT FileObject,
        PVOID OwnerId,
        PVOID InstanceId)
{
  ULONG_PTR FileObjectExtension; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v9; // rbx
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rbp
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *Flink; // rax
  struct _LIST_ENTRY *v14; // rcx
  struct _LIST_ENTRY *Blink; // rax
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  struct _KTHREAD *v18; // rdx
  __int16 v19; // ax
  $CD287064E7C9F7953DE243E927CFCB99 *v20; // rcx
  struct _FSRTL_PER_FILEOBJECT_CONTEXT **v22; // rax

  if ( !FileObject )
    return 0LL;
  if ( !FileObject->FileObjectExtension )
    return 0LL;
  FileObjectExtension = IopGetFileObjectExtension(FileObject, 3LL, 0LL);
  if ( !FileObjectExtension )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v10 = 0LL;
  --CurrentThread->KernelApcDisable;
  v11 = KeAbPreAcquire(FileObjectExtension, 0LL, v6, v7);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)FileObjectExtension, 0LL) )
    ExfAcquirePushLockExclusiveEx(FileObjectExtension, v11, FileObjectExtension);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  if ( InstanceId )
  {
    Flink = *(struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(FileObjectExtension + 8);
    if ( Flink != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)(FileObjectExtension + 8) )
    {
      while ( Flink->OwnerId != OwnerId || Flink->InstanceId != InstanceId )
      {
        Flink = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)Flink->Links.Flink;
        if ( Flink == (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)(FileObjectExtension + 8) )
          goto LABEL_17;
      }
      goto LABEL_12;
    }
  }
  else if ( OwnerId )
  {
    Flink = *(struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(FileObjectExtension + 8);
    if ( Flink != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)(FileObjectExtension + 8) )
    {
      while ( Flink->OwnerId != OwnerId )
      {
        Flink = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)Flink->Links.Flink;
        if ( Flink == (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)(FileObjectExtension + 8) )
          goto LABEL_17;
      }
LABEL_12:
      v10 = Flink;
      goto LABEL_13;
    }
  }
  else
  {
    v22 = (struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(FileObjectExtension + 8);
    if ( *v22 != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v22 )
    {
      v10 = *v22;
LABEL_13:
      if ( v10 )
      {
        v14 = v10->Links.Flink;
        Blink = v10->Links.Blink;
        if ( (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v10->Links.Flink->Blink != v10
          || (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)Blink->Flink != v10 )
        {
          __fastfail(3u);
        }
        Blink->Flink = v14;
        v14->Blink = Blink;
      }
    }
  }
LABEL_17:
  _m_prefetchw((const void *)FileObjectExtension);
  v16 = *(_QWORD *)FileObjectExtension;
  if ( (*(_QWORD *)FileObjectExtension & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v9 = v16 - 16;
  if ( (v16 & 2) != 0
    || (v17 = *(_QWORD *)FileObjectExtension,
        v17 != _InterlockedCompareExchange64((volatile signed __int64 *)FileObjectExtension, v9, v16)) )
  {
    ExfReleasePushLock(FileObjectExtension);
  }
  KeAbPostRelease(FileObjectExtension);
  v18 = KeGetCurrentThread();
  v19 = v18->KernelApcDisable + 1;
  v18->KernelApcDisable = v19;
  if ( !v19 )
  {
    v20 = &v18->152;
    if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != v20 && !v18->SpecialApcDisable )
      KiCheckForKernelApcDelivery(v20);
  }
  return v10;
}
