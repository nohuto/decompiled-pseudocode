/*
 * XREFs of ??1CAtlasedRectsMesh@@MEAA@XZ @ 0x18009CD88
 * Callers:
 *     ??_ECAtlasedRectsMesh@@MEAAPEAXI@Z @ 0x18009C9C0 (--_ECAtlasedRectsMesh@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CAtlasedRectsMesh@@UEAAXXZ @ 0x18009CA20 (-UnRegisterNotifiers@CAtlasedRectsMesh@@UEAAXXZ.c)
 */

void __fastcall CAtlasedRectsMesh::~CAtlasedRectsMesh(CAtlasedRectsMesh *this)
{
  *(_QWORD *)this = &CAtlasedRectsMesh::`vftable'{for `CResource'};
  *((_QWORD *)this + 14) = &CAtlasedRectsMesh::`vftable'{for `IDeviceResourceNotify'};
  CAtlasedRectsMesh::UnRegisterNotifiers(this);
  CAtlasedRects::~CAtlasedRects(this);
}
