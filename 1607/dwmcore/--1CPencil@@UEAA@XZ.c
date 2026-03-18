/*
 * XREFs of ??1CPencil@@UEAA@XZ @ 0x18012B258
 * Callers:
 *     ??_GCPencil@@UEAAPEAXI@Z @ 0x18012B930 (--_GCPencil@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??1?$CDeviceResourceTable@VCD2DPencil@@VCPencil@@VID2DContext@@@@UEAA@XZ @ 0x18012B198 (--1-$CDeviceResourceTable@VCD2DPencil@@VCPencil@@VID2DContext@@@@UEAA@XZ.c)
 */

void __fastcall CPencil::~CPencil(struct CResource **this)
{
  *this = (struct CResource *)&CPencil::`vftable';
  CResource::UnRegisterNotifierInternal((CResource *)this, this[24]);
  this[24] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[27]);
  this[27] = 0LL;
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)(this + 30));
  CDeviceResourceTable<CD2DPencil,CPencil,ID2DContext>::~CDeviceResourceTable<CD2DPencil,CPencil,ID2DContext>((struct IDeviceResourceNotify *)(this + 14));
  CResource::~CResource((CResource *)this);
}
