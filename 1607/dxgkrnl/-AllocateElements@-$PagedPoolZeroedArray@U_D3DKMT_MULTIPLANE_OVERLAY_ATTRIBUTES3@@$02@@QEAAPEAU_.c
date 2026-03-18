/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@I@Z @ 0x1C015AE58
 * Callers:
 *     DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C0160AD0 (DxgkCheckMultiPlaneOverlaySupport3.c)
 *     ?CheckMultiPlaneOverlaySupportFromCachedData@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C01862BC (-CheckMultiPlaneOverlaySupportFromCachedData@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHI.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::AllocateElements(
        _DWORD *a1,
        unsigned int a2)
{
  __int64 v2; // rdi
  void *v5; // rcx

  v2 = a2;
  if ( a2 <= 3 )
  {
    *(_QWORD *)a1 = a1 + 2;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 0x50 )
      return 0LL;
    *(_QWORD *)a1 = ExAllocatePoolWithTag(PagedPool, 80LL * a2, 0x4B677844u);
  }
  v5 = *(void **)a1;
  a1[62] = v2;
  if ( v5 )
    memset(v5, 0, 80 * v2);
  return *(_QWORD *)a1;
}
