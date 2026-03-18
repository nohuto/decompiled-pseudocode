/*
 * XREFs of ?AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x1800278A0
 * Callers:
 *     ?CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x18000A18C (-CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2.c)
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18000D308 (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 *     ?FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAVCD2DPrimitiveProperties@@@Z @ 0x18000FB10 (-FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAVCD2DPrimitiveProp.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DEffect@@@Z @ 0x18001AD00 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@Q.c)
 *     ?CreateNewD2DCommandList@CAtlasedRects@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bitmap@@PEAPEAVCAtlasedRectsCommandList@@@Z @ 0x180025620 (-CreateNewD2DCommandList@CAtlasedRects@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bit.c)
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180032790 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?CreateNewD2DCommandListForHeatMap@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x1801275D0 (-CreateNewD2DCommandListForHeatMap@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x18012D5E0 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2D.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DResource::AddResourceNotifier(CD2DResource *this, struct IDeviceResourceNotify *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // ebx
  int v6; // eax
  struct IDeviceResourceNotify *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v2 = *((_DWORD *)this + 16);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  else
  {
    v4 = 0;
    if ( v3 > *((_DWORD *)this + 15) )
    {
      v6 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 40, 8LL, 1LL, &v7);
      v4 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * v2) = v7;
      *((_DWORD *)this + 16) = v3;
    }
  }
  return v4;
}
