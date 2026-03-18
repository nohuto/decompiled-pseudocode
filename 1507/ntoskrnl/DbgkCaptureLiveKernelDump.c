/*
 * XREFs of DbgkCaptureLiveKernelDump @ 0x1401E16B0
 * Callers:
 *     NtSystemDebugControl @ 0x1406FBA78 (NtSystemDebugControl.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14017F210 (ZwQueryInformationFile.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     DbgkpWerAllocatePool @ 0x14066A7C4 (DbgkpWerAllocatePool.c)
 *     DbgkpWerFreePool @ 0x14066AD80 (DbgkpWerFreePool.c)
 *     IoCaptureLiveDump @ 0x140676C1C (IoCaptureLiveDump.c)
 *     ObOpenObjectByPointerWithTag @ 0x1406AB7DC (ObOpenObjectByPointerWithTag.c)
 */

__int64 __fastcall DbgkCaptureLiveKernelDump(__int64 a1)
{
  KPROCESSOR_MODE PreviousMode; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v5; // rcx
  __int16 v6; // ax
  void *Pool; // rax
  __int64 v8; // rdi
  unsigned int Status; // ebx
  void *v10; // rcx
  NTSTATUS v11; // eax
  PVOID v12; // r9
  const CHAR *v13; // r8
  void *v14; // rcx
  PVOID v15; // r14
  NTSTATUS v16; // eax
  int v17; // eax
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  ULONG Tag[2]; // [rsp+20h] [rbp-30h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-10h] BYREF
  char FileInformation; // [rsp+90h] [rbp+40h] BYREF
  HANDLE FileHandle; // [rsp+98h] [rbp+48h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+50h] BYREF
  PVOID v25; // [rsp+A8h] [rbp+58h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !a1 )
    return 3221225485LL;
  if ( PreviousMode == 1 && (*(_DWORD *)(a1 + 56) & 4) != 0 && KdPitchDebugger && !KdLocalDebugEnabled )
    return 3221226324LL;
  FileHandle = 0LL;
  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  v25 = 0LL;
  --CurrentThread->KernelApcDisable;
  if ( _InterlockedExchange(&DbgkpBusy, 1) == 1 )
  {
    v5 = KeGetCurrentThread();
    v6 = v5->KernelApcDisable + 1;
    v5->KernelApcDisable = v6;
    if ( !v6
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v5->ApcState.ApcListHead[0].Flink != &v5->152
      && !v5->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 3221226029LL;
  }
  Pool = (void *)DbgkpWerAllocatePool(48LL);
  v8 = (__int64)Pool;
  if ( Pool )
  {
    memset(Pool, 0, 0x30uLL);
    *(_DWORD *)v8 = 1;
    *(_DWORD *)(v8 + 4) = 48;
    v10 = *(void **)(a1 + 48);
    if ( v10
      && (v11 = ObReferenceObjectByHandleWithTag(
                  v10,
                  0x100001u,
                  (POBJECT_TYPE)ExEventObjectType,
                  PreviousMode,
                  0x57676244u,
                  &Object,
                  0LL),
          Status = v11,
          v11 < 0) )
    {
      v12 = *(PVOID *)(a1 + 48);
      v13 = "DBGK: Invalid event handle %p, status 0x%X\n";
    }
    else
    {
      v14 = *(void **)(a1 + 40);
      if ( !v14 )
      {
        Status = -1073741811;
        goto LABEL_41;
      }
      v11 = ObReferenceObjectByHandleWithTag(
              v14,
              2u,
              (POBJECT_TYPE)IoFileObjectType,
              PreviousMode,
              0x57676244u,
              &v25,
              0LL);
      Status = v11;
      if ( v11 >= 0 )
      {
        v15 = v25;
        v11 = ObOpenObjectByPointerWithTag(
                v25,
                0x200u,
                0LL,
                2u,
                (POBJECT_TYPE)IoFileObjectType,
                0,
                0x57676244u,
                &FileHandle);
        Status = v11;
        if ( v11 >= 0 )
        {
          v16 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 4u, FileModeInformation);
          Status = v16;
          if ( v16 >= 0 )
          {
            Status = IoStatusBlock.Status;
            if ( IoStatusBlock.Status >= 0 )
            {
              if ( (FileInformation & 0x30) != 0 )
              {
                *(_QWORD *)(v8 + 8) = FileHandle;
                *(_QWORD *)(v8 + 16) = Object;
                if ( (*(_DWORD *)(a1 + 56) & 4) != 0 )
                  *(_DWORD *)(v8 + 24) |= 4u;
                if ( (*(_DWORD *)(a1 + 56) & 8) != 0 )
                  *(_DWORD *)(v8 + 24) |= 0x10u;
                if ( (*(_DWORD *)(a1 + 60) & 1) != 0 )
                  *(_DWORD *)(v8 + 28) |= 1u;
                DbgPrintEx(5u, 3u, "DBGK: Calling IoCaptureLiveDump\n");
                v17 = IoCaptureLiveDump(
                        *(_DWORD *)(a1 + 4),
                        *(_QWORD *)(a1 + 8),
                        *(_QWORD *)(a1 + 16),
                        *(_QWORD *)(a1 + 24),
                        *(_QWORD *)(a1 + 32),
                        v8,
                        0LL);
                Status = v17;
                if ( v17 < 0 )
                  DbgPrintEx(5u, 0, "DBGK: IoCaptureLiveDump failed, status 0x%X\n", v17);
              }
              else
              {
                Status = -1073741811;
                DbgPrintEx(5u, 1u, "DBGK: File was not opened for synchronous access.\n");
              }
            }
            else
            {
              DbgPrintEx(
                5u,
                1u,
                "DBGK: ZwQueryInformationFile IoStatusBlock.Status is failure, status 0x%X\n",
                (unsigned int)IoStatusBlock.Status);
            }
          }
          else
          {
            DbgPrintEx(5u, 1u, "DBGK: ZwQueryInformationFile failed for dump file, status 0x%X\n", (unsigned int)v16);
          }
          goto LABEL_41;
        }
        v12 = v15;
        v13 = "DBGK: ObOpenObjectByPointerWithTag failed for file %p, status 0x%X\n";
      }
      else
      {
        v12 = *(PVOID *)(a1 + 40);
        v13 = "DBGK: Invalid file handle %p, ObReferenceObjectByHandleWithTag returns status 0x%X\n";
      }
    }
    Tag[0] = v11;
    DbgPrintEx(5u, 1u, v13, v12, *(_QWORD *)Tag);
  }
  else
  {
    DbgPrintEx(5u, 0, "DBGK: Could not allocate IoLivedumpControl\n");
    Status = -1073741801;
  }
LABEL_41:
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x57676244u);
  if ( v25 )
    ObfDereferenceObjectWithTag(v25, 0x57676244u);
  if ( v8 )
    DbgkpWerFreePool(v8);
  _InterlockedExchange(&DbgkpBusy, 0);
  v18 = KeGetCurrentThread();
  v19 = v18->KernelApcDisable + 1;
  v18->KernelApcDisable = v19;
  if ( !v19
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
    && !v18->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return Status;
}
