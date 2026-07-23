/*
 * XREFs of IoQuerySystemDeviceName @ 0x14054235C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopRetrieveSystemDeviceName @ 0x14054239C (IopRetrieveSystemDeviceName.c)
 *     IopFindSystemDevice @ 0x140629394 (IopFindSystemDevice.c)
 */

__int64 __fastcall IoQuerySystemDeviceName(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall *v5)(); // rcx
  __int64 v6; // rcx
  unsigned int SystemDeviceName; // ebx
  int SystemDevice; // edi
  unsigned int v10; // ecx
  PVOID P[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 == 98 )
  {
    v5 = SyspartDirectGetSystemPartition;
  }
  else
  {
    if ( a1 != 99 )
      return (unsigned int)-1073741821;
    v5 = SyspartDirectGetSystemDisk;
  }
  SystemDeviceName = IopRetrieveSystemDeviceName(v5, a2, a3, a4);
  if ( SystemDeviceName == -1073740718 && IopAmbiguousSystemDisk )
  {
    if ( a1 == 99 )
    {
      return (unsigned int)-1073740719;
    }
    else if ( a1 == 98 )
    {
      SystemDevice = IopFindSystemDevice(v6, P);
      if ( SystemDevice >= 0 )
        ExFreePoolWithTag(P[0], 0);
      v10 = SystemDeviceName;
      if ( SystemDevice == -1073740718 )
        return (unsigned int)-1073740719;
      return v10;
    }
  }
  return SystemDeviceName;
}
