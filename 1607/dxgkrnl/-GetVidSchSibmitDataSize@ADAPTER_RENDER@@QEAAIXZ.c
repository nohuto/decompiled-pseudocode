/*
 * XREFs of ?GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ @ 0x1C0007928
 * Callers:
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0009FD8 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C00E3BDC (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0008728 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000911C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetVidSchSibmitDataSize(DXGADAPTER **this)
{
  DXGADAPTER *v1; // rcx
  int v2; // r8d
  __int64 v3; // r9

  DXGADAPTER::GetNumDifferentPhysicalAdapters(this[2]);
  if ( DXGADAPTER::IsDxgmms2(v1) )
    return *(_DWORD *)(v3 + 2000) * (48 * v2 + ((8 * v2 + 167) & 0xFFFFFFF8)) + 8 * (v2 + 55);
  else
    return 936LL;
}
