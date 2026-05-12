/*
 * XREFs of RaidUnitIdentityUpdateWorkRoutine @ 0x1C0032C80
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0003980 (RaUnitReleaseRemoveLock.c)
 *     RaidDeleteBusEnumerator @ 0x1C000A158 (RaidDeleteBusEnumerator.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C000BDD8 (RaidBusEnumeratorVisitUnit.c)
 *     memset @ 0x1C0013300 (memset.c)
 */

void __fastcall RaidUnitIdentityUpdateWorkRoutine(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  void *DeviceExtension; // rbx
  _QWORD v4[19]; // [rsp+20h] [rbp-98h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  memset(v4, 0, 0x88uLL);
  v4[16] = &v4[15];
  v4[15] = &v4[15];
  v4[0] = *((_QWORD *)DeviceExtension + 3);
  RaidBusEnumeratorVisitUnit((__int64)v4, *((_DWORD *)DeviceExtension + 22));
  RaidDeleteBusEnumerator((__int64)v4);
  IoFreeWorkItem(Context);
  RaUnitReleaseRemoveLock((__int64)DeviceExtension);
}
