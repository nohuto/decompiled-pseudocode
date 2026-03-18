/*
 * XREFs of ACPIBuildProcessSpecialSynchronizationList @ 0x1C001BA58
 * Callers:
 *     ACPIBuildDeviceDpc @ 0x1C001B6A0 (ACPIBuildDeviceDpc.c)
 * Callees:
 *     ACPIBuildProcessGenericComplete @ 0x1C001BC00 (ACPIBuildProcessGenericComplete.c)
 */

__int64 ACPIBuildProcessSpecialSynchronizationList()
{
  PSLIST_ENTRY v0; // rdi
  unsigned int v1; // ebx
  char v2; // si
  PSLIST_ENTRY v3; // rcx
  int Next; // eax
  PSLIST_ENTRY v6; // rdi
  struct _SLIST_ENTRY *v7; // rcx

  v0 = AcpiBuildSpecialSynchronizationList;
  v1 = 0;
  v2 = 1;
  if ( AcpiBuildSpecialSynchronizationList != (PSLIST_ENTRY)&AcpiBuildSpecialSynchronizationList )
  {
    do
    {
      v3 = v0;
      v0 = v0->Next;
      Next = (int)v3[5].Next;
      if ( (Next & 8) != 0 && (__int64 *)AcpiBuildDeviceList != &AcpiBuildDeviceList
        || (Next & 0x20) != 0 && AcpiBuildSynchronizationList != (PSLIST_ENTRY)&AcpiBuildSynchronizationList
        || (Next & 1) != 0 && (__int64 *)AcpiBuildRunMethodList != &AcpiBuildRunMethodList
        || (Next & 2) != 0 && (__int64 *)AcpiBuildOperationRegionList != &AcpiBuildOperationRegionList
        || (Next & 0x10) != 0 && (__int64 *)AcpiBuildThermalZoneList != &AcpiBuildThermalZoneList
        || (Next & 4) != 0 && (__int64 *)AcpiBuildPowerResourceList != &AcpiBuildPowerResourceList )
      {
        v2 = 0;
      }
      else if ( (Next & 0x40) == 0 )
      {
        ACPIBuildProcessGenericComplete(v3);
      }
    }
    while ( v0 != (PSLIST_ENTRY)&AcpiBuildSpecialSynchronizationList );
    if ( v2 )
    {
      v6 = AcpiBuildSpecialSynchronizationList;
      while ( v6 != (PSLIST_ENTRY)&AcpiBuildSpecialSynchronizationList )
      {
        v7 = v6;
        v6 = v6->Next;
        ACPIBuildProcessGenericComplete(v7);
      }
    }
    else
    {
      return 259;
    }
  }
  return v1;
}
