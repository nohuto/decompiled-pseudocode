/*
 * XREFs of ??1?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@UEAA@XZ @ 0x180112C88
 * Callers:
 *     ??1CInk@@UEAA@XZ @ 0x180112D44 (--1CInk@@UEAA@XZ.c)
 *     ??_G?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@UEAAPEAXI@Z @ 0x180112DE0 (--_G-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@IEAAXXZ @ 0x18001AC70 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@IE.c)
 */

void __fastcall CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::~CDeviceResourceTable<CD2DInk,CInk,ID2DContext>(
        __int64 a1)
{
  *(_QWORD *)a1 = &CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::`vftable';
  CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>::ReleaseResourcesNoAddRef((struct IDeviceResourceNotify *)a1);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)(a1 + 16));
}
