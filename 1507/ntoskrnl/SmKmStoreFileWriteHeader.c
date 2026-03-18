/*
 * XREFs of SmKmStoreFileWriteHeader @ 0x1406DE4F8
 * Callers:
 *     SmKmStoreFileCreate @ 0x1406DD710 (SmKmStoreFileCreate.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     MmCreateMdl @ 0x1400627F4 (MmCreateMdl.c)
 *     SmAlloc @ 0x1400D9FF4 (SmAlloc.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400DFCC0 (MmBuildMdlForNonPagedPool.c)
 *     IoSetThreadHardErrorMode @ 0x1400EFE84 (IoSetThreadHardErrorMode.c)
 *     IoSynchronousPageWrite @ 0x140112570 (IoSynchronousPageWrite.c)
 *     MmMdlPageContentsState @ 0x140122348 (MmMdlPageContentsState.c)
 *     ExFreePoolEx @ 0x140123144 (ExFreePoolEx.c)
 *     RtlComputeCrc32 @ 0x140134D10 (RtlComputeCrc32.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwWriteFile @ 0x14017F0F0 (ZwWriteFile.c)
 *     ZwQueryInformationFile @ 0x14017F210 (ZwQueryInformationFile.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmKmStoreFileWriteHeader(__int64 a1, int a2)
{
  struct _MDL *v4; // rdi
  BOOLEAN v5; // r15
  struct _PRIVILEGE_SET *v6; // rax
  struct _PRIVILEGE_SET *Buffer; // rsi
  NTSTATUS Status; // ebx
  struct _MDL *Mdl; // rax
  void *v10; // rcx
  NTSTATUS v11; // eax
  struct _KEVENT *p_Event; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-19h] BYREF
  LARGE_INTEGER StartingOffset; // [rsp+60h] [rbp-9h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-1h] BYREF
  _BYTE FileInformation[24]; // [rsp+80h] [rbp+17h] BYREF

  v4 = 0LL;
  v5 = IoSetThreadHardErrorMode(0);
  v6 = (struct _PRIVILEGE_SET *)SmAlloc(0x10000uLL, 0x68466D73u);
  Buffer = v6;
  if ( !v6 )
  {
    Status = -1073741670;
    goto LABEL_19;
  }
  if ( !a2 )
  {
    Mdl = MmCreateMdl(0LL, v6, 0x10000uLL);
    v4 = Mdl;
    if ( !Mdl )
    {
      Status = -1073741670;
      goto LABEL_17;
    }
    MmBuildMdlForNonPagedPool(Mdl);
    MmMdlPageContentsState((__int64)v4, 1u);
  }
  memset(Buffer, 0, 0x10000uLL);
  Buffer->PrivilegeCount = 1164135783;
  Buffer->Control = 3;
  Buffer[2].PrivilegeCount = 1;
  Buffer->Privilege[0].Luid.LowPart = RtlComputeCrc32(0, (PUCHAR)Buffer, 0x30u);
  StartingOffset.QuadPart = 0LL;
  v10 = *(void **)a1;
  if ( a2 )
  {
    v11 = ZwWriteFile(v10, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0x10000u, &StartingOffset, 0LL);
    p_Event = (struct _KEVENT *)(*(_QWORD *)(a1 + 8) + 152LL);
  }
  else
  {
    Status = ZwQueryInformationFile(v10, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
    if ( Status == 259 )
    {
      KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 8) + 152LL), Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status < 0 )
      goto LABEL_17;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v11 = IoSynchronousPageWrite(*(PFILE_OBJECT *)(a1 + 8), v4, &StartingOffset, &Event, &IoStatusBlock);
    p_Event = &Event;
  }
  Status = v11;
  if ( v11 == 259 )
  {
    KeWaitForSingleObject(p_Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
    Status = IoStatusBlock.Information != 0x10000 ? 0xC000016A : 0;
LABEL_17:
  ExFreePoolEx(Buffer);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
LABEL_19:
  IoSetThreadHardErrorMode(v5);
  return (unsigned int)Status;
}
