/*
 * XREFs of FsRtlQueryCachedVdl @ 0x14040AA88
 * Callers:
 *     <none>
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x140006EE4 (IoBuildDeviceIoControlRequest.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall FsRtlQueryCachedVdl(PFILE_OBJECT FileObject, _QWORD *a2)
{
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rsi
  PIRP v5; // rax
  IRP *v6; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Status; // edx
  char *v9; // rcx
  __int64 v10; // r8
  struct _KEVENT Event; // [rsp+50h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-70h] BYREF
  __m128i si128; // [rsp+80h] [rbp-58h] BYREF
  int v15; // [rsp+90h] [rbp-48h]
  char v16; // [rsp+98h] [rbp-40h] BYREF

  KeInitializeEvent(&Event, NotificationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v5 = IoBuildDeviceIoControlRequest(0x90284u, RelatedDeviceObject, 0LL, 0, 0LL, 0, 0, &Event, &IoStatusBlock);
  v6 = v5;
  if ( !v5 )
    return 3221225626LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v15 = 1;
  v5->AssociatedIrp.MasterIrp = (struct _IRP *)&si128;
  CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].FileObject = FileObject;
  CurrentStackLocation[-1].MajorFunction = 13;
  CurrentStackLocation[-1].Parameters.Create.Options = 24;
  CurrentStackLocation[-1].Parameters.Read.Length = 64;
  Status = IofCallDriver(RelatedDeviceObject, v6);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( (Status & 0xC0000000) != 0xC0000000 )
  {
    *a2 = 0LL;
    if ( si128.m128i_i32[2] )
    {
      v9 = &v16;
      v10 = si128.m128i_u32[2];
      do
      {
        if ( (*((_DWORD *)v9 + 2) & 1) != 0 )
          *a2 = *(_QWORD *)v9 + *((_QWORD *)v9 - 1);
        v9 += 24;
        --v10;
      }
      while ( v10 );
    }
  }
  return Status;
}
