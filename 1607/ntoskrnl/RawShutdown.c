/*
 * XREFs of RawShutdown @ 0x140682EB8
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x140053560 (IofCompleteRequest.c)
 *     IoDeleteDevice @ 0x14007F30C (IoDeleteDevice.c)
 *     RawScanDeletedList @ 0x1404EF3DC (RawScanDeletedList.c)
 *     IoUnregisterFileSystem @ 0x140623B90 (IoUnregisterFileSystem.c)
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
