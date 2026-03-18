/*
 * XREFs of PnpBiosUpdateResourceListWithSidebandResources @ 0x1C00849C4
 * Callers:
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1C00847F0 (ACPIFilterIrpFilterResourceRequirements.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0004BB0 (WPP_RECORDER_SF_D.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C0085A4C (PnpBiosGetDeviceResourceList.c)
 *     PnpiAddSidebandResources @ 0x1C009EB0C (PnpiAddSidebandResources.c)
 */

__int64 __fastcall PnpBiosUpdateResourceListWithSidebandResources(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  int v5; // r13d
  void *v7; // rdi
  void *v8; // rsi
  int DeviceResourceList; // ebx
  int v11; // eax
  int v12; // edx
  int v13; // ebp
  unsigned int v14; // ebx
  PVOID PoolWithTag; // rax
  int v16; // ebp
  PVOID v17; // rax
  SIZE_T v18; // [rsp+30h] [rbp-38h] BYREF
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
    LODWORD(v18) = 0;
    LODWORD(NumberOfBytes) = 0;
    v11 = PnpiAddSidebandResources(v5, (int)P[0], 0, (int)&NumberOfBytes, 0LL, (__int64)&v18);
    v13 = v11;
    if ( v11 == -1073741789 )
    {
      v14 = NumberOfBytes;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x52706341u);
      v16 = v18;
      v8 = PoolWithTag;
      v17 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v18, 0x52706341u);
      v7 = v17;
      if ( v8 && v17 )
      {
        memset(v8, 0, v14);
        LODWORD(v18) = v16;
        DeviceResourceList = PnpiAddSidebandResources(v5, (int)P[0], (int)v8, (int)&NumberOfBytes, v7, (__int64)&v18);
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
    else
    {
      if ( v11 != -1073741772 )
      {
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          v12,
          13,
          64,
          (__int64)&WPP_b366b17187f636b05bbda43c678c6b68_Traceguids,
          v11);
      }
      DeviceResourceList = v13;
      if ( v13 >= 0 )
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
