/*
 * XREFs of RIMComputeVirtualHimetricSize @ 0x1C00CE0EC
 * Callers:
 *     RIMOnMonitorNotification @ 0x1C0019AE0 (RIMOnMonitorNotification.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0073F6C (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00C51A8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     rimFreeQDCActivePathsData @ 0x1C0019054 (rimFreeQDCActivePathsData.c)
 *     rimGetQDCActivePathsData @ 0x1C001ACEC (rimGetQDCActivePathsData.c)
 *     RIMComputePTPCurtainRegions @ 0x1C00CD9AC (RIMComputePTPCurtainRegions.c)
 *     RIMComputeVirtualDesktopPhysicalSize @ 0x1C00CDC94 (RIMComputeVirtualDesktopPhysicalSize.c)
 */

__int64 __fastcall RIMComputeVirtualHimetricSize(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+58h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a1 + 24) == 8 )
  {
    *(_DWORD *)(a1 + 212) = *(_DWORD *)(a1 + 164);
    *(_DWORD *)(a1 + 216) = *(_DWORD *)(a1 + 168);
    RIMComputePTPCurtainRegions((_DWORD *)a1);
  }
  v2 = v4;
  if ( (int)rimGetQDCActivePathsData(v4) < 0 )
    v2 = 0LL;
  RIMComputeVirtualDesktopPhysicalSize(&v5, &v6, (__int64)v2);
  *(_DWORD *)(a1 + 148) = 1000 * v5;
  *(_DWORD *)(a1 + 152) = 1000 * v6;
  *(_OWORD *)(a1 + 156) = *(_OWORD *)(a1 + 140);
  return rimFreeQDCActivePathsData(v2);
}
