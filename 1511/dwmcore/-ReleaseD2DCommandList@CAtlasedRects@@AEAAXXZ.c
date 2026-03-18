/*
 * XREFs of ?ReleaseD2DCommandList@CAtlasedRects@@AEAAXXZ @ 0x1800F8FBC
 * Callers:
 *     ?GetD2D1CommandListForContext@CAtlasedRects@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bitmap@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18002540C (-GetD2D1CommandListForContext@CAtlasedRects@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2.c)
 *     ?NotifyInvalidResource@CAtlasedRects@@UEAAXPEBVIDeviceResource@@@Z @ 0x180132BD0 (-NotifyInvalidResource@CAtlasedRects@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180027790 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

void __fastcall CAtlasedRects::ReleaseD2DCommandList(CAtlasedRects *this)
{
  __int64 v2; // rbp
  __int64 v3; // rsi
  CMILCOMBase *v4; // rbx

  if ( *((_DWORD *)this + 24) )
  {
    v2 = *((unsigned int *)this + 24);
    v3 = 0LL;
    do
    {
      v4 = *(CMILCOMBase **)(v3 + *((_QWORD *)this + 9));
      CD2DResource::RemoveResourceNotifier(
        (CD2DResource *)(*((_QWORD *)v4 + 3) + 16LL),
        (CAtlasedRects *)((char *)this + 40));
      CMILCOMBase::InternalRelease(v4);
      v3 += 8LL;
      --v2;
    }
    while ( v2 );
  }
  *((_DWORD *)this + 24) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 9, 8u);
}
