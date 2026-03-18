/*
 * XREFs of FstubWriteSector @ 0x140670158
 * Callers:
 *     FstubCreateDiskMBR @ 0x14066F3AC (FstubCreateDiskMBR.c)
 *     FstubCreateDiskRaw @ 0x14066F450 (FstubCreateDiskRaw.c)
 *     FstubVerifyPartitionTableEFI @ 0x14066F990 (FstubVerifyPartitionTableEFI.c)
 *     FstubWriteBootSectorEFI @ 0x14066FC00 (FstubWriteBootSectorEFI.c)
 *     FstubWriteEntryEFI @ 0x14066FCE4 (FstubWriteEntryEFI.c)
 *     FstubWriteHeaderEFI @ 0x14066FDCC (FstubWriteHeaderEFI.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     IoBuildSynchronousFsdRequest @ 0x14040DFC8 (IoBuildSynchronousFsdRequest.c)
 */

NTSTATUS __fastcall FstubWriteSector(PDEVICE_OBJECT DeviceObject, ULONG Length, __int64 a3, void *a4)
{
  PIRP v7; // rax
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+50h] [rbp-28h] BYREF
  LARGE_INTEGER Timeout; // [rsp+90h] [rbp+18h] BYREF

  Timeout.QuadPart = a3 * Length;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v7 = IoBuildSynchronousFsdRequest(4u, DeviceObject, a4, Length, &Timeout, &Object, &IoStatusBlock);
  if ( !v7 )
    return -1073741670;
  v7->Tail.Overlay.CurrentStackLocation[-1].Flags |= 0x12u;
  result = IofCallDriver(DeviceObject, v7);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
