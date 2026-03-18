/*
 * XREFs of ?GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180043E68
 * Callers:
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180047008 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x180034D3C (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ @ 0x180034D5C (-IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x180036794 (-IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180038AF8 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::GetDisplayInfo(CPartitionVerticalBlankScheduler *this)
{
  __int64 v2; // r8
  CDisplaySet *v3; // rbx
  __int64 v4; // rcx
  char IsWarpAdapterLuid; // al
  __int64 v6; // rdx
  int v7; // edx
  CDisplay *v8; // rcx
  CDisplaySet *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  CDisplayManager::GetCurrentDisplaySet(this, &v9);
  v3 = v9;
  if ( v9 )
  {
    v4 = *((_QWORD *)v9 + 2);
    IsWarpAdapterLuid = 0;
    if ( *(_DWORD *)(v4 + 88) )
      IsWarpAdapterLuid = CDXGIEnumeration::IsWarpAdapterLuid(
                            (CDXGIEnumeration *)v4,
                            *(struct _LUID *)(**(_QWORD **)(v4 + 64) + 336LL));
    v6 = 0LL;
    for ( *((_BYTE *)this + 25576) = IsWarpAdapterLuid; (unsigned int)v6 < *((_DWORD *)v3 + 18); v6 = (unsigned int)(v7 + 1) )
    {
      if ( (unsigned int)v6 >= 0x10 )
        break;
      if ( CDisplay::IsPrimary(*(CDisplay **)(*((_QWORD *)v3 + 6) + 8 * v6)) )
        *((_BYTE *)this + 25577) = CDisplay::IsOffscreenRenderTarget(v8);
    }
    CDisplaySet::Release(v3, v6, v2);
  }
}
