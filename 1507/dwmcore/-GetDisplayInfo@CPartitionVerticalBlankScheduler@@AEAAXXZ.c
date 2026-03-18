/*
 * XREFs of ?GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180065230
 * Callers:
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180067C24 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180054C34 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?IsWARPAdapterAtIndex@CDisplaySet@@QEBAJIPEA_N@Z @ 0x18005577C (-IsWARPAdapterAtIndex@CDisplaySet@@QEBAJIPEA_N@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800557B8 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x1800583AC (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ @ 0x1800583CC (-IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::GetDisplayInfo(CPartitionVerticalBlankScheduler *this)
{
  __int64 v2; // rdx
  CDisplaySet *v3; // rbx
  __int64 i; // rdx
  int v5; // edx
  CDisplay *v6; // rcx
  CDisplaySet *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  CDisplayManager::GetCurrentDisplaySet(this, &v7);
  v3 = v7;
  if ( v7 )
  {
    LOBYTE(v7) = 0;
    if ( (int)CDisplaySet::IsWARPAdapterAtIndex(v3, v2, (bool *)&v7) >= 0 )
      *((_BYTE *)this + 25280) = (_BYTE)v7;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)v3 + 18); i = (unsigned int)(v5 + 1) )
    {
      if ( (unsigned int)i >= 0x10 )
        break;
      if ( CDisplay::IsPrimary(*(CDisplay **)(*((_QWORD *)v3 + 6) + 8 * i)) )
        *((_BYTE *)this + 25281) = CDisplay::IsOffscreenRenderTarget(v6);
    }
    CDisplaySet::Release(v3);
  }
}
