/*
 * XREFs of ?CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@IQEBE@Z @ 0x1C0004B84
 * Callers:
 *     DmmCacheDisplayModeChangeRequest @ 0x1C00AE9B0 (DmmCacheDisplayModeChangeRequest.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BD4C4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 * Callees:
 *     ?Enqueue@?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@Z @ 0x1C000CB18 (-Enqueue@-$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@.c)
 *     ??0DISPMODECHANGEREQUEST@VIDPN_MGR@@QEAA@IAEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JKW4_DMM_DISPMODECHANGE_TYPE@@QEBE@Z @ 0x1C000CB90 (--0DISPMODECHANGEREQUEST@VIDPN_MGR@@QEAA@IAEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JKW4_DMM_.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CacheDisplayModeChangeRequest(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8)
{
  void *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // rax

  v12 = operator new[](0x90uLL, 0x4E506456u, PagedPool);
  if ( v12 )
    v12 = (void *)VIDPN_MGR::DISPMODECHANGEREQUEST::DISPMODECHANGEREQUEST(v12, a2, a3, a4, a5, a7, a6, a8);
  if ( v12 )
    return Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>::Enqueue(a1 + 288, v12);
  v18 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
  *(_QWORD *)(v18 + 24) = 144LL;
  return WdLogEvent5_WdLowResource(v18);
}
