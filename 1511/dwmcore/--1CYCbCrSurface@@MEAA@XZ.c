/*
 * XREFs of ??1CYCbCrSurface@@MEAA@XZ @ 0x180127A28
 * Callers:
 *     ??_ECYCbCrSurface@@MEAAPEAXI@Z @ 0x180113580 (--_ECYCbCrSurface@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
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
