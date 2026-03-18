/*
 * XREFs of PnpBiosUpdateResourceListWithSidebandResources @ 0x1C006F420
 * Callers:
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1C006F300 (ACPIFilterIrpFilterResourceRequirements.c)
 * Callees:
 *     memset @ 0x1C00251C0 (memset.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C006F964 (PnpBiosGetDeviceResourceList.c)
 *     PnpiAddSidebandResources @ 0x1C007D564 (PnpiAddSidebandResources.c)
 */

__int64 __fastcall PnpBiosUpdateResourceListWithSidebandResources(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  int v5; // r12d
  void *v7; // rdi
  void *v8; // rsi
  int DeviceResourceList; // ebx
  unsigned int v11; // ebx
  PVOID PoolWithTag; // rax
  int v13; // r13d
  PVOID v14; // rax
  SIZE_T v15; // [rsp+30h] [rbp-38h] BYREF
  PVOID P[6]; // [rsp+38h] [rbp-30h] BYREF
  SIZE_T NumberOfBytes; // [rsp+80h] [rbp+18h] BYREF

  *a3 = 0LL;
  v5 = a2;
  LOBYTE(a2) = 1;
  v7 = 0LL;
  v8 = 0LL;
  DeviceResourceList = PnpBiosGetDeviceResourceList(a1, a2, P);
  if ( DeviceResourceList >= 0 )
  {
    if ( !P[0] )
      return (unsigned int)-1073741772;
    LODWORD(v15) = 0;
    LODWORD(NumberOfBytes) = 0;
    DeviceResourceList = PnpiAddSidebandResources(v5, (int)P[0], 0, (int)&NumberOfBytes, 0LL, (__int64)&v15);
    if ( DeviceResourceList == -1073741789 )
    {
      v11 = NumberOfBytes;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x52706341u);
      v13 = v15;
      v8 = PoolWithTag;
      v14 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v15, 0x52706341u);
      v7 = v14;
      if ( v8 && v14 )
      {
        memset(v8, 0, v11);
        LODWORD(v15) = v13;
        DeviceResourceList = PnpiAddSidebandResources(v5, (int)P[0], (int)v8, (int)&NumberOfBytes, v7, (__int64)&v15);
        if ( DeviceResourceList >= 0 )
        {
          *a3 = v8;
          v8 = 0LL;
          if ( a4 )
          {
            *a4 = v7;
            v7 = 0LL;
          }
        }
      }
      else
      {
        DeviceResourceList = -1073741670;
      }
    }
    else if ( DeviceResourceList >= 0 )
    {
      DeviceResourceList = -1073741823;
    }
  }
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)DeviceResourceList;
}
