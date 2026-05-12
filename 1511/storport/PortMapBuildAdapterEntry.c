/*
 * XREFs of PortMapBuildAdapterEntry @ 0x1C000C954
 * Callers:
 *     RaidAdapterCreateDevmapEntry @ 0x1C000F6E0 (RaidAdapterCreateDevmapEntry.c)
 * Callees:
 *     PortRegistrySetValueKey @ 0x1C000CB6C (PortRegistrySetValueKey.c)
 *     PortRegistryCreateKeyEx @ 0x1C000FB30 (PortRegistryCreateKeyEx.c)
 */

__int64 __fastcall PortMapBuildAdapterEntry(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        unsigned __int16 *a6,
        HANDLE Handle,
        _QWORD *a8)
{
  __int64 result; // rax
  HANDLE v9; // rbx

  result = PortRegistryCreateKeyEx(a1, 1LL, &Handle, L"Scsi Port %d", a2);
  if ( (int)result >= 0 )
  {
    v9 = Handle;
    if ( a3 )
      PortRegistrySetValueKey(Handle, 4u);
    PortRegistrySetValueKey(v9, 4u);
    if ( a6 )
      PortRegistrySetValueKey(v9, *a6 + 2);
    if ( a8 )
      *a8 = v9;
    else
      ZwClose(v9);
    return 0LL;
  }
  return result;
}
