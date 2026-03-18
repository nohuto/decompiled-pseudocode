/*
 * XREFs of FstubReadSectors @ 0x1404E857C
 * Callers:
 *     FstubReadTableEFI @ 0x14012CB00 (FstubReadTableEFI.c)
 *     FstubDetectPartitionStyle @ 0x1404E84F4 (FstubDetectPartitionStyle.c)
 *     FstubWriteBootSectorEFI @ 0x14051601C (FstubWriteBootSectorEFI.c)
 *     FstubReadHeaderEFI @ 0x140516A5C (FstubReadHeaderEFI.c)
 *     IoReadDiskSignature @ 0x14053FDCC (IoReadDiskSignature.c)
 *     FstubCreateDiskMBR @ 0x1405F6164 (FstubCreateDiskMBR.c)
 *     FstubCreateDiskRaw @ 0x1405F6208 (FstubCreateDiskRaw.c)
 *     FstubVerifyPartitionTableEFI @ 0x1405F6308 (FstubVerifyPartitionTableEFI.c)
 * Callees:
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     IoBuildSynchronousFsdRequest @ 0x1404A9D3C (IoBuildSynchronousFsdRequest.c)
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
