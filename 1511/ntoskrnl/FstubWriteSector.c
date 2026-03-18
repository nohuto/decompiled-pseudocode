/*
 * XREFs of FstubWriteSector @ 0x140516724
 * Callers:
 *     FstubWriteBootSectorEFI @ 0x14051601C (FstubWriteBootSectorEFI.c)
 *     FstubWriteHeaderEFI @ 0x14051636C (FstubWriteHeaderEFI.c)
 *     FstubWriteEntryEFI @ 0x140516634 (FstubWriteEntryEFI.c)
 *     FstubCreateDiskMBR @ 0x1405F6164 (FstubCreateDiskMBR.c)
 *     FstubCreateDiskRaw @ 0x1405F6208 (FstubCreateDiskRaw.c)
 *     FstubVerifyPartitionTableEFI @ 0x1405F6308 (FstubVerifyPartitionTableEFI.c)
 * Callees:
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     IoBuildSynchronousFsdRequest @ 0x1404A9D3C (IoBuildSynchronousFsdRequest.c)
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
