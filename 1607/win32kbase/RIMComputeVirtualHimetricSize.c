/*
 * XREFs of RIMComputeVirtualHimetricSize @ 0x1C0005C6C
 * Callers:
 *     RIMOnMonitorNotification @ 0x1C0007D20 (RIMOnMonitorNotification.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0008C38 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00D5734 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     RIMComputeVirtualDesktopPhysicalSize @ 0x1C0005CF4 (RIMComputeVirtualDesktopPhysicalSize.c)
 *     rimGetQDCActivePathsData @ 0x1C00065F8 (rimGetQDCActivePathsData.c)
 *     rimFreeQDCActivePathsData @ 0x1C0006728 (rimFreeQDCActivePathsData.c)
 *     RIMComputePTPCurtainRegions @ 0x1C00D3538 (RIMComputePTPCurtainRegions.c)
 */

__int64 __fastcall RIMComputeVirtualHimetricSize(__int64 a1, int a2)
{
  _BYTE *v3; // rbx
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF

  if ( *(_DWORD *)(a1 + 24) == 7 && a2 )
  {
    *(_DWORD *)(a1 + 212) = *(_DWORD *)(a1 + 164);
    *(_DWORD *)(a1 + 216) = *(_DWORD *)(a1 + 168);
    RIMComputePTPCurtainRegions();
  }
  v3 = v5;
  if ( (int)rimGetQDCActivePathsData(v5) < 0 )
    v3 = 0LL;
  RIMComputeVirtualDesktopPhysicalSize(&v6, &v7, v3);
  *(_DWORD *)(a1 + 148) = 1000 * v6;
  *(_DWORD *)(a1 + 152) = 1000 * v7;
  *(_OWORD *)(a1 + 156) = *(_OWORD *)(a1 + 140);
  return rimFreeQDCActivePathsData(v3);
}
