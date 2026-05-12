/*
 * XREFs of RaDriverUnload @ 0x1C002B6C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C002AF28 (WPP_SF_q.c)
 *     RaDeleteDriver @ 0x1C005E900 (RaDeleteDriver.c)
 *     WppCleanupKm @ 0x1C005EA18 (WppCleanupKm.c)
 */

__int64 __fastcall RaDriverUnload(PDRIVER_OBJECT DriverObject)
{
  PVOID DriverObjectExtension; // rax

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xAu,
      (__int64)&WPP_8629c91f542f3f4c40fd99d44e5decef_Traceguids,
      DriverObject);
  }
  WppCleanupKm();
  DriverObjectExtension = IoGetDriverObjectExtension(DriverObject, DriverEntry);
  RaDeleteDriver(DriverObjectExtension);
  return 0LL;
}
