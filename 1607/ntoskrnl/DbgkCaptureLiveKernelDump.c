/*
 * XREFs of DbgkCaptureLiveKernelDump @ 0x1401B7964
 * Callers:
 *     NtSystemDebugControl @ 0x1404C1E48 (NtSystemDebugControl.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14015A410 (ZwQueryInformationFile.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     DbgkpWerAllocatePool @ 0x14061BDD8 (DbgkpWerAllocatePool.c)
 *     DbgkpWerFreePool @ 0x14061C368 (DbgkpWerFreePool.c)
 *     IoCaptureLiveDump @ 0x140625FE4 (IoCaptureLiveDump.c)
 *     ObOpenObjectByPointerWithTag @ 0x140665DF4 (ObOpenObjectByPointerWithTag.c)
 */

__int64 __fastcall DbgkCaptureLiveKernelDump(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KPROCESSOR_MODE PreviousMode; // r15
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Status; // ebx
  void *Pool; // rax
  __int64 v10; // rsi
  void *v11; // rcx
  NTSTATUS v12; // eax
  PVOID v13; // r9
  const CHAR *v14; // r8
  void *v15; // rcx
  PVOID v16; // r15
  NTSTATUS v17; // eax
  int v18; // eax
  ULONG Tag[2]; // [rsp+20h] [rbp-30h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-10h] BYREF
  char FileInformation; // [rsp+90h] [rbp+40h] BYREF
  HANDLE FileHandle; // [rsp+98h] [rbp+48h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+50h] BYREF
  PVOID v24; // [rsp+A8h] [rbp+58h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !a1 )
    return 3221225485LL;
  if ( PreviousMode == 1 && (*(_DWORD *)(a1 + 56) & 4) != 0 && KdPitchDebugger && !KdLocalDebugEnabled )
    return 3221226324LL;
  FileHandle = 0LL;
  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  v24 = 0LL;
  --CurrentThread->KernelApcDisable;
  if ( _InterlockedExchange(&DbgkpBusy, 1) != 1 )
  {
    Pool = (void *)DbgkpWerAllocatePool(48LL);
    v10 = (__int64)Pool;
    if ( Pool )
    {
      memset(Pool, 0, 0x30uLL);
      *(_DWORD *)v10 = 1;
      *(_DWORD *)(v10 + 4) = 48;
      v11 = *(void **)(a1 + 48);
      if ( v11
        && (v12 = ObReferenceObjectByHandleWithTag(
                    v11,
                    0x100001u,
                    (POBJECT_TYPE)ExEventObjectType,
                    PreviousMode,
                    0x57676244u,
                    &Object,
                    0LL),
            Status = v12,
            v12 < 0) )
      {
        v13 = *(PVOID *)(a1 + 48);
        v14 = "DBGK: Invalid event handle %p, status 0x%X\n";
      }
      else
      {
        v15 = *(void **)(a1 + 40);
        if ( !v15 )
        {
          Status = -1073741811;
          goto LABEL_37;
        }
        v12 = ObReferenceObjectByHandleWithTag(
                v15,
                2u,
                (POBJECT_TYPE)IoFileObjectType,
                PreviousMode,
                0x57676244u,
                &v24,
                0LL);
        Status = v12;
        if ( v12 >= 0 )
        {
          v16 = v24;
          v12 = ObOpenObjectByPointerWithTag(
                  v24,
                  0x200u,
                  0LL,
                  2u,
                  (POBJECT_TYPE)IoFileObjectType,
                  0,
                  0x57676244u,
                  &FileHandle);
          Status = v12;
          if ( v12 >= 0 )
          {
            v17 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 4u, FileModeInformation);
            Status = v17;
            if ( v17 >= 0 )
            {
              Status = IoStatusBlock.Status;
              if ( IoStatusBlock.Status >= 0 )
              {
                if ( (FileInformation & 0x30) != 0 )
                {
                  *(_QWORD *)(v10 + 8) = FileHandle;
                  *(_QWORD *)(v10 + 16) = Object;
                  if ( (*(_DWORD *)(a1 + 56) & 4) != 0 )
                    *(_DWORD *)(v10 + 24) |= 4u;
                  if ( (*(_DWORD *)(a1 + 56) & 8) != 0 )
                    *(_DWORD *)(v10 + 24) |= 0x10u;
                  if ( (*(_DWORD *)(a1 + 60) & 1) != 0 )
                    *(_DWORD *)(v10 + 28) |= 1u;
                  DbgPrintEx(5u, 3u, "DBGK: Calling IoCaptureLiveDump\n");
                  v18 = IoCaptureLiveDump(
                          *(_DWORD *)(a1 + 4),
                          *(_QWORD *)(a1 + 8),
                          *(_QWORD *)(a1 + 16),
                          *(_QWORD *)(a1 + 24),
                          *(_QWORD *)(a1 + 32),
                          v10,
                          0LL);
                  Status = v18;
                  if ( v18 < 0 )
                    DbgPrintEx(5u, 0, "DBGK: IoCaptureLiveDump failed, status 0x%X\n", v18);
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
              DbgPrintEx(5u, 1u, "DBGK: ZwQueryInformationFile failed for dump file, status 0x%X\n", (unsigned int)v17);
            }
            goto LABEL_37;
          }
          v13 = v16;
          v14 = "DBGK: ObOpenObjectByPointerWithTag failed for file %p, status 0x%X\n";
        }
        else
        {
          v13 = *(PVOID *)(a1 + 40);
          v14 = "DBGK: Invalid file handle %p, ObReferenceObjectByHandleWithTag returns status 0x%X\n";
        }
      }
      Tag[0] = v12;
      DbgPrintEx(5u, 1u, v14, v13, *(_QWORD *)Tag);
    }
    else
    {
      DbgPrintEx(5u, 0, "DBGK: Could not allocate IoLivedumpControl\n");
      Status = -1073741801;
    }
LABEL_37:
    if ( FileHandle )
      ZwClose(FileHandle);
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x57676244u);
    if ( v24 )
      ObfDereferenceObjectWithTag(v24, 0x57676244u);
    if ( v10 )
      DbgkpWerFreePool(v10);
    _InterlockedExchange(&DbgkpBusy, 0);
    goto LABEL_46;
  }
  Status = -1073741267;
LABEL_46:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), a2, a3, a4);
  return Status;
}
