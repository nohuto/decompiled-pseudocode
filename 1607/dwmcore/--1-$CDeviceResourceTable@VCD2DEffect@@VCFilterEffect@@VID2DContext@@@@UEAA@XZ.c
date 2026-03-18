/*
 * XREFs of ??1?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@UEAA@XZ @ 0x18001517C
 * Callers:
 *     ??1CFilterEffect@@MEAA@XZ @ 0x180014E3C (--1CFilterEffect@@MEAA@XZ.c)
 *     ??_E?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@UEAAPEAXI@Z @ 0x18012B2C0 (--_E-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@IEAAXXZ @ 0x1800151A8 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@IE.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>::~CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>(
        struct IDeviceResourceNotify *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  *(_QWORD *)a1 = &CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>::`vftable';
  CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>::ReleaseResourcesNoAddRef(a1);
  return DynArrayImpl<1>::~DynArrayImpl<1>((char *)a1 + 16, v2, v3);
}
