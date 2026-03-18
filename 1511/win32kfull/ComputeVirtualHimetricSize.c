/*
 * XREFs of ComputeVirtualHimetricSize @ 0x1C01D0CB0
 * Callers:
 *     CreatePointerDeviceInfo @ 0x1C01C9610 (CreatePointerDeviceInfo.c)
 * Callees:
 *     FreeQDCActivePathsData @ 0x1C0111570 (FreeQDCActivePathsData.c)
 *     GetQDCActivePathsData @ 0x1C01CD86C (GetQDCActivePathsData.c)
 *     ComputePTPCurtainRegions @ 0x1C01D09CC (ComputePTPCurtainRegions.c)
 *     ComputeVirtualDesktopPhysicalSize @ 0x1C01DEBDC (ComputeVirtualDesktopPhysicalSize.c)
 */

__int64 __fastcall ComputeVirtualHimetricSize(__int64 a1, int a2)
{
  _QWORD *v3; // rbx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF

  if ( *(_DWORD *)(a1 + 24) == 8 && a2 )
  {
    *(_DWORD *)(a1 + 212) = *(_DWORD *)(a1 + 164);
    *(_DWORD *)(a1 + 216) = *(_DWORD *)(a1 + 168);
    ComputePTPCurtainRegions(a1);
  }
  v3 = v5;
  if ( (int)GetQDCActivePathsData(v5) < 0 )
    v3 = 0LL;
  ComputeVirtualDesktopPhysicalSize(&v6, &v7, v3);
  *(_DWORD *)(a1 + 148) = 1000 * v6;
  *(_DWORD *)(a1 + 152) = 1000 * v7;
  *(_OWORD *)(a1 + 156) = *(_OWORD *)(a1 + 140);
  return FreeQDCActivePathsData((__int64)v3);
}
