/*
 * XREFs of ??1CAtlasedRectsMesh@@MEAA@XZ @ 0x180026FA4
 * Callers:
 *     ??_ECAtlasedRectsMesh@@MEAAPEAXI@Z @ 0x1800269F0 (--_ECAtlasedRectsMesh@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CAtlasedRectsMesh@@UEAAXXZ @ 0x180026BF0 (-UnRegisterNotifiers@CAtlasedRectsMesh@@UEAAXXZ.c)
 */

void __fastcall CAtlasedRectsMesh::~CAtlasedRectsMesh(CAtlasedRectsMesh *this)
{
  *(_QWORD *)this = &CAtlasedRectsMesh::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &CAtlasedRectsMesh::`vftable'{for `IDeviceResourceNotify'};
  CAtlasedRectsMesh::UnRegisterNotifiers((void **)this);
  CAtlasedRects::~CAtlasedRects(this);
}
