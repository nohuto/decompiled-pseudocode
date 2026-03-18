/*
 * XREFs of ComputeVirtualHimetricSize @ 0x1C01CF050
 * Callers:
 *     CreatePointerDeviceInfo @ 0x1C01C7A40 (CreatePointerDeviceInfo.c)
 * Callees:
 *     FreeQDCActivePathsData @ 0x1C0100AA0 (FreeQDCActivePathsData.c)
 *     GetQDCActivePathsData @ 0x1C01CBC8C (GetQDCActivePathsData.c)
 *     ComputePTPCurtainRegions @ 0x1C01CEDDC (ComputePTPCurtainRegions.c)
 *     ComputeVirtualDesktopPhysicalSize @ 0x1C01DE5D8 (ComputeVirtualDesktopPhysicalSize.c)
 */

__int64 __fastcall ComputeVirtualHimetricSize(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+58h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a1 + 24) == 8 )
  {
    *(_DWORD *)(a1 + 212) = *(_DWORD *)(a1 + 164);
    *(_DWORD *)(a1 + 216) = *(_DWORD *)(a1 + 168);
    ComputePTPCurtainRegions((_DWORD *)a1);
  }
  v2 = v4;
  if ( (int)GetQDCActivePathsData(v4) < 0 )
    v2 = 0LL;
  ComputeVirtualDesktopPhysicalSize(&v5, &v6, v2);
  *(_DWORD *)(a1 + 148) = 1000 * v5;
  *(_DWORD *)(a1 + 152) = 1000 * v6;
  *(_OWORD *)(a1 + 156) = *(_OWORD *)(a1 + 140);
  return FreeQDCActivePathsData((__int64)v2);
}
