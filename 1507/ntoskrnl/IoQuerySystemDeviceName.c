/*
 * XREFs of IoQuerySystemDeviceName @ 0x14057F754
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IopRetrieveSystemDeviceName @ 0x14057F7A8 (IopRetrieveSystemDeviceName.c)
 *     IopFindSystemDevice @ 0x140679E48 (IopFindSystemDevice.c)
 */

__int64 __fastcall IoQuerySystemDeviceName(int a1)
{
  __int64 (__fastcall *v2)(); // rcx
  __int64 v3; // rcx
  unsigned int SystemDeviceName; // ebx
  int SystemDevice; // edi
  unsigned int v7; // ecx
  PVOID P[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 == 98 )
  {
    v2 = SyspartDirectGetSystemPartition;
  }
  else
  {
    if ( a1 != 99 )
      return (unsigned int)-1073741821;
    v2 = SyspartDirectGetSystemDisk;
  }
  SystemDeviceName = IopRetrieveSystemDeviceName(v2);
  if ( SystemDeviceName == -1073740718 && IopAmbiguousSystemDisk )
  {
    if ( a1 == 99 )
    {
      return (unsigned int)-1073740719;
    }
    else if ( a1 == 98 )
    {
      SystemDevice = IopFindSystemDevice(v3, P);
      if ( SystemDevice >= 0 )
        ExFreePoolWithTag(P[0], 0);
      v7 = SystemDeviceName;
      if ( SystemDevice == -1073740718 )
        return (unsigned int)-1073740719;
      return v7;
    }
  }
  return SystemDeviceName;
}
