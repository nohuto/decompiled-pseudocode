/*
 * XREFs of ??1CFilterEffect@@MEAA@XZ @ 0x180002C8C
 * Callers:
 *     ??_ECTurbulenceEffect@@UEAAPEAXI@Z @ 0x1800020D0 (--_ECTurbulenceEffect@@UEAAPEAXI@Z.c)
 *     ??_GCTableTransferEffect@@UEAAPEAXI@Z @ 0x180113CA0 (--_GCTableTransferEffect@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAXXZ @ 0x1800015B8 (-RemoveAll@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEA.c)
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x180002C40 (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 *     ??1?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@UEAA@XZ @ 0x180002EA8 (--1-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@UEAA@XZ.c)
 */

void __fastcall CFilterEffect::~CFilterEffect(CFilterEffect *this)
{
  *(_QWORD *)this = &CFilterEffect::`vftable';
  CFilterEffect::EmptyFilterInputMap(this);
  CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::RemoveAll((__int64)this + 120);
  CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>::~CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>((char *)this + 40);
  CResource::~CResource(this);
}
