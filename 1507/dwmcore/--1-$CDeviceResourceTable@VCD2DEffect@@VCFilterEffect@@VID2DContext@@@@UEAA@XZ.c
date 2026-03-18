/*
 * XREFs of ??1?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@UEAA@XZ @ 0x180002EA8
 * Callers:
 *     ??1CFilterEffect@@MEAA@XZ @ 0x180002C8C (--1CFilterEffect@@MEAA@XZ.c)
 *     ??_E?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@UEAAPEAXI@Z @ 0x1800F8C10 (--_E-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@IEAAXXZ @ 0x180002ED4 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@IE.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>::~CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>(
        struct IDeviceResourceNotify *a1)
{
  *(_QWORD *)a1 = &CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>::`vftable';
  CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>::ReleaseResourcesNoAddRef(a1);
  return DynArrayImpl<1>::~DynArrayImpl<1>((char *)a1 + 16);
}
