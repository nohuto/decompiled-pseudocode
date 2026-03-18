/*
 * XREFs of RIMComputeVirtualHimetricSize @ 0x1C00CF45C
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0007C58 (RIMCreatePointerDeviceInfo.c)
 *     RIMOnMonitorNotification @ 0x1C0008E10 (RIMOnMonitorNotification.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00C60A4 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     rimFreeQDCActivePathsData @ 0x1C0007458 (rimFreeQDCActivePathsData.c)
 *     rimGetQDCActivePathsData @ 0x1C00503A8 (rimGetQDCActivePathsData.c)
 *     RIMComputePTPCurtainRegions @ 0x1C00CECE8 (RIMComputePTPCurtainRegions.c)
 *     RIMComputeVirtualDesktopPhysicalSize @ 0x1C00CF004 (RIMComputeVirtualDesktopPhysicalSize.c)
 */

__int64 __fastcall RIMComputeVirtualHimetricSize(__int64 a1, const wchar_t *a2)
{
  unsigned int *v3; // rbx
  unsigned int v5[10]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF

  if ( *(_DWORD *)(a1 + 24) == 8 && (_DWORD)a2 )
  {
    *(_DWORD *)(a1 + 212) = *(_DWORD *)(a1 + 164);
    *(_DWORD *)(a1 + 216) = *(_DWORD *)(a1 + 168);
    RIMComputePTPCurtainRegions(a1, a2);
  }
  v3 = v5;
  if ( (int)rimGetQDCActivePathsData(v5) < 0 )
    v3 = 0LL;
  RIMComputeVirtualDesktopPhysicalSize(&v6, &v7, (__int64)v3);
  *(_DWORD *)(a1 + 148) = 1000 * v6;
  *(_DWORD *)(a1 + 152) = 1000 * v7;
  *(_OWORD *)(a1 + 156) = *(_OWORD *)(a1 + 140);
  return rimFreeQDCActivePathsData(v3);
}
