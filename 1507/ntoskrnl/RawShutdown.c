/*
 * XREFs of RawShutdown @ 0x1406C6B8C
 * Callers:
 *     <none>
 * Callees:
 *     IoDeleteDevice @ 0x140007508 (IoDeleteDevice.c)
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     RawScanDeletedList @ 0x14040E17C (RawScanDeletedList.c)
 *     IoUnregisterFileSystem @ 0x1406744B8 (IoUnregisterFileSystem.c)
 */

__int64 __fastcall RawShutdown(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  RawScanDeletedList(a1, (__int64)a2, a3, a4);
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
