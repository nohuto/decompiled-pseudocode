/*
 * XREFs of ??1CFilterEffect@@MEAA@XZ @ 0x18001A834
 * Callers:
 *     ??_ECTurbulenceEffect@@UEAAPEAXI@Z @ 0x180019FB0 (--_ECTurbulenceEffect@@UEAAPEAXI@Z.c)
 *     ??_GCTableTransferEffect@@UEAAPEAXI@Z @ 0x18012CF70 (--_GCTableTransferEffect@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x18001A880 (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 *     ??1?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@UEAA@XZ @ 0x18001AC44 (--1-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@UEAA@XZ.c)
 *     ?RemoveAll@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAXXZ @ 0x18001AE64 (-RemoveAll@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEA.c)
 */

void __fastcall CFilterEffect::~CFilterEffect(CFilterEffect *this)
{
  *(_QWORD *)this = &CFilterEffect::`vftable';
  CFilterEffect::EmptyFilterInputMap(this);
  CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::RemoveAll((char *)this + 136);
  CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>::~CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>((char *)this + 56);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
