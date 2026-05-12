/*
 * XREFs of RaidUnitIdentityUpdateWorkRoutine @ 0x1C0034560
 * Callers:
 *     <none>
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002A80 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00047F4 (RaUnitReleaseRemoveLock.c)
 *     RaidDeleteBusEnumerator @ 0x1C000C390 (RaidDeleteBusEnumerator.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C000E040 (RaidBusEnumeratorVisitUnit.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 *     WPP_SF_qqD @ 0x1C00279B4 (WPP_SF_qqD.c)
 *     RaidLogRequestComplete @ 0x1C00337C0 (RaidLogRequestComplete.c)
 */

void __fastcall RaidUnitIdentityUpdateWorkRoutine(PDEVICE_OBJECT DeviceObject, PIO_WORKITEM *Context)
{
  void *DeviceExtension; // rdi
  int v4; // [rsp+28h] [rbp-A0h]
  _QWORD v5[19]; // [rsp+30h] [rbp-98h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  memset(v5, 0, 0x88uLL);
  v5[16] = &v5[15];
  v5[15] = &v5[15];
  v5[0] = *((_QWORD *)DeviceExtension + 3);
  RaidBusEnumeratorVisitUnit((__int64)v5, *((_DWORD *)DeviceExtension + 22));
  RaidDeleteBusEnumerator((__int64)v5);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    v4 = *((_DWORD *)Context[1] + 12);
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x3Bu,
      (__int64)&WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids,
      DeviceExtension,
      Context[1],
      v4);
  }
  if ( (qword_1C0048010 & 0x10) != 0 )
    RaidLogRequestComplete(
      *((_QWORD *)DeviceExtension + 3),
      (__int64)Context[1],
      *(_QWORD *)(*((_QWORD *)Context[1] + 23) + 8LL));
  RaidCompleteRequestEx((PIRP)Context[1], 1, *((_DWORD *)Context[1] + 12));
  IoFreeWorkItem(*Context);
  ExFreePoolWithTag(Context, 0x49576152u);
  RaUnitReleaseRemoveLock((__int64)DeviceExtension);
}
