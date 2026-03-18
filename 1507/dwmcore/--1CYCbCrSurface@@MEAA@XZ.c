/*
 * XREFs of ??1CYCbCrSurface@@MEAA@XZ @ 0x18010CAC8
 * Callers:
 *     ??_ECYCbCrSurface@@MEAAPEAXI@Z @ 0x1800F9700 (--_ECYCbCrSurface@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CYCbCrSurface::~CYCbCrSurface(struct CResource **this)
{
  *this = (struct CResource *)&CYCbCrSurface::`vftable';
  CResource::UnRegisterNotifierInternal((CResource *)this, this[5]);
  this[5] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[6]);
  this[6] = 0LL;
  CResource::~CResource((CResource *)this);
}
