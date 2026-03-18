/*
 * XREFs of ??1CGeometry@@MEAA@XZ @ 0x18002CB48
 * Callers:
 *     ??1CCombinedGeometry@@MEAA@XZ @ 0x1800203C8 (--1CCombinedGeometry@@MEAA@XZ.c)
 *     ??_GCRgnGeometry@@MEAAPEAXI@Z @ 0x18002FA20 (--_GCRgnGeometry@@MEAAPEAXI@Z.c)
 *     ??_ECRectangleGeometry@@UEAAPEAXI@Z @ 0x1800957A0 (--_ECRectangleGeometry@@UEAAPEAXI@Z.c)
 *     ??1CGeometryGroup@@MEAA@XZ @ 0x180157C40 (--1CGeometryGroup@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800B1980 (-Release@CShapePtr@@QEAAXXZ.c)
 */

void __fastcall CGeometry::~CGeometry(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[17]);
  this[17] = 0LL;
  CShapePtr::Release((CShapePtr *)(this + 19));
  *this = (struct CResource *)&CNotificationResource::`vftable';
  CResource::~CResource((CResource *)this);
}
