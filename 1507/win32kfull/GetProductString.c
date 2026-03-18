/*
 * XREFs of GetProductString @ 0x1C01CBB38
 * Callers:
 *     CreatePointerDeviceInfo @ 0x1C01C7A40 (CreatePointerDeviceInfo.c)
 * Callees:
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall GetProductString(__int64 a1, struct _DEVICE_OBJECT *a2, struct _FILE_OBJECT *a3)
{
  unsigned int Status; // ebx
  void *OutputBuffer; // rdi
  PIRP v8; // rax
  __int64 v9; // rax
  ULONG_PTR Information; // r8
  void *v11; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  Status = -1073741811;
  OutputBuffer = (void *)Win32AllocPoolNonPaged(512LL, 1802531669LL);
  if ( OutputBuffer )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v8 = IoBuildDeviceIoControlRequest(0xB01BEu, a2, 0LL, 0, OutputBuffer, 0x200u, 0, &Event, &IoStatusBlock);
    if ( v8 )
    {
      v8->Tail.Overlay.CurrentStackLocation[-1].FileObject = a3;
      Status = IofCallDriver(a2, v8);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( !Status )
      {
        v9 = Win32AllocPool(IoStatusBlock.Information + 2, 2003071829LL);
        *(_QWORD *)(a1 + 280) = v9;
        if ( v9 )
        {
          *(_WORD *)(v9 + 2 * (IoStatusBlock.Information >> 1)) = 0;
          Information = IoStatusBlock.Information;
          v11 = *(void **)(a1 + 280);
          *(_WORD *)(a1 + 272) = IoStatusBlock.Information;
          *(_WORD *)(a1 + 274) = Information;
          memmove(v11, OutputBuffer, Information);
        }
      }
    }
    Win32FreePool(OutputBuffer);
  }
  return Status;
}
