/*
 * XREFs of FstubReadSectors @ 0x140563264
 * Callers:
 *     FstubReadTableEFI @ 0x1401E498C (FstubReadTableEFI.c)
 *     FstubDetectPartitionStyle @ 0x1405631F8 (FstubDetectPartitionStyle.c)
 *     IoReadDiskSignature @ 0x1405B748C (IoReadDiskSignature.c)
 *     FstubCreateDiskMBR @ 0x14066F3AC (FstubCreateDiskMBR.c)
 *     FstubCreateDiskRaw @ 0x14066F450 (FstubCreateDiskRaw.c)
 *     FstubReadHeaderEFI @ 0x14066F550 (FstubReadHeaderEFI.c)
 *     FstubVerifyPartitionTableEFI @ 0x14066F990 (FstubVerifyPartitionTableEFI.c)
 *     FstubWriteBootSectorEFI @ 0x14066FC00 (FstubWriteBootSectorEFI.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     IoBuildSynchronousFsdRequest @ 0x14040DFC8 (IoBuildSynchronousFsdRequest.c)
 */

NTSTATUS __fastcall FstubReadSectors(PDEVICE_OBJECT DeviceObject, unsigned int a2, __int64 a3, int a4, PVOID Buffer)
{
  PIRP v8; // rax
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+50h] [rbp-28h] BYREF
  LARGE_INTEGER Timeout; // [rsp+90h] [rbp+18h] BYREF

  Timeout.QuadPart = a3 * a2;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v8 = IoBuildSynchronousFsdRequest(3u, DeviceObject, Buffer, a4 * a2, &Timeout, &Object, &IoStatusBlock);
  if ( !v8 )
    return -1073741670;
  v8->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
  result = IofCallDriver(DeviceObject, v8);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
