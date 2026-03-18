/*
 * XREFs of NtGdiGetPhysicalMonitors @ 0x1C0259C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiGetPhysicalMonitors(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int PhysicalMonitorObjects; // ebx

  CMutex::Lock((CMutex *)qword_1C0329230);
  PhysicalMonitorObjects = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  if ( PhysicalMonitorObjects >= 0 )
  {
    PhysicalMonitorObjects = DrvCreatePhysicalMonitorObjects(a1, 1LL, 1LL, 1LL, a2, a3, a4);
    ReleaseUserCriticalSection();
  }
  CMutex::Unlock((CMutex *)qword_1C0329230);
  return (unsigned int)PhysicalMonitorObjects;
}
