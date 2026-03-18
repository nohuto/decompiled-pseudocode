/*
 * XREFs of ?ReleaseD2DCommandList@CAtlasedRects@@AEAAXXZ @ 0x18010DFE8
 * Callers:
 *     ?GetD2D1CommandListForContext@CAtlasedRects@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bitmap@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18009C564 (-GetD2D1CommandListForContext@CAtlasedRects@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2.c)
 *     ?NotifyInvalidResource@CAtlasedRects@@UEAAXPEBVIDeviceResource@@@Z @ 0x180155320 (-NotifyInvalidResource@CAtlasedRects@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18009DA70 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 */

void __fastcall CAtlasedRects::ReleaseD2DCommandList(CAtlasedRects *this)
{
  unsigned int v1; // eax
  __int64 v3; // rsi
  __int64 v4; // rbp
  CMILCOMBase *v5; // rbx

  v1 = *((_DWORD *)this + 42);
  if ( v1 )
  {
    v3 = 0LL;
    v4 = v1;
    do
    {
      v5 = *(CMILCOMBase **)(v3 + *((_QWORD *)this + 18));
      CD2DResource::RemoveResourceNotifier(
        (CD2DResource *)(*((_QWORD *)v5 + 3) + 16LL),
        (CAtlasedRects *)((char *)this + 112));
      CMILCOMBase::InternalRelease(v5);
      v3 += 8LL;
      --v4;
    }
    while ( v4 );
  }
  *((_DWORD *)this + 42) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 144, 8u);
}
