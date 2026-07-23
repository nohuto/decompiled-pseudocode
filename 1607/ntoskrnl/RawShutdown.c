/*
 * XREFs of RawShutdown @ 0x140682F9C
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1400530E0 (IofCompleteRequest.c)
 *     IoDeleteDevice @ 0x14007F38C (IoDeleteDevice.c)
 *     RawScanDeletedList @ 0x1404D14A0 (RawScanDeletedList.c)
 *     IoUnregisterFileSystem @ 0x140623C44 (IoUnregisterFileSystem.c)
 */

__int64 __fastcall RawShutdown(__int64 a1, IRP *a2)
{
  RawScanDeletedList();
  IoUnregisterFileSystem(RawDeviceDiskObject);
  IoUnregisterFileSystem(RawDeviceCdRomObject);
  IoUnregisterFileSystem(RawDeviceTapeObject);
  IoDeleteDevice(RawDeviceTapeObject);
  IoDeleteDevice(RawDeviceCdRomObject);
  IoDeleteDevice(RawDeviceDiskObject);
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 1);
  return 0LL;
}
