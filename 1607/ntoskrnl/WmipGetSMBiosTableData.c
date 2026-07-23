/*
 * XREFs of WmipGetSMBiosTableData @ 0x1404AA510
 * Callers:
 *     WmipRawSMBiosTableHandler @ 0x14009A610 (WmipRawSMBiosTableHandler.c)
 *     WmipQueryWmiDataBlock @ 0x1404AA13C (WmipQueryWmiDataBlock.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     MmUnmapIoSpace @ 0x14009ACB0 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x14009B070 (MmMapIoSpaceEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     WmipGetRegistryHideMachine @ 0x1404AA5F4 (WmipGetRegistryHideMachine.c)
 *     WmipAcquireSmbiosLockShared @ 0x1404AA68C (WmipAcquireSmbiosLockShared.c)
 *     WmipSMBiosHideMachine @ 0x14069DD0C (WmipSMBiosHideMachine.c)
 */

__int64 __fastcall WmipGetSMBiosTableData(void *a1, _DWORD *a2, _DWORD *a3)
{
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  void *v12; // rax
  void *v13; // rsi
  unsigned int v14; // ebx

  if ( !a2 )
    return 3221225485LL;
  WmipAcquireSmbiosLockShared();
  if ( a3 )
    *a3 = WmipSMBiosVersionInfo;
  v6 = WmipSMBiosTableLength;
  if ( *a2 >= (unsigned int)WmipSMBiosTableLength )
  {
    if ( WmipSMBiosTablePhysicalAddress )
    {
      v12 = (void *)MmMapIoSpaceEx(WmipSMBiosTablePhysicalAddress, (unsigned int)WmipSMBiosTableLength, 4u);
      v13 = v12;
      if ( v12 )
      {
        v14 = WmipSMBiosTableLength;
        memmove(a1, v12, (unsigned int)WmipSMBiosTableLength);
        MmUnmapIoSpace(v13, v14);
        v7 = 0;
      }
      else
      {
        v7 = -1073741670;
      }
      v6 = WmipSMBiosTableLength;
    }
    else
    {
      v7 = -1073741808;
    }
  }
  else
  {
    v7 = -1073741789;
  }
  *a2 = v6;
  if ( (unsigned __int8)WmipGetRegistryHideMachine() )
  {
    if ( v7 >= 0 )
      WmipSMBiosHideMachine(a1, (unsigned int)*a2);
  }
  ExReleaseResourceLite(&WmipSMBiosLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
  return (unsigned int)v7;
}
