/*
 * XREFs of NtGdiCreateOPMProtectedOutputs @ 0x1C0067420
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x1C0067880 (DrvCreatePhysicalMonitorObjects.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C0068860 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 */

__int64 __fastcall NtGdiCreateOPMProtectedOutputs(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        unsigned int a3,
        volatile void *a4,
        volatile void *Address)
{
  __int64 result; // rax
  unsigned int v9; // edi
  int PhysicalMonitorObjects; // ebx

  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  v9 = 0;
  if ( (int)result >= 0 )
  {
    PhysicalMonitorObjects = DrvCreatePhysicalMonitorObjects(a1, UserMode, a3, a4, Address);
    UserSessionSwitchLeaveCrit();
    if ( PhysicalMonitorObjects < 0 )
      return (unsigned int)PhysicalMonitorObjects;
    return v9;
  }
  return result;
}
